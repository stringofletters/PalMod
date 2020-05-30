#pragma once

enum Supported_MSHVSF_6A_PaletteListIndex
{
    index_MSHVSF_ArmoredSpiderMan,
    index_MSHVSF_Blackheart_Mephisto,
    index_MSHVSF_CaptainAmerica,
    index_MSHVSF_ChunLi,
    index_MSHVSF_CyberGouki,
    index_MSHVSF_Cyclops,
    index_MSHVSF_Dan,
    index_MSHVSF_DarkSakura,
    index_MSHVSF_Dhalsim,
    index_MSHVSF_Gouki,
    index_MSHVSF_Hulk,
    index_MSHVSF_Ken,
    index_MSHVSF_MBison,
    index_MSHVSF_MechZangief,
    index_MSHVSF_Norimaro,
    index_MSHVSF_OmegaRed,
    index_MSHVSF_Ryu,
    index_MSHVSF_Sakura,
    index_MSHVSF_Shadow,
    index_MSHVSF_ShumaGorath,
    index_MSHVSF_SpiderMan,
    index_MSHVSF_USAgent,
    index_MSHVSF_Wolverine,
    index_MSHVSF_Zangief,
    index_MSHVSF_Apocalypse,
    index_MSHVSF_Extras,
    index_MSHVSF_6A_Last
};

enum Supported_MSHVSF_7B_PaletteListIndex
{
    index_MSHVSF_7B_Extras,
    index_MSHVSF_7B_Last
};

constexpr auto MSHVSF_A_NUM_IND_6A = index_MSHVSF_6A_Last;
constexpr auto MSHVSF_A_NUM_IND_7B = index_MSHVSF_7B_Last;

#define MSHVSF_A_EXTRALOC_6A MSHVSF_A_NUM_IND_6A
#define MSHVSF_A_EXTRALOC_7B MSHVSF_A_NUM_IND_7B

const sGame_PaletteDataset MSHVSF_A_APOCALYPSE_PALETTES_SHARED[] =
{
    { "Small Body (Intro)", 0x71ECE, 0x71EEE, 0x4F, 0x00 },
    { "Giant Head",         0x71E8E, 0x71EAE, 0x4F, 0x01 },
    { "Giant Body",         0x59EF4, 0x59F34, 0x4F, 0x03 },
    { "Giant Arm",          0x71E6E, 0x71E8E, 0x4F, 0x02 },
    { "Shoulder Gun",       0x71EAE, 0x71ECE, 0x4F, 0x04 },
    { "Shockwave",          0x71EEE, 0x71F0E },
    { "?",                  0x71F0E, 0x71F2E },
    { "Apocalypse Drone",   0x71F2E, 0x71F4E, 0x4F, 0x05 },
    { "Hand: Mace and Drill", 0x71F4E, 0x71F6E },
};

const sGame_PaletteDataset MSHVSF_A_ARMORED_SPIDERMAN_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)",        0x7340E, 0x7342E, 0x0C },
    { "Extra 01: webs",          0x7342E, 0x7344E, 0x0C, 2 },
};

const sGame_PaletteDataset MSHVSF_A_ARMORED_SPIDERMAN_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)",        0x7346E, 0x7348E, 0x0C },
    { "Extra 02: webs",         0x7348E, 0x734AE, 0x0C, 2 },
};

const sGame_PaletteDataset MSHVSF_A_BLACKHEART_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)",       0x7258E, 0x725AE, 0x35 },
    { "Extra 01",               0x725AE, 0x725CE },
};
const sGame_PaletteDataset MSHVSF_A_BLACKHEART_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)",        0x725EE, 0x7260E, 0x35 },
    { "Extra 02",               0x7260E, 0x7262E },
};

const sGame_PaletteDataset MSHVSF_A_MEPHISTO_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)",        0x7334E, 0x7336E, 0x35 },
};
const sGame_PaletteDataset MSHVSF_A_MEPHISTO_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)",        0x733AE, 0x733CE, 0x35 },
};

const sGame_PaletteDataset MSHVSF_A_BLACKHEART_MEPHISTO_PALETTES_SHARED[] =
{
    //{ "P1 Extras 1?", 0x76BEE, 0x76C0E, }, // doesn't match mvc2 anything bugbug
    { "P1 HP/HK Demons", 0x769CE, 0x769EE, 0x35, 0x02 },
    { "Blackheart P1 HP/HK Demons (hurt)", 0x725CE, 0x725EE, indexCPS2_Blackheart, 0x02 },
    { "Mephisto P1 HP/HK Demons (hurt)", 0x7338E, 0x733AE, indexCPS2_Blackheart, 0x02 },
    { "P2 HP/HK Demons", 0x76B4E, 0x76B6E, indexCPS2_Blackheart, 0x02 },
    { "Blackheart P2 HP/HK Demons (hurt)", 0x7262E, 0x7264E, 0x35, 0x02 },
    { "Mephisto P2 HP/HK Demons (hurt)", 0x733EE, 0x7340E, 0x35, 0x02 },
    { "HCF+P Dark Thunder", 0x769EE, 0x76A0E, indexCPS2_Blackheart, 0x01 },
    { "HCB+LP (Thunder Inferno)", 0x76A0E, 0x76A2E, indexCPS2_Blackheart, 0x09 },
    { "HCB+MP (Ice Inferno)", 0x76A2E, 0x76A4E, indexCPS2_Blackheart, 0x08 },
    { "HCB+HP (Flame Inferno)", 0x76A4E, 0x76A6E, indexCPS2_Blackheart, 0x0A },
    { "Armageddon Meteors (QCF+3P)", 0x76A8E, 0x76AAE, indexCPS2_Blackheart, 0x0B },
    { "Heart of Darkness (QCF+3K)", 0x76BAE, 0x76BCE },
    { "j.MP Lightning (All)", 0x76BCE, 0x76BEE, indexCPS2_Blackheart, 0x0D },
    { "MP/HP Throw (Ground)", 0x76AAE, 0x76ACE, indexCPS2_Blackheart, 0x0C },
};

const sGame_PaletteDataset MSHVSF_A_CAPTAIN_AMERICA_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)",           0x7210E, 0x7212E, 0x0B, 0, &pairCaptainAmericaShield },
    { "P1 Shield",                  0x7212E, 0x7214E, 0x0B, 1 },
    { "P1 Charging Star",           0x7214E, 0x7216E, 0x0B, 2 },

};
const sGame_PaletteDataset MSHVSF_A_CAPTAIN_AMERICA_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)",            0x7216E, 0x7218E, 0x0B, 0, &pairCaptainAmericaShield },
    { "P2 Shield",                  0x7218E, 0x721AE, 0x0B, 1 },
    { "P2 Charging Star",           0x721AE, 0x721CE, 0x0B, 2 },
};

const sGame_PaletteDataset MSHVSF_A_CHUNLI_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)",   0x727CE, 0x727EE, 0x1B },
    { "P1 Extras 1",        0x727EE, 0x7280E, 0x1B, 1 },
    { "P1 Kikosho",         0x7280E, 0x7282E, 0x1B, 2 },
};
const sGame_PaletteDataset MSHVSF_A_CHUNLI_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)",    0x7282E, 0x7284E, 0x1B },
    { "P2 Extras 1",        0x7284E, 0x7286E, 0x1B, 1 },
    { "P2 Kikosho",         0x7286E, 0x7288E, 0x1B, 2 },
};

const sGame_PaletteDataset MSHVSF_A_CYBER_GOUKI_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)", 0x72ECE, 0x72EEE, indexCPS2_Akuma, 0, &pairHandledInCode },
    { "P1 Machinery, Hadouken 2", 0x72F0E, 0x72F2E, indexCPS2_CyberAkuma, 0 },
    { "P1 Hadouken 1 Tatsu Flames", 0x72EEE, 0x72F0E, indexCPS2_Akuma, 1 },
};
const sGame_PaletteDataset MSHVSF_A_CYBER_GOUKI_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)", 0x72F2E, 0x72F4E, indexCPS2_Akuma, 0, &pairHandledInCode },
    { "P2 Machinery, Hadouken 2", 0x72F6E, 0x72F8E, indexCPS2_CyberAkuma, 0 },
    { "P2 Hadouken 1 Tatsu Flames", 0x72F4E, 0x72F6E, indexCPS2_Akuma, 1 },
};

