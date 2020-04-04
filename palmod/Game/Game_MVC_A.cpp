#include "StdAfx.h"
#include "Game_MVC_A.h"
#include "GameDef.h"
#include "..\ExtraFile.h"

stExtraDef* CGame_MVC_A::MVC_A_EXTRA_CUSTOM = NULL;

CDescTree CGame_MVC_A::MainDescTree = CGame_MVC_A::InitDescTree();

int CGame_MVC_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    static int rgExtraCountAll[MVC_A_NUMUNIT + 1] = { -1 };
    static int rgExtraCountVisibleOnly[MVC_A_NUMUNIT + 1] = { -1 };

    int* rgExtraCt = bCountVisibleOnly ? (int*)rgExtraCountVisibleOnly : (int*)rgExtraCountAll;

    static bool s_isInitialized = false;

    if (!s_isInitialized)
    {
        s_isInitialized = true;

        int nDefCtr = 0;
        memset(rgExtraCt, 0, (MVC_A_NUMUNIT + 1) * sizeof(int));

        stExtraDef* pCurrDef = GetExtraDefForMVC(0);

        while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
        {
            rgExtraCountAll[pCurrDef->uUnitN]++;

            if (!pCurrDef->isInvisible)
            {
                rgExtraCountVisibleOnly[pCurrDef->uUnitN]++;
            }

            nDefCtr++;
            pCurrDef = GetExtraDefForMVC(nDefCtr);
        }
    }

    return rgExtraCt[nUnitId];
}

int CGame_MVC_A::GetExtraLoc(UINT16 nUnitId)
{
    static int rgExtraLoc[MVC_A_NUMUNIT + 1] = { -1 };

    if (rgExtraLoc[0] == -1)
    {
        int nDefCtr = 0;
        int nCurrUnit = UNIT_START_VALUE;
        memset(rgExtraLoc, 0, (MVC_A_NUMUNIT + 1) * sizeof(int));

        stExtraDef* pCurrDef = GetExtraDefForMVC(0);

        while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
        {
            if (pCurrDef->uUnitN != nCurrUnit)
            {
                rgExtraLoc[pCurrDef->uUnitN] = nDefCtr;
                nCurrUnit = pCurrDef->uUnitN;
            }

            nDefCtr++;
            pCurrDef = GetExtraDefForMVC(nDefCtr);
        }
    }

    return rgExtraLoc[nUnitId];
}

int CGame_MVC_A::GetBasicAmt(UINT16 nUnitId)
{
    return 1;
}

CGame_MVC_A::CGame_MVC_A(void)
{
    //We need the proper unit amt before we init the main buffer
    nUnitAmt = MVC_A_NUMUNIT + (GetExtraCt(MVC_A_EXTRALOC) ? 1 : 0);

    InitDataBuffer();

    //Set color mode
    SetColMode(COLMODE_12A);

    //Set palette conversion mode
    BasePalGroup.SetMode(PALTYPE_17);

    //Set game information
    nGameFlag = MVC_A;
    nImgGameFlag = IMG4;
    nImgUnitAmt = nUnitAmt;

    nDisplayW = 8;
    nFileAmt = 1;

    //Set the image out display type
    DisplayType = DISP_DEF;
    pButtonLabel = const_cast<CHAR*>((CHAR*)DEF_BUTTONLABEL6);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    rgFileChanged = new UINT16;

    nRGBIndexAmt = 15;
    nAIndexAmt = 0;

    nRGBIndexMul = 17.0f;
    nAIndexMul = 0.0f;
}

CGame_MVC_A::~CGame_MVC_A(void)
{
    ClearDataBuffer();
    //Get rid of the file changed flag
    safe_delete(rgFileChanged);
}

CDescTree* CGame_MVC_A::GetMainTree()
{
    return &CGame_MVC_A::MainDescTree;
}

