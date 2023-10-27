#ifndef GUARD_SCRIPT_MENU_CONSTANTS_H
#define GUARD_SCRIPT_MENU_CONSTANTS_H

#define MULTICHOICE(name) {name, ARRAY_COUNT(name)}

#define MAX_MULTICHOICE_WIDTH 28

// Multichoice Ids
#define MULTI_NULL	            		   0
#define MULTI_PC                           1 // Exit only, populated by CreatePCMultichoice
#define MULTI_ENTERINFO                    2
#define MULTI_CONTEST_INFO                 3
#define MULTI_CONTEST_TYPE                 4
#define MULTI_BASE_PC_NO_REGISTRY          5
#define MULTI_BASE_PC_WITH_REGISTRY        6
#define MULTI_REGISTER_MENU                7
#define MULTI_SSTIDAL_LILYCOVE             8 // Exit only, populated by CreateLilycoveSSTidalMultichoice
#define MULTI_FRONTIER_PASS_INFO           9
#define MULTI_BIKE                         10
#define MULTI_STATUS_INFO                  11
#define MULTI_VIEWED_PAINTINGS             12
#define MULTI_YESNOINFO                    13
#define MULTI_BATTLE_MODE                  14
#define MULTI_YESNOINFO_2                  15
#define MULTI_CHALLENGEINFO                16
#define MULTI_LEVEL_MODE                   17
#define MULTI_MECHADOLL1_Q1                18
#define MULTI_MECHADOLL1_Q2                19
#define MULTI_MECHADOLL1_Q3                20
#define MULTI_MECHADOLL2_Q1                21
#define MULTI_MECHADOLL2_Q2                22
#define MULTI_MECHADOLL2_Q3                23
#define MULTI_MECHADOLL3_Q1                24
#define MULTI_MECHADOLL3_Q2                25
#define MULTI_MECHADOLL3_Q3                26
#define MULTI_MECHADOLL4_Q1                27
#define MULTI_MECHADOLL4_Q2                28
#define MULTI_MECHADOLL4_Q3                29
#define MULTI_MECHADOLL5_Q1                30
#define MULTI_MECHADOLL5_Q2                31
#define MULTI_MECHADOLL5_Q3                32
#define MULTI_VENDING_MACHINE              33
#define MULTI_MACH_BIKE_INFO               34
#define MULTI_ACRO_BIKE_INFO               35
#define MULTI_SATISFACTION                 36
#define MULTI_TRAINER_SCHOOL_WHITEBOARD    37
#define MULTI_GAME_CORNER_DOLLS            38
#define MULTI_GAME_CORNER_COINS            39
#define MULTI_GAME_CORNER_CUSHIONS         40
#define MULTI_GAME_CORNER_TM               41
#define MULTI_HOWS_FISHING                 42 // Can probably be removed
#define MULTI_SSTIDAL_SLATEPORT_WITH_BF    43 // Can probably be removed
#define MULTI_SSTIDAL_BATTLE_FRONTIER      44
#define MULTI_RIGHTLEFT                    45
#define MULTI_FRONTIER_FLOORS       	   46
#define MULTI_FLOORS                       47
#define MULTI_SHARDS_R                     48
#define MULTI_SHARDS_Y                     49
#define MULTI_SHARDS_RY                    50
#define MULTI_SHARDS_B                     51
#define MULTI_SHARDS_RB                    52
#define MULTI_SHARDS_YB                    53
#define MULTI_SHARDS_RYB                   54
#define MULTI_SHARDS_G                     55
#define MULTI_SHARDS_RG                    56
#define MULTI_SHARDS_YG                    57
#define MULTI_SHARDS_RYG                   58
#define MULTI_SHARDS_BG                    59
#define MULTI_SHARDS_RBG                   60
#define MULTI_SHARDS_YBG                   61
#define MULTI_SHARDS_RYBG                  62
#define MULTI_TOURNEY_WITH_RECORD          63
#define MULTI_CABLE_CLUB_NO_RECORD_MIX     64
#define MULTI_WIRELESS_NO_RECORD_BERRY     65
#define MULTI_CABLE_CLUB_WITH_RECORD_MIX   66
#define MULTI_WIRELESS_NO_BERRY            67
#define MULTI_WIRELESS_NO_RECORD           68
#define MULTI_WIRELESS_ALL_SERVICES        69
#define MULTI_WIRELESS_MINIGAME            70
#define MULTI_LINK_LEADER                  71
#define MULTI_CONTEST_RANK                 72
#define MULTI_FRONTIER_ITEM_CHOOSE         73
#define MULTI_LINK_CONTEST_INFO            74
#define MULTI_LINK_CONTEST_MODE            75
#define MULTI_FORCED_START_MENU            76
#define MULTI_FRONTIER_GAMBLER_BET         77
#define MULTI_TENT                         78 // Can probably be removed
#define MULTI_FOSSIL                       79 // Can probably be removed
#define MULTI_YESNO                        80
#define MULTI_FRONTIER_RULES               81
#define MULTI_BATTLE_ARENA_RULES           82
#define MULTI_BATTLE_TOWER_RULES           83
#define MULTI_BATTLE_DOME_RULES            84
#define MULTI_BATTLE_FACTORY_RULES         85
#define MULTI_BATTLE_PALACE_RULES          86
#define MULTI_BATTLE_PYRAMID_RULES         87
#define MULTI_BATTLE_PIKE_RULES            88
#define MULTI_GO_ON_RECORD_REST_RETIRE     89
#define MULTI_GO_ON_REST_RETIRE            90
#define MULTI_GO_ON_RECORD_RETIRE          91
#define MULTI_GO_ON_RETIRE                 92
#define MULTI_TOURNEY_NO_RECORD            93
#define MULTI_TV_LATI                      94 // Can probably be removed
#define MULTI_BATTLE_TOWER_FEELINGS        95
#define MULTI_SLATEPORT_TENT_RULES         96
#define MULTI_FALLARBOR_TENT_RULES         97
#define MULTI_TAG_MATCH_TYPE               98
#define MULTI_DRESSER_DRAWERS              99
#define MULTI_KANTO_COSTUMES               100
#define MULTI_JOHTO_COSTUMES               101
#define MULTI_HOENN_COSTUMES               102
#define MULTI_SINNOH_COSTUMES              103
#define MULTI_BILLS_POKEMON				   104
#define MULTI_FRESH_WATER                  105
#define MULTI_SODA_POP                     106
#define MULTI_FRESH_WATER_SODA_POP         107
#define MULTI_LEMONADE                     108
#define MULTI_FRESH_WATER_LEMONADE         109
#define MULTI_SODA_POP_LEMONADE            110
#define MULTI_ALL_DRINKS 				   111
#define MULTI_HIDEOUT_FLOORS               112
#define MULTI_GAME_CORNER_BIG_DOLLS		   113
#define MULTI_SILPH_FLOORS                 114
#define MULTI_FOSSIL_AMBERDOME             115
#define MULTI_FOSSIL_AMBERHELIX            116
#define MULTI_FOSSIL_DOMEHELIX             117
#define MULTI_FOSSIL_ALL                   118
#define MULTI_BATTLE_MODE_2                119
#define MULTI_UNUSED_119                   120
#define MULTI_UNUSED_120                   121
#define MULTI_UNUSED_121                   122
#define MULTI_UNUSED_122           		   123
#define MULTI_UNUSED_123             	   124
#define MULTI_UNUSED_124             	   125
#define MULTI_UNUSED_125             	   126
#define MULTI_UNUSED_126             	   127
#define MULTI_B_PRESSED                    128