const sGame_PaletteDataset MSHVSF_A_CYCLOPS_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)", 0x71F8E, 0x71FAE, 0x06 },
    { "P1 HK Extra", 0x71FAE, 0x71FCE, 0x06, 1 },
    { "P1 Optic Blast Super", 0x71FCE, 0x71FEE, 0x06, 2 },
    { "P1 Intro 1", 0x7616E, 0x7618E, 0x06 },
    { "P1 Intro 2", 0x7618E, 0x761AE, 0x06 },
    { "P1 Intro 3", 0x761AE, 0x761CE, 0x06 },
    { "P1 Intro 4", 0x761CE, 0x761EE, 0x06 },
    { "P1 Intro 5", 0x761EE, 0x7620E, 0x06 },
    { "P1 Intro 6", 0x7620E, 0x7622E, 0x06 },
    { "P1 Intro 7", 0x7622E, 0x7624E, 0x06 },
    { "P1 Intro 8", 0x7624E, 0x7626E, 0x06 },
    { "P1 Extra Lighting", 0x7640E, 0x7642E, 0x06 },
};
const sGame_PaletteDataset MSHVSF_A_CYCLOPS_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)", 0x71FEE, 0x7200E, 0x06 },
    { "P2 HK Extra", 0x7200E, 0x7202E, 0x06, 1 },
    { "P2 Optic Blast Super", 0x7202E, 0x7204E, 0x06, 2 },
    { "P2 Intro 1", 0x7626E, 0x7628E, 0x06 },
    { "P2 Intro 2", 0x7628E, 0x762AE, 0x06 },
    { "P2 Intro 3", 0x762AE, 0x762CE, 0x06 },
    { "P2 Intro 4", 0x762CE, 0x762EE, 0x06 },
    { "P2 Intro 5", 0x762EE, 0x7630E, 0x06 },
    { "P2 Intro 6", 0x7630E, 0x7632E, 0x06 },
    { "P2 Intro 7", 0x7632E, 0x7634E, 0x06 },
    { "P2 Intro 8", 0x7634E, 0x7636E, 0x06 },
    { "P2 Extra Lighting 2", 0x7644E, 0x7646E, 0x06 },
};
const sGame_PaletteDataset MSHVSF_A_CYCLOPS_PALETTES_SHARED[] =
{
    { "P1 Optic Light Extra?", 0x7642E, 0x7644E, 0x06 },
    { "P2 Laser FX", 0x720EE, 0x7210E, 0x06, 3 },
    { "P2 Optic Blast Palette?", 0x7638E, 0x763AE },
};

const sGame_PaletteDataset MSHVSF_A_DAN_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)",        0x72E0E, 0x72E2E,  0x23 },
    { "P1 gadoken", 0x72E2E, 0x72E4E, 0x23, 1 },
};
const sGame_PaletteDataset MSHVSF_A_DAN_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)",        0x72E6E, 0x72E8E, 0x23 },
    { "P2 gadoken", 0x72E8E, 0x72EAE, 0x23, 1 },
};

const sGame_PaletteDataset MSHVSF_A_DARK_SAKURA_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)",        0x7310E, 0x7312E,  0x22 },
    { "P1 Hadouken", 0x7312E, 0x7314E, 0x27, 1 },
};
const sGame_PaletteDataset MSHVSF_A_DARK_SAKURA_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)",        0x7316E, 0x7318E, 0x22 },
    { "P2 Hadouken", 0x7318E, 0x731AE, 0x27, 1 },
};

const sGame_PaletteDataset MSHVSF_A_DHALSIM_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)",        0x7288E, 0x728AE, 0x25 },
    { "P1 Extras 1 Flames",      0x728AE, 0x728CE, 0x25, 1 },
    { "P1 Extras Sally",         0x728CE, 0x728EE, 0x25, 2 },
    { "P1 Teleport 1", 0x76CCE, 0x76CEE, 0x25, 0xb },
    { "P1 Teleport 2", 0x76CEE, 0x76D0E, 0x25, 0xb },
    { "P1 Teleport 3", 0x76D0E, 0x76D2E, 0x25, 0xb },
    { "P1 Teleport 4", 0x76D2E, 0x76D4E, 0x25, 0xb },
    //{ "P1 Teleport 5", 0x76D4E, 0x76D6E, 0x25, 0xb }, // This is just the all-white frame.

};
const sGame_PaletteDataset MSHVSF_A_DHALSIM_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)",        0x728EE, 0x7290E, 0x25 },
    { "P2 Extras 1 Flames",     0x7290E, 0x7292E, 0x25, 1 },
    { "P2 Extras Sally",        0x7292E, 0x7294E, 0x25, 2 },
    { "P2 Teleport 1",          0x76D6E, 0x76D8E, 0x25, 0xb },
    { "P2 Teleport 2",          0x76D8E, 0x76DAE, 0x25, 0xb },
    { "P2 Teleport 3",          0x76DAE, 0x76DCE, 0x25, 0xb },
    { "P2 Teleport 4",          0x76DCE, 0x76DEE, 0x25, 0xb },
};

const sGame_PaletteDataset MSHVSF_A_GOUKI_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)",        0x72BCE, 0x72BEE, 0x1E },
    { "Extra 01 Hadouken",       0x72BEE, 0x72C0E, 0x1E, 1 },
    { "Extra 02 Shoryuken",      0x72C0E, 0x72C2E, 0x27, 2 },
};
const sGame_PaletteDataset MSHVSF_A_GOUKI_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)",         0x72C2E, 0x72C4E, 0x1E },
    { "Extra 01 Hadouken",       0x72C4E, 0x72C6E, 0x1E, 1 },
    { "Extra 02 Shoryuken",      0x72C6E, 0x72C8E, 0x27, 2 },
};

const sGame_PaletteDataset MSHVSF_A_HULK_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)",        0x721CE, 0x721EE, 0x0D },
    { "P1 Extras 1",             0x721EE, 0x7220E, 0x0D, 1 },
    { "P1 Extras 2",             0x7220E, 0x7222E, 0x0D, 2 },
};
const sGame_PaletteDataset MSHVSF_A_HULK_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)",         0x7222E, 0x7224E, 0x0D },
    { "P2 Extras 1",             0x7224E, 0x7226E, 0x0D, 1 },
    { "P2 Extras 2 ",            0x7226E, 0x7228E, 0x0D, 2 },
};

const sGame_PaletteDataset MSHVSF_A_KEN_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)",        0x7270E, 0x7272E, 0x27 },
    { "P1 Hadouken",             0x7272E, 0x7274E, 0x27, 1 },
    { "P1 Shoryuken",            0x7274E, 0x7276E, 0x27, 2 },
};
const sGame_PaletteDataset MSHVSF_A_KEN_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)", 0x7276E, 0x7278E, 0x27 },
    { "P2 Hadouken", 0x7278E, 0x727AE, 0x27, 1 },
    { "P2 Shoryuken", 0x727AE, 0x727CE, 0x27, 2 },
};

const sGame_PaletteDataset MSHVSF_A_MBIPSON_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)",       0x72B0E, 0x72B2E,  0x26 },
    { "P1 Extras 1",            0x72B2E, 0x72B4E, },
    { "P1 Extras 2",            0x72B4E, 0x72B6E, },
    { "P1 Extras 3",            0x7708E, 0x770AE, },
    { "P1 Extras 4",            0x770AE, 0x770CE, },
};
const sGame_PaletteDataset MSHVSF_A_MBIPSON_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)",        0x72B6E, 0x72B8E, 0x26 },
    { "P2 Extras 1",            0x72B8E, 0x72BAE, },
    { "P2 Extras 2",            0x72BAE, 0x72BCE, },
    { "P2 Extras 3",            0x770CE, 0x770EE, },
    { "P2 Extras 4",            0x770EE, 0x7710E, }, 
};

const sGame_PaletteDataset MSHVSF_A_MECH_ZANGIEF_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)",       0x72F8E, 0x72FAE, 0x01 },
    { "P1 Vodka Fire",          0x72FAE, 0x72FCE, 0x01, 3 },
};
const sGame_PaletteDataset MSHVSF_A_MECH_ZANGIEF_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)",        0x72FEE, 0x7300E, 0x01 },
    { "P2 Vodka Fire",          0x7300E, 0x7302E, 0x01, 3 },
};
const sGame_PaletteDataset MSHVSF_A_MECH_ZANGIEF_PALETTES_SHARED[] =
{
    { "P1+P2 Super Armor ", 0x7304E, 0x7306E, 0x01 },
};