CDescTree CGame_MVC_A::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_MVC, MVC_A_EXTRA, &MVC_A_EXTRA_CUSTOM, MVC_A_EXTRALOC);

    int nUnitCt = MVC_A_NUMUNIT + (GetExtraCt(MVC_A_EXTRALOC) ? 1 : 0);

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    sDescTreeNode* UnitNode;
    sDescTreeNode* ButtonNode;
    sDescNode* ChildNode;

    //Create the main character tree
    sprintf(NewDescTree->szDesc, "%s", g_GameFriendlyName[MVC_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    //Go through each character
    for (int iUnitCtr = 0; iUnitCtr < nUnitCt; iUnitCtr++)
    {
        //Use this for Extra support
        int nSuppAmt = 0;

        int nExtraCt = GetExtraCt(iUnitCtr, TRUE);
        BOOL bUseExtra = (GetExtraLoc(iUnitCtr) ? 1 : 0);

        int nButtonAmt = GetBasicAmt(iUnitCtr);
        int nMainChildAmt = nButtonAmt + 1 + bUseExtra;

        UnitNode = &((sDescTreeNode*)NewDescTree->ChildNodes)[iUnitCtr];

        if (iUnitCtr < MVC_A_EXTRALOC)
        {
            //Set each description
            sprintf(UnitNode->szDesc, "%s", MVC_A_UNITDESC[iUnitCtr]);

            //Init each character to have all 6 basic buttons + extra
            UnitNode->ChildNodes = new sDescTreeNode[1];

            //All children have button trees
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = 1;

            for (int iButtonCtr = 0; iButtonCtr < 1; iButtonCtr++)
            {
                int nCurrChildAmt = GetPalCt(iUnitCtr); // 1 for each button for now

                ButtonNode = &((sDescTreeNode*)UnitNode->ChildNodes)[iButtonCtr];

                //Set each button data
                sprintf(ButtonNode->szDesc, "Palettes");

                //Button children have nodes
                ButtonNode->uChildType = DESC_NODETYPE_NODE;
                ButtonNode->uChildAmt = nCurrChildAmt;

                ButtonNode->ChildNodes = (sDescTreeNode*)new sDescNode[nCurrChildAmt];

                for (int nChildCtr = 0; nChildCtr < nCurrChildAmt; nChildCtr++)
                {
                    //Set each button's node
                    ///////////////////////////////////////////////////////////////////////

                    ChildNode = &((sDescNode*)ButtonNode->ChildNodes)[nChildCtr]; //We only have 1

                    // Update this if you need new characters/palette lists
                    switch (iUnitCtr)
                    {
                    case indexWarMachine:
                        sprintf(ChildNode->szDesc, MVC_A_WARMACHINE_PALETTES[nChildCtr].szPaletteName);
                        break;
                    case indexCaptainAmerica:
                        sprintf(ChildNode->szDesc, MVC_A_CAPAM_PALETTES[nChildCtr].szPaletteName);
                        break;
                    case indexHulk:
                        sprintf(ChildNode->szDesc, MVC_A_HULK_PALETTES[nChildCtr].szPaletteName);
                        break;
                    case indexWolverine:
                        sprintf(ChildNode->szDesc, MVC_A_WOLVERINE_PALETTES[nChildCtr].szPaletteName);
                        break;
                    case indexVenom:
                        sprintf(ChildNode->szDesc, MVC_A_VENOM_PALETTES[nChildCtr].szPaletteName);
                        break;
                    case indexSpiderman:
                        sprintf(ChildNode->szDesc, MVC_A_SPIDEY_PALETTES[nChildCtr].szPaletteName);
                        break;
                    case indexRyu:
                        sprintf(ChildNode->szDesc, MVC_A_RYU_PALETTES[nChildCtr].szPaletteName);
                        break;
                    case indexCapCom:
                        sprintf(ChildNode->szDesc, MVC_A_CAPCOM_PALETTES[nChildCtr].szPaletteName);
                        break;
                    case indexChun:
                        sprintf(ChildNode->szDesc, MVC_A_CHUNLI_PALETTES[nChildCtr].szPaletteName);
                        break;
                    case indexJin:
                        sprintf(ChildNode->szDesc, MVC_A_JIN_PALETTES[nChildCtr].szPaletteName);
                        break;
                    case indexGief:
                        sprintf(ChildNode->szDesc, MVC_A_GIEF_PALETTES[nChildCtr].szPaletteName);
                        break;
                    case indexStrider:
                        sprintf(ChildNode->szDesc, MVC_A_STRIDER_PALETTES[nChildCtr].szPaletteName);
                        break;
                    case indexMegaman:
                        sprintf(ChildNode->szDesc, MVC_A_MEGAMAN_PALETTES[nChildCtr].szPaletteName);
                        break;
                    case indexMorrigan:
                        sprintf(ChildNode->szDesc, MVC_A_MORRIGAN_PALETTES[nChildCtr].szPaletteName);
                        break;
                    case indexHyperVenom:
                        sprintf(ChildNode->szDesc, MVC_A_HYPERVENOM_PALETTES[nChildCtr].szPaletteName);
                        break;
                    case indexOrangeHulk:
                        sprintf(ChildNode->szDesc, MVC_A_ORANGEHULK_PALETTES[nChildCtr].szPaletteName);
                        break;
                    case indexGWM:
                        sprintf(ChildNode->szDesc, MVC_A_GOLDWARMACHINE_PALETTES[nChildCtr].szPaletteName);
                        break;
                    case indexShadowLady:
                        sprintf(ChildNode->szDesc, MVC_A_SHADOWLADY_PALETTES[nChildCtr].szPaletteName);
                        break;
                    case indexLilith:
                        sprintf(ChildNode->szDesc, MVC_A_LILITH_PALETTES[nChildCtr].szPaletteName);
                        break;
                    case indexGambit:
                        sprintf(ChildNode->szDesc, MVC_A_GAMBIT_PALETTES[nChildCtr].szPaletteName);
                        break;
                    case indexAssists:
                        sprintf(ChildNode->szDesc, MVC_A_ASSIST_PALETTES[nChildCtr].szPaletteName);
                        break;
                    case indexOnslaught:
                        sprintf(ChildNode->szDesc, MVC_A_ONSLAUGHT_PALETTES[nChildCtr].szPaletteName);
                        break;
                    case indexRoll:
                        sprintf(ChildNode->szDesc, MVC_A_ROLL_PALETTES[nChildCtr].szPaletteName);
                        break;
                    default:
                        if (nChildCtr < ARRAYSIZE(MVC_A_IMGDESC)) // For the first 6 palettes we have a stock list of text to display.
                        {
                            sprintf(ChildNode->szDesc, MVC_A_IMGDESC[nChildCtr]);
                        }
                        else
                        {
                            sprintf(ChildNode->szDesc, "Palette %02X", nChildCtr);
                        }
                        break;
                    };

                    ChildNode->uUnitId = iUnitCtr;
                    ChildNode->uPalId = nChildCtr;
                }
            }
        }
        else
        {
            //Set each description
            sprintf(UnitNode->szDesc, "Extra Palettes");
            UnitNode->ChildNodes = new sDescTreeNode[1]; //Only 1 for now, "Extra"
            //All children have button trees
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = 1; //Only 1 for now, "Extra"
        }

        //Set up extra nodes
        if (bUseExtra)
        {
            int nExtraPos = GetExtraLoc(iUnitCtr);
            int nCurrExtra = 0; nExtraPos;

            stExtraDef* pCurrDef;

            ButtonNode = &((sDescTreeNode*)UnitNode->ChildNodes)[MVC_A_EXTRALOC > iUnitCtr ? (nMainChildAmt - 1) : 0]; //Extra node
            sprintf(ButtonNode->szDesc, "Extra");

            ButtonNode->ChildNodes = new sDescTreeNode[nExtraCt];

            ButtonNode->uChildType = DESC_NODETYPE_NODE;
            ButtonNode->uChildAmt = nExtraCt; //EX + Extra

            for (int nExtraCtr = 0; nExtraCtr < nExtraCt; nExtraCtr++)
            {
                ChildNode = &((sDescNode*)ButtonNode->ChildNodes)[nExtraCtr];

                pCurrDef = GetExtraDefForMVC(nExtraPos + nCurrExtra);

                while (pCurrDef->isInvisible)
                {
                    nCurrExtra++;

                    pCurrDef = GetExtraDefForMVC(nExtraPos + nCurrExtra);
                }

                sprintf(ChildNode->szDesc, pCurrDef->szDesc);

                ChildNode->uUnitId = iUnitCtr;
                ChildNode->uPalId = (((MVC_A_EXTRALOC > iUnitCtr ? 1 : 0)* nButtonAmt * 2) + nSuppAmt) + nCurrExtra;

                nCurrExtra++;
            }
        }
    }

    return CDescTree(NewDescTree);
}

sFileRule CGame_MVC_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    sprintf_s(NewFileRule.szFileName, MAX_FILENAME_LENGTH, "mvc.06");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = 0x80000;

    return NewFileRule;
}

