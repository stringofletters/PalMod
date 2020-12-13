#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of KOF94_A_KYO_PALETTE_A. 
// * Update every array using KOF94_A_NUMUNIT below
// That should be it.  Good luck.

const sGame_PaletteDataset KOF94_A_HEIDERN_MAIN_PALETTES[] =
{
    { L"Heidern", 0x176000, 0x176020 },
    { L"Extra 1", 0x176020, 0x176040 },
    { L"Electric Palette", 0x176040, 0x176060 },
    { L"Extra 2", 0x176060, 0x176080 },
    { L"Win Portrait", 0x176080, 0x176100 },
    { L"Lifebar Portrait", 0x176100, 0x176120 },
    { L"Monochrome Palette", 0x176120, 0x176140 },
    { L"Darker Palette", 0x176140, 0x176160 },
    { L"Extra 3", 0x176160, 0x176180 },
    { L"MAX Flash", 0x176180, 0x1761a0 },
    { L"Extra 4", 0x1761a0, 0x1761c0 },
};

const sGame_PaletteDataset KOF94_A_HEIDERN_ALT_PALETTES[] =
{
    { L"Heidern", 0x1761c0, 0x1761e0 },
    { L"Extra 1", 0x1761e0, 0x176200 },
    { L"Electric Palette", 0x176200, 0x176220 },
    { L"Extra 2", 0x176220, 0x176240 },
    { L"Win Portrait", 0x176240, 0x1762c0 },
    { L"Lifebar Portrait", 0x1762c0, 0x1762e0 },
    { L"Monochrome Palette", 0x1762e0, 0x176300 },
    { L"Darker Palette", 0x176300, 0x176320 },
    { L"Extra 3", 0x176320, 0x176340 },
    { L"MAX Flash", 0x176340, 0x176360 },
    { L"Extra 4", 0x176360, 0x176380 },
};

const sGame_PaletteDataset KOF94_A_HEIDERN_EFFECTS_PALETTES[] =
{
    { L"Fire Palette", 0x17b780, 0x17b7a0 },
    { L"Gigantic Pressure Palette", 0x17bb00, 0x17bb20 },
};

const sGame_PaletteDataset KOF94_A_RALF_MAIN_PALETTES[] =
{
    { L"Ralf", 0x176380, 0x1763a0 },
    { L"Extra 1", 0x1763a0, 0x1763c0 },
    { L"Electric Palette", 0x1763c0, 0x1763e0 },
    { L"Electric Palette Extra", 0x1763e0, 0x176400 },
    { L"Win Portrait", 0x176400, 0x176480 },
    { L"Lifebar Portrait", 0x176480, 0x1764a0 },
    { L"Monochrome Palette", 0x1764a0, 0x1764c0 },
    { L"Darker Palette", 0x1764c0, 0x1764e0 },
    { L"Extra 3", 0x1764e0, 0x176500 },
    { L"MAX Flash", 0x176500, 0x176520 },
    { L"MAX Flash Extra", 0x176520, 0x176540 },
};

const sGame_PaletteDataset KOF94_A_RALF_ALT_PALETTES[] =
{
    { L"Ralf", 0x176540, 0x176560 },
    { L"Extra 1", 0x176560, 0x176580 },
    { L"Electric Palette", 0x176580, 0x1765a0 },
    { L"Electric Palette Extra", 0x1765a0, 0x1765c0 },
    { L"Win Portrait", 0x1765c0, 0x176640 },
    { L"Lifebar Portrait", 0x176640, 0x176660 },
    { L"Monochrome Palette", 0x176660, 0x176680 },
    { L"Darker Palette", 0x176680, 0x1766a0 },
    { L"Extra 3", 0x1766a0, 0x1766c0 },
    { L"MAX Flash", 0x1766c0, 0x1766e0 },
    { L"MAX Flash Extra", 0x1766e0, 0x176700 },
};

const sGame_PaletteDataset KOF94_A_RALF_EFFECTS_PALETTES[] =
{
    { L"Fire Palette", 0x17b7a0, 0x17b7c0 },
    { L"Gigantic Pressure Palette", 0x17bb20, 0x17bb40 },
};

const sGame_PaletteDataset KOF94_A_CLARK_MAIN_PALETTES[] =
{
    { L"Clark", 0x176700, 0x176720 },
    { L"Extra 1", 0x176720, 0x176740 },
    { L"Electric Palette", 0x176740, 0x176760 },
    { L"Electric Palette Extra", 0x176760, 0x176780 },
    { L"Win Portrait", 0x176780, 0x176800 },
    { L"Lifebar Portrait", 0x176800, 0x176820 },
    { L"Monochrome Palette", 0x176820, 0x176840 },
    { L"Darker Palette", 0x176840, 0x176860 },
    { L"Extra 3", 0x176860, 0x176880 },
    { L"MAX Flash", 0x176880, 0x1768a0 },
    { L"MAX Flash Extra", 0x1768a0, 0x1768c0 },
};

const sGame_PaletteDataset KOF94_A_CLARK_ALT_PALETTES[] =
{
    { L"Clark", 0x1768c0, 0x1768e0 },
    { L"Extra 1", 0x1768e0, 0x176900 },
    { L"Electric Palette", 0x176900, 0x176920 },
    { L"Electric Palette Extra", 0x176920, 0x176940 },
    { L"Win Portrait", 0x176940, 0x1769c0 },
    { L"Lifebar Portrait", 0x1769c0, 0x1769e0 },
    { L"Monochrome Palette", 0x1769e0, 0x176a00 },
    { L"Darker Palette", 0x176a00, 0x176a20 },
    { L"Extra 3", 0x176a20, 0x176a40 },
    { L"MAX Flash", 0x176a40, 0x176a60 },
    { L"MAX Flash Extra", 0x176a60, 0x176a80 },
};

const sGame_PaletteDataset KOF94_A_CLARK_EFFECTS_PALETTES[] =
{
    { L"Fire Palette", 0x17b7c0, 0x17b7e0 },
    { L"Gigantic Pressure Palette", 0x17bb40, 0x17bb60 },
};

const sGame_PaletteDataset KOF94_A_ATHENA_MAIN_PALETTES[] =
{
    { L"Athena", 0x176a80, 0x176aa0 },
    { L"Extra 1", 0x176aa0, 0x176ac0 },
    { L"Electric Palette", 0x176ac0, 0x176ae0 },
    { L"Extra 2", 0x176ae0, 0x176b00 },
    { L"Win Portrait", 0x176b00, 0x176b80 },
    { L"Lifebar Portrait", 0x176b80, 0x176ba0 },
    { L"Monochrome Palette", 0x176ba0, 0x176bc0 },
    { L"Darker Palette", 0x176bc0, 0x176be0 },
    { L"Extra 3", 0x176be0, 0x176c00 },
    { L"MAX Flash", 0x176c00, 0x176c20 },
    { L"Extra 4", 0x176c20, 0x176c40 },
};

const sGame_PaletteDataset KOF94_A_ATHENA_ALT_PALETTES[] =
{
    { L"Athena", 0x176c40, 0x176c60 },
    { L"Extra 1", 0x176c60, 0x176c80 },
    { L"Electric Palette", 0x176c80, 0x176ca0 },
    { L"Extra 2", 0x176ca0, 0x176cc0 },
    { L"Win Portrait", 0x176cc0, 0x176d40 },
    { L"Lifebar Portrait", 0x176d40, 0x176d60 },
    { L"Monochrome Palette", 0x176d60, 0x176d80 },
    { L"Darker Palette", 0x176d80, 0x176da0 },
    { L"Extra 3", 0x176da0, 0x176dc0 },
    { L"MAX Flash", 0x176dc0, 0x176de0 },
    { L"Extra 4", 0x176de0, 0x176e00 },
};

const sGame_PaletteDataset KOF94_A_ATHENA_EFFECTS_PALETTES[] =
{
    { L"Fire Palette", 0x17b7e0, 0x17b800 },
    { L"Gigantic Pressure Palette", 0x17bb60, 0x17bb80 },
};