const sGame_PaletteDataset MSHVSF_A_NORIMARO_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)",       0x72D4E, 0x72D6E, 0x53 },
    { "P1 Extras 1",            0x7710E, 0x7712E, 0x53 },
    { "P1 Extras 2",            0x7716E, 0x7718E, },
};
const sGame_PaletteDataset MSHVSF_A_NORIMARO_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)",        0x72DAE, 0x72DCE, 0x53 },
    { "P2 Extras 1",            0x7718E, 0x771AE, 0x53 },
    { "P2 Extras 2",            0x72DCE, 0x72DEE, },
};
const sGame_PaletteDataset MSHVSF_A_NORIMARO_PALETTES_EXTRAS[] =
{
    { "P1 Extras 3",            0x72D6E, 0x72D8E, }
};

const sGame_PaletteDataset MSHVSF_A_OMEGARED_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)",       0x7240E, 0x7242E, 0x30 },
    { "P1 Intro 1", 0x764AE, 0x764CE, 0x30 }, 
    { "P1 Intro 2", 0x764CE, 0x764EE, 0x30 },
    { "P1 Intro 3", 0x764EE, 0x7650E, 0x30 },
    { "P1 Intro 4", 0x7650E, 0x7652E, 0x30 },
    { "P1 Intro Shockwave 1", 0x7242E, 0x7244E, 0x30, 1 },
    { "P1 Intro Shockwave 2", 0x7244E, 0x7246E, 0x30, 1 },
};
const sGame_PaletteDataset MSHVSF_A_OMEGARED_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)",       0x7246E, 0x7248E, 0x30 },
    { "P2 Intro 1", 0x7652E, 0x7654E, 0x30 },
    { "P2 Intro 2", 0x7654E, 0x7656E, 0x30 },
    { "P2 Intro 3", 0x7656E, 0x7658E, 0x30 },
    { "P2 Intro 4", 0x7658E, 0x765AE, 0x30 },
    { "P2 Intro Shockwave 1", 0x7248E, 0x724AE, 0x30, 1 },
    { "P2 Intro Shockwave 2", 0x724AE, 0x724CE, 0x30, 2 },

};
const sGame_PaletteDataset MSHVSF_A_RYU_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)",        0x7264E, 0x7266E, 0x00 },
    { "P1 Hadouken", 0x7266E, 0x7268E, 0x00, 1 },
    { "P1 Shoryuken", 0x7268E, 0x726AE, 0x27, 2 },
};
const sGame_PaletteDataset MSHVSF_A_RYU_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)",        0x726AE, 0x726CE,  0x00 },
    { "P2 Hadouken", 0x726CE, 0x726EE, 0x00, 1 },
    { "P2 Shoryuken", 0x726EE, 0x7270E, 0x27, 2 },
};

const sGame_PaletteDataset MSHVSF_A_SAKURA_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)",        0x72C8E, 0x72CAE,  0x22 },
    { "P1 Extras 1 Hadouken", 0x72CAE, 0x72CCE, 0x27, 1 },
    { "P1 Extras 2 Friend", 0x77FCE, 0x77FEE, },
    { "P1 Extras 3 Bag", 0x77FEE, 0x7800E, },
};
const sGame_PaletteDataset MSHVSF_A_SAKURA_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)",        0x72CEE, 0x72D0E, 0x22 },
    { "P2 Extras 1 Hadouken", 0x72D0E, 0x72D2E, 0x27, 1 },
    { "P2 Extras 2 Friend", 0x7800E, 0x7802E, },
    { "P2 Extras 3 Bag", 0x7802E, 0x7804E, },
};

const sGame_PaletteDataset MSHVSF_A_SHADOW_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)",       0x731CE, 0x731EE, 0x21 },
    { "P1 Sonic Boom", 0x731EE, 0x7320E, 0x21, 1 },
    { "P1 Flash Kick", 0x7320E, 0x7322E, 0x21, 2 },
};
const sGame_PaletteDataset MSHVSF_A_SHADOW_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)",        0x7322E, 0x7324E,  0x21 },
    { "P2 Sonic Boom", 0x7324E, 0x7326E, 0x21, 1 },
    { "P2 Flash Kick", 0x7326E, 0x7328E, 0x21, 2 }, 
};

const sGame_PaletteDataset MSHVSF_A_SHUMAGORATH_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)",        0x7234E, 0x7236E, indexCPS2_Shuma },
        { "P1 HP", 0x7236E, 0x7238E , indexCPS2_Shuma },
        { "P1 Mystic Stare", 0x7238E, 0x723AE, indexCPS2_Shuma },

    { "P1 Post HP Stance 1", 0x7728E, 0x772AE, indexCPS2_Shuma },
    { "P1 Post HP Stance 2", 0x772AE, 0x772CE, indexCPS2_Shuma },
    { "P1 Post HP Stance 3", 0x772CE, 0x772EE, indexCPS2_Shuma },
    { "P1 Post HP Stance 4", 0x772EE, 0x7730E, indexCPS2_Shuma },
    { "P1 Post HP Stance 5", 0x7730E, 0x7732E, indexCPS2_Shuma },

    { "P1 Stone Drop 1", 0x7732E, 0x7734E, indexCPS2_Shuma },
    { "P1 Stone Drop 2", 0x7734E, 0x7736E, indexCPS2_Shuma },
    { "P1 Stone Drop 3", 0x7736E, 0x7738E, indexCPS2_Shuma },
    { "P1 Stone Drop 4", 0x7738E, 0x773AE, indexCPS2_Shuma },
    { "P1 Stone Drop 5", 0x773AE, 0x773CE, indexCPS2_Shuma },

    // Unused blue region

    // HK grab region
    { "P1 Life Drain 1", 0x7750E, 0x7752E, indexCPS2_Shuma },
    { "P1 Life Drain 2", 0x7752E, 0x7754E, indexCPS2_Shuma },
    { "P1 Life Drain 3", 0x7754E, 0x7756E, indexCPS2_Shuma },
    { "P1 Life Drain 4", 0x7756E, 0x7758E, indexCPS2_Shuma },
    { "P1 Life Drain 5", 0x7758E, 0x775AE, indexCPS2_Shuma },
    { "P1 Life Drain 6", 0x775AE, 0x775CE, indexCPS2_Shuma },
    { "P1 Life Drain 7", 0x775CE, 0x775EE, indexCPS2_Shuma },
    { "P1 Life Drain 8", 0x775EE, 0x7760E, indexCPS2_Shuma },
    { "P1 Life Drain 9", 0x7760E, 0x7762E, indexCPS2_Shuma },
    { "P1 Life Drain 10", 0x7762E, 0x7764E, indexCPS2_Shuma },

    // HP flash
    { "P1 HP Flash 1", 0x7764E, 0x7766E, indexCPS2_Shuma },
    { "P1 HP Flash 2", 0x7766E, 0x7768E, indexCPS2_Shuma },
    { "P1 HP Flash 3", 0x7768E, 0x776AE, indexCPS2_Shuma },
    { "P1 HP Flash 4", 0x776AE, 0x776CE, indexCPS2_Shuma },
    { "P1 HP Flash 5", 0x776CE, 0x776EE, indexCPS2_Shuma },
    { "P1 HP Flash 6", 0x776EE, 0x7770E, indexCPS2_Shuma },
    { "P1 HP Flash 7", 0x7770E, 0x7772E, indexCPS2_Shuma },

    { "P1 Chaos Dimension 1", 0x7772E, 0x7774E, indexCPS2_Shuma },
    { "P1 Chaos Dimension Dash 1", 0x7774E, 0x7776E, indexCPS2_Shuma },
    { "P1 Chaos Dimension 2", 0x7776E, 0x7778E, indexCPS2_Shuma },
    { "P1 Chaos Dimension Dash 2", 0x7778E, 0x777AE, indexCPS2_Shuma },
    { "P1 Chaos Dimension 3", 0x777AE, 0x777CE, indexCPS2_Shuma },
    { "P1 Chaos Dimension Dash 3", 0x777CE, 0x777EE , indexCPS2_Shuma },
    { "P1 Chaos Dimension 4", 0x777EE, 0x7780E , indexCPS2_Shuma },
    { "P1 Chaos Dimension Dash 4", 0x7780E, 0x7782E , indexCPS2_Shuma },
    { "P1 Chaos Dimension 5", 0x7782E, 0x7784E , indexCPS2_Shuma },
    { "P1 Chaos Dimension Dash 5", 0x7784E, 0x7786E , indexCPS2_Shuma },

    { "P1 Mystic Smash", 0x7786E, 0x7788E, indexCPS2_Shuma },

    // { "P1 Extra 11", 0x79C0E, 0x79C2E, indexCPS2_Shuma },//  this is shuma but doesn't fit.  excising until somebody tells me why they want it
};

