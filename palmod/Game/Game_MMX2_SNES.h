#pragma once
#include "gameclass.h"
#include "MMX2_SNES_DEF.h"
#include "..\extrafile.h"

class CGame_MMX2_SNES : public CGameWithExtrasFile
{
private:
    static UINT32 m_nTotalPaletteCountForMMX2;

    static int rgExtraCountAll[MMX2_SNES_NUMUNIT + 1];
    static int rgExtraLoc[MMX2_SNES_NUMUNIT + 1];

    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    void LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId);
    UINT16 GetPaletteCountForUnit(UINT16 nUnitId);

    static constexpr auto EXTRA_FILENAME_MMX2_SNES = L"MMX2E.txt";
    static constexpr auto MMX2_SNES_PRIMARY_ROMNAME = L"megaman x2 (usa).sfc";

public:
    CGame_MMX2_SNES(UINT32 nConfirmedROMSize);
    ~CGame_MMX2_SNES(void);

    //Static functions / variables
    static CDescTree MainDescTree;

    static sDescTreeNode* InitDescTree();
    static sFileRule GetRule(UINT16 nUnitId);

    //Extra palette function
    static int GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly = FALSE);
    static int GetExtraLoc(UINT16 nUnitId);

    //Normal functions
    CDescTree* GetMainTree();
    static UINT16 GetCollectionCountForUnit(UINT16 nUnitId);

    // We don't fold these into one sDescTreeNode return because we need to handle the Extra section.
    static UINT16 GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId);
    static LPCWSTR GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId);
    static const sGame_PaletteDataset* GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId);
    static const sGame_PaletteDataset* GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId);

    const sDescTreeNode* GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly);

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    static stExtraDef* MMX2_SNES_EXTRA_CUSTOM;
};