const sGame_PaletteDataset KOF94_A_KENSOU_MAIN_PALETTES[] =
{
    { L"Kensou", 0x176e00, 0x176e20 },
    { L"Extra 1", 0x176e20, 0x176e40 },
    { L"Electric Palette", 0x176e40, 0x176e60 },
    { L"Extra 2", 0x176e60, 0x176e80 },
    { L"Win Portrait", 0x176e80, 0x176f00 },
    { L"Lifebar Portrait", 0x176f00, 0x176f20 },
    { L"Monochrome Palette", 0x176f20, 0x176f40 },
    { L"Darker Palette", 0x176f40, 0x176f60 },
    { L"Extra 3", 0x176f60, 0x176f80 },
    { L"MAX Flash", 0x176f80, 0x176fa0 },
    { L"Extra 4", 0x176fa0, 0x176fc0 },
};

const sGame_PaletteDataset KOF94_A_KENSOU_ALT_PALETTES[] =
{
    { L"Kensou", 0x176fc0, 0x176fe0 },
    { L"Extra 1", 0x176fe0, 0x177000 },
    { L"Electric Palette", 0x177000, 0x177020 },
    { L"Extra 2", 0x177020, 0x177040 },
    { L"Win Portrait", 0x177040, 0x1770c0 },
    { L"Lifebar Portrait", 0x1770c0, 0x1770e0 },
    { L"Monochrome Palette", 0x1770e0, 0x177100 },
    { L"Darker Palette", 0x177100, 0x177120 },
    { L"Extra 3", 0x177120, 0x177140 },
    { L"MAX Flash", 0x177140, 0x177160 },
    { L"Extra 4", 0x177160, 0x177180 },
};

const sGame_PaletteDataset KOF94_A_KENSOU_EFFECTS_PALETTES[] =
{
    { L"Fire Palette", 0x17b800, 0x17b820 },
    { L"Gigantic Pressure Palette", 0x17bb80, 0x17bba0 },
};

const sGame_PaletteDataset KOF94_A_CHIN_MAIN_PALETTES[] =
{
    { L"Chin", 0x177180, 0x1771a0 },
    { L"Extra 1", 0x1771a0, 0x1771c0 },
    { L"Electric Palette", 0x1771c0, 0x1771e0 },
    { L"Extra 2", 0x1771e0, 0x177200 },
    { L"Win Portrait", 0x177200, 0x177280 },
    { L"Lifebar Portrait", 0x177280, 0x1772a0 },
    { L"Monochrome Palette", 0x1772a0, 0x1772c0 },
    { L"Darker Palette", 0x1772c0, 0x1772e0 },
    { L"Extra 3", 0x1772e0, 0x177300 },
    { L"MAX Flash", 0x177300, 0x177320 },
    { L"Extra 4", 0x177320, 0x177340 },
};

const sGame_PaletteDataset KOF94_A_CHIN_ALT_PALETTES[] =
{
    { L"Chin", 0x177340, 0x177360 },
    { L"Extra 1", 0x177360, 0x177380 },
    { L"Electric Palette", 0x177380, 0x1773a0 },
    { L"Extra 2", 0x1773a0, 0x1773c0 },
    { L"Win Portrait", 0x1773c0, 0x177440 },
    { L"Lifebar Portrait", 0x177440, 0x177460 },
    { L"Monochrome Palette", 0x177460, 0x177480 },
    { L"Darker Palette", 0x177480, 0x1774a0 },
    { L"Extra 3", 0x1774a0, 0x1774c0 },
    { L"MAX Flash", 0x1774c0, 0x1774e0 },
    { L"Extra 4", 0x1774e0, 0x177500 },
};

const sGame_PaletteDataset KOF94_A_CHIN_EFFECTS_PALETTES[] =
{
    { L"Fire Palette", 0x17b820, 0x17b840 },
    { L"Gigantic Pressure Palette", 0x17bba0, 0x17bbc0 },
};

const sGame_PaletteDataset KOF94_A_KYO_MAIN_PALETTES[] =
{
    { L"Kyo", 0x177500, 0x177520 },
    { L"Extra 1", 0x177520, 0x177540 },
    { L"Electric Palette", 0x177540, 0x177560 },
    { L"Extra 2", 0x177560, 0x177580 },
    { L"Win Portrait", 0x177580, 0x177600 },
    { L"Lifebar Portrait", 0x177600, 0x177620 },
    { L"Monochrome Palette", 0x177620, 0x177640 },
    { L"Darker Palette", 0x177640, 0x177660 },
    { L"Extra 3", 0x177660, 0x177680 },
    { L"MAX Flash", 0x177680, 0x1776a0 },
    { L"Extra 4", 0x1776a0, 0x1776c0 },
};

const sGame_PaletteDataset KOF94_A_KYO_ALT_PALETTES[] =
{
    { L"Kyo", 0x1776c0, 0x1776e0 },
    { L"Extra 1", 0x1776e0, 0x177700 },
    { L"Electric Palette", 0x177700, 0x177720 },
    { L"Extra 2", 0x177720, 0x177740 },
    { L"Win Portrait", 0x177740, 0x1777c0 },
    { L"Lifebar Portrait", 0x1777c0, 0x1777e0 },
    { L"Monochrome Palette", 0x1777e0, 0x177800 },
    { L"Darker Palette", 0x177800, 0x177820 },
    { L"Extra 3", 0x177820, 0x177840 },
    { L"MAX Flash", 0x177840, 0x177860 },
    { L"Extra 4", 0x177860, 0x177880 },
};

const sGame_PaletteDataset KOF94_A_KYO_EFFECTS_PALETTES[] =
{
    { L"Fire Palette", 0x17b840, 0x17b860 },
    { L"Gigantic Pressure Palette", 0x17bbc0, 0x17bbe0 },
};

const sGame_PaletteDataset KOF94_A_BENIMARU_MAIN_PALETTES[] =
{
    { L"Benimaru", 0x177880, 0x1778a0 },
    { L"Extra 1", 0x1778a0, 0x1778c0 },
    { L"Electric Palette", 0x1778c0, 0x1778e0 },
    { L"Extra 2", 0x1778e0, 0x177900 },
    { L"Win Portrait", 0x177900, 0x177980 },
    { L"Lifebar Portrait", 0x177980, 0x1779a0 },
    { L"Monochrome Palette", 0x1779a0, 0x1779c0 },
    { L"Darker Palette", 0x1779c0, 0x1779e0 },
    { L"Extra 3", 0x1779e0, 0x177a00 },
    { L"MAX Flash", 0x177a00, 0x177a20 },
    { L"Extra 4", 0x177a20, 0x177a40 },
};

const sGame_PaletteDataset KOF94_A_BENIMARU_ALT_PALETTES[] =
{
    { L"Benimaru", 0x177a40, 0x177a60 },
    { L"Extra 1", 0x177a60, 0x177a80 },
    { L"Electric Palette", 0x177a80, 0x177aa0 },
    { L"Extra 2", 0x177aa0, 0x177ac0 },
    { L"Win Portrait", 0x177ac0, 0x177b40 },
    { L"Lifebar Portrait", 0x177b40, 0x177b60 },
    { L"Monochrome Palette", 0x177b60, 0x177b80 },
    { L"Darker Palette", 0x177b80, 0x177ba0 },
    { L"Extra 3", 0x177ba0, 0x177bc0 },
    { L"MAX Flash", 0x177bc0, 0x177be0 },
    { L"Extra 4", 0x177be0, 0x177c00 },
};

const sGame_PaletteDataset KOF94_A_BENIMARU_EFFECTS_PALETTES[] =
{
    { L"Fire Palette", 0x17b860, 0x17b880 },
    { L"Gigantic Pressure Palette", 0x17bbe0, 0x17bc00 },
};

const sGame_PaletteDataset KOF94_A_DAIMON_MAIN_PALETTES[] =
{
    { L"Daimon", 0x177c00, 0x177c20 },
    { L"Extra 1", 0x177c20, 0x177c40 },
    { L"Electric Palette", 0x177c40, 0x177c60 },
    { L"Extra 2", 0x177c60, 0x177c80 },
    { L"Win Portrait", 0x177c80, 0x177d00 },
    { L"Lifebar Portrait", 0x177d00, 0x177d20 },
    { L"Monochrome Palette", 0x177d20, 0x177d40 },
    { L"Darker Palette", 0x177d40, 0x177d60 },
    { L"Extra 3", 0x177d60, 0x177d80 },
    { L"MAX Flash", 0x177d80, 0x177da0 },
    { L"Extra 4", 0x177da0, 0x177dc0 },
};