const sGame_PaletteDataset MSHVSF_A_SHUMAGORATH_PALETTES_P2COLOR_KICK[] =
{

    { "P2 Color (Kick)", 0x723AE, 0x723CE, indexCPS2_Shuma },
        { "P2 HP", 0x723CE, 0x723EE, indexCPS2_Shuma },
        { "P2 Mystic Stare", 0x723EE, 0x7240E, indexCPS2_Shuma },

    { "P2 Post HP Stance 1", 0x7788E, 0x778AE, indexCPS2_Shuma },
    { "P2 Post HP Stance 2", 0x778AE, 0x778CE, indexCPS2_Shuma },
    { "P2 Post HP Stance 3", 0x778CE, 0x778EE, indexCPS2_Shuma },
    { "P2 Post HP Stance 4", 0x778EE, 0x7790E, indexCPS2_Shuma },
    { "P2 Post HP Stance 5", 0x7790E, 0x7792E, indexCPS2_Shuma },

    { "P2 Stone Drop 1", 0x7792E, 0x7794E, indexCPS2_Shuma },
    { "P2 Stone Drop 2", 0x7794E, 0x7796E, indexCPS2_Shuma },
    { "P2 Stone Drop 3", 0x7796E, 0x7798E, indexCPS2_Shuma },
    { "P2 Stone Drop 4", 0x7798E, 0x779AE, indexCPS2_Shuma },
    { "P2 Stone Drop 5", 0x779AE, 0x779CE, indexCPS2_Shuma },

    // unused 'blue range': 799ce-77b0e

    // HK grab region
    { "P2 Life Drain 1", 0x77B0E, 0x77B2E, indexCPS2_Shuma },
    { "P2 Life Drain 2", 0x77B2E, 0x77B4E, indexCPS2_Shuma },
    { "P2 Life Drain 3", 0x77B4E, 0x77B6E, indexCPS2_Shuma },
    { "P2 Life Drain 4", 0x77B6E, 0x77B8E, indexCPS2_Shuma },
    { "P2 Life Drain 5", 0x77B8E, 0x77BAE, indexCPS2_Shuma },
    { "P2 Life Drain 6", 0x77BAE, 0x77BCE, indexCPS2_Shuma },
    { "P2 Life Drain 7", 0x77BCE, 0x77BEE, indexCPS2_Shuma },
    { "P2 Life Drain 8", 0x77BEE, 0x77C0E, indexCPS2_Shuma },
    { "P2 Life Drain 9", 0x77C0E, 0x77C2E, indexCPS2_Shuma },
    { "P2 Life Drain 10", 0x77C2E, 0x77C4E, indexCPS2_Shuma },

    // HP flash
    { "P2 HP Flash 1", 0x77C4E, 0x77C6E, indexCPS2_Shuma },
    { "P2 HP Flash 2", 0x77C6E, 0x77C8E, indexCPS2_Shuma },
    { "P2 HP Flash 3", 0x77C8E, 0x77CAE, indexCPS2_Shuma },
    { "P2 HP Flash 4", 0x77CAE, 0x77CCE, indexCPS2_Shuma },
    { "P2 HP Flash 5", 0x77CCE, 0x77CEE, indexCPS2_Shuma },
    { "P2 HP Flash 6", 0x77CEE, 0x77D0E, indexCPS2_Shuma },
    { "P2 HP Flash 7", 0x77D0E, 0x77D2E, indexCPS2_Shuma },

    { "P2 Chaos Dimension 1", 0x77D2E, 0x77D4E, indexCPS2_Shuma },
    { "P2 Chaos Dimension Dash 1", 0x77D4E, 0x77D6E, indexCPS2_Shuma },
    { "P2 Chaos Dimension 2", 0x77D6E, 0x77D8E, indexCPS2_Shuma },
    { "P2 Chaos Dimension Dash 2", 0x77D8E, 0x77DAE, indexCPS2_Shuma },
    { "P2 Chaos Dimension 3", 0x77DAE, 0x77DCE, indexCPS2_Shuma },
    { "P2 Chaos Dimension Dash 3", 0x77DCE, 0x77DEE, indexCPS2_Shuma },
    { "P2 Chaos Dimension 4", 0x77DEE, 0x77E0E, indexCPS2_Shuma },
    { "P2 Chaos Dimension Dash 4", 0x77E0E, 0x77E2E, indexCPS2_Shuma },
    { "P2 Chaos Dimension 5", 0x77E2E, 0x77E4E, indexCPS2_Shuma },
    { "P2 Chaos Dimension Dash 5", 0x77E4E, 0x77E6E, indexCPS2_Shuma },

    { "P2 Mystic Smash", 0x77E6E, 0x77E8E, indexCPS2_Shuma },
};

const sGame_PaletteDataset MSHVSF_A_SPIDERMAN_PALETTES_P1COLOR_PUNCH[] =
{ // 2 is web
    { "P1 Color (Punch)", 0x724CE, 0x724EE, 0x0C },
    { "P1 Extras 1", 0x724EE, 0x7250E, 0x0C, 0x2 },
    { "P1 Spotlight", 0x7250E, 0x7252E, 0x0C, 13 },
    { "P1 Intro 1", 0x765CE, 0x765EE, 0x0C, 0x0B },
    { "P1 Intro 2", 0x765EE, 0x7660E, 0x0C, 0x0B },
    { "P1 Intro 3", 0x7660E, 0x7662E, 0x0C, 0x0B },
    { "P1 Intro 4", 0x7662E, 0x7664E, 0x0C, 0x0B },
    { "P1 Intro 5", 0x7664E, 0x7666E, 0x0C, 0x0B },
    { "P1 Intro 6", 0x7666E, 0x7668E, 0x0C, 0x0B },
    { "P1 Intro 7", 0x7668E, 0x766AE, 0x0C, 0x0B },
    { "P1 Intro 8", 0x766AE, 0x766CE, 0x0C, 0x0B },
};
const sGame_PaletteDataset MSHVSF_A_SPIDERMAN_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)", 0x7252E, 0x7254E, 0x0C },
    { "P2 Extras 1", 0x7254E, 0x7256E, 0x0C, 0x2 },
    { "P2 Spotlight", 0x7256E, 0x7258E, 0x0C, 13 },
    { "P2 Intro 1", 0x767CE, 0x767EE, 0x0C, 0x0B },
    { "P2 Intro 2", 0x767EE, 0x7680E, 0x0C, 0x0B },
    { "P2 Intro 3", 0x7680E, 0x7682E, 0x0C, 0x0B },
    { "P2 Intro 4", 0x7682E, 0x7684E, 0x0C, 0x0B },
    { "P2 Intro 5", 0x7684E, 0x7686E, 0x0C, 0x0B },
    { "P2 Intro 6", 0x7686E, 0x7688E, 0x0C, 0x0B },
    { "P2 Intro 7", 0x7688E, 0x768AE, 0x0C, 0x0B },
    { "P2 Intro 8", 0x768AE, 0x768CE, 0x0C, 0x0B },
};
const sGame_PaletteDataset MSHVSF_A_SPIDERMAN_PALETTES_SHARED[] =
{
    { "P1 Extras 2: Spotlight", 0x766CE, 0x766EE, 0x0C, 0x0C },
};

const sGame_PaletteDataset MSHVSF_A_USAGENT_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)",        0x7328E, 0x732AE, 0x0B, 0, &pairCaptainAmericaShield },
    { "P1 Shield", 0x732AE, 0x732CE, 0x0B, 1 },
    { "P1 Charging Star", 0x732CE, 0x732EE, 0x0B, 2 },

};
const sGame_PaletteDataset MSHVSF_A_USAGENT_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)",        0x732EE, 0x7330E, 0x0B, 0, &pairCaptainAmericaShield },
    { "P2 Shield", 0x7330E, 0x7332E, 0x0B, 1 },
    { "P2 Charging Star", 0x7332E, 0x7334E, 0x0B, 2 },
};

const sGame_PaletteDataset MSHVSF_A_WOLVERINE_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)",       0x7228E, 0x722AE, 0x07, 0, &pairWolvieClaws },
    { "P1 Claws", 0x722AE, 0x722CE, 0x07, 1 },
    { "P1 Extras 1", 0x722CE, 0x722EE, 0x07, 2 },
    { "P1 Extras 2 (Fatal Claw)", 0x7804E, 0x7806E },
};
const sGame_PaletteDataset MSHVSF_A_WOLVERINE_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)",        0x722EE, 0x7230E, 0x07, 0, &pairWolvieClaws },
    { "P2 Claws", 0x7230E, 0x7232E, 0x07, 1 },
    { "P2 Extras 1", 0x7232E, 0x7234E, 0x07, 2 },
    { "P2 Extras 2 (Fatal Claw)", 0x7806E, 0x7808E },
};

