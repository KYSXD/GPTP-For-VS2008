#pragma once

// From DatEdit Icons.txt

namespace IconId {
enum Enum {
    /*0000*/ Marine,
    /*0001*/ Ghost,
    /*0002*/ Vulture,
    /*0003*/ Goliath,
    /*0004*/ Blank_Goliath_Turret,
    /*0005*/ Siege_Tank_Tank_Mode,
    /*0006*/ Blank_Tank_Turret,
    /*0007*/ SCV,
    /*0008*/ Wraith,
    /*0009*/ Science_Vessel,
    /*000A*/ Gui_Montag_Firebat,
    /*000B*/ Dropship,
    /*000C*/ Battlecruiser,
    /*000D*/ Vulture_Spider_Mine,
    /*000E*/ Nuclear_Missile,
    /*000F*/ Civilian,
    /*0010*/ Sarah_Kerrigan_Ghost,
    /*0011*/ Alan_Schezar_Goliath,
    /*0012*/ Blank_Alan_Turret,
    /*0013*/ Jim_Raynor_Vulture,
    /*0014*/ Jim_Raynor_Marine,
    /*0015*/ Tom_Kazansky_Wraith,
    /*0016*/ Magellan_Science_Vessel,
    /*0017*/ Edmund_Duke_Siege_Tank,
    /*0018*/ Blank_Duke_Turret_Tank,
    /*0019*/ Edmund_Duke_Siege_Mode,
    /*001A*/ Blank_Duke_Turret_Siege,
    /*001B*/ Blank_Arcturus_Mengsk,
    /*001C*/ Hyperion_Battlecruiser,
    /*001D*/ Norad_II_Battlecruiser,
    /*001E*/ Terran_Siege_Tank_Siege_Mode,
    /*001F*/ Blank_Siege_Tank_Turret,
    /*0020*/ Firebat,
    /*0021*/ Marine_Scanner_Sweep,
    /*0022*/ Medic,
    /*0023*/ Larva,
    /*0024*/ Radioactive_Zerg_Egg,
    /*0025*/ Zergling,
    /*0026*/ Hydralisk,
    /*0027*/ Ultralisk,
    /*0028*/ Broodling,
    /*0029*/ Drone,
    /*002A*/ Overlord,
    /*002B*/ Mutalisk,
    /*002C*/ Guardian,
    /*002D*/ Queen,
    /*002E*/ Defiler,
    /*002F*/ Scourge,
    /*0030*/ Torrarsque_Ultralisk,
    /*0031*/ Matriarch_Queen,
    /*0032*/ Infested_Terran,
    /*0033*/ Infested_Kerrigan_Infested_Terran,
    /*0034*/ Unclean_One_Defiler,
    /*0035*/ Hunter_Killer_Hydralisk,
    /*0036*/ Devouring_One_Zergling,
    /*0037*/ Kukulza_Mutalisk,
    /*0038*/ Kukulza_Guardian,
    /*0039*/ Yggdrasill_Overlord,
    /*003A*/ Valkyrie,
    /*003B*/ Mutalisk_Guardian_Cocoon,
    /*003C*/ Corsair,
    /*003D*/ Dark_Templar_Unit,
    /*003E*/ Devourer,
    /*003F*/ Dark_Archon,
    /*0040*/ Probe,
    /*0041*/ Zealot,
    /*0042*/ Dragoon,
    /*0043*/ High_Templar,
    /*0044*/ Archon,
    /*0045*/ Shuttle,
    /*0046*/ Scout,
    /*0047*/ Arbiter,
    /*0048*/ Carrier,
    /*0049*/ Interceptor,
    /*004A*/ Dark_Templar_Hero,
    /*004B*/ Zeratul_Dark_Templar,
    /*004C*/ Tassadar_Zeratul_Archon,
    /*004D*/ Fenix_Zealot,
    /*004E*/ Fenix_Dragoon,
    /*004F*/ Tassadar_Templar,
    /*0050*/ Mojo_Scout,
    /*0051*/ Warbringer_Reaver,
    /*0052*/ Gantrithor_Carrier,
    /*0053*/ Reaver,
    /*0054*/ Observer,
    /*0055*/ Scarab,
    /*0056*/ Danimoth_Arbiter,
    /*0057*/ Blank_Aldaris,
    /*0058*/ Artanis_Scout,
    /*0059*/ Rhynadon_Badlands_Critter,
    /*005A*/ Bengalaas_Jungle_Critter,
    /*005B*/ Lurker_Cargo_Ship_Unused,
    /*005C*/ Mercenary_Gunship_Unused,
    /*005D*/ Scantid_Desert_Critter,
    /*005E*/ Kakaru_Twilight_Critter,
    /*005F*/ Ragnasaur_Ashworld_Critter,
    /*0060*/ Ursadon_Ice_Critter,
    /*0061*/ Blank_Zerg_Lurker_Egg,
    /*0062*/ Blank_Raszagal,
    /*0063*/ Samir_Duran_Ghost,
    /*0064*/ Alexei_Stukov_Ghost,
    /*0065*/ Map_Revealer,
    /*0066*/ Blank_Gerard_DuGalle,
    /*0067*/ Lurker,
    /*0068*/ Infested_Duran_Infested_Terran,
    /*0069*/ Blank_Disruption_Field,
    /*006A*/ Command_Center,
    /*006B*/ Comsat_Station,
    /*006C*/ Nuclear_Silo,
    /*006D*/ Supply_Depot,
    /*006E*/ Refinery,
    /*006F*/ Barracks,
    /*0070*/ Academy,
    /*0071*/ Factory,
    /*0072*/ Starport,
    /*0073*/ Control_Tower,
    /*0074*/ Science_Facility,
    /*0075*/ Covert_Ops,
    /*0076*/ Physics_Lab,
    /*0077*/ Blank_Starbase_Unused,
    /*0078*/ Machine_Shop,
    /*0079*/ Repair_Bay_Unused,
    /*007A*/ Engineering_Bay,
    /*007B*/ Armory,
    /*007C*/ Missile_Tower,
    /*007D*/ Bunker,
    /*007E*/ Crashed_Norad_II,
    /*007F*/ Ion_Cannon,
    /*0080*/ Uraj,
    /*0081*/ Khalis,
    /*0082*/ Infested_Command_Center,
    /*0083*/ Hatchery,
    /*0084*/ Lair,
    /*0085*/ Hive,
    /*0086*/ Nydus_Canal,
    /*0087*/ Hydralisk_Den,
    /*0088*/ Defiler_Mound,
    /*0089*/ Greater_Spire,
    /*008A*/ Queens_Nest,
    /*008B*/ Evolution_Chamber,
    /*008C*/ Ultralisk_Cavern,
    /*008D*/ Spire,
    /*008E*/ Spawning_Pool,
    /*008F*/ Creep_Colony,
    /*0090*/ Spore_Colony,
    /*0091*/ Radioactive_Zerg_Bldg1_Unused,
    /*0092*/ Sunken_Colony,
    /*0093*/ Overmind_Without_Shell,
    /*0094*/ Overmind_With_Shell,
    /*0095*/ Extractor,
    /*0096*/ Mature_Chrysalis,
    /*0097*/ Cerebrate,
    /*0098*/ Cerebrate_Daggoth,
    /*0099*/ Blank_Zerg_Bldg2_Unused,
    /*009A*/ Nexus,
    /*009B*/ Robotics_Facility,
    /*009C*/ Pylon,
    /*009D*/ Assimilator,
    /*009E*/ Blank_Protoss_Bldg1_Unused,
    /*009F*/ Observatory,
    /*00A0*/ Gateway,
    /*00A1*/ Blank_Protoss_Bldg2_Unused,
    /*00A2*/ Photon_Cannon2,
    /*00A3*/ Citadel_of_Adun,
    /*00A4*/ Cybernetics_Core,
    /*00A5*/ Templar_Archives,
    /*00A6*/ Forge,
    /*00A7*/ Stargate,
    /*00A8*/ Stasis_Cell_Prison,
    /*00A9*/ Fleet_Beacon,
    /*00AA*/ Arbiter_Tribunal,
    /*00AB*/ Robotics_Support_Bay,
    /*00AC*/ Shield_Battery,
    /*00AD*/ Khaydarin_Crystal_Formation,
    /*00AE*/ Protoss_Temple,
    /*00AF*/ XelNaga_Temple,
    /*00B0*/ Mineral_Cluster_Type_1,
    /*00B1*/ Mineral_Cluster_Type_2,
    /*00B2*/ Mineral_Cluster_Type_3,
    /*00B3*/ Blank_Cave_Unused,
    /*00B4*/ Blank_Cavein_Unused,
    /*00B5*/ Blank_Cantina_Unused,
    /*00B6*/ Blank_Mining_Platform_Unused,
    /*00B7*/ Blank_Independent_CC_Unused,
    /*00B8*/ Blank_Independent_Starport_Unused,
    /*00B9*/ Blank_Jump_Gate_Unused,
    /*00BA*/ Blank_Ruins_Unused,
    /*00BB*/ Blank_Khayd_Crystal_Form_Unused,
    /*00BC*/ Vespene_Geyser,
    /*00BD*/ Warp_Gate,
    /*00BE*/ Psi_Disrupter,
    /*00BF*/ Blank_Zerg_Marker,
    /*00C0*/ Blank_Terran_Marker,
    /*00C1*/ Blank_Protoss_Marker,
    /*00C2*/ Zerg_Beacon,
    /*00C3*/ Terran_Beacon,
    /*00C4*/ Protoss_Beacon,
    /*00C5*/ Zerg_Flag_Beacon,
    /*00C6*/ Terran_Flag_Beacon,
    /*00C7*/ Protoss_Flag_Beacon,
    /*00C8*/ Power_Generator,
    /*00C9*/ Overmind_Cocoon,
    /*00CA*/ Blank_Dark_Swarm,
    /*00CB*/ Blank_Floor_Missile_Trap,
    /*00CC*/ Blank_Floor_Hatch_Unused,
    /*00CD*/ Blank_Left_Upper_Level_Door,
    /*00CE*/ Blank_Right_Upper_Level_Door,
    /*00CF*/ Blank_Left_Pit_Door,
    /*00D0*/ Blank_Right_Pit_Door,
    /*00D1*/ Blank_Floor_Gun_Trap,
    /*00D2*/ Blank_Left_Wall_Missile_Trap,
    /*00D3*/ Blank_Left_Wall_Flame_Trap,
    /*00D4*/ Infested_Mine_Unused,
    /*00D5*/ Blank_Right_Wall_Flame_Trap,
    /*00D6*/ Start_Location,
    /*00D7*/ Flag,
    /*00D8*/ Young_Chrysalis,
    /*00D9*/ Psi_Emitter,
    /*00DA*/ Data_Disc,
    /*00DB*/ Khaydarin_Crystal,
    /*00DC*/ Blank_Mineral_Chunk_Type_1,
    /*00DD*/ Blank_Mineral_Chunk_Type_2,
    /*00DE*/ Blank_Protoss_Vespene_Orb_Type_1,
    /*00DF*/ Blank_Protoss_Vespene_Orb_Type_2,
    /*00E0*/ Blank_Zerg_Vespene_Sac_Type_1,
    /*00E1*/ Blank_Zerg_Vespene_Sac_Type_2,
    /*00E2*/ Blank_Terran_Vespene_Tank_Type_1,
    /*00E3*/ Blank_Terran_Vespene_Tank_Type_2,
    /*00E4*/ Move,
    /*00E5*/ Stop,
    /*00E6*/ Attack,
    /*00E7*/ Gather,
    /*00E8*/ Repair,
    /*00E9*/ Return_Resources,
    /*00EA*/ Terran_Basic_Buildings,
    /*00EB*/ Terran_Advanced_Buildings,
    /*00EC*/ Cancel,
    /*00ED*/ Use_Stimpack,
    /*00EE*/ U238_Shells,
    /*00EF*/ Burst_Lasers_Unused,
    /*00F0*/ Lockdown,
    /*00F1*/ EMP_Shockwave,
    /*00F2*/ Irradiate,
    /*00F3*/ Use_Spider_Mines,
    /*00F4*/ Afterburners_Unused_Terran_Upgrade,
    /*00F5*/ Seige_Mode,
    /*00F6*/ Tank_Mode,
    /*00F7*/ Defensive_Matrix,
    /*00F8*/ Titan_Reactor,
    /*00F9*/ Ocular_Implants,
    /*00FA*/ Scanner_Sweep,
    /*00FB*/ Yamato_Gun,
    /*00FC*/ Cloak,
    /*00FD*/ Decloak,
    /*00FE*/ Patrol,
    /*00FF*/ Hold_Position,
    /*0100*/ Moebius_Reactor,
    /*0101*/ Zerg_Basic_Buildings,
    /*0102*/ Zerg_Advanced_Buildings,
    /*0103*/ Burrow,
    /*0104*/ Unburrow,
    /*0105*/ Ventral_Sacs,
    /*0106*/ Antennae,
    /*0107*/ Metabolic_Boost,
    /*0108*/ Adrenal_Glands,
    /*0109*/ Plague,
    /*010A*/ Muscular_Augments,
    /*010B*/ Ensnare,
    /*010C*/ Grooved_Spines,
    /*010D*/ Roar_Unused_Zerg_Upgrade,
    /*010E*/ Dark_Swarm,
    /*010F*/ Parasite,
    /*0110*/ Protoss_Basic_Buildings,
    /*0111*/ Protoss_Advanced_Buildings,
    /*0112*/ Mind_Control_SC_Beta_Unused,
    /*0113*/ Psionic_Storm,
    /*0114*/ Gravitic_Boosters,
    /*0115*/ Hallucination,
    /*0116*/ Stasis_Field,
    /*0117*/ Blank,
    /*0118*/ Recall,
    /*0119*/ Singularity_Charge,
    /*011A*/ Lift_off,
    /*011B*/ Land,
    /*011C*/ Apollo_Reactor,
    /*011D*/ Colossus_Reactor,
    /*011E*/ Set_Rally_Point,
    /*011F*/ Ion_Thrusters,
    /*0120*/ Infantry_Weapons,
    /*0121*/ Vehicle_Weapons,
    /*0122*/ Ship_Weapons,
    /*0123*/ Ship_Plating,
    /*0124*/ Infantry_Armor,
    /*0125*/ Vehicle_Armor,
    /*0126*/ Gamete_Meiosis,
    /*0127*/ Metasynaptic_Node,
    /*0128*/ Pneumatized_Caparace,
    /*0129*/ Zerg_Caparace,
    /*012A*/ Flyer_Caparace,
    /*012B*/ Melee_Attacks,
    /*012C*/ Missile_Attacks,
    /*012D*/ Flyer_Attacks,
    /*012E*/ Consume,
    /*012F*/ Ground_Armor,
    /*0130*/ Air_Plating,
    /*0131*/ Ground_Weapons,
    /*0132*/ Air_Weapons,
    /*0133*/ Leg_Enhancements,
    /*0134*/ Recharge_Shields,
    /*0135*/ Load_into_Transport,
    /*0136*/ Plasma_Shields,
    /*0137*/ Nuclear_Strike,
    /*0138*/ Unload_All_from_Transport_Bunker,
    /*0139*/ Infest_Command_Center,
    /*013A*/ Scarab_Damage,
    /*013B*/ Reaver_Capacity,
    /*013C*/ Gravitic_Drive,
    /*013D*/ Sensor_Array,
    /*013E*/ Khaydarin_Amulet,
    /*013F*/ Apial_Sensors,
    /*0140*/ Gravitic_Thrusters,
    /*0141*/ Carrier_Capacity,
    /*0142*/ Khaydarin_Core,
    /*0143*/ Gauss_Rifle,
    /*0144*/ C10_Canister_Rifle,
    /*0145*/ Fragmentation_Grenade,
    /*0146*/ Twin_Autocannons,
    /*0147*/ Hellfire_Missile_Pack,
    /*0148*/ Arclite_Cannon,
    /*0149*/ Fusion_Cutter,
    /*014A*/ Fusion_Cutter_Harvest,
    /*014B*/ Gemini_Missiles,
    /*014C*/ Burst_Lasers,
    /*014D*/ ATS_Laser_Battery,
    /*014E*/ ATA_Laser_Battery,
    /*014F*/ Flame_Thrower,
    /*0150*/ Arclite_Shock_Cannon,
    /*0151*/ Longbolt_Missile,
    /*0152*/ Claws,
    /*0153*/ Needle_Spines,
    /*0154*/ Kaiser_Blades,
    /*0155*/ Toxic_Spores,
    /*0156*/ Spines,
    /*0157*/ Flyer_Attack,
    /*0158*/ Acid_Spore,
    /*0159*/ Glave_Wurm,
    /*015A*/ Venom_Unused_Zerg_Weapon,
    /*015B*/ Seeker_Spores,
    /*015C*/ Subterranean_Tentacle,
    /*015D*/ Suicide_Infested_Terran,
    /*015E*/ Suicide_Scourge,
    /*015F*/ Particle_Beam,
    /*0160*/ Particle_Beam_Harvest,
    /*0161*/ Psi_Warp_Blades,
    /*0162*/ Phase_Disruptor,
    /*0163*/ Psi_Assault,
    /*0164*/ Psionic_Shockwave,
    /*0165*/ Radioactive_Unused,
    /*0166*/ Dual_Photon_Blasters,
    /*0167*/ Antimatter_Missiles,
    /*0168*/ Phase_Disruptor_Cannon,
    /*0169*/ Pulse_Cannon,
    /*016A*/ Photon_Cannon,
    /*016B*/ Radioactive_Unused2,
    /*016C*/ Spider_Mine,
    /*016D*/ Heal,
    /*016E*/ Restoration,
    /*016F*/ Restoration2,
    /*0170*/ Disruption_Web,
    /*0171*/ Disruption_Web2,
    /*0172*/ Unknown371,
    /*0173*/ Mind_Control,
    /*0174*/ Feedback,
    /*0175*/ Optical_Flare,
    /*0176*/ Afterburners_ON_Unused,
    /*0177*/ Afterburners_OFF_Unused,
    /*0178*/ Lurker_Aspect,
    /*0179*/ Unknown378,
    /*017A*/ Anabolic_Synthesis,
    /*017B*/ Chitinous_Plating,
    /*017C*/ Charon_Boosters,
    /*017D*/ Maelstrom,
    /*017E*/ Subterranean_Spines,
    /*017F*/ Argus_Jewel,
    /*0180*/ Caduceus_Reactor,
    /*0181*/ Argus_Talisman,
    /*0182*/ Play_Replay,
    /*0183*/ Pause_Replay,
    /*0184*/ Speed_Up_Replay,
    /*0185*/ Slow_Down_Replay
};
}