const sGame_PaletteDataset KOF94_A_DAIMON_ALT_PALETTES[] =
{
    { L"Daimon", 0x177dc0, 0x177de0 },
    { L"Extra 1", 0x177de0, 0x177e00 },
    { L"Electric Palette", 0x177e00, 0x177e20 },
    { L"Extra 2", 0x177e20, 0x177e40 },
    { L"Win Portrait", 0x177e40, 0x177ec0 },
    { L"Lifebar Portrait", 0x177ec0, 0x177ee0 },
    { L"Monochrome Palette", 0x177ee0, 0x177f00 },
    { L"Darker Palette", 0x177f00, 0x177f20 },
    { L"Extra 3", 0x177f20, 0x177f40 },
    { L"MAX Flash", 0x177f40, 0x177f60 },
    { L"Extra 4", 0x177f60, 0x177f80 },
};

const sGame_PaletteDataset KOF94_A_DAIMON_EFFECTS_PALETTES[] =
{
    { L"Fire Palette", 0x17b880, 0x17b8a0 },
    { L"Gigantic Pressure Palette", 0x17bc00, 0x17bc20 },
};

const sGame_PaletteDataset KOF94_A_HEAVYD_MAIN_PALETTES[] =
{
    { L"Heavy D!", 0x177f80, 0x177fa0 },
    { L"Extra 1", 0x177fa0, 0x177fc0 },
    { L"Electric Palette", 0x177fc0, 0x177fe0 },
    { L"Extra 2", 0x177fe0, 0x178000 },
    { L"Win Portrait", 0x178000, 0x178080 },
    { L"Lifebar Portrait", 0x178080, 0x1780a0 },
    { L"Monochrome Palette", 0x1780a0, 0x1780c0 },
    { L"Darker Palette", 0x1780c0, 0x1780e0 },
    { L"Extra 3", 0x1780e0, 0x178100 },
    { L"MAX Flash", 0x178100, 0x178120 },
    { L"Extra 4", 0x178120, 0x178140 },
};

const sGame_PaletteDataset KOF94_A_HEAVYD_ALT_PALETTES[] =
{
    { L"Heavy D!", 0x178140, 0x178160 },
    { L"Extra 1", 0x178160, 0x178180 },
    { L"Electric Palette", 0x178180, 0x1781a0 },
    { L"Extra 2", 0x1781a0, 0x1781c0 },
    { L"Win Portrait", 0x1781c0, 0x178240 },
    { L"Lifebar Portrait", 0x178240, 0x178260 },
    { L"Monochrome Palette", 0x178260, 0x178280 },
    { L"Darker Palette", 0x178280, 0x1782a0 },
    { L"Extra 3", 0x1782a0, 0x1782c0 },
    { L"MAX Flash", 0x1782c0, 0x1782e0 },
    { L"Extra 4", 0x1782e0, 0x178300 },
};

const sGame_PaletteDataset KOF94_A_HEAVYD_EFFECTS_PALETTES[] =
{
    { L"Fire Palette", 0x17b8a0, 0x17b8c0 },
    { L"Gigantic Pressure Palette", 0x17bc20, 0x17bc40 },
};

const sGame_PaletteDataset KOF94_A_LUCKY_MAIN_PALETTES[] =
{
    { L"Lucky", 0x178300, 0x178320 },
    { L"Extra 1", 0x178320, 0x178340 },
    { L"Electric Palette", 0x178340, 0x178360 },
    { L"Electric Palette Extra", 0x178360, 0x178380 },
    { L"Win Portrait", 0x178380, 0x178400 },
    { L"Lifebar Portrait", 0x178400, 0x178420 },
    { L"Monochrome Palette", 0x178420, 0x178440 },
    { L"Darker Palette", 0x178440, 0x178460 },
    { L"Extra 3", 0x178460, 0x178480 },
    { L"MAX Flash", 0x178480, 0x1784a0 },
    { L"MAX Flash Extra", 0x1784a0, 0x1784c0 },
};

const sGame_PaletteDataset KOF94_A_LUCKY_ALT_PALETTES[] =
{
    { L"Lucky", 0x1784c0, 0x1784e0 },
    { L"Extra 1", 0x1784e0, 0x178500 },
    { L"Electric Palette", 0x178500, 0x178520 },
    { L"Electric Palette Extra", 0x178520, 0x178540 },
    { L"Win Portrait", 0x178540, 0x1785c0 },
    { L"Lifebar Portrait", 0x1785c0, 0x1785e0 },
    { L"Monochrome Palette", 0x1785e0, 0x178600 },
    { L"Darker Palette", 0x178600, 0x178620 },
    { L"Extra 3", 0x178620, 0x178640 },
    { L"MAX Flash", 0x178640, 0x178660 },
    { L"MAX Flash Extra", 0x178660, 0x178680 },
};

const sGame_PaletteDataset KOF94_A_LUCKY_EFFECTS_PALETTES[] =
{
    { L"Fire Palette", 0x17b8c0, 0x17b8e0 },
    { L"Gigantic Pressure Palette", 0x17bc40, 0x17bc60 },
};

const sGame_PaletteDataset KOF94_A_BRIAN_MAIN_PALETTES[] =
{
    { L"Brian", 0x178680, 0x1786a0 },
    { L"Extra 1", 0x1786a0, 0x1786c0 },
    { L"Electric Palette", 0x1786c0, 0x1786e0 },
    { L"Extra 2", 0x1786e0, 0x178700 },
    { L"Win Portrait", 0x178700, 0x178780 },
    { L"Lifebar Portrait", 0x178780, 0x1787a0 },
    { L"Monochrome Palette", 0x1787a0, 0x1787c0 },
    { L"Darker Palette", 0x1787c0, 0x1787e0 },
    { L"Extra 3", 0x1787e0, 0x178800 },
    { L"MAX Flash", 0x178800, 0x178820 },
    { L"Extra 4", 0x178820, 0x178840 },
};

const sGame_PaletteDataset KOF94_A_BRIAN_ALT_PALETTES[] =
{
    { L"Brian", 0x178840, 0x178860 },
    { L"Extra 1", 0x178860, 0x178880 },
    { L"Electric Palette", 0x178880, 0x1788a0 },
    { L"Extra 2", 0x1788a0, 0x1788c0 },
    { L"Win Portrait", 0x1788c0, 0x178940 },
    { L"Lifebar Portrait", 0x178940, 0x178960 },
    { L"Monochrome Palette", 0x178960, 0x178980 },
    { L"Darker Palette", 0x178980, 0x1789a0 },
    { L"Extra 3", 0x1789a0, 0x1789c0 },
    { L"MAX Flash", 0x1789c0, 0x1789e0 },
    { L"Extra 4", 0x1789e0, 0x178a00 },
};

const sGame_PaletteDataset KOF94_A_BRIAN_EFFECTS_PALETTES[] =
{
    { L"Fire Palette", 0x17b8e0, 0x17b900 },
    { L"Gigantic Pressure Palette", 0x17bc60, 0x17bc80 },
};

const sGame_PaletteDataset KOF94_A_KIM_MAIN_PALETTES[] =
{
    { L"Kim", 0x178a00, 0x178a20 },
    { L"Extra 1", 0x178a20, 0x178a40 },
    { L"Electric Palette", 0x178a40, 0x178a60 },
    { L"Extra 2", 0x178a60, 0x178a80 },
    { L"Win Portrait", 0x178a80, 0x178b00 },
    { L"Lifebar Portrait", 0x178b00, 0x178b20 },
    { L"Monochrome Palette", 0x178b20, 0x178b40 },
    { L"Darker Palette", 0x178b40, 0x178b60 },
    { L"Extra 3", 0x178b60, 0x178b80 },
    { L"MAX Flash", 0x178b80, 0x178ba0 },
    { L"Extra 4", 0x178ba0, 0x178bc0 },
};