int CGame_MVC_A::GetPalCt(UINT16 nUnitId)
{
    if (nUnitId == MVC_A_EXTRALOC)
    {
        return GetExtraCt(nUnitId);
    }
    else
    {
        return MVC_A_PALAMT[nUnitId];
    }
}

void CGame_MVC_A::InitDataBuffer()
{
    pppDataBuffer = new UINT16 * *[nUnitAmt];
    memset(pppDataBuffer, NULL, sizeof(UINT16**) * nUnitAmt);
}

void CGame_MVC_A::ClearDataBuffer()
{
    if (pppDataBuffer)
    {
        for (int nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            if (pppDataBuffer[nUnitCtr])
            {
                int nPalAmt = GetPalCt(nUnitCtr);

                for (int nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
                {
                    safe_delete_array(pppDataBuffer[nUnitCtr][nPalCtr]);
                }

                safe_delete_array(pppDataBuffer[nUnitCtr]);
            }
        }

        safe_delete_array(pppDataBuffer);
    }
}

void CGame_MVC_A::GetPalOffsSz(UINT16 nUnitId, UINT16 nPalId)
{
    // Update this if you need new characters/palette lists
    switch (nUnitId)
    {
    case indexWarMachine:
        nCurrPalOffs = MVC_A_WARMACHINE_PALETTES[nPalId].nPaletteOffset;
        break;
    case indexCaptainAmerica:
        nCurrPalOffs = MVC_A_CAPAM_PALETTES[nPalId].nPaletteOffset;
        break;
    case indexHulk:
        nCurrPalOffs = MVC_A_HULK_PALETTES[nPalId].nPaletteOffset;
        break;
    case indexWolverine:
        nCurrPalOffs = MVC_A_WOLVERINE_PALETTES[nPalId].nPaletteOffset;
        break;
    case indexVenom:
        nCurrPalOffs = MVC_A_VENOM_PALETTES[nPalId].nPaletteOffset;
        break;
    case indexSpiderman:
        nCurrPalOffs = MVC_A_SPIDEY_PALETTES[nPalId].nPaletteOffset;
        break;
    case indexRyu:
        nCurrPalOffs = MVC_A_RYU_PALETTES[nPalId].nPaletteOffset;
        break;
    case indexCapCom:
        nCurrPalOffs = MVC_A_CAPCOM_PALETTES[nPalId].nPaletteOffset;
        break;
    case indexChun:
        nCurrPalOffs = MVC_A_CHUNLI_PALETTES[nPalId].nPaletteOffset;
        break;
    case indexJin:
        nCurrPalOffs = MVC_A_JIN_PALETTES[nPalId].nPaletteOffset;
        break;
    case indexGief:
        nCurrPalOffs = MVC_A_GIEF_PALETTES[nPalId].nPaletteOffset;
        break;
    case indexStrider:
        nCurrPalOffs = MVC_A_STRIDER_PALETTES[nPalId].nPaletteOffset;
        break;
    case indexMegaman:
        nCurrPalOffs = MVC_A_MEGAMAN_PALETTES[nPalId].nPaletteOffset;
        break;
    case indexMorrigan:
        nCurrPalOffs = MVC_A_MORRIGAN_PALETTES[nPalId].nPaletteOffset;
        break;
    case indexHyperVenom:
        nCurrPalOffs = MVC_A_HYPERVENOM_PALETTES[nPalId].nPaletteOffset;
        break;
    case indexOrangeHulk:
        nCurrPalOffs = MVC_A_ORANGEHULK_PALETTES[nPalId].nPaletteOffset;
        break;
    case indexGWM:
        nCurrPalOffs = MVC_A_GOLDWARMACHINE_PALETTES[nPalId].nPaletteOffset;
        break;
    case indexShadowLady:
        nCurrPalOffs = MVC_A_SHADOWLADY_PALETTES[nPalId].nPaletteOffset;
        break;
    case indexLilith:
        nCurrPalOffs = MVC_A_LILITH_PALETTES[nPalId].nPaletteOffset;
        break;
    case indexGambit:
        nCurrPalOffs = MVC_A_GAMBIT_PALETTES[nPalId].nPaletteOffset;
        break;
    case indexOnslaught:
        nCurrPalOffs = MVC_A_ONSLAUGHT_PALETTES[nPalId].nPaletteOffset;
        break;
    case indexRoll:
        nCurrPalOffs = MVC_A_ROLL_PALETTES[nPalId].nPaletteOffset;
        break;
    case indexAssists: // Assists
    {
        nCurrPalOffs = MVC_A_ASSIST_PALETTES[nPalId].nPaletteOffset;
        break;
    }
    case indexLast: // MVC_A_NUMUNIT
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForMVC(GetExtraLoc(nUnitId) + nPalId);

        nCurrPalOffs = pCurrDef->uOffset;
        nCurrPalSz = (pCurrDef->cbPaletteSize / 2);
        return;
    }
    default:
    {
        // This is all the base palettes.
        nCurrPalOffs = MVC_A_UNITLOC[nUnitId] + (nPalId * 0x20);
        break;
    }
    };

    nCurrPalSz = 16;
}

