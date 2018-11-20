#pragma once

namespace UnitId {
enum Enum {
    // Short names used in unitdef.txt
    marine               = 0,
    ghost                = 1,
    vulture              = 2,
    goliath              = 3,
    goliath_turret       = 4,
    siege_tank           = 5,
    siege_tank_turret    = 6,
    scv                  = 7,
    wraith               = 8,
    science_vessel       = 9,
    gui_montag           = 10,
    dropship             = 11,
    battlecruiser        = 12,
    spider_mine          = 13,
    nuclear_missile      = 14,
    civilian             = 15,
    sarah_kerrigan       = 16,
    alan_schezar         = 17,
    alan_schezar_turret  = 18,
    jim_raynor_vulture   = 19,
    jim_raynor_marine    = 20,
    tom_kazansky         = 21,
    magellan             = 22,
    edmund_duke          = 23,
    edmund_duke_turret   = 24,
    edmund_duke_s        = 25,
    edmund_duke_s_turret = 26,
    arcturus_mengsk      = 27,
    hyperion             = 28,
    norad_ii             = 29,
    siege_tank_s         = 30,
    siege_tank_s_turret  = 31,
    firebat              = 32,
    scanner_sweep        = 33,
    medic                = 34,
    larva                = 35,
    egg                  = 36,
    zergling             = 37,
    hydralisk            = 38,
    ultralisk            = 39,
    broodling            = 40,
    drone                = 41,
    overlord             = 42,
    mutalisk             = 43,
    guardian             = 44,
    queen                = 45,
    defiler              = 46,
    scourge              = 47,
    torrasque            = 48,
    matriarch            = 49,
    infested_terran      = 50,
    infested_kerrigan    = 51,
    unclean_one          = 52,
    hunter_killer        = 53,
    devouring_one        = 54,
    kukulza_mutalisk     = 55,
    kukulza_guardian     = 56,
    yggdrasill           = 57,
    valkyrie             = 58,
    cocoon               = 59,
    corsair              = 60,
    dark_templar         = 61,
    devourer             = 62,
    dark_archon          = 63,
    zealot               = 65,
    dragoon              = 66,
    high_templar         = 67,
    archon               = 68,
    shuttle              = 69,
    scout                = 70,
    arbiter              = 71,
    carrier              = 72,
    interceptor          = 73,
    dark_templar_hero    = 74,
    zeratul              = 75,
    tassadar_zeratul     = 76,
    fenix_zealot         = 77,
    fenix_dragoon        = 78,
    tassadar             = 79,
    mojo                 = 80,
    warbringer           = 81,
    gantrithor           = 82,
    reaver               = 83,
    observer             = 84,
    scarab               = 85,
    danimoth             = 86,
    aldaris              = 87,
    artanis              = 88,
    rhynadon             = 89,
    bengalaas            = 90,
    cargo_ship           = 91,
    mercenary_gunship    = 92,
    scantid              = 93,
    kakaru               = 94,
    ragnasaur            = 95,
    ursadon              = 96,
    lurker_egg           = 97,
    raszagal             = 98,
    samir_duran          = 99,
    alexei_stukov        = 100,
    map_revealer         = 101,
    gerard_dugalle       = 102,
    lurker               = 103,
    command_center       = 106,
    comsat_station       = 107,
    nuclear_silo         = 108,
    supply_depot         = 109,
    refinery             = 110,
    barracks             = 111,
    academy              = 112,
    factory              = 113,
    starport             = 114,
    control_tower        = 115,
    science_facility     = 116,
    covert_ops           = 117,
    physics_lab          = 118,
    machine_shop         = 120,
    engineering_bay      = 122,
    armory               = 123,
    missile_turret       = 124,
    bunker               = 125,

    infested_command_center = 130,
    hatchery                = 131,
    lair                    = 132,
    hive                    = 133,
    nydus_canal             = 134,
    hydralisk_den           = 135,
    defiler_mound           = 136,
    greater_spire           = 137,
    queen_nest              = 138,
    evolution_chamber       = 139,
    ultralisk_cavern        = 140,
    spire                   = 141,
    spawning_pool           = 142,
    creep_colony            = 143,
    spore_colony            = 144,
    sunken_colony           = 146,
    extractor               = 149,