const sGame_PaletteDataset KOF94_A_KIM_ALT_PALETTES[] =
{
    { L"Kim", 0x178bc0, 0x178be0 },
    { L"Extra 1", 0x178be0, 0x178c00 },
    { L"Electric Palette", 0x178c00, 0x178c20 },
    { L"Extra 2", 0x178c20, 0x178c40 },
    { L"Win Portrait", 0x178c40, 0x178cc0 },
    { L"Lifebar Portrait", 0x178cc0, 0x178ce0 },
    { L"Monochrome Palette", 0x178ce0, 0x178d00 },
    { L"Darker Palette", 0x178d00, 0x178d20 },
    { L"Extra 3", 0x178d20, 0x178d40 },
    { L"MAX Flash", 0x178d40, 0x178d60 },
    { L"Extra 4", 0x178d60, 0x178d80 },
};

const sGame_PaletteDataset KOF94_A_KIM_EFFECTS_PALETTES[] =
{
    { L"Fire Palette", 0x17b900, 0x17b920 },
    { L"Gigantic Pressure Palette", 0x17bc80, 0x17bca0 },
};

const sGame_PaletteDataset KOF94_A_CHANG_MAIN_PALETTES[] =
{
    { L"Chang", 0x178d80, 0x178da0 },
    { L"Extra 1", 0x178da0, 0x178dc0 },
    { L"Electric Palette", 0x178dc0, 0x178de0 },
    { L"Electric Palette Extra", 0x178de0, 0x178e00 },
    { L"Win Portrait", 0x178e00, 0x178e80 },
    { L"Lifebar Portrait", 0x178e80, 0x178ea0 },
    { L"Monochrome Palette", 0x178ea0, 0x178ec0 },
    { L"Darker Palette", 0x178ec0, 0x178ee0 },
    { L"Extra 3", 0x178ee0, 0x178f00 },
    { L"MAX Flash", 0x178f00, 0x178f20 },
    { L"MAX Flash Extra", 0x178f20, 0x178f40 },
};

const sGame_PaletteDataset KOF94_A_CHANG_ALT_PALETTES[] =
{
    { L"Chang", 0x178f40, 0x178f60 },
    { L"Extra 1", 0x178f60, 0x178f80 },
    { L"Electric Palette", 0x178f80, 0x178fa0 },
    { L"Electric Palette Extra", 0x178fa0, 0x178fc0 },
    { L"Win Portrait", 0x178fc0, 0x179040 },
    { L"Lifebar Portrait", 0x179040, 0x179060 },
    { L"Monochrome Palette", 0x179060, 0x179080 },
    { L"Darker Palette", 0x179080, 0x1790a0 },
    { L"Extra 3", 0x1790a0, 0x1790c0 },
    { L"MAX Flash", 0x1790c0, 0x1790e0 },
    { L"MAX Flash Extra", 0x1790e0, 0x179100 },
};

const sGame_PaletteDataset KOF94_A_CHANG_EFFECTS_PALETTES[] =
{
    { L"Fire Palette", 0x17b920, 0x17b940 },
    { L"Gigantic Pressure Palette", 0x17bca0, 0x17bcc0 },
};

const sGame_PaletteDataset KOF94_A_CHOI_MAIN_PALETTES[] =
{
    { L"Choi", 0x179100, 0x179120 },
    { L"Extra 1", 0x179120, 0x179140 },
    { L"Electric Palette", 0x179140, 0x179160 },
    { L"Extra 2", 0x179160, 0x179180 },
    { L"Win Portrait", 0x179180, 0x179200 },
    { L"Lifebar Portrait", 0x179200, 0x179220 },
    { L"Monochrome Palette", 0x179220, 0x179240 },
    { L"Darker Palette", 0x179240, 0x179260 },
    { L"Extra 3", 0x179260, 0x179280 },
    { L"MAX Flash", 0x179280, 0x1792a0 },
    { L"Extra 4", 0x1792a0, 0x1792c0 },
};

const sGame_PaletteDataset KOF94_A_CHOI_ALT_PALETTES[] =
{
    { L"Choi", 0x1792c0, 0x1792e0 },
    { L"Extra 1", 0x1792e0, 0x179300 },
    { L"Electric Palette", 0x179300, 0x179320 },
    { L"Extra 2", 0x179320, 0x179340 },
    { L"Win Portrait", 0x179340, 0x1793c0 },
    { L"Lifebar Portrait", 0x1793c0, 0x1793e0 },
    { L"Monochrome Palette", 0x1793e0, 0x179400 },
    { L"Darker Palette", 0x179400, 0x179420 },
    { L"Extra 3", 0x179420, 0x179440 },
    { L"MAX Flash", 0x179440, 0x179460 },
    { L"Extra 4", 0x179460, 0x179480 },
};

const sGame_PaletteDataset KOF94_A_CHOI_EFFECTS_PALETTES[] =
{
    { L"Fire Palette", 0x17b940, 0x17b960 },
    { L"Gigantic Pressure Palette", 0x17bcc0, 0x17bce0 },
};

const sGame_PaletteDataset KOF94_A_TERRY_MAIN_PALETTES[] =
{
    { L"Terry", 0x179480, 0x1794a0 },
    { L"Extra 1", 0x1794a0, 0x1794c0 },
    { L"Electric Palette", 0x1794c0, 0x1794e0 },
    { L"Extra 2", 0x1794e0, 0x179500 },
    { L"Win Portrait", 0x179500, 0x179580 },
    { L"Lifebar Portrait", 0x179580, 0x1795a0 },
    { L"Monochrome Palette", 0x1795a0, 0x1795c0 },
    { L"Darker Palette", 0x1795c0, 0x1795e0 },
    { L"Extra 3", 0x1795e0, 0x179600 },
    { L"MAX Flash", 0x179600, 0x179620 },
    { L"Extra 4", 0x179620, 0x179640 },
};

const sGame_PaletteDataset KOF94_A_TERRY_ALT_PALETTES[] =
{
    { L"Terry", 0x179640, 0x179660 },
    { L"Extra 1", 0x179660, 0x179680 },
    { L"Electric Palette", 0x179680, 0x1796a0 },
    { L"Extra 2", 0x1796a0, 0x1796c0 },
    { L"Win Portrait", 0x1796c0, 0x179740 },
    { L"Lifebar Portrait", 0x179740, 0x179760 },
    { L"Monochrome Palette", 0x179760, 0x179780 },
    { L"Darker Palette", 0x179780, 0x1797a0 },
    { L"Extra 3", 0x1797a0, 0x1797c0 },
    { L"MAX Flash", 0x1797c0, 0x1797e0 },
    { L"Extra 4", 0x1797e0, 0x179800 },
};

const sGame_PaletteDataset KOF94_A_TERRY_EFFECTS_PALETTES[] =
{
    { L"Fire Palette", 0x17b960, 0x17b980 },
    { L"Gigantic Pressure Palette", 0x17bce0, 0x17bd00 },
};

const sGame_PaletteDataset KOF94_A_ANDY_MAIN_PALETTES[] =
{
    { L"Andy", 0x179800, 0x179820 },
    { L"Extra 1", 0x179820, 0x179840 },
    { L"Electric Palette", 0x179840, 0x179860 },
    { L"Extra 2", 0x179860, 0x179880 },
    { L"Win Portrait", 0x179880, 0x179900 },
    { L"Lifebar Portrait", 0x179900, 0x179920 },
    { L"Monochrome Palette", 0x179920, 0x179940 },
    { L"Darker Palette", 0x179940, 0x179960 },
    { L"Extra 3", 0x179960, 0x179980 },
    { L"MAX Flash", 0x179980, 0x1799a0 },
    { L"Extra 4", 0x1799a0, 0x1799c0 },
};

const sGame_PaletteDataset KOF94_A_ANDY_ALT_PALETTES[] =
{
    { L"Andy", 0x1799c0, 0x1799e0 },
    { L"Extra 1", 0x1799e0, 0x179a00 },
    { L"Electric Palette", 0x179a00, 0x179a20 },
    { L"Extra 2", 0x179a20, 0x179a40 },
    { L"Win Portrait", 0x179a40, 0x179ac0 },
    { L"Lifebar Portrait", 0x179ac0, 0x179ae0 },
    { L"Monochrome Palette", 0x179ae0, 0x179b00 },
    { L"Darker Palette", 0x179b00, 0x179b20 },
    { L"Extra 3", 0x179b20, 0x179b40 },
    { L"MAX Flash", 0x179b40, 0x179b60 },
    { L"Extra 4", 0x179b60, 0x179b80 },
};