const sGame_PaletteDataset MSHVSF_A_ZANGIEF_PALETTES_P1COLOR_PUNCH[] =
{
    { "P1 Color (Punch)",   0x7294E, 0x7296E, 0x01 },
    { "P1 Banishing Fist",  0x7296E, 0x7298E, 0x01, 1 },
    { "P1 Extra 2",         0x7298E, 0x729AE },
    { "P1 FAB 1",           0x72A4E, 0x72A6E, 0x01 },
    { "P1 FAB 2",           0x72A6E, 0x72A8E, 0x01 },
    { "P1 FAB 3",           0x72A8E, 0x72AAE, 0x01 },
};
const sGame_PaletteDataset MSHVSF_A_ZANGIEF_PALETTES_P2COLOR_KICK[] =
{
    { "P2 Color (Kick)",        0x729AE, 0x729CE, 0x01 },
    { "P2 Banishing Fist",      0x729CE, 0x729EE, 0x01, 1 },
    { "P2 Extra 2",             0x729EE, 0x72A0E },
    { "P2 FAB 1",               0x72AAE, 0x72ACE, 0x01 },
    { "P2 FAB 2",               0x72ACE, 0x72AEE, 0x01 },
    { "P2 FAB 3",               0x72AEE, 0x72B0E, 0x01 },
};

const sGame_PaletteDataset MSHVSF_A_CSI_PALETTES[] =
{
    { "Zangief CSI", 0x7990E, 0x7992E, 0x01, 0x30 },
    { "M. Bison CSI", 0x7992E, 0x7994E, 0x26, 0x30 },
    { "Dhalsim CSI", 0x798EE, 0x7990E, 0x25, 0x30 },
    { "Sakura CSI", 0x7996E, 0x7998E, 0x22, 0x30 },
    { "Akuma CSI", 0x7994E, 0x7996E, 0x1E, 0x30 },
    { "Chun-Li CSI", 0x798CE, 0x798EE, 0x1B, 0x30 },
    { "Cyclops CSI", 0x7978E, 0x797AE, 0x06, 0x30 },
    { "Spider-Man CSI", 0x7984E, 0x7986E, 0x0C, 0x30 },
    { "Captain America CSI", 0x797AE, 0x797CE, 0x0B, 0x30 },
    { "Ken CSI", 0x798AE, 0x798CE, 0x27, 0x30 },
    { "Ryu CSI", 0x7988E, 0x798AE, 0x0, 0x30 },
    { "Dan CSI", 0x799AE, 0x799CE, 0x23, 0x30 },
    { "Shuma-Gorath CSI", 0x7980E, 0x7982E, 0x2D, 0x30 },
    { "Wolverine CSI", 0x797EE, 0x7980E, 0x07, 0x30 },
    { "Hulk CSI", 0x797CE, 0x797EE, 0x0D, 0x30 },
    { "Blackheart CSI", 0x7986E, 0x7988E, 0x35, 0x30 },
    { "Norimaro CSI", 0x7998E, 0x799AE, 0x53, 0x30 },
    { "Omega Red CSI", 0x7982E, 0x7984E, 0x30, 0x30 },
};

const sGame_PaletteDataset MSHVSF_A_SSP_PALETTES[] =
{
    // P1 to P2 SSP is diff 0x10E0
    { "A. Spider-Man P1 SSP", 0x7DA4E, 0x7DA8E, 0x0C, 0x31 },
    { "A. Spider-Man P2 SSP", 0x7EB2E, 0x7EB6E, 0x0C, 0x31 },
    { "Akuma P1 SSP", 0x7D40E, 0x7D48E, 0x1E, 0x31 },
    { "Akuma P2 SSP", 0x7E4EE, 0x7E56E, 0x1E, 0x31 },
    { "Blackheart P1 SSP", 0x7CFAE, 0x7D02E, 0x35, 0x31 },
    { "Blackheart P2 SSP", 0x7E08E, 0x7E10E, 0x35, 0x31 },
    { "Captain America P1 SSP", 0x7CBEE, 0x7CC8E, 0x0B, 0x31 },
    { "Captain America P2 SSP", 0x7DCCE, 0x7DD6E, 0x0B, 0x31 },
    { "Chun-Li P1 SSP", 0x7D18E, 0x7D20E, 0x1b, 0x31 },
    { "Chun-Li P2 SSP", 0x7E26E, 0x7E2EE, 0x1b, 0x31 },
    { "Cyber Akuma P1 SSP", 0x7D68E, 0x7D70E, 0x54, 0x31 },
    { "Cyber Akuma P2 SSP", 0x7E76E, 0x7E7EE, 0x54, 0x31 },
    { "Cyclops P1 SSP", 0x7CB4E, 0x7CBEE, 0x06, 0x31 },
    { "Cyclops P2 SSP", 0x7DC2E, 0x7DCCE, 0x06, 0x31 },
    { "Dan P1 SSP", 0x7D5EE, 0x7D66E, 0x23, 0x31 },
    { "Dan P2 SSP", 0x7E6CE, 0x7E74E, 0x23, 0x31 },
    { "Dark Sakura P1 SSP", 0x7D7CE, 0x7D84E, 0x22, 0x31 },
    { "Dark Sakura P2 SSP", 0x7E8AE, 0x7E92E, 0x22, 0x31 },
    { "Dhalsim P1 SSP", 0x7D22E, 0x7D2AE, 0x25, 0x31 },
    { "Dhalsim P2 SSP", 0x7E30E, 0x7E38E, 0x25, 0x31 },
    { "Hulk P1 SSP", 0x7CC8E, 0x7CCEE, 0x0D, 0x31 },
    { "Hulk P2 SSP", 0x7DD6E, 0x7DDCE, 0x0D, 0x31 },
    { "Ken P1 SSP", 0x7D0EE, 0x7D16E, 0x27, 0x31 },
    { "Ken P2 SSP", 0x7E1CE, 0x7E24E, 0x27, 0x31 },
    { "M. Bison P1 SSP", 0x7D36E, 0x7D3EE, 0x26, 0x31 },
    { "M. Bison P2 SSP", 0x7E44E, 0x7E4CE, 0x26, 0x31 },
    { "Mech Zangief P1 SSP", 0x7D72E, 0x7D78E, 0x01, 0x31 },
    { "Mech Zangief P2 SSP", 0x7E80E, 0x7E86E, 0x01, 0x31 },
    { "Mephisto P1 SSP", 0x7D9AE, 0x7DA2E, 0x35, 0x31 },
    { "Mephisto P2 SSP", 0x7EA8E, 0x7EB0E, 0x35, 0x31 },
    { "Norimaro P1 SSP", 0x7D54E, 0x7D5EE, 0x53, 0x31 },
    { "Norimaro P2 SSP", 0x7E62E, 0x7E6CE, 0x53, 0x31 },
    { "Omega Red P1 SSP", 0x7CE6E, 0x7CEEE, 0x30, 0x31 },
    { "Omega Red P2 SSP", 0x7DF4E, 0x7DFCE, 0x30, 0x31 },
    { "Ryu P1 SSP", 0x7D04E, 0x7D0CE, 0x00, 0x31 },
    { "Ryu P2 SSP", 0x7E12E, 0x7E1AE, 0x00, 0x31 },
    { "Sakura P1 SSP", 0x7D4AE, 0x7D52E, 0x22, 0x31 },
    { "Sakura P2 SSP", 0x7E58E, 0x7E60E, 0x22, 0x31 },
    { "Shadow P1 SSP", 0x7D86E, 0x7D90E, 0x21, 0x31 },
    { "Shadow P2 SSP", 0x7E94E, 0x7E9EE, 0x21, 0x31 },
    { "Shuma-Gorath P1 SSP", 0x7CDCE, 0x7CE2E, 0x2D, 0x31, },
    { "Shuma-Gorath P2 SSP", 0x7DEAE, 0x7DF0E, 0x2D, 0x31 },
    { "Spider-Man P1 SSP", 0x7CF0E, 0x7CF4E, 0x0C, 0x31 },
    { "Spider-Man P2 SSP", 0x7DFEE, 0x7E02E, 0x0C, 0x31 },
    { "US Agent P1 SSP", 0x7D90E, 0x7D9AE, 0x0B, 0x31 },
    { "US Agent P2 SSP", 0x7E9EE, 0x7EA8E, 0x0B, 0x31 },
    { "Wolverine P1 SSP", 0x7CD2E, 0x7CDAE, 0x07, 0x31 },
    { "Wolverine P2 SSP", 0x7DE0E, 0x7DE8E, 0x07, 0x31 },
    { "Zangief P1 SSP", 0x7D2CE, 0x7D32E, 0x01, 0x31 },
    { "Zangief P2 SSP", 0x7E3AE, 0x7E40E, 0x01, 0x31 },
    { "Apocalypse P1 SSP", 0x7CAAE, 0x7CB0E, 0x4F, 0x31 },
    { "Apocalypse P2 SSP", 0x7DB8E, 0x7DBEE, 0x4F, 0x31 },
};