BOOL CGame_MVC_A::LoadFile(CFile* LoadedFile, UINT16 nUnitId)
{
    int nPalAmt;

    for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        nPalAmt = GetPalCt(nUnitCtr);

        pppDataBuffer[nUnitCtr] = new UINT16 * [nPalAmt];

        rgUnitRedir[nUnitCtr] = MVC_A_UNITSORT[nUnitCtr];

        for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            GetPalOffsSz(nUnitCtr, nPalCtr);

            pppDataBuffer[nUnitCtr][nPalCtr] = new UINT16[nCurrPalSz];

            LoadedFile->Seek(nCurrPalOffs, CFile::begin);

            LoadedFile->Read(pppDataBuffer[nUnitCtr][nPalCtr], nCurrPalSz * 2);
        }
    }

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;

    return TRUE;
}

BOOL CGame_MVC_A::SaveFile(CFile* SaveFile, UINT16 nUnitId)
{
    for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        UINT16 nPalAmt = GetPalCt(nUnitCtr);

        for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            GetPalOffsSz(nUnitCtr, nPalCtr);

            SaveFile->Seek(nCurrPalOffs, CFile::begin);

            SaveFile->Write(pppDataBuffer[nUnitCtr][nPalCtr], nCurrPalSz * 2);
        }
    }

    return TRUE;
}