const sGame_PaletteDataset KOF94_A_ANDY_EFFECTS_PALETTES[] =
{
    { L"Fire Palette", 0x17b980, 0x17b9a0 },
    { L"Gigantic Pressure Palette", 0x17bd00, 0x17bd20 },
};

const sGame_PaletteDataset KOF94_A_JOE_MAIN_PALETTES[] =
{
    { L"Joe", 0x179b80, 0x179ba0 },
    { L"Extra 1", 0x179ba0, 0x179bc0 },
    { L"Electric Palette", 0x179bc0, 0x179be0 },
    { L"Extra 2", 0x179be0, 0x179c00 },
    { L"Win Portrait", 0x179c00, 0x179c80 },
    { L"Lifebar Portrait", 0x179c80, 0x179ca0 },
    { L"Monochrome Palette", 0x179ca0, 0x179cc0 },
    { L"Darker Palette", 0x179cc0, 0x179ce0 },
    { L"Extra 3", 0x179ce0, 0x179d00 },
    { L"MAX Flash", 0x179d00, 0x179d20 },
    { L"Extra 4", 0x179d20, 0x179d40 },
};

const sGame_PaletteDataset KOF94_A_JOE_ALT_PALETTES[] =
{
    { L"Joe", 0x179d40, 0x179d60 },
    { L"Extra 1", 0x179d60, 0x179d80 },
    { L"Electric Palette", 0x179d80, 0x179da0 },
    { L"Extra 2", 0x179da0, 0x179dc0 },
    { L"Win Portrait", 0x179dc0, 0x179e40 },
    { L"Lifebar Portrait", 0x179e40, 0x179e60 },
    { L"Monochrome Palette", 0x179e60, 0x179e80 },
    { L"Darker Palette", 0x179e80, 0x179ea0 },
    { L"Extra 3", 0x179ea0, 0x179ec0 },
    { L"MAX Flash", 0x179ec0, 0x179ee0 },
    { L"Extra 4", 0x179ee0, 0x179f00 },
};

const sGame_PaletteDataset KOF94_A_JOE_EFFECTS_PALETTES[] =
{
    { L"Fire Palette", 0x17b9a0, 0x17b9c0 },
    { L"Gigantic Pressure Palette", 0x17bd20, 0x17bd40 },
};

const sGame_PaletteDataset KOF94_A_RYO_MAIN_PALETTES[] =
{
    { L"Ryo", 0x179f00, 0x179f20 },
    { L"Extra 1", 0x179f20, 0x179f40 },
    { L"Electric Palette", 0x179f40, 0x179f60 },
    { L"Extra 2", 0x179f60, 0x179f80 },
    { L"Win Portrait", 0x179f80, 0x17a000 },
    { L"Lifebar Portrait", 0x17a000, 0x17a020 },
    { L"Monochrome Palette", 0x17a020, 0x17a040 },
    { L"Darker Palette", 0x17a040, 0x17a060 },
    { L"Extra 3", 0x17a060, 0x17a080 },
    { L"MAX Flash", 0x17a080, 0x17a0a0 },
    { L"Extra 4", 0x17a0a0, 0x17a0c0 },
};

const sGame_PaletteDataset KOF94_A_RYO_ALT_PALETTES[] =
{
    { L"Ryo", 0x17a0c0, 0x17a0e0 },
    { L"Extra 1", 0x17a0e0, 0x17a100 },
    { L"Electric Palette", 0x17a100, 0x17a120 },
    { L"Extra 2", 0x17a120, 0x17a140 },
    { L"Win Portrait", 0x17a140, 0x17a1c0 },
    { L"Lifebar Portrait", 0x17a1c0, 0x17a1e0 },
    { L"Monochrome Palette", 0x17a1e0, 0x17a200 },
    { L"Darker Palette", 0x17a200, 0x17a220 },
    { L"Extra 3", 0x17a220, 0x17a240 },
    { L"MAX Flash", 0x17a240, 0x17a260 },
    { L"Extra 4", 0x17a260, 0x17a280 },
};

const sGame_PaletteDataset KOF94_A_RYO_EFFECTS_PALETTES[] =
{
    { L"Fire Palette", 0x17b9c0, 0x17b9e0 },
    { L"Gigantic Pressure Palette", 0x17bd40, 0x17bd60 },
};

const sGame_PaletteDataset KOF94_A_ROBERT_MAIN_PALETTES[] =
{
    { L"Robert", 0x17a280, 0x17a2a0 },
    { L"Extra 1", 0x17a2a0, 0x17a2c0 },
    { L"Electric Palette", 0x17a2c0, 0x17a2e0 },
    { L"Extra 2", 0x17a2e0, 0x17a300 },
    { L"Win Portrait", 0x17a300, 0x17a380 },
    { L"Lifebar Portrait", 0x17a380, 0x17a3a0 },
    { L"Monochrome Palette", 0x17a3a0, 0x17a3c0 },
    { L"Darker Palette", 0x17a3c0, 0x17a3e0 },
    { L"Extra 3", 0x17a3e0, 0x17a400 },
    { L"MAX Flash", 0x17a400, 0x17a420 },
    { L"Extra 4", 0x17a420, 0x17a440 },
};

const sGame_PaletteDataset KOF94_A_ROBERT_ALT_PALETTES[] =
{
    { L"Robert", 0x17a440, 0x17a460 },
    { L"Extra 1", 0x17a460, 0x17a480 },
    { L"Electric Palette", 0x17a480, 0x17a4a0 },
    { L"Extra 2", 0x17a4a0, 0x17a4c0 },
    { L"Win Portrait", 0x17a4c0, 0x17a540 },
    { L"Lifebar Portrait", 0x17a540, 0x17a560 },
    { L"Monochrome Palette", 0x17a560, 0x17a580 },
    { L"Darker Palette", 0x17a580, 0x17a5a0 },
    { L"Extra 3", 0x17a5a0, 0x17a5c0 },
    { L"MAX Flash", 0x17a5c0, 0x17a5e0 },
    { L"Extra 4", 0x17a5e0, 0x17a600 },
};

const sGame_PaletteDataset KOF94_A_ROBERT_EFFECTS_PALETTES[] =
{
    { L"Fire Palette", 0x17b9e0, 0x17ba00 },
    { L"Gigantic Pressure Palette", 0x17bd60, 0x17bd80 },
};

const sGame_PaletteDataset KOF94_A_TAKUMA_MAIN_PALETTES[] =
{
    { L"Takuma", 0x17a600, 0x17a620 },
    { L"Extra 1", 0x17a620, 0x17a640 },
    { L"Electric Palette", 0x17a640, 0x17a660 },
    { L"Extra 2", 0x17a660, 0x17a680 },
    { L"Win Portrait", 0x17a680, 0x17a700 },
    { L"Lifebar Portrait", 0x17a700, 0x17a720 },
    { L"Monochrome Palette", 0x17a720, 0x17a740 },
    { L"Darker Palette", 0x17a740, 0x17a760 },
    { L"Extra 3", 0x17a760, 0x17a780 },
    { L"MAX Flash", 0x17a780, 0x17a7a0 },
    { L"Extra 4", 0x17a7a0, 0x17a7c0 },
};

const sGame_PaletteDataset KOF94_A_TAKUMA_ALT_PALETTES[] =
{
    { L"Takuma", 0x17a7c0, 0x17a7e0 },
    { L"Extra 1", 0x17a7e0, 0x17a800 },
    { L"Electric Palette", 0x17a800, 0x17a820 },
    { L"Extra 2", 0x17a820, 0x17a840 },
    { L"Win Portrait", 0x17a840, 0x17a8c0 },
    { L"Lifebar Portrait", 0x17a8c0, 0x17a8e0 },
    { L"Monochrome Palette", 0x17a8e0, 0x17a900 },
    { L"Darker Palette", 0x17a900, 0x17a920 },
    { L"Extra 3", 0x17a920, 0x17a940 },
    { L"MAX Flash", 0x17a940, 0x17a960 },
    { L"Extra 4", 0x17a960, 0x17a980 },
};