    probe                       = 64,
    nexus                       = 154,
    robotics_facility           = 155,
    pylon                       = 156,
    assimilator                 = 157,
    observatory                 = 159,
    gateway                     = 160,
    photon_cannon               = 162,
    citadel_of_adun             = 163,
    cybernetics_core            = 164,
    templar_archives            = 165,
    forge                       = 166,
    stargate                    = 167,
    fleet_beacon                = 169,
    arbiter_tribunal            = 170,
    robotics_support_bay        = 171,
    shield_battery              = 172,
    khaydarin_crystal_formation = 173,
    protoss_temple              = 174,
    xelnaga_temple              = 175,
    mineral_field_1             = 176,
    mineral_field_2             = 177,
    mineral_field_3             = 178,

    // Full names
    /*0x00*/ TerranMarine                    = 0,
    /*0x01*/ TerranGhost                     = 1,
    /*0x02*/ TerranVulture                   = 2,
    /*0x03*/ TerranGoliath                   = 3,
    /*0x04*/ TerranGoliathTurret             = 4,
    /*0x05*/ TerranSiegeTankTankMode         = 5,
    /*0x06*/ TerranSiegeTankTankModeTurret   = 6,
    /*0x07*/ TerranSCV                       = 7,
    /*0x08*/ TerranWraith                    = 8,
    /*0x09*/ TerranScienceVessel             = 9,
    /*0x0A*/ Hero_GuiMontag                  = 10,
    /*0x0B*/ TerranDropship                  = 11,
    /*0x0C*/ TerranBattlecruiser             = 12,
    /*0x0D*/ TerranVultureSpiderMine         = 13,
    /*0x0E*/ TerranNuclearMissile            = 14,
    /*0x0F*/ TerranCivilian                  = 15,
    /*0x10*/ Hero_SarahKerrigan              = 16,
    /*0x11*/ Hero_AlanSchezar                = 17,
    /*0x12*/ Hero_AlanSchezarTurret          = 18,
    /*0x13*/ Hero_JimRaynorVulture           = 19,
    /*0x14*/ Hero_JimRaynorMarine            = 20,
    /*0x15*/ Hero_TomKazansky                = 21,
    /*0x16*/ Hero_Magellan                   = 22,
    /*0x17*/ Hero_EdmundDukeTankMode         = 23,
    /*0x18*/ Hero_EdmundDukeTankModeTurret   = 24,
    /*0x19*/ Hero_EdmundDukeSiegeMode        = 25,
    /*0x1A*/ Hero_EdmundDukeSiegeModeTurret  = 26,
    /*0x1B*/ Hero_ArcturusMengsk             = 27,
    /*0x1C*/ Hero_Hyperion                   = 28,
    /*0x1D*/ Hero_NoradII                    = 29,
    /*0x1E*/ TerranSiegeTankSiegeMode        = 30,
    /*0x1F*/ TerranSiegeTankSiegeModeTurret  = 31,
    /*0x20*/ TerranFirebat                   = 32,
    /*0x21*/ Spell_ScannerSweep              = 33,
    /*0x22*/ TerranMedic                     = 34,
    /*0x23*/ ZergLarva                       = 35,
    /*0x24*/ ZergEgg                         = 36,
    /*0x25*/ ZergZergling                    = 37,
    /*0x26*/ ZergHydralisk                   = 38,
    /*0x27*/ ZergUltralisk                   = 39,
    /*0x28*/ ZergBroodling                   = 40,
    /*0x29*/ ZergDrone                       = 41,
    /*0x2A*/ ZergOverlord                    = 42,
    /*0x2B*/ ZergMutalisk                    = 43,
    /*0x2C*/ ZergGuardian                    = 44,
    /*0x2D*/ ZergQueen                       = 45,
    /*0x2E*/ ZergDefiler                     = 46,
    /*0x2F*/ ZergScourge                     = 47,
    /*0x30*/ Hero_Torrasque                  = 48,
    /*0x31*/ Hero_Matriarch                  = 49,
    /*0x32*/ ZergInfestedTerran              = 50,
    /*0x33*/ Hero_InfestedKerrigan           = 51,
    /*0x34*/ Hero_UncleanOne                 = 52,
    /*0x35*/ Hero_HunterKiller               = 53,
    /*0x36*/ Hero_DevouringOne               = 54,
    /*0x37*/ Hero_KukulzaMutalisk            = 55,
    /*0x38*/ Hero_KukulzaGuardian            = 56,
    /*0x39*/ Hero_Yggdrasill                 = 57,
    /*0x3A*/ TerranValkyrie                  = 58,
    /*0x3B*/ ZergCocoon                      = 59,
    /*0x3C*/ ProtossCorsair                  = 60,
    /*0x3D*/ ProtossDarkTemplar              = 61,
    /*0x3E*/ ZergDevourer                    = 62,
    /*0x3F*/ ProtossDarkArchon               = 63,
    /*0x40*/ ProtossProbe                    = 64,
    /*0x41*/ ProtossZealot                   = 65,
    /*0x42*/ ProtossDragoon                  = 66,
    /*0x43*/ ProtossHighTemplar              = 67,
    /*0x44*/ ProtossArchon                   = 68,
    /*0x45*/ ProtossShuttle                  = 69,
    /*0x46*/ ProtossScout                    = 70,
    /*0x47*/ ProtossArbiter                  = 71,
    /*0x48*/ ProtossCarrier                  = 72,
    /*0x49*/ ProtossInterceptor              = 73,
    /*0x4A*/ Hero_DarkTemplar                = 74,
    /*0x4B*/ Hero_Zeratul                    = 75,
    /*0x4C*/ Hero_TassadarZeratulArchon      = 76,
    /*0x4D*/ Hero_FenixZealot                = 77,
    /*0x4E*/ Hero_FenixDragoon               = 78,
    /*0x4F*/ Hero_Tassadar                   = 79,
    /*0x50*/ Hero_Mojo                       = 80,
    /*0x51*/ Hero_Warbringer                 = 81,
    /*0x52*/ Hero_Gantrithor                 = 82,
    /*0x53*/ ProtossReaver                   = 83,
    /*0x54*/ ProtossObserver                 = 84,
    /*0x55*/ ProtossScarab                   = 85,
    /*0x56*/ Hero_Danimoth                   = 86,
    /*0x57*/ Hero_Aldaris                    = 87,
    /*0x58*/ Hero_Artanis                    = 88,
    /*0x59*/ Critter_Rhynadon                = 89,
    /*0x5A*/ Critter_Bengalaas               = 90,
    /*0x5B*/ Special_CargoShip               = 91,
    /*0x5C*/ Special_MercenaryGunship        = 92,
    /*0x5D*/ Critter_Scantid                 = 93,
    /*0x5E*/ Critter_Kakaru                  = 94,
    /*0x5F*/ Critter_Ragnasaur               = 95,
    /*0x60*/ Critter_Ursadon                 = 96,
    /*0x61*/ ZergLurkerEgg                   = 97,
    /*0x62*/ Hero_Raszagal                   = 98,
    /*0x63*/ Hero_SamirDuran                 = 99,
    /*0x64*/ Hero_AlexeiStukov               = 100,
    /*0x65*/ Special_MapRevealer             = 101,
    /*0x66*/ Hero_GerardDuGalle              = 102,
    /*0x67*/ ZergLurker                      = 103,
    /*0x68*/ Hero_InfestedDuran              = 104,
    /*0x69*/ Spell_DisruptionWeb             = 105,
    /*0x6A*/ TerranCommandCenter             = 106,
    /*0x6B*/ TerranComsatStation             = 107,
    /*0x6C*/ TerranNuclearSilo               = 108,
    /*0x6D*/ TerranSupplyDepot               = 109,
    /*0x6E*/ TerranRefinery                  = 110,
    /*0x6F*/ TerranBarracks                  = 111,
    /*0x70*/ TerranAcademy                   = 112,
    /*0x71*/ TerranFactory                   = 113,
    /*0x72*/ TerranStarport                  = 114,
    /*0x73*/ TerranControlTower              = 115,
    /*0x74*/ TerranScienceFacility           = 116,
    /*0x75*/ TerranCovertOps                 = 117,
    /*0x76*/ TerranPhysicsLab                = 118,
    /*0x77*/ UnusedTerran1                   = 119,
    /*0x78*/ TerranMachineShop               = 120,
    /*0x79*/ UnusedTerran2                   = 121,
    /*0x7A*/ TerranEngineeringBay            = 122,
    /*0x7B*/ TerranArmory                    = 123,
    /*0x7C*/ TerranMissileTurret             = 124,
    /*0x7D*/ TerranBunker                    = 125,
    /*0x7E*/ Special_CrashedNoradII          = 126,
    /*0x7F*/ Special_IonCannon               = 127,
    /*0x80*/ Powerup_UrajCrystal             = 128,
    /*0x81*/ Powerup_KhalisCrystal           = 129,
    /*0x82*/ ZergInfestedCommandCenter       = 130,
    /*0x83*/ ZergHatchery                    = 131,
    /*0x84*/ ZergLair                        = 132,
    /*0x85*/ ZergHive                        = 133,
    /*0x86*/ ZergNydusCanal                  = 134,
    /*0x87*/ ZergHydraliskDen                = 135,
    /*0x88*/ ZergDefilerMound                = 136,
    /*0x89*/ ZergGreaterSpire                = 137,
    /*0x8A*/ ZergQueensNest                  = 138,
    /*0x8B*/ ZergEvolutionChamber            = 139,
    /*0x8C*/ ZergUltraliskCavern             = 140,
    /*0x8D*/ ZergSpire                       = 141,
    /*0x8E*/ ZergSpawningPool                = 142,
    /*0x8F*/ ZergCreepColony                 = 143,
    /*0x90*/ ZergSporeColony                 = 144,
    /*0x91*/ UnusedZerg1                     = 145,
    /*0x92*/ ZergSunkenColony                = 146,
    /*0x93*/ Special_OvermindWithShell       = 147,
    /*0x94*/ Special_Overmind                = 148,
    /*0x95*/ ZergExtractor                   = 149,
    /*0x96*/ Special_MatureChrysalis         = 150,
    /*0x97*/ Special_Cerebrate               = 151,
    /*0x98*/ Special_CerebrateDaggoth        = 152,
    /*0x99*/ UnusedZerg2                     = 153,
    /*0x9A*/ ProtossNexus                    = 154,
    /*0x9B*/ ProtossRoboticsFacility         = 155,
    /*0x9C*/ ProtossPylon                    = 156,
    /*0x9D*/ ProtossAssimilator              = 157,
    /*0x9E*/ UnusedProtoss1                  = 158,
    /*0x9F*/ ProtossObservatory              = 159,
    /*0xA0*/ ProtossGateway                  = 160,
    /*0xA1*/ UnusedProtoss2                  = 161,
    /*0xA2*/ ProtossPhotonCannon             = 162,
    /*0xA3*/ ProtossCitadelofAdun            = 163,
    /*0xA4*/ ProtossCyberneticsCore          = 164,
    /*0xA5*/ ProtossTemplarArchives          = 165,
    /*0xA6*/ ProtossForge                    = 166,
    /*0xA7*/ ProtossStargate                 = 167,
    /*0xA8*/ Special_StasisCellPrison        = 168,
    /*0xA9*/ ProtossFleetBeacon              = 169,
    /*0xAA*/ ProtossArbiterTribunal          = 170,
    /*0xAB*/ ProtossRoboticsSupportBay       = 171,
    /*0xAC*/ ProtossShieldBattery            = 172,
    /*0xAD*/ Special_KhaydarinCrystalForm    = 173,
    /*0xAE*/ Special_ProtossTemple           = 174,
    /*0xAF*/ Special_XelNagaTemple           = 175,
    /*0xB0*/ ResourceMineralField            = 176,
    /*0xB1*/ ResourceMineralFieldType2       = 177,
    /*0xB2*/ ResourceMineralFieldType3       = 178,
    /*0xB3*/ UnusedCave                      = 179,
    /*0xB4*/ UnusedCaveIn                    = 180,
    /*0xB5*/ UnusedCantina                   = 181,
    /*0xB6*/ UnusedMiningPlatform            = 182,
    /*0xB7*/ UnusedIndependentCommandCenter  = 183,
    /*0xB8*/ Special_IndependentStarport     = 184,
    /*0xB9*/ UnusedIndependentJumpGate       = 185,
    /*0xBA*/ UnusedRuins                     = 186,
    /*0xBB*/ UnusedKhaydarinCrystalFormation = 187,
    /*0xBC*/ ResourceVespeneGeyser           = 188,
    /*0xBD*/ Special_WarpGate                = 189,
    /*0xBE*/ Special_PsiDisrupter            = 190,
    /*0xBF*/ UnusedZergMarker                = 191,
    /*0xC0*/ UnusedTerranMarker              = 192,
    /*0xC1*/ UnusedProtossMarker             = 193,
    /*0xC2*/ Special_ZergBeacon              = 194,
    /*0xC3*/ Special_TerranBeacon            = 195,
    /*0xC4*/ Special_ProtossBeacon           = 196,
    /*0xC5*/ Special_ZergFlagBeacon          = 197,
    /*0xC6*/ Special_TerranFlagBeacon        = 198,
    /*0xC7*/ Special_ProtossFlagBeacon       = 199,
    /*0xC8*/ Special_PowerGenerator          = 200,
    /*0xC9*/ Special_OvermindCocoon          = 201,
    /*0xCA*/ Spell_DarkSwarm                 = 202,
    /*0xCB*/ Special_FloorMissileTrap        = 203,
    /*0xCC*/ Special_FloorHatch              = 204,
    /*0xCD*/ Special_UpperLevelDoor          = 205,
    /*0xCE*/ Special_RightUpperLevelDoor     = 206,
    /*0xCF*/ Special_PitDoor                 = 207,
    /*0xD0*/ Special_RightPitDoor            = 208,
    /*0xD1*/ Special_FloorGunTrap            = 209,
    /*0xD2*/ Special_WallMissileTrap         = 210,
    /*0xD3*/ Special_WallFlameTrap           = 211,
    /*0xD4*/ Special_RightWallMissileTrap    = 212,
    /*0xD5*/ Special_RightWallFlameTrap      = 213,
    /*0xD6*/ Special_StartLocation           = 214,
    /*0xD7*/ Powerup_Flag                    = 215,
    /*0xD8*/ Powerup_YoungChrysalis          = 216,
    /*0xD9*/ Powerup_PsiEmitter              = 217,
    /*0xDA*/ Powerup_DataDisk                = 218,
    /*0xDB*/ Powerup_KhaydarinCrystal        = 219,
    /*0xDC*/ Powerup_MineralClusterType1     = 220,
    /*0xDD*/ Powerup_MineralClusterType2     = 221,
    /*0xDE*/ Powerup_ProtossGasOrbType1      = 222,
    /*0xDF*/ Powerup_ProtossGasOrbType2      = 223,
    /*0xE0*/ Powerup_ZergGasSacType1         = 224,
    /*0xE1*/ Powerup_ZergGasSacType2         = 225,
    /*0xE2*/ Powerup_TerranGasTankType1      = 226,
    /*0xE3*/ Powerup_TerranGasTankType2      = 227,
    /*0xE4*/ None                            = 228,
    /*0xE5*/ AnyUnit                         = 229,
    /*0xE6*/ Men                             = 230,
    /*0xE7*/ Buildings                       = 231,
    /*0xE8*/ Factories                       = 232,
    /*0xE9*/ TrigMax                         = 233,