void CGame_MVC_A::CreateDefPal(sDescNode* srcNode, UINT16 nSepId)
{
    UINT16 nUnitId = srcNode->uUnitId;
    UINT16 nPalId = srcNode->uPalId;

    GetPalOffsSz(nUnitId, nPalId);

    BasePalGroup.AddPal(CreatePal(nUnitId, nPalId), nCurrPalSz, nUnitId, nPalId);
    BasePalGroup.AddSep(nSepId, srcNode->szDesc, 0, nCurrPalSz);
}

BOOL CGame_MVC_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    //Reset palette sources
    ClearSrcPal();

    if (Node01 == -1)
    {
        return FALSE;
    }

    sDescNode* NodeGet = MainDescTree.GetDescNode(Node01, Node02, Node03, Node04);

    if (NodeGet == NULL)
    {
        return FALSE;
    }

    UINT16 uUnitId = NodeGet->uUnitId;
    UINT16 uPalId = NodeGet->uPalId;

    // Make sure to reset the image id
    nTargetImgId = 0;
    int nImgUnitId = INVALID_UNIT_VALUE;

    const sMVC_PaletteDataset* paletteDataSet = nullptr;

    switch (uUnitId)
    {
    case indexAssists:
        paletteDataSet = &MVC_A_ASSIST_PALETTES[uPalId];
        break;
    case indexWarMachine:
        paletteDataSet = &MVC_A_WARMACHINE_PALETTES[uPalId];
        break;
    case indexCaptainAmerica:
        paletteDataSet = &MVC_A_CAPAM_PALETTES[uPalId];
        break;
    case indexHulk:
        paletteDataSet = &MVC_A_HULK_PALETTES[uPalId];
        break;
    case indexWolverine:
        paletteDataSet = &MVC_A_WOLVERINE_PALETTES[uPalId];
        break;
    case indexVenom:
        paletteDataSet = &MVC_A_VENOM_PALETTES[uPalId];
        break;
    case indexSpiderman:
        paletteDataSet = &MVC_A_SPIDEY_PALETTES[uPalId];
        break;
    case indexRyu:
        paletteDataSet = &MVC_A_RYU_PALETTES[uPalId];
        break;
    case indexCapCom:
        paletteDataSet = &MVC_A_CAPCOM_PALETTES[uPalId];
        break;
    case indexChun:
        paletteDataSet = &MVC_A_CHUNLI_PALETTES[uPalId];
        break;
    case indexJin:
        paletteDataSet = &MVC_A_JIN_PALETTES[uPalId];
        break;
    case indexGief:
        paletteDataSet = &MVC_A_GIEF_PALETTES[uPalId];
        break;
    case indexStrider:
        paletteDataSet = &MVC_A_STRIDER_PALETTES[uPalId];
        break;
    case indexMegaman:
        // Megaman is a mess.
        nImgUnitId = MVC_A_MEGAMAN_PALETTES[uPalId].indexImgToUse;

        if (nImgUnitId == INVALID_UNIT_VALUE)
        {
            // Forcibly Megaman all the things, since we only have two Roll sprites to use right now.
            nImgUnitId = MVC_A_IMGREDIR[uUnitId];
        }
        nTargetImgId = MVC_A_MEGAMAN_PALETTES[uPalId].indexOffsetToUse;
        break;
    case indexMorrigan:
        paletteDataSet = &MVC_A_MORRIGAN_PALETTES[uPalId];
        break;
    case indexHyperVenom:
        paletteDataSet = &MVC_A_HYPERVENOM_PALETTES[uPalId];
        break;
    case indexOrangeHulk:
        paletteDataSet = &MVC_A_ORANGEHULK_PALETTES[uPalId];
        break;
    case indexGWM:
        paletteDataSet = &MVC_A_GOLDWARMACHINE_PALETTES[uPalId];
        break;
    case indexLast: // MVC_A_EXTRALOC: We don't have anything for these right now.
        nImgUnitId = INVALID_UNIT_VALUE;
        break;
    case indexGambit:
        paletteDataSet = &MVC_A_GAMBIT_PALETTES[uPalId];
        break;
    case indexShadowLady:
        paletteDataSet = &MVC_A_SHADOWLADY_PALETTES[uPalId];
        break;
    case indexLilith:
        paletteDataSet = &MVC_A_LILITH_PALETTES[uPalId];
        break;
    case indexOnslaught:
        paletteDataSet = &MVC_A_ONSLAUGHT_PALETTES[uPalId];
        break;
    case indexRoll:
        paletteDataSet = &MVC_A_ROLL_PALETTES[uPalId];
        break;
    default: // just use the listed options
        nImgUnitId = MVC_A_IMGREDIR[uUnitId];
        break;
    }

    if (paletteDataSet)
    {
        nImgUnitId = paletteDataSet->indexImgToUse;
        nTargetImgId = paletteDataSet->indexOffsetToUse;
    }

    int nSrcStart = 0;
    int nSrcAmt = 1; //GetBasicAmt(uUnitId);

    //Get rid of any palettes if there are any
    BasePalGroup.FlushPalAll();

    //Create the default palette
    ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

    CreateDefPal(NodeGet, 0);

    SetSourcePal(0, uUnitId, nSrcStart, nSrcAmt, 1);

    return TRUE;
}