const sGame_PaletteDataset KOF94_A_TAKUMA_EFFECTS_PALETTES[] =
{
    { L"Fire Palette", 0x17ba00, 0x17ba20 },
    { L"Gigantic Pressure Palette", 0x17bd80, 0x17bda0 },
};

const sGame_PaletteDataset KOF94_A_YURI_MAIN_PALETTES[] =
{
    { L"Yuri", 0x17a980, 0x17a9a0 },
    { L"Extra 1", 0x17a9a0, 0x17a9c0 },
    { L"Electric Palette", 0x17a9c0, 0x17a9e0 },
    { L"Extra 2", 0x17a9e0, 0x17aa00 },
    { L"Win Portrait", 0x17aa00, 0x17aa80 },
    { L"Lifebar Portrait", 0x17aa80, 0x17aaa0 },
    { L"Monochrome Palette", 0x17aaa0, 0x17aac0 },
    { L"Darker Palette", 0x17aac0, 0x17aae0 },
    { L"Extra 3", 0x17aae0, 0x17ab00 },
    { L"MAX Flash", 0x17ab00, 0x17ab20 },
    { L"Extra 4", 0x17ab20, 0x17ab40 },
};

const sGame_PaletteDataset KOF94_A_YURI_ALT_PALETTES[] =
{
    { L"Yuri", 0x17ab40, 0x17ab60 },
    { L"Extra 1", 0x17ab60, 0x17ab80 },
    { L"Electric Palette", 0x17ab80, 0x17aba0 },
    { L"Extra 2", 0x17aba0, 0x17abc0 },
    { L"Win Portrait", 0x17abc0, 0x17ac40 },
    { L"Lifebar Portrait", 0x17ac40, 0x17ac60 },
    { L"Monochrome Palette", 0x17ac60, 0x17ac80 },
    { L"Darker Palette", 0x17ac80, 0x17aca0 },
    { L"Extra 3", 0x17aca0, 0x17acc0 },
    { L"MAX Flash", 0x17acc0, 0x17ace0 },
    { L"Extra 4", 0x17ace0, 0x17ad00 },
};

const sGame_PaletteDataset KOF94_A_YURI_EFFECTS_PALETTES[] =
{
    { L"Fire Palette", 0x17ba20, 0x17ba40 },
    { L"Gigantic Pressure Palette", 0x17bda0, 0x17bdc0 },
};

const sGame_PaletteDataset KOF94_A_MAI_MAIN_PALETTES[] =
{
    { L"Mai", 0x17ad00, 0x17ad20 },
    { L"Extra 1", 0x17ad20, 0x17ad40 },
    { L"Electric Palette", 0x17ad40, 0x17ad60 },
    { L"Extra 2", 0x17ad60, 0x17ad80 },
    { L"Win Portrait", 0x17ad80, 0x17ae00 },
    { L"Lifebar Portrait", 0x17ae00, 0x17ae20 },
    { L"Monochrome Palette", 0x17ae20, 0x17ae40 },
    { L"Darker Palette", 0x17ae40, 0x17ae60 },
    { L"Extra 3", 0x17ae60, 0x17ae80 },
    { L"MAX Flash", 0x17ae80, 0x17aea0 },
    { L"Extra 4", 0x17aea0, 0x17aec0 },
};

const sGame_PaletteDataset KOF94_A_MAI_ALT_PALETTES[] =
{
    { L"Mai", 0x17aec0, 0x17aee0 },
    { L"Extra 1", 0x17aee0, 0x17af00 },
    { L"Electric Palette", 0x17af00, 0x17af20 },
    { L"Extra 2", 0x17af20, 0x17af40 },
    { L"Win Portrait", 0x17af40, 0x17afc0 },
    { L"Lifebar Portrait", 0x17afc0, 0x17afe0 },
    { L"Monochrome Palette", 0x17afe0, 0x17b000 },
    { L"Darker Palette", 0x17b000, 0x17b020 },
    { L"Extra 3", 0x17b020, 0x17b040 },
    { L"MAX Flash", 0x17b040, 0x17b060 },
    { L"Extra 4", 0x17b060, 0x17b080 },
};

const sGame_PaletteDataset KOF94_A_MAI_EFFECTS_PALETTES[] =
{
    { L"Fire Palette", 0x17ba40, 0x17ba60 },
    { L"Gigantic Pressure Palette", 0x17bdc0, 0x17bde0 },
};

const sGame_PaletteDataset KOF94_A_KING_MAIN_PALETTES[] =
{
    { L"King", 0x17b080, 0x17b0a0 },
    { L"Extra 1", 0x17b0a0, 0x17b0c0 },
    { L"Electric Palette", 0x17b0c0, 0x17b0e0 },
    { L"Extra 2", 0x17b0e0, 0x17b100 },
    { L"Win Portrait", 0x17b100, 0x17b180 },
    { L"Lifebar Portrait", 0x17b180, 0x17b1a0 },
    { L"Monochrome Palette", 0x17b1a0, 0x17b1c0 },
    { L"Darker Palette", 0x17b1c0, 0x17b1e0 },
    { L"Extra 3", 0x17b1e0, 0x17b200 },
    { L"MAX Flash", 0x17b200, 0x17b220 },
    { L"Extra 4", 0x17b220, 0x17b240 },
};

const sGame_PaletteDataset KOF94_A_KING_ALT_PALETTES[] =
{
    { L"King", 0x17b240, 0x17b260 },
    { L"Extra 1", 0x17b260, 0x17b280 },
    { L"Electric Palette", 0x17b280, 0x17b2a0 },
    { L"Extra 2", 0x17b2a0, 0x17b2c0 },
    { L"Win Portrait", 0x17b2c0, 0x17b340 },
    { L"Lifebar Portrait", 0x17b340, 0x17b360 },
    { L"Monochrome Palette", 0x17b360, 0x17b380 },
    { L"Darker Palette", 0x17b380, 0x17b3a0 },
    { L"Extra 3", 0x17b3a0, 0x17b3c0 },
    { L"MAX Flash", 0x17b3c0, 0x17b3e0 },
    { L"Extra 4", 0x17b3e0, 0x17b400 },
};

const sGame_PaletteDataset KOF94_A_KING_EFFECTS_PALETTES[] =
{
    { L"Fire Palette", 0x17ba60, 0x17ba80 },
    { L"Gigantic Pressure Palette", 0x17bde0, 0x17be00 },
};

const sGame_PaletteDataset KOF94_A_RUGAL_MAIN_PALETTES[] =
{
    { L"Rugal", 0x17b400, 0x17b420 },
    { L"Extra 1", 0x17b420, 0x17b440 },
    { L"Electric Palette", 0x17b440, 0x17b460 },
    { L"Electric Palette Extra", 0x17b460, 0x17b480 },
    { L"Win Portrait", 0x17b480, 0x17b500 },
    { L"Lifebar Portrait", 0x17b500, 0x17b520 },
    { L"Monochrome Palette", 0x17b520, 0x17b540 },
    { L"Darker Palette", 0x17b540, 0x17b560 },
    { L"Extra 3", 0x17b560, 0x17b580 },
    { L"MAX Flash", 0x17b580, 0x17b5a0 },
    { L"MAX Flash Extra", 0x17b5a0, 0x17b5c0 },
};

const sGame_PaletteDataset KOF94_A_RUGAL_ALT_PALETTES[] =
{
    { L"Rugal", 0x17b5c0, 0x17b5e0 },
    { L"Extra 1", 0x17b5e0, 0x17b600 },
    { L"Electric Palette", 0x17b600, 0x17b620 },
    { L"Electric Palette Extra", 0x17b620, 0x17b640 },
    { L"Win Portrait", 0x17b640, 0x17b6c0 },
    { L"Lifebar Portrait", 0x17b6c0, 0x17b6e0 },
    { L"Monochrome Palette", 0x17b6e0, 0x17b700 },
    { L"Darker Palette", 0x17b700, 0x17b720 },
    { L"Extra 3", 0x17b720, 0x17b740 },
    { L"MAX Flash", 0x17b740, 0x17b760 },
    { L"MAX Flash Extra", 0x17b760, 0x17b780 },
};

const sGame_PaletteDataset KOF94_A_RUGAL_EFFECTS_PALETTES[] =
{
    { L"Fire Palette", 0x17ba80, 0x17baa0 },
    { L"Gigantic Pressure Palette", 0x17be00, 0x17be20 },
};