    // Buttonsets using unitid beyond Unit::None

    /*0xE4*/ Buttons_Blank                         = 228,
    /*0xE5*/ Buttons_Cancel                        = 229,
    /*0xE6*/ Buttons_CancelPlaceBuilding           = 230,
    /*0xE7*/ Buttons_CancelConstruction            = 231,
    /*0xE8*/ Buttons_CancelConstructionWithRallyPt = 232,
    /*0xE9*/ Buttons_CancelMutation                = 233,
    /*0xEA*/ Buttons_CancelMutationWithRallyPt     = 234,
    /*0xEB*/ Buttons_CancelInfestation             = 235,
    /*0xEC*/ Buttons_HatcheryMorphing              = 236,
    /*0xED*/ Buttons_CancelNukeStrike              = 237,
    /*0xEE*/ Buttons_BasicZergBuildings            = 238,
    /*0xEF*/ Buttons_BasicTerranBuildings          = 239,
    /*0xF0*/ Buttons_BasicProtossBuildings         = 240,
    /*0xF1*/ Buttons_AdvancedZergBuildings         = 241,
    /*0xF2*/ Buttons_AdvancedTerranBuildings       = 242,
    /*0xF3*/ Buttons_AdvancedProtossBuildings      = 243,
    /*0xF4*/ Buttons_GroupMixed                    = 244,
    /*0xF5*/ Buttons_GroupPeons                    = 245,
    /*0xF6*/ Buttons_GroupCloaker                  = 246,
    /*0xF7*/ Buttons_GroupBurrower                 = 247,
    /*0xF8*/ Buttons_ReplayPaused                  = 248,
    /*0xF9*/ Buttons_ReplayPlaying                 = 249

};
}