// Lilycove SS Tidal Multichoice Selections
#define SSTIDAL_SELECTION_SLATEPORT        0
#define SSTIDAL_SELECTION_BATTLE_FRONTIER  1
#define SSTIDAL_SELECTION_SOUTHERN_ISLAND  2
#define SSTIDAL_SELECTION_NAVEL_ROCK       3
#define SSTIDAL_SELECTION_BIRTH_ISLAND     4
#define SSTIDAL_SELECTION_FARAWAY_ISLAND   5
#define SSTIDAL_SELECTION_EXIT             6
#define SSTIDAL_SELECTION_COUNT            7

// Std String Ids
#define STDSTRING_COOL             0
#define STDSTRING_BEAUTY           1
#define STDSTRING_CUTE             2
#define STDSTRING_SMART            3
#define STDSTRING_TOUGH            4
#define STDSTRING_NORMAL           5
#define STDSTRING_SUPER            6
#define STDSTRING_HYPER            7
#define STDSTRING_MASTER           8
#define STDSTRING_COOL2            9
#define STDSTRING_BEAUTY2          10
#define STDSTRING_CUTE2            11
#define STDSTRING_SMART2           12
#define STDSTRING_TOUGH2           13
#define STDSTRING_ITEMS            14
#define STDSTRING_KEYITEMS         15
#define STDSTRING_POKEBALLS        16
#define STDSTRING_TMHMS            17
#define STDSTRING_BERRIES          18
#define STDSTRING_SINGLE           19
#define STDSTRING_DOUBLE           20
#define STDSTRING_MULTI            21
#define STDSTRING_MULTI_LINK       22
#define STDSTRING_BATTLE_TOWER     23
#define STDSTRING_BATTLE_DOME      24
#define STDSTRING_BATTLE_FACTORY   25
#define STDSTRING_BATTLE_PALACE    26
#define STDSTRING_BATTLE_ARENA     27
#define STDSTRING_BATTLE_PIKE      28
#define STDSTRING_BATTLE_PYRAMID   29

#define STDSTRING_MEDICINE         30
#define STDSTRING_BATTLEITEMS      31
#define STDSTRING_TREASURES        32

#endif //GUARD_SCRIPT_MENU_CONSTANTS_H