const sDescTreeNode KOF94_A_HEIDERN_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_HEIDERN_MAIN_PALETTES, ARRAYSIZE(KOF94_A_HEIDERN_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_HEIDERN_ALT_PALETTES, ARRAYSIZE(KOF94_A_HEIDERN_ALT_PALETTES) },
//    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF94_A_HEIDERN_EFFECTS_PALETTES, ARRAYSIZE(KOF94_A_HEIDERN_EFFECTS_PALETTES) },
};

const sDescTreeNode KOF94_A_RALF_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_RALF_MAIN_PALETTES, ARRAYSIZE(KOF94_A_RALF_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_RALF_ALT_PALETTES, ARRAYSIZE(KOF94_A_RALF_ALT_PALETTES) },
//    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF94_A_RALF_EFFECTS_PALETTES, ARRAYSIZE(KOF94_A_RALF_EFFECTS_PALETTES) },
};

const sDescTreeNode KOF94_A_CLARK_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_CLARK_MAIN_PALETTES, ARRAYSIZE(KOF94_A_CLARK_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_CLARK_ALT_PALETTES, ARRAYSIZE(KOF94_A_CLARK_ALT_PALETTES) },
//    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF94_A_CLARK_EFFECTS_PALETTES, ARRAYSIZE(KOF94_A_CLARK_EFFECTS_PALETTES) },
};

const sDescTreeNode KOF94_A_ATHENA_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_ATHENA_MAIN_PALETTES, ARRAYSIZE(KOF94_A_ATHENA_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_ATHENA_ALT_PALETTES, ARRAYSIZE(KOF94_A_ATHENA_ALT_PALETTES) },
//    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF94_A_ATHENA_EFFECTS_PALETTES, ARRAYSIZE(KOF94_A_ATHENA_EFFECTS_PALETTES) },
};

const sDescTreeNode KOF94_A_KENSOU_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_KENSOU_MAIN_PALETTES, ARRAYSIZE(KOF94_A_KENSOU_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_KENSOU_ALT_PALETTES, ARRAYSIZE(KOF94_A_KENSOU_ALT_PALETTES) },
//    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF94_A_KENSOU_EFFECTS_PALETTES, ARRAYSIZE(KOF94_A_KENSOU_EFFECTS_PALETTES) },
};

const sDescTreeNode KOF94_A_CHIN_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_CHIN_MAIN_PALETTES, ARRAYSIZE(KOF94_A_CHIN_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_CHIN_ALT_PALETTES, ARRAYSIZE(KOF94_A_CHIN_ALT_PALETTES) },
//    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF94_A_CHIN_EFFECTS_PALETTES, ARRAYSIZE(KOF94_A_CHIN_EFFECTS_PALETTES) },
};

const sDescTreeNode KOF94_A_KYO_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_KYO_MAIN_PALETTES, ARRAYSIZE(KOF94_A_KYO_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_KYO_ALT_PALETTES, ARRAYSIZE(KOF94_A_KYO_ALT_PALETTES) },
//    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF94_A_KYO_EFFECTS_PALETTES, ARRAYSIZE(KOF94_A_KYO_EFFECTS_PALETTES) },
};

const sDescTreeNode KOF94_A_BENIMARU_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_BENIMARU_MAIN_PALETTES, ARRAYSIZE(KOF94_A_BENIMARU_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_BENIMARU_ALT_PALETTES, ARRAYSIZE(KOF94_A_BENIMARU_ALT_PALETTES) },
//    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF94_A_BENIMARU_EFFECTS_PALETTES, ARRAYSIZE(KOF94_A_BENIMARU_EFFECTS_PALETTES) },
};

const sDescTreeNode KOF94_A_DAIMON_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_DAIMON_MAIN_PALETTES, ARRAYSIZE(KOF94_A_DAIMON_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_DAIMON_ALT_PALETTES, ARRAYSIZE(KOF94_A_DAIMON_ALT_PALETTES) },
//    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF94_A_DAIMON_EFFECTS_PALETTES, ARRAYSIZE(KOF94_A_DAIMON_EFFECTS_PALETTES) },
};

const sDescTreeNode KOF94_A_HEAVYD_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_HEAVYD_MAIN_PALETTES, ARRAYSIZE(KOF94_A_HEAVYD_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_HEAVYD_ALT_PALETTES, ARRAYSIZE(KOF94_A_HEAVYD_ALT_PALETTES) },
//    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF94_A_HEAVYD_EFFECTS_PALETTES, ARRAYSIZE(KOF94_A_HEAVYD_EFFECTS_PALETTES) },
};

const sDescTreeNode KOF94_A_LUCKY_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_LUCKY_MAIN_PALETTES, ARRAYSIZE(KOF94_A_LUCKY_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_LUCKY_ALT_PALETTES, ARRAYSIZE(KOF94_A_LUCKY_ALT_PALETTES) },
//    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF94_A_LUCKY_EFFECTS_PALETTES, ARRAYSIZE(KOF94_A_LUCKY_EFFECTS_PALETTES) },
};

const sDescTreeNode KOF94_A_BRIAN_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_BRIAN_MAIN_PALETTES, ARRAYSIZE(KOF94_A_BRIAN_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_BRIAN_ALT_PALETTES, ARRAYSIZE(KOF94_A_BRIAN_ALT_PALETTES) },
//    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF94_A_BRIAN_EFFECTS_PALETTES, ARRAYSIZE(KOF94_A_BRIAN_EFFECTS_PALETTES) },
};

const sDescTreeNode KOF94_A_KIM_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_KIM_MAIN_PALETTES, ARRAYSIZE(KOF94_A_KIM_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_KIM_ALT_PALETTES, ARRAYSIZE(KOF94_A_KIM_ALT_PALETTES) },
//    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF94_A_KIM_EFFECTS_PALETTES, ARRAYSIZE(KOF94_A_KIM_EFFECTS_PALETTES) },
};

const sDescTreeNode KOF94_A_CHANG_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_CHANG_MAIN_PALETTES, ARRAYSIZE(KOF94_A_CHANG_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_CHANG_ALT_PALETTES, ARRAYSIZE(KOF94_A_CHANG_ALT_PALETTES) },
//    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF94_A_CHANG_EFFECTS_PALETTES, ARRAYSIZE(KOF94_A_CHANG_EFFECTS_PALETTES) },
};

const sDescTreeNode KOF94_A_CHOI_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_CHOI_MAIN_PALETTES, ARRAYSIZE(KOF94_A_CHOI_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_CHOI_ALT_PALETTES, ARRAYSIZE(KOF94_A_CHOI_ALT_PALETTES) },
//    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF94_A_CHOI_EFFECTS_PALETTES, ARRAYSIZE(KOF94_A_CHOI_EFFECTS_PALETTES) },
};

const sDescTreeNode KOF94_A_TERRY_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_TERRY_MAIN_PALETTES, ARRAYSIZE(KOF94_A_TERRY_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_TERRY_ALT_PALETTES, ARRAYSIZE(KOF94_A_TERRY_ALT_PALETTES) },
//    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF94_A_TERRY_EFFECTS_PALETTES, ARRAYSIZE(KOF94_A_TERRY_EFFECTS_PALETTES) },
};

const sDescTreeNode KOF94_A_ANDY_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_ANDY_MAIN_PALETTES, ARRAYSIZE(KOF94_A_ANDY_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_ANDY_ALT_PALETTES, ARRAYSIZE(KOF94_A_ANDY_ALT_PALETTES) },
//    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF94_A_ANDY_EFFECTS_PALETTES, ARRAYSIZE(KOF94_A_ANDY_EFFECTS_PALETTES) },
};

const sDescTreeNode KOF94_A_JOE_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_JOE_MAIN_PALETTES, ARRAYSIZE(KOF94_A_JOE_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_JOE_ALT_PALETTES, ARRAYSIZE(KOF94_A_JOE_ALT_PALETTES) },
//    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF94_A_JOE_EFFECTS_PALETTES, ARRAYSIZE(KOF94_A_JOE_EFFECTS_PALETTES) },
};