COLORREF* CGame_MVC_A::CreatePal(UINT16 nUnitId, UINT16 nPalId)
{
    GetPalOffsSz(nUnitId, nPalId);

    COLORREF* NewPal = new COLORREF[nCurrPalSz];

    for (int i = 0; i < nCurrPalSz - 1; i++)
    {
        NewPal[i + 1] = ConvPal(pppDataBuffer[nUnitId][nPalId][i]) | 0xFF000000;
    }

    NewPal[0] = 0xFF000000;

    return NewPal;
}

void CGame_MVC_A::UpdatePalData()
{
    for (int nPalCtr = 0; nPalCtr < MAX_PAL; nPalCtr++)
    {
        sPalDef* srcDef = BasePalGroup.GetPalDef(nPalCtr);

        if (srcDef->bAvail)
        {

            COLORREF* crSrc = srcDef->pPal;

            int nTotalColorsRemaining = srcDef->uPalSz;
            UINT16 nCurrentTotalWrites = 0;
            // Every 16 colors there is another counter WORD (color length) to preserve.
            const UINT16 nMaxSafeColorsToWrite = 16;
            const UINT16 iFixedCounterPosition = 0; // The lead 'color' is a counter and needs to be preserved.

            while (nTotalColorsRemaining > 0)
            {
                UINT16 nCurrentColorCountToWrite = min(nMaxSafeColorsToWrite, nTotalColorsRemaining);

                for (int nPICtr = 0; nPICtr < nCurrentColorCountToWrite; nPICtr++)
                {
                    if (nPICtr == iFixedCounterPosition)
                    {
                        continue;
                    }

                    UINT16 iCurrentArrayOffset = nPICtr + nCurrentTotalWrites;
                    pppDataBuffer[srcDef->uUnitId][srcDef->uPalId][iCurrentArrayOffset - 1] = (ConvCol(crSrc[iCurrentArrayOffset]) & 0x0FFF);
                }

                nCurrentTotalWrites += nMaxSafeColorsToWrite;
                nTotalColorsRemaining -= nMaxSafeColorsToWrite;
            }

            srcDef->bChanged = FALSE;
            rgFileChanged[0] = TRUE;
        }
    }
}