const sGame_PaletteDataset MSHVSF_A_VSP_PALETTES[] =
{
    // P1 to P2 VSPs are also a difference of 0x10E0
    { "A. Spider-Man P1 VSP", 0x7FD4E, 0x7FD8E, indexCPS2_Spidey, indexMSHVSF_VSP },
    { "Akuma P1 VSP", 0x7F70E, 0x7F78E, indexCPS2_Akuma, indexMSHVSF_VSP },
    { "Blackheart P1 VSP", 0x7F2AE, 0x7F2EE, indexCPS2_Blackheart, indexMSHVSF_VSP },
    { "Captain America P1 VSP", 0x7EEEE, 0x7EF8E, indexCPS2_CapAm, indexMSHVSF_VSP },
    { "Captain America P2 VSP Part 1", 0x7FFCE, 0x7FFFF },
    { "Chun-Li P1 VSP", 0x7F48E, 0x7F4EE, indexCPS2_ChunLi, indexMSHVSF_VSP },
    { "Cyber Akuma P1 VSP", 0x7F98E, 0x7FA2E, indexCPS2_CyberAkuma, indexMSHVSF_VSP },
    { "Cyclops P1 VSP", 0x7EE4E, 0x7EEEE, indexCPS2_Cyclops, indexMSHVSF_VSP },
    { "Cyclops P2 VSP", 0x7FF2E, 0x7FFCE, indexCPS2_Cyclops, indexMSHVSF_VSP },
    { "Dan P1 VSP", 0x7F8EE, 0x7F98E, indexCPS2_Dan, indexMSHVSF_VSP },
    { "Dark Sakura P1 VSP", 0x7FACE, 0x7FB6E, indexCPS2_Sakura, indexMSHVSF_VSP },
    { "Dhalsim P1 VSP", 0x7F52E, 0x7F5CE, indexCPS2_Dhalsim, indexMSHVSF_VSP },
    { "Hulk P1 VSP", 0x7EF8E, 0x7EFEE, indexCPS2_Hulk, indexMSHVSF_VSP },
    { "Ken P1 VSP", 0x7F3EE, 0x7F48E, indexCPS2_Ken, indexMSHVSF_VSP },
    { "Omega Red P1 VSP", 0x7F16E, 0x7F20E, indexCPS2_OmegaRed, indexMSHVSF_VSP },
    { "M. Bison P1 VSP", 0x7F66E, 0x7F70E, indexCPS2_Bison, indexMSHVSF_VSP },
    { "Mech Zangief P1 VSP", 0x7FA2E, 0x7FACE, indexCPS2_Zangief, indexMSHVSF_VSP },
    { "Mephisto P1 VSP", 0x7FCAE, 0x7FCEE, indexCPS2_Blackheart, indexMSHVSF_VSP },
    { "Norimaro P1 VSP", 0x7F84E, 0x7F8EE, indexCPS2_Norimaro, indexMSHVSF_VSP },
    { "Ryu P1 VSP", 0x7F34E, 0x7F3EE, indexCPS2_Ryu, indexMSHVSF_VSP },
    { "Sakura P1 VSP", 0x7F7AE, 0x7F84E, indexCPS2_Sakura, indexMSHVSF_VSP },
    { "Shadow P1 VSP", 0x7FB6E, 0x7FC0E, indexCPS2_Charlie, indexMSHVSF_VSP },
    { "Shuma-Gorath P1 VSP", 0x7F0CE, 0x7F14E, indexCPS2_Shuma, indexMSHVSF_VSP },
    { "Spider-Man P1 VSP", 0x7F20E, 0x7F24E, indexCPS2_Spidey, indexMSHVSF_VSP },
    { "U.S Agent P1 VSP", 0x7FC0E, 0x7FCAE, indexCPS2_CapAm, indexMSHVSF_VSP },
    { "Wolverine P1 VSP", 0x7F02E, 0x7F0CE, indexCPS2_Wolverine, indexMSHVSF_VSP },
    { "Zangief P1 VSP", 0x7F5CE, 0x7F66E, indexCPS2_Zangief, indexMSHVSF_VSP },
    { "Apocalypse P1 VSP", 0x7EDAE, 0x7EE4E, indexCPS2_Apocalypse, indexMSHVSF_VSP },
    { "Apocalypse P2 VSP", 0x7FE8E, 0x7FF2E, indexCPS2_Apocalypse, indexMSHVSF_VSP },
};

const sGame_PaletteDataset MSHVSF_A_VSP_PALETTES_7B[] =
{
    { "A. Spider-Man P2 VSP", 0x0000e2e, 0x0000e6e, indexCPS2_Spidey, indexMSHVSF_VSP  },
    { "Akuma P2 VSP", 0x00007ee, 0x000086e, indexCPS2_Akuma, indexMSHVSF_VSP },
    { "Blackheart P2 VSP", 0x000038e, 0x00003ce, indexCPS2_Blackheart, indexMSHVSF_VSP },
    { "Captain America P2 VSP Part 2", 0x0000000, 0x000006e },
    { "Chun-Li P2 VSP", 0x000056e, 0x00005ce, indexCPS2_ChunLi, indexMSHVSF_VSP },
    { "Cyber Akuma P2 VSP", 0xA6E, 0xB0E, indexCPS2_CyberAkuma, indexMSHVSF_VSP },
    { "Dan P2 VSP", 0x00009ce, 0x0000a6e, indexCPS2_Dan, indexMSHVSF_VSP },
    { "Dark Sakura P2 VSP", 0x0000bae, 0x0000c4e, indexCPS2_Sakura, indexMSHVSF_VSP },
    { "Dhalsim P2 VSP", 0x000060e, 0x00006ae, indexCPS2_Dhalsim, indexMSHVSF_VSP },
    { "Hulk P2 VSP", 0x000006e, 0x00000ce, indexCPS2_Hulk, indexMSHVSF_VSP },
    { "Ken P2 VSP", 0x00004ce, 0x000056e, indexCPS2_Ken, indexMSHVSF_VSP },
    { "Omega Red P2 VSP", 0x000024e, 0x00002ee, indexCPS2_OmegaRed, indexMSHVSF_VSP },
    { "M. Bison P2 VSP", 0x000074e, 0x00007ee, indexCPS2_Bison, indexMSHVSF_VSP },
    { "Mech Zangief P2 VSP", 0x0000b0e, 0x0000bae, indexCPS2_Zangief, indexMSHVSF_VSP },
    { "Mephisto P2 VSP", 0x0000d8e, 0x0000dce, indexCPS2_Blackheart, indexMSHVSF_VSP },
    { "Norimaro P2 VSP", 0x000092e, 0x00009ce, indexCPS2_Norimaro, indexMSHVSF_VSP },
    { "Ryu P2 VSP", 0x000042e, 0x00004ce, indexCPS2_Ryu, indexMSHVSF_VSP },
    { "Sakura P2 VSP", 0x000088e, 0x000092e, indexCPS2_Sakura, indexMSHVSF_VSP },
    { "Shadow P2 VSP", 0x00C4E, 0x00CEE, indexCPS2_Charlie, indexMSHVSF_VSP },
    { "Shuma-Gorath P2 VSP", 0x00001ae, 0x000022e, indexCPS2_Shuma, indexMSHVSF_VSP },
    { "Spider-Man P2 VSP", 0x00002ee, 0x000032e, indexCPS2_Spidey, indexMSHVSF_VSP },
    { "US Agent P2 VSP", 0x0000cee, 0x0000d8e, indexCPS2_CapAm, indexMSHVSF_VSP },
    { "Wolverine P2 VSP", 0x000010e, 0x00001ae, indexCPS2_Wolverine, indexMSHVSF_VSP },
    { "Zangief P2 VSP", 0x00006ae, 0x000074e, indexCPS2_Zangief, indexMSHVSF_VSP },
};