const sDescTreeNode KOF94_A_RYO_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_RYO_MAIN_PALETTES, ARRAYSIZE(KOF94_A_RYO_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_RYO_ALT_PALETTES, ARRAYSIZE(KOF94_A_RYO_ALT_PALETTES) },
//    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF94_A_RYO_EFFECTS_PALETTES, ARRAYSIZE(KOF94_A_RYO_EFFECTS_PALETTES) },
};

const sDescTreeNode KOF94_A_ROBERT_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_ROBERT_MAIN_PALETTES, ARRAYSIZE(KOF94_A_ROBERT_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_ROBERT_ALT_PALETTES, ARRAYSIZE(KOF94_A_ROBERT_ALT_PALETTES) },
//    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF94_A_ROBERT_EFFECTS_PALETTES, ARRAYSIZE(KOF94_A_ROBERT_EFFECTS_PALETTES) },
};

const sDescTreeNode KOF94_A_TAKUMA_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_TAKUMA_MAIN_PALETTES, ARRAYSIZE(KOF94_A_TAKUMA_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_TAKUMA_ALT_PALETTES, ARRAYSIZE(KOF94_A_TAKUMA_ALT_PALETTES) },
//    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF94_A_TAKUMA_EFFECTS_PALETTES, ARRAYSIZE(KOF94_A_TAKUMA_EFFECTS_PALETTES) },
};

const sDescTreeNode KOF94_A_YURI_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_YURI_MAIN_PALETTES, ARRAYSIZE(KOF94_A_YURI_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_YURI_ALT_PALETTES, ARRAYSIZE(KOF94_A_YURI_ALT_PALETTES) },
//    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF94_A_YURI_EFFECTS_PALETTES, ARRAYSIZE(KOF94_A_YURI_EFFECTS_PALETTES) },
};

const sDescTreeNode KOF94_A_MAI_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_MAI_MAIN_PALETTES, ARRAYSIZE(KOF94_A_MAI_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_MAI_ALT_PALETTES, ARRAYSIZE(KOF94_A_MAI_ALT_PALETTES) },
//    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF94_A_MAI_EFFECTS_PALETTES, ARRAYSIZE(KOF94_A_MAI_EFFECTS_PALETTES) },
};

const sDescTreeNode KOF94_A_KING_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_KING_MAIN_PALETTES, ARRAYSIZE(KOF94_A_KING_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_KING_ALT_PALETTES, ARRAYSIZE(KOF94_A_KING_ALT_PALETTES) },
//    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF94_A_KING_EFFECTS_PALETTES, ARRAYSIZE(KOF94_A_KING_EFFECTS_PALETTES) },
};

const sDescTreeNode KOF94_A_RUGAL_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOF94_A_RUGAL_MAIN_PALETTES, ARRAYSIZE(KOF94_A_RUGAL_MAIN_PALETTES) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOF94_A_RUGAL_ALT_PALETTES, ARRAYSIZE(KOF94_A_RUGAL_ALT_PALETTES) },
//    { L"Effects", DESC_NODETYPE_TREE, (void*)KOF94_A_RUGAL_EFFECTS_PALETTES, ARRAYSIZE(KOF94_A_RUGAL_EFFECTS_PALETTES) },
};

const sDescTreeNode KOF94_A_UNITS[] =
{
    { L"Heidern", DESC_NODETYPE_TREE, (void*)KOF94_A_HEIDERN_COLLECTION, ARRAYSIZE(KOF94_A_HEIDERN_COLLECTION) },
    { L"Ralf", DESC_NODETYPE_TREE, (void*)KOF94_A_RALF_COLLECTION, ARRAYSIZE(KOF94_A_RALF_COLLECTION) },
    { L"Clark", DESC_NODETYPE_TREE, (void*)KOF94_A_CLARK_COLLECTION, ARRAYSIZE(KOF94_A_CLARK_COLLECTION) },
    { L"Athena", DESC_NODETYPE_TREE, (void*)KOF94_A_ATHENA_COLLECTION, ARRAYSIZE(KOF94_A_ATHENA_COLLECTION) },
    { L"Kensou", DESC_NODETYPE_TREE, (void*)KOF94_A_KENSOU_COLLECTION, ARRAYSIZE(KOF94_A_KENSOU_COLLECTION) },
    { L"Chin", DESC_NODETYPE_TREE, (void*)KOF94_A_CHIN_COLLECTION, ARRAYSIZE(KOF94_A_CHIN_COLLECTION) },
    { L"Kyo", DESC_NODETYPE_TREE, (void*)KOF94_A_KYO_COLLECTION, ARRAYSIZE(KOF94_A_KYO_COLLECTION) },
    { L"Benimaru", DESC_NODETYPE_TREE, (void*)KOF94_A_BENIMARU_COLLECTION, ARRAYSIZE(KOF94_A_BENIMARU_COLLECTION) },
    { L"Daimon", DESC_NODETYPE_TREE, (void*)KOF94_A_DAIMON_COLLECTION, ARRAYSIZE(KOF94_A_DAIMON_COLLECTION) },
    { L"Heavy D!", DESC_NODETYPE_TREE, (void*)KOF94_A_HEAVYD_COLLECTION, ARRAYSIZE(KOF94_A_HEAVYD_COLLECTION) },
    { L"Lucky", DESC_NODETYPE_TREE, (void*)KOF94_A_LUCKY_COLLECTION, ARRAYSIZE(KOF94_A_LUCKY_COLLECTION) },
    { L"Brian", DESC_NODETYPE_TREE, (void*)KOF94_A_BRIAN_COLLECTION, ARRAYSIZE(KOF94_A_BRIAN_COLLECTION) },
    { L"Kim", DESC_NODETYPE_TREE, (void*)KOF94_A_KIM_COLLECTION, ARRAYSIZE(KOF94_A_KIM_COLLECTION) },
    { L"Chang", DESC_NODETYPE_TREE, (void*)KOF94_A_CHANG_COLLECTION, ARRAYSIZE(KOF94_A_CHANG_COLLECTION) },
    { L"Choi", DESC_NODETYPE_TREE, (void*)KOF94_A_CHOI_COLLECTION, ARRAYSIZE(KOF94_A_CHOI_COLLECTION) },
    { L"Terry", DESC_NODETYPE_TREE, (void*)KOF94_A_TERRY_COLLECTION, ARRAYSIZE(KOF94_A_TERRY_COLLECTION) },
    { L"Andy", DESC_NODETYPE_TREE, (void*)KOF94_A_ANDY_COLLECTION, ARRAYSIZE(KOF94_A_ANDY_COLLECTION) },
    { L"Joe", DESC_NODETYPE_TREE, (void*)KOF94_A_JOE_COLLECTION, ARRAYSIZE(KOF94_A_JOE_COLLECTION) },
    { L"Ryo", DESC_NODETYPE_TREE, (void*)KOF94_A_RYO_COLLECTION, ARRAYSIZE(KOF94_A_RYO_COLLECTION) },
    { L"Robert", DESC_NODETYPE_TREE, (void*)KOF94_A_ROBERT_COLLECTION, ARRAYSIZE(KOF94_A_ROBERT_COLLECTION) },
    { L"Takuma", DESC_NODETYPE_TREE, (void*)KOF94_A_TAKUMA_COLLECTION, ARRAYSIZE(KOF94_A_TAKUMA_COLLECTION) },
    { L"Yuri", DESC_NODETYPE_TREE, (void*)KOF94_A_YURI_COLLECTION, ARRAYSIZE(KOF94_A_YURI_COLLECTION) },
    { L"Mai", DESC_NODETYPE_TREE, (void*)KOF94_A_MAI_COLLECTION, ARRAYSIZE(KOF94_A_MAI_COLLECTION) },
    { L"King", DESC_NODETYPE_TREE, (void*)KOF94_A_KING_COLLECTION, ARRAYSIZE(KOF94_A_KING_COLLECTION) },
    { L"Rugal", DESC_NODETYPE_TREE, (void*)KOF94_A_RUGAL_COLLECTION, ARRAYSIZE(KOF94_A_RUGAL_COLLECTION) },
};

constexpr auto KOF94_A_NUMUNIT = ARRAYSIZE(KOF94_A_UNITS);

#define KOF94_A_EXTRALOC KOF94_A_NUMUNIT

// We extend this array with data groveled from the extras file, if any.
const stExtraDef KOF94_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};