const sDescTreeNode MSHVSF_A_APOCALYPSE_COLLECTION[] =
{
    //{ "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_APOCALYPSE_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_APOCALYPSE_PALETTES_P1COLOR_PUNCH) },
    //{ "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_APOCALYPSE_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_APOCALYPSE_PALETTES_P2COLOR_KICK) },
    { "Shared",              DESC_NODETYPE_TREE,    (void*)MSHVSF_A_APOCALYPSE_PALETTES_SHARED,     ARRAYSIZE(MSHVSF_A_APOCALYPSE_PALETTES_SHARED) },
};
const sDescTreeNode MSHVSF_A_ARMORED_SPIDERMAN_COLLECTION[] =
{
    { "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_ARMORED_SPIDERMAN_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_ARMORED_SPIDERMAN_PALETTES_P1COLOR_PUNCH) },
    { "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_ARMORED_SPIDERMAN_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_ARMORED_SPIDERMAN_PALETTES_P2COLOR_KICK) },
};
const sDescTreeNode MSHVSF_A_GOUKI_COLLECTION[] =
{
    { "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_GOUKI_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_GOUKI_PALETTES_P1COLOR_PUNCH) },
    { "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_GOUKI_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_GOUKI_PALETTES_P2COLOR_KICK) },
};
const sDescTreeNode MSHVSF_A_BLACKHEART_MEPHISTO_COLLECTION[] =
{
    { "Blackheart P1 Color (Punch)", DESC_NODETYPE_TREE,    (void*)MSHVSF_A_BLACKHEART_PALETTES_P1COLOR_PUNCH,   ARRAYSIZE(MSHVSF_A_BLACKHEART_PALETTES_P1COLOR_PUNCH)  },
    { "Blackheart P2 Color (Kick)",  DESC_NODETYPE_TREE,    (void*)MSHVSF_A_BLACKHEART_PALETTES_P2COLOR_KICK,    ARRAYSIZE(MSHVSF_A_BLACKHEART_PALETTES_P2COLOR_KICK)   },
    { "Mephisto P1 Color (Punch)",   DESC_NODETYPE_TREE,    (void*)MSHVSF_A_MEPHISTO_PALETTES_P1COLOR_PUNCH,     ARRAYSIZE(MSHVSF_A_MEPHISTO_PALETTES_P1COLOR_PUNCH)    },
    { "Mephisto P2 Color (Kick)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_MEPHISTO_PALETTES_P2COLOR_KICK,      ARRAYSIZE(MSHVSF_A_MEPHISTO_PALETTES_P2COLOR_KICK)     },
    { "Shared Palettes",             DESC_NODETYPE_TREE,    (void*)MSHVSF_A_BLACKHEART_MEPHISTO_PALETTES_SHARED, ARRAYSIZE(MSHVSF_A_BLACKHEART_MEPHISTO_PALETTES_SHARED) },
};
const sDescTreeNode MSHVSF_A_CAPTAIN_AMERICA_COLLECTION[] =
{
    { "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CAPTAIN_AMERICA_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_CAPTAIN_AMERICA_PALETTES_P1COLOR_PUNCH) },
    { "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CAPTAIN_AMERICA_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_CAPTAIN_AMERICA_PALETTES_P2COLOR_KICK) },
};
const sDescTreeNode MSHVSF_A_CHUNLI_COLLECTION[] =
{
    { "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CHUNLI_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_CHUNLI_PALETTES_P1COLOR_PUNCH) },
    { "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CHUNLI_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_CHUNLI_PALETTES_P2COLOR_KICK) },
};
const sDescTreeNode MSHVSF_A_CYBER_GOUKI_COLLECTION[] =
{
    { "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CYBER_GOUKI_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_CYBER_GOUKI_PALETTES_P1COLOR_PUNCH) },
    { "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CYBER_GOUKI_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_CYBER_GOUKI_PALETTES_P2COLOR_KICK) },
};
const sDescTreeNode MSHVSF_A_CYCLOPS_COLLECTION[] =
{
    { "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CYCLOPS_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_CYCLOPS_PALETTES_P1COLOR_PUNCH) },
    { "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CYCLOPS_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_CYCLOPS_PALETTES_P2COLOR_KICK) },
    { "Extras",              DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CYCLOPS_PALETTES_SHARED,           ARRAYSIZE(MSHVSF_A_CYCLOPS_PALETTES_SHARED) },
    
};
const sDescTreeNode MSHVSF_A_DAN_COLLECTION[] =
{
    { "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_DAN_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_DAN_PALETTES_P1COLOR_PUNCH) },
    { "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_DAN_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_DAN_PALETTES_P2COLOR_KICK) },
};
const sDescTreeNode MSHVSF_A_DARK_SAKURA_COLLECTION[] =
{
    { "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_DARK_SAKURA_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_DARK_SAKURA_PALETTES_P1COLOR_PUNCH) },
    { "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_DARK_SAKURA_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_DARK_SAKURA_PALETTES_P2COLOR_KICK) },
};
const sDescTreeNode MSHVSF_A_DHALSIM_COLLECTION[] =
{
    { "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_DHALSIM_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_DHALSIM_PALETTES_P1COLOR_PUNCH) },
    { "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_DHALSIM_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_DHALSIM_PALETTES_P2COLOR_KICK) },
};
const sDescTreeNode MSHVSF_A_HULK_COLLECTION[] =
{
    { "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_HULK_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_HULK_PALETTES_P1COLOR_PUNCH) },
    { "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_HULK_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_HULK_PALETTES_P2COLOR_KICK) },
};
const sDescTreeNode MSHVSF_A_KEN_COLLECTION[] =
{
    { "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_KEN_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_KEN_PALETTES_P1COLOR_PUNCH) },
    { "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_KEN_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_KEN_PALETTES_P2COLOR_KICK) },
};
const sDescTreeNode MSHVSF_A_MBIPSON_COLLECTION[] =
{
    { "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_MBIPSON_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_MBIPSON_PALETTES_P1COLOR_PUNCH) },
    { "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_MBIPSON_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_MBIPSON_PALETTES_P2COLOR_KICK) },
};
const sDescTreeNode MSHVSF_A_MECH_ZANGIEF_COLLECTION[] =
{
    { "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_MECH_ZANGIEF_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_MECH_ZANGIEF_PALETTES_P1COLOR_PUNCH) },
    { "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_MECH_ZANGIEF_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_MECH_ZANGIEF_PALETTES_P2COLOR_KICK) },
    { "Shared",              DESC_NODETYPE_TREE,    (void*)MSHVSF_A_MECH_ZANGIEF_PALETTES_SHARED,           ARRAYSIZE(MSHVSF_A_MECH_ZANGIEF_PALETTES_SHARED) },
};
const sDescTreeNode MSHVSF_A_NORIMARO_COLLECTION[] =
{
    { "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_NORIMARO_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_NORIMARO_PALETTES_P1COLOR_PUNCH) },
    { "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_NORIMARO_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_NORIMARO_PALETTES_P2COLOR_KICK) },
    { "Extras",              DESC_NODETYPE_TREE,    (void*)MSHVSF_A_NORIMARO_PALETTES_EXTRAS,           ARRAYSIZE(MSHVSF_A_NORIMARO_PALETTES_EXTRAS) },
};
const sDescTreeNode MSHVSF_A_OMEGARED_COLLECTION[] =
{
    { "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_OMEGARED_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_OMEGARED_PALETTES_P1COLOR_PUNCH) },
    { "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_OMEGARED_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_OMEGARED_PALETTES_P2COLOR_KICK) },
};
const sDescTreeNode MSHVSF_A_RYU_COLLECTION[] =
{
    { "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_RYU_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_RYU_PALETTES_P1COLOR_PUNCH) },
    { "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_RYU_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_RYU_PALETTES_P2COLOR_KICK) },
};
const sDescTreeNode MSHVSF_A_SAKURA_COLLECTION[] =
{
    { "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SAKURA_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_SAKURA_PALETTES_P1COLOR_PUNCH) },
    { "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SAKURA_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_SAKURA_PALETTES_P2COLOR_KICK) },
};
const sDescTreeNode MSHVSF_A_SHADOW_COLLECTION[] =
{
    { "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SHADOW_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_SHADOW_PALETTES_P1COLOR_PUNCH) },
    { "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SHADOW_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_SHADOW_PALETTES_P2COLOR_KICK) },
};
const sDescTreeNode MSHVSF_A_SHUMAGORATH_COLLECTION[] =
{
    { "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SHUMAGORATH_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_SHUMAGORATH_PALETTES_P1COLOR_PUNCH) },
    { "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SHUMAGORATH_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_SHUMAGORATH_PALETTES_P2COLOR_KICK) },
};
const sDescTreeNode MSHVSF_A_SPIDERMAN_COLLECTION[] =
{
    { "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SPIDERMAN_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_SPIDERMAN_PALETTES_P1COLOR_PUNCH) },
    { "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SPIDERMAN_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_SPIDERMAN_PALETTES_P2COLOR_KICK) },
    { "Extras",              DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SPIDERMAN_PALETTES_SHARED,           ARRAYSIZE(MSHVSF_A_SPIDERMAN_PALETTES_SHARED) },
};
const sDescTreeNode MSHVSF_A_USAGENT_COLLECTION[] =
{
    { "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_USAGENT_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_USAGENT_PALETTES_P1COLOR_PUNCH) },
    { "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_USAGENT_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_USAGENT_PALETTES_P2COLOR_KICK) },
};
const sDescTreeNode MSHVSF_A_WOLVERINE_COLLECTION[] =
{
    { "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_WOLVERINE_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_WOLVERINE_PALETTES_P1COLOR_PUNCH) },
    { "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_WOLVERINE_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_WOLVERINE_PALETTES_P2COLOR_KICK) },
};
const sDescTreeNode MSHVSF_A_ZANGIEF_COLLECTION[] =
{
    { "P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_ZANGIEF_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_ZANGIEF_PALETTES_P1COLOR_PUNCH) },
    { "P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_ZANGIEF_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_ZANGIEF_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_BONUS_COLLECTION[] =
{
    { "Character Select Icons",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CSI_PALETTES,    ARRAYSIZE(MSHVSF_A_CSI_PALETTES) },
    { "Super Screen Portraits",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SSP_PALETTES,    ARRAYSIZE(MSHVSF_A_SSP_PALETTES) },
    { "Victory Screen Portraits",  DESC_NODETYPE_TREE,    (void*)MSHVSF_A_VSP_PALETTES,    ARRAYSIZE(MSHVSF_A_VSP_PALETTES) },
};

const sDescTreeNode MSHVSF_A_BONUS_COLLECTION_7B[] =
{
    { "Victory Screen Portraits",  DESC_NODETYPE_TREE,    (void*)MSHVSF_A_VSP_PALETTES_7B,    ARRAYSIZE(MSHVSF_A_VSP_PALETTES_7B) },
};


const sDescTreeNode MSHVSF_A_UNITS_6A[MSHVSF_A_NUM_IND_6A] =
{
    { "Armored Spider-Man",  DESC_NODETYPE_TREE, (void*)MSHVSF_A_ARMORED_SPIDERMAN_COLLECTION,   ARRAYSIZE(MSHVSF_A_ARMORED_SPIDERMAN_COLLECTION) },
    { "Blackheart/Mephisto", DESC_NODETYPE_TREE, (void*)MSHVSF_A_BLACKHEART_MEPHISTO_COLLECTION, ARRAYSIZE(MSHVSF_A_BLACKHEART_MEPHISTO_COLLECTION) },
    { "Captain America",     DESC_NODETYPE_TREE, (void*)MSHVSF_A_CAPTAIN_AMERICA_COLLECTION,     ARRAYSIZE(MSHVSF_A_CAPTAIN_AMERICA_COLLECTION) },
    { "Chun-Li",             DESC_NODETYPE_TREE, (void*)MSHVSF_A_CHUNLI_COLLECTION,              ARRAYSIZE(MSHVSF_A_CHUNLI_COLLECTION) },
    { "Cyber Akuma",         DESC_NODETYPE_TREE, (void*)MSHVSF_A_CYBER_GOUKI_COLLECTION,         ARRAYSIZE(MSHVSF_A_CYBER_GOUKI_COLLECTION) },
    { "Cyclops",             DESC_NODETYPE_TREE, (void*)MSHVSF_A_CYCLOPS_COLLECTION,             ARRAYSIZE(MSHVSF_A_CYCLOPS_COLLECTION) },
    { "Dan",                 DESC_NODETYPE_TREE, (void*)MSHVSF_A_DAN_COLLECTION,                 ARRAYSIZE(MSHVSF_A_DAN_COLLECTION) },
    { "Dark Sakura",         DESC_NODETYPE_TREE, (void*)MSHVSF_A_DARK_SAKURA_COLLECTION,         ARRAYSIZE(MSHVSF_A_DARK_SAKURA_COLLECTION) },
    { "Dhalsim",             DESC_NODETYPE_TREE, (void*)MSHVSF_A_DHALSIM_COLLECTION,             ARRAYSIZE(MSHVSF_A_DHALSIM_COLLECTION) },
    { "Gouki",               DESC_NODETYPE_TREE, (void*)MSHVSF_A_GOUKI_COLLECTION,               ARRAYSIZE(MSHVSF_A_GOUKI_COLLECTION) },
    { "Hulk",                DESC_NODETYPE_TREE, (void*)MSHVSF_A_HULK_COLLECTION,                ARRAYSIZE(MSHVSF_A_HULK_COLLECTION) },
    { "Ken",                 DESC_NODETYPE_TREE, (void*)MSHVSF_A_KEN_COLLECTION,                 ARRAYSIZE(MSHVSF_A_KEN_COLLECTION) },
    { "M. Bison",            DESC_NODETYPE_TREE, (void*)MSHVSF_A_MBIPSON_COLLECTION,             ARRAYSIZE(MSHVSF_A_MBIPSON_COLLECTION) },
    { "Mech-Zangief",        DESC_NODETYPE_TREE, (void*)MSHVSF_A_MECH_ZANGIEF_COLLECTION,        ARRAYSIZE(MSHVSF_A_MECH_ZANGIEF_COLLECTION) },
    { "Norimaro",            DESC_NODETYPE_TREE, (void*)MSHVSF_A_NORIMARO_COLLECTION,            ARRAYSIZE(MSHVSF_A_NORIMARO_COLLECTION) },
    { "Omega Red",           DESC_NODETYPE_TREE, (void*)MSHVSF_A_OMEGARED_COLLECTION,            ARRAYSIZE(MSHVSF_A_OMEGARED_COLLECTION) },
    { "Ryu",                 DESC_NODETYPE_TREE, (void*)MSHVSF_A_RYU_COLLECTION,                 ARRAYSIZE(MSHVSF_A_RYU_COLLECTION) },
    { "Sakura",              DESC_NODETYPE_TREE, (void*)MSHVSF_A_SAKURA_COLLECTION,              ARRAYSIZE(MSHVSF_A_SAKURA_COLLECTION) },
    { "Shadow",              DESC_NODETYPE_TREE, (void*)MSHVSF_A_SHADOW_COLLECTION,              ARRAYSIZE(MSHVSF_A_SHADOW_COLLECTION) },
    { "Shuma-Gorath",        DESC_NODETYPE_TREE, (void*)MSHVSF_A_SHUMAGORATH_COLLECTION,         ARRAYSIZE(MSHVSF_A_SHUMAGORATH_COLLECTION) },
    { "Spider-Man",          DESC_NODETYPE_TREE, (void*)MSHVSF_A_SPIDERMAN_COLLECTION,           ARRAYSIZE(MSHVSF_A_SPIDERMAN_COLLECTION) },
    { "U.S. Agent",          DESC_NODETYPE_TREE, (void*)MSHVSF_A_USAGENT_COLLECTION,             ARRAYSIZE(MSHVSF_A_USAGENT_COLLECTION) },
    { "Wolverine",           DESC_NODETYPE_TREE, (void*)MSHVSF_A_WOLVERINE_COLLECTION,           ARRAYSIZE(MSHVSF_A_WOLVERINE_COLLECTION) },
    { "Zangief",             DESC_NODETYPE_TREE, (void*)MSHVSF_A_ZANGIEF_COLLECTION,             ARRAYSIZE(MSHVSF_A_ZANGIEF_COLLECTION) },
    { "Apocalypse",          DESC_NODETYPE_TREE, (void*)MSHVSF_A_APOCALYPSE_COLLECTION,          ARRAYSIZE(MSHVSF_A_APOCALYPSE_COLLECTION) },
    { "Bonus (Icons, Portraits)", DESC_NODETYPE_TREE, (void*)MSHVSF_A_BONUS_COLLECTION,          ARRAYSIZE(MSHVSF_A_BONUS_COLLECTION) },
};

const sDescTreeNode MSHVSF_A_UNITS_7B[MSHVSF_A_NUM_IND_7B] =
{
    { "Bonus (Portraits)",   DESC_NODETYPE_TREE, (void*)MSHVSF_A_BONUS_COLLECTION_7B,            ARRAYSIZE(MSHVSF_A_BONUS_COLLECTION_7B) },
};

// We extend this array with data groveled from the mshvsfe.txt extensible extras file, if any.
const stExtraDef MSHVSF_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};
