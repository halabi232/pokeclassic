#ifndef GUARD_CONSTANTS_ITEMS_H
#define GUARD_CONSTANTS_ITEMS_H

#define ITEM_NONE 0

// Balls
#define ITEM_MASTER_BALL 	1
#define ITEM_ULTRA_BALL 	2
#define ITEM_GREAT_BALL 	3
#define ITEM_POKE_BALL 	    4
#define ITEM_SAFARI_BALL 	5
#define ITEM_NET_BALL 	    6
#define ITEM_DIVE_BALL 	    7
#define ITEM_NEST_BALL 	    8
#define ITEM_REPEAT_BALL 	9
#define ITEM_TIMER_BALL 	10
#define ITEM_LUXURY_BALL 	11
#define ITEM_DUSK_BALL 	    12
#define ITEM_HEAL_BALL 	    13
#define ITEM_QUICK_BALL 	14
#define ITEM_CHERISH_BALL 	15
#define ITEM_FAST_BALL 	    16
#define ITEM_LEVEL_BALL 	17
#define ITEM_LURE_BALL 	    18
#define ITEM_HEAVY_BALL 	19
#define ITEM_LOVE_BALL 	    20
#define ITEM_FRIEND_BALL 	21
#define ITEM_MOON_BALL 	    22
#define ITEM_SPORT_BALL 	23
#define ITEM_PARK_BALL 	    24
#define ITEM_DREAM_BALL 	25
#define ITEM_BEAST_BALL 	26
#define ITEM_PREMIER_BALL 	27

// Note: If moving ball IDs around, updating FIRST_BALL/LAST_BALL is not sufficient
//       Several places expect the ball IDs to be first and contiguous (e.g. gBattlescriptsForBallThrow and MON_DATA_POKEBALL)
//       If adding new balls, it's easiest to insert them after the last ball and increment the below IDs (and removing ITEM_034 for example)
#define FIRST_BALL ITEM_MASTER_BALL
#define LAST_BALL  ITEM_PREMIER_BALL

// Pokemon Items
#define ITEM_POTION 			28
#define ITEM_ANTIDOTE 			29
#define ITEM_BURN_HEAL 			30
#define ITEM_ICE_HEAL 			31
#define ITEM_AWAKENING 			32
#define ITEM_PARALYZE_HEAL 		33
#define ITEM_FULL_RESTORE 		34
#define ITEM_MAX_POTION 		35
#define ITEM_HYPER_POTION 		36
#define ITEM_SUPER_POTION 		37
#define ITEM_FULL_HEAL 			38
#define ITEM_REVIVE 			39
#define ITEM_MAX_REVIVE 		40
#define ITEM_FRESH_WATER 		41
#define ITEM_SODA_POP 			42
#define ITEM_LEMONADE 			43
#define ITEM_MOOMOO_MILK 		44
#define ITEM_ENERGY_POWDER 		45
#define ITEM_ENERGY_ROOT 		46
#define ITEM_HEAL_POWDER 		47
#define ITEM_REVIVAL_HERB 		48
#define ITEM_ETHER 				49
#define ITEM_MAX_ETHER 			50
#define ITEM_ELIXIR 			51
#define ITEM_MAX_ELIXIR 		52
#define ITEM_LAVA_COOKIE 		53
#define ITEM_BLUE_FLUTE 		54
#define ITEM_YELLOW_FLUTE 		55
#define ITEM_RED_FLUTE 			56
#define ITEM_BLACK_FLUTE 		57
#define ITEM_WHITE_FLUTE 		58
#define ITEM_BERRY_JUICE 		59
#define ITEM_SACRED_ASH 		60
#define ITEM_SHOAL_SALT 		61
#define ITEM_SHOAL_SHELL 		62
#define ITEM_RED_SHARD 			63
#define ITEM_BLUE_SHARD 		64
#define ITEM_YELLOW_SHARD 		65
#define ITEM_GREEN_SHARD 		66
#define ITEM_ABILITY_CAPSULE 	67
#define ITEM_ABILITY_PATCH 		68
#define ITEM_HP_UP 				69
#define ITEM_PROTEIN 			70
#define ITEM_IRON 				71
#define ITEM_CARBOS 			72
#define ITEM_CALCIUM 			73
#define ITEM_RARE_CANDY 		74
#define ITEM_PP_UP 				75
#define ITEM_ZINC 				76
#define ITEM_PP_MAX 			77
#define ITEM_GUARD_SPEC 		78
#define ITEM_DIRE_HIT 			79
#define ITEM_X_ATTACK 			80
#define ITEM_X_DEFEND 			81
#define ITEM_X_SPEED 			82
#define ITEM_X_ACCURACY 		83
#define ITEM_X_SPECIAL 			84
#define ITEM_POKE_DOLL 			85
#define ITEM_FLUFFY_TAIL 		86
#define ITEM_SUPER_REPEL 		87
#define ITEM_MAX_REPEL 			88
#define ITEM_ESCAPE_ROPE 		89
#define ITEM_REPEL 				90
#define ITEM_SUN_STONE 			91
#define ITEM_MOON_STONE 		92
#define ITEM_FIRE_STONE 		93
#define ITEM_THUNDER_STONE 		94
#define ITEM_WATER_STONE 		95
#define ITEM_LEAF_STONE 		96
#define ITEM_POWER_STONE 		97
#define ITEM_HP_CANDY 			98
#define ITEM_ATK_CANDY 			99
#define ITEM_DEF_CANDY 			100
#define ITEM_SPATK_CANDY		101
#define ITEM_SPDEF_CANDY 		102
#define ITEM_SPEED_CANDY 		103
#define ITEM_RESET_CANDY 		104
#define ITEM_MAX_CANDY 			105
#define ITEM_03C 				106
#define ITEM_057 				107
#define ITEM_058 				108
#define ITEM_059 				109
#define ITEM_05A 				110
#define ITEM_05B 				111
#define ITEM_05C 				112
#define ITEM_048 				113
#define ITEM_052 				114
#define ITEM_064 				115
#define ITEM_065 				116
#define ITEM_066 				117

// Unusable
#define ITEM_TINY_MUSHROOM      118
#define ITEM_BIG_MUSHROOM       119
#define ITEM_PEARL              120
#define ITEM_BIG_PEARL          121
#define ITEM_STARDUST           122
#define ITEM_STAR_PIECE         123
#define ITEM_NUGGET             124
#define ITEM_HEART_SCALE        125
#define ITEM_069                126
#define ITEM_070                127
#define ITEM_071                128
#define ITEM_072                129
#define ITEM_073                130
#define ITEM_074                131
#define ITEM_075                132
#define ITEM_076                133
#define ITEM_077                134
#define ITEM_078                135

// Mails
#define ITEM_ORANGE_MAIL        136
#define ITEM_HARBOR_MAIL        137
#define ITEM_GLITTER_MAIL       138
#define ITEM_MECH_MAIL          139
#define ITEM_WOOD_MAIL          140
#define ITEM_WAVE_MAIL          141
#define ITEM_BEAD_MAIL          142
#define ITEM_SHADOW_MAIL        143
#define ITEM_TROPIC_MAIL        144
#define ITEM_DREAM_MAIL         145
#define ITEM_FAB_MAIL           146
#define ITEM_RETRO_MAIL         147

#define FIRST_MAIL_INDEX ITEM_ORANGE_MAIL

// Berries
#define ITEM_CHERI_BERRY        148
#define ITEM_CHESTO_BERRY       149
#define ITEM_PECHA_BERRY        150
#define ITEM_RAWST_BERRY        151
#define ITEM_ASPEAR_BERRY       152
#define ITEM_LEPPA_BERRY        153
#define ITEM_ORAN_BERRY         154
#define ITEM_PERSIM_BERRY       155
#define ITEM_LUM_BERRY          156
#define ITEM_SITRUS_BERRY       157
#define ITEM_FIGY_BERRY         158
#define ITEM_WIKI_BERRY         159
#define ITEM_MAGO_BERRY         160
#define ITEM_AGUAV_BERRY        161
#define ITEM_IAPAPA_BERRY       162
#define ITEM_RAZZ_BERRY         163
#define ITEM_BLUK_BERRY         164
#define ITEM_NANAB_BERRY        165
#define ITEM_WEPEAR_BERRY       166
#define ITEM_PINAP_BERRY        167
#define ITEM_POMEG_BERRY        168
#define ITEM_KELPSY_BERRY       169
#define ITEM_QUALOT_BERRY       170
#define ITEM_HONDEW_BERRY       171
#define ITEM_GREPA_BERRY        172
#define ITEM_TAMATO_BERRY       173
#define ITEM_CORNN_BERRY        174
#define ITEM_MAGOST_BERRY       175
#define ITEM_RABUTA_BERRY       176
#define ITEM_NOMEL_BERRY        177
#define ITEM_SPELON_BERRY       178
#define ITEM_PAMTRE_BERRY       179
#define ITEM_WATMEL_BERRY       180
#define ITEM_DURIN_BERRY        181
#define ITEM_BELUE_BERRY        182
#define ITEM_LIECHI_BERRY       183
#define ITEM_GANLON_BERRY       184
#define ITEM_SALAC_BERRY        185
#define ITEM_PETAYA_BERRY       186
#define ITEM_APICOT_BERRY       187
#define ITEM_LANSAT_BERRY       188
#define ITEM_STARF_BERRY        189
#define ITEM_ENIGMA_BERRY       190

#define FIRST_BERRY_INDEX ITEM_CHERI_BERRY
#define LAST_BERRY_INDEX  ITEM_ENIGMA_BERRY

#define ITEM_UNUSED_BERRY_1     191
#define ITEM_UNUSED_BERRY_2     192
#define ITEM_UNUSED_BERRY_3     193

#define MAX_BERRY_INDEX ITEM_UNUSED_BERRY_3

// Battle Held items
#define ITEM_BRIGHT_POWDER      194
#define ITEM_WHITE_HERB         195
#define ITEM_MACHO_BRACE        196
#define ITEM_EXP_SHARE          197
#define ITEM_QUICK_CLAW         198
#define ITEM_SOOTHE_BELL        199
#define ITEM_MENTAL_HERB        200
#define ITEM_CHOICE_BAND        201
#define ITEM_KINGS_ROCK         202
#define ITEM_SILVER_POWDER      203
#define ITEM_AMULET_COIN        204
#define ITEM_CLEANSE_TAG        205
#define ITEM_SOUL_DEW           206
#define ITEM_DEEP_SEA_TOOTH     207
#define ITEM_DEEP_SEA_SCALE     208
#define ITEM_SMOKE_BALL         209
#define ITEM_EVERSTONE          210
#define ITEM_FOCUS_BAND         211
#define ITEM_LUCKY_EGG          212
#define ITEM_SCOPE_LENS         213
#define ITEM_METAL_COAT         214
#define ITEM_LEFTOVERS          215
#define ITEM_DRAGON_SCALE       216
#define ITEM_LIGHT_BALL         217
#define ITEM_SOFT_SAND          218
#define ITEM_HARD_STONE         219
#define ITEM_MIRACLE_SEED       220
#define ITEM_BLACK_GLASSES      221
#define ITEM_BLACK_BELT         222
#define ITEM_MAGNET             223
#define ITEM_MYSTIC_WATER       224
#define ITEM_SHARP_BEAK         225
#define ITEM_POISON_BARB        226
#define ITEM_NEVER_MELT_ICE     227
#define ITEM_SPELL_TAG          228
#define ITEM_TWISTED_SPOON      229
#define ITEM_CHARCOAL           230
#define ITEM_DRAGON_FANG        231
#define ITEM_SILK_SCARF         232
#define ITEM_UP_GRADE           233
#define ITEM_SHELL_BELL         234
#define ITEM_SEA_INCENSE        235
#define ITEM_LAX_INCENSE        236
#define ITEM_LUCKY_PUNCH        237
#define ITEM_METAL_POWDER       238
#define ITEM_THICK_CLUB         239
#define ITEM_STICK              240
#define ITEM_EVIOLITE           241
#define ITEM_POWER_ANKLET       242
#define ITEM_POWER_BAND         243
#define ITEM_POWER_BELT         244
#define ITEM_POWER_BRACER       245
#define ITEM_POWER_LENS         246
#define ITEM_POWER_WEIGHT       247
#define ITEM_BLACK_SLUDGE       248
#define ITEM_BIG_ROOT           249
#define ITEM_EXPERT_BELT        250 
#define ITEM_LIFE_ORB	        251
#define ITEM_WISE_GLASSES       252
#define ITEM_MUSCLE_BAND        253 
#define ITEM_POWER_HERB         254 
#define ITEM_RED_CARD           255 
#define ITEM_PROTECTIVE_PADS    256 
#define ITEM_ROCKY_HELMET       257 
#define ITEM_RAZOR_FANG         258 
#define ITEM_RAZOR_CLAW         259 
#define ITEM_CHOICE_SPECS       260 
#define ITEM_CHOICE_SCARF       261 
#define ITEM_LIGHT_CLAY         262 
#define ITEM_SMOOTH_ROCK        263 
#define ITEM_HEAT_ROCK          264 
#define ITEM_DAMP_ROCK          265 
#define ITEM_ICY_ROCK           266
#define ITEM_DESTINY_KNOT       267
#define ITEM_PIXIE_DUST         268 

// Contest held items
#define ITEM_RED_SCARF          269
#define ITEM_BLUE_SCARF         270
#define ITEM_PINK_SCARF         271
#define ITEM_GREEN_SCARF        272
#define ITEM_YELLOW_SCARF       273

// Key Items
#define ITEM_MACH_BIKE          274
#define ITEM_COIN_CASE          275
#define ITEM_ITEMFINDER         276
#define ITEM_OLD_ROD            277
#define ITEM_GOOD_ROD           278
#define ITEM_SUPER_ROD          279
#define ITEM_SS_TICKET          280
#define ITEM_CONTEST_PASS       281
#define ITEM_10B                282
#define ITEM_WAILMER_PAIL       283
#define ITEM_ROCKET_PLANS       284
#define ITEM_SOOT_SACK          285
#define ITEM_BASEMENT_KEY       286
#define ITEM_ACRO_BIKE          287
#define ITEM_POKEBLOCK_CASE     288
#define ITEM_LETTER             289
#define ITEM_EON_TICKET         290
#define ITEM_RED_ORB            291
#define ITEM_BLUE_ORB           292
#define ITEM_SCANNER            293
#define ITEM_GO_GOGGLES         294
#define ITEM_METEORITE          295
#define ITEM_ROOM_1_KEY         296
#define ITEM_ROOM_2_KEY         297
#define ITEM_ROOM_4_KEY         298
#define ITEM_ROOM_6_KEY         299
#define ITEM_STORAGE_KEY        300
#define ITEM_ROOT_FOSSIL        301
#define ITEM_CLAW_FOSSIL        302
#define ITEM_DEVON_SCOPE        303

// TMs/HMs
#define ITEM_TM01   304
#define ITEM_TM02   305
#define ITEM_TM03   306
#define ITEM_TM04   307
#define ITEM_TM05   308
#define ITEM_TM06   309
#define ITEM_TM07   310
#define ITEM_TM08   311
#define ITEM_TM09   312
#define ITEM_TM10   313
#define ITEM_TM11   314
#define ITEM_TM12   315
#define ITEM_TM13   316
#define ITEM_TM14   317
#define ITEM_TM15   318
#define ITEM_TM16   319
#define ITEM_TM17   320
#define ITEM_TM18   321
#define ITEM_TM19   322
#define ITEM_TM20   323
#define ITEM_TM21   324
#define ITEM_TM22   325
#define ITEM_TM23   326
#define ITEM_TM24   327
#define ITEM_TM25   328
#define ITEM_TM26   329
#define ITEM_TM27   330
#define ITEM_TM28   331
#define ITEM_TM29   332
#define ITEM_TM30   333
#define ITEM_TM31   334
#define ITEM_TM32   335
#define ITEM_TM33   336
#define ITEM_TM34   337
#define ITEM_TM35   338
#define ITEM_TM36   339
#define ITEM_TM37   340
#define ITEM_TM38   341
#define ITEM_TM39   342
#define ITEM_TM40   343
#define ITEM_TM41   344
#define ITEM_TM42   345
#define ITEM_TM43   346
#define ITEM_TM44   347
#define ITEM_TM45   348
#define ITEM_TM46   349
#define ITEM_TM47   350
#define ITEM_TM48   351
#define ITEM_TM49   352
#define ITEM_TM50   353
#define ITEM_TM51   354
#define ITEM_TM52   355
#define ITEM_TM53   356
#define ITEM_TM54   357
#define ITEM_TM55   358
#define ITEM_TM56   359
#define ITEM_TM57   360
#define ITEM_TM58   361
#define ITEM_TM59   362
#define ITEM_TM60   363
#define ITEM_TM61   364
#define ITEM_TM62   365
#define ITEM_TM63   366
#define ITEM_TM64   367
#define ITEM_TM65   368
#define ITEM_TM66   369
#define ITEM_TM67   370
#define ITEM_TM68   371
#define ITEM_TM69   372
#define ITEM_TM70   373
#define ITEM_TM71   374
#define ITEM_TM72   375
#define ITEM_TM73   376
#define ITEM_TM74   377
#define ITEM_TM75   378
#define ITEM_TM76   379
#define ITEM_TM77   380
#define ITEM_TM78   381
#define ITEM_TM79   382
#define ITEM_TM80   383
#define ITEM_TM81   384
#define ITEM_TM82   385
#define ITEM_TM83   386
#define ITEM_TM84   387
#define ITEM_TM85   388
#define ITEM_TM86   389
#define ITEM_TM87   390
#define ITEM_TM88   391
#define ITEM_TM89   392
#define ITEM_TM90   393
#define ITEM_TM91   394
#define ITEM_TM92   395
#define ITEM_TM93   396
#define ITEM_TM94   397
#define ITEM_TM95   398
#define ITEM_TM96   399
#define ITEM_TM97   400
#define ITEM_TM98   401
#define ITEM_TM99   402
#define ITEM_TM100  403

#define ITEM_HM01   404
#define ITEM_HM02   405
#define ITEM_HM03   406
#define ITEM_HM04   407
#define ITEM_HM05   408
#define ITEM_HM06   409
#define ITEM_HM07   410
#define ITEM_HM08   411

#define ITEM_TM01_FOCUS_PUNCH ITEM_TM01
#define ITEM_TM02_DRAGON_CLAW ITEM_TM02
#define ITEM_TM03_WATER_PULSE ITEM_TM03
#define ITEM_TM04_CALM_MIND ITEM_TM04
#define ITEM_TM05_ROAR ITEM_TM05
#define ITEM_TM06_TOXIC ITEM_TM06
#define ITEM_TM07_HAIL ITEM_TM07
#define ITEM_TM08_BULK_UP ITEM_TM08
#define ITEM_TM09_BULLET_SEED ITEM_TM09
#define ITEM_TM10_HIDDEN_POWER ITEM_TM10
#define ITEM_TM11_SUNNY_DAY ITEM_TM11
#define ITEM_TM12_TAUNT ITEM_TM12
#define ITEM_TM13_ICE_BEAM ITEM_TM13
#define ITEM_TM14_BLIZZARD ITEM_TM14
#define ITEM_TM15_HYPER_BEAM ITEM_TM15
#define ITEM_TM16_LIGHT_SCREEN ITEM_TM16
#define ITEM_TM17_PROTECT ITEM_TM17
#define ITEM_TM18_RAIN_DANCE ITEM_TM18
#define ITEM_TM19_GIGA_DRAIN ITEM_TM19
#define ITEM_TM20_SAFEGUARD ITEM_TM20
#define ITEM_TM21_FRUSTRATION ITEM_TM21
#define ITEM_TM22_SOLAR_BEAM ITEM_TM22
#define ITEM_TM23_IRON_TAIL ITEM_TM23
#define ITEM_TM24_THUNDERBOLT ITEM_TM24
#define ITEM_TM25_THUNDER ITEM_TM25
#define ITEM_TM26_EARTHQUAKE ITEM_TM26
#define ITEM_TM27_RETURN ITEM_TM27
#define ITEM_TM28_DIG ITEM_TM28
#define ITEM_TM29_PSYCHIC ITEM_TM29
#define ITEM_TM30_SHADOW_BALL ITEM_TM30
#define ITEM_TM31_BRICK_BREAK ITEM_TM31
#define ITEM_TM32_DOUBLE_TEAM ITEM_TM32
#define ITEM_TM33_REFLECT ITEM_TM33
#define ITEM_TM34_SHOCK_WAVE ITEM_TM34
#define ITEM_TM35_FLAMETHROWER ITEM_TM35
#define ITEM_TM36_SLUDGE_BOMB ITEM_TM36
#define ITEM_TM37_SANDSTORM ITEM_TM37
#define ITEM_TM38_FIRE_BLAST ITEM_TM38
#define ITEM_TM39_ROCK_TOMB ITEM_TM39
#define ITEM_TM40_AERIAL_ACE ITEM_TM40
#define ITEM_TM41_TORMENT ITEM_TM41
#define ITEM_TM42_FACADE ITEM_TM42
#define ITEM_TM43_POWER_GEM ITEM_TM43
#define ITEM_TM44_REST ITEM_TM44
#define ITEM_TM45_ATTRACT ITEM_TM45
#define ITEM_TM46_THIEF ITEM_TM46
#define ITEM_TM47_STEEL_WING ITEM_TM47
#define ITEM_TM48_SKILL_SWAP ITEM_TM48
#define ITEM_TM49_ZEN_HEADBUTT ITEM_TM49
#define ITEM_TM50_OVERHEAT ITEM_TM50
#define ITEM_TM51_HONE_CLAWS ITEM_TM51
#define ITEM_TM52_ROOST ITEM_TM52
#define ITEM_TM53_FLAME_CHARGE ITEM_TM53
#define ITEM_TM54_DUAL_WINGBEAT ITEM_TM54
#define ITEM_TM55_FOCUS_BLAST ITEM_TM55
#define ITEM_TM56_ENERGY_BALL ITEM_TM56
#define ITEM_TM57_FALSE_SWIPE ITEM_TM57
#define ITEM_TM58_SCALD ITEM_TM58
#define ITEM_TM59_CHARGE_BEAM ITEM_TM59
#define ITEM_TM60_BRAVE_BIRD ITEM_TM60
#define ITEM_TM61_EARTH_POWER ITEM_TM61
#define ITEM_TM62_ACROBATICS ITEM_TM62
#define ITEM_TM63_EXPLOSION ITEM_TM63
#define ITEM_TM64_SHADOW_CLAW ITEM_TM64
#define ITEM_TM65_PAYBACK ITEM_TM65
#define ITEM_TM66_RETALIATE ITEM_TM66
#define ITEM_TM67_GIGA_IMPACT ITEM_TM67
#define ITEM_TM68_ROCK_POLISH ITEM_TM68
#define ITEM_TM69_STONE_EDGE ITEM_TM69
#define ITEM_TM70_VOLT_SWITCH ITEM_TM70
#define ITEM_TM71_GYRO_BALL ITEM_TM71
#define ITEM_TM72_SWORDS_DANCE ITEM_TM72
#define ITEM_TM73_CURSE ITEM_TM73
#define ITEM_TM74_BULLDOZE ITEM_TM74
#define ITEM_TM75_FROST_BREATH ITEM_TM75
#define ITEM_TM76_ROCK_SLIDE ITEM_TM76
#define ITEM_TM77_X_SCISSOR ITEM_TM77
#define ITEM_TM78_DRAGON_TAIL ITEM_TM78
#define ITEM_TM79_INFESTATION ITEM_TM79
#define ITEM_TM80_POISON_JAB ITEM_TM80
#define ITEM_TM81_DREAM_EATER ITEM_TM81
#define ITEM_TM82_GRASS_KNOT ITEM_TM82
#define ITEM_TM83_LOW_SWEEP ITEM_TM83
#define ITEM_TM84_SLEEP_TALK ITEM_TM84
#define ITEM_TM85_U_TURN ITEM_TM85
#define ITEM_TM86_SUBSTITUTE ITEM_TM86
#define ITEM_TM87_FLASH_CANNON ITEM_TM87
#define ITEM_TM88_TRICK_ROOM ITEM_TM88
#define ITEM_TM89_PSYSHOCK ITEM_TM89
#define ITEM_TM90_DARK_PULSE ITEM_TM90
#define ITEM_TM91_POWER_UP_PUNCH ITEM_TM91
#define ITEM_TM92_DAZZLING_GLEAM ITEM_TM92
#define ITEM_TM93_RAPID_SPIN ITEM_TM93
#define ITEM_TM94_KNOCK_OFF ITEM_TM94
#define ITEM_TM95_SLUDGE_WAVE ITEM_TM95
#define ITEM_TM96_DRAIN_PUNCH ITEM_TM96
#define ITEM_TM97_FIRE_PUNCH ITEM_TM97
#define ITEM_TM98_THUNDER_PUNCH ITEM_TM98
#define ITEM_TM99_ICE_PUNCH ITEM_TM99
#define ITEM_TM100_CLOSE_COMBAT ITEM_TM100


#define ITEM_HM01_CUT ITEM_HM01
#define ITEM_HM02_FLY ITEM_HM02
#define ITEM_HM03_SURF ITEM_HM03
#define ITEM_HM04_STRENGTH ITEM_HM04
#define ITEM_HM05_FLASH ITEM_HM05
#define ITEM_HM06_ROCK_SMASH ITEM_HM06
#define ITEM_HM07_WATERFALL ITEM_HM07
#define ITEM_HM08_DIVE ITEM_HM08

// Unknown
#define ITEM_15B                412
#define ITEM_15C                413

// FireRed/LeafGreen
#define ITEM_OAKS_PARCEL        414
#define ITEM_POKE_FLUTE         415
#define ITEM_SECRET_KEY         416
#define ITEM_BIKE_VOUCHER       417
#define ITEM_GOLD_TEETH         418
#define ITEM_OLD_AMBER          419
#define ITEM_CARD_KEY           420
#define ITEM_LIFT_KEY           421
#define ITEM_HELIX_FOSSIL       422
#define ITEM_DOME_FOSSIL        423
#define ITEM_SILPH_SCOPE        424
#define ITEM_BICYCLE            425
#define ITEM_TOWN_MAP           426
#define ITEM_VS_SEEKER          427
#define ITEM_FAME_CHECKER       428
#define ITEM_TM_CASE            429
#define ITEM_BERRY_POUCH        430
#define ITEM_TEACHY_TV          431
#define ITEM_TRI_PASS           432
#define ITEM_RAINBOW_PASS       433
#define ITEM_TEA                434
#define ITEM_MYSTIC_TICKET      435
#define ITEM_AURORA_TICKET      436
#define ITEM_POWDER_JAR         437
#define ITEM_RUBY               438
#define ITEM_SAPPHIRE           439

// Emerald
#define ITEM_MAGMA_EMBLEM       440
#define ITEM_OLD_SEA_MAP        441

//IV Items
#define ITEM_HP_DOWN 			442
#define ITEM_PROTEIN_MINUS 		443
#define ITEM_IRON_MINUS 		444
#define ITEM_CARBOS_MINUS 		445
#define ITEM_CALCIUM_MINUS 		446
#define ITEM_ZINC_MINUS 		447

//Nature Mints
#define ITEM_ADAMANT_MINT       448
#define ITEM_BOLD_MINT          449
#define ITEM_BRAVE_MINT         450
#define ITEM_CALM_MINT          451
#define ITEM_CAREFUL_MINT       452
#define ITEM_GENTLE_MINT        453
#define ITEM_HASTY_MINT         454
#define ITEM_IMPISH_MINT        455
#define ITEM_JOLLY_MINT         456
#define ITEM_LAX_MINT           457
#define ITEM_LONELY_MINT        458
#define ITEM_MILD_MINT          459
#define ITEM_MODEST_MINT        460
#define ITEM_NAIVE_MINT         461
#define ITEM_NAUGHTY_MINT       462
#define ITEM_QUIET_MINT         463
#define ITEM_RASH_MINT          464
#define ITEM_RELAXED_MINT       465
#define ITEM_SASSY_MINT         466
#define ITEM_SERIOUS_MINT       467
#define ITEM_TIMID_MINT         468

//Charms
#define ITEM_CATCHING_CHARM  	469
#define ITEM_OVAL_CHARM 		470
#define ITEM_SHINY_CHARM 		471

//Mega Ring
#define	ITEM_MEGA_RING			472

//Mega Stones
#define ITEM_VENUSAURITE 		473
#define ITEM_CHARIZARDITE_X 	474
#define ITEM_CHARIZARDITE_Y 	475
#define ITEM_BLASTOISINITE 		476
#define ITEM_BEEDRILLITE 		477
#define ITEM_PIDGEOTITE 		478
#define ITEM_ALAKAZITE 			479
#define ITEM_SLOWBRONITE 		480
#define ITEM_GENGARITE 			481
#define ITEM_KANGASKHANITE 		482
#define ITEM_PINSIRITE 			483
#define ITEM_GYARADOSITE 		484
#define ITEM_AERODACTYLITE 		485
#define ITEM_MEWTWONITE_X 		486
#define ITEM_MEWTWONITE_Y 		487
#define ITEM_STEELIXITE 		488
#define ITEM_SCIZORITE 		    489

#define ITEM_FLAME_ORB          490
#define ITEM_TOXIC_ORB          491
#define ITEM_FOCUS_SASH         492
#define ITEM_ZOOM_LENS          493
#define ITEM_GRIP_CLAW          494
#define ITEM_STICKY_BARB        495
#define ITEM_AIR_BALLOON        496
#define ITEM_BINDING_BAND       497
#define ITEM_EJECT_BUTTON       498
#define ITEM_WEAKNESS_POLICY    499
#define ITEM_ASSAULT_VEST       500
#define ITEM_SAFETY_GOGGLES     501

#define ITEM_PROTECTOR          502
#define ITEM_ELECTIRIZER        503
#define ITEM_MAGMARIZER         504
#define ITEM_DUBIOUS_DISC       505

#define ITEMS_COUNT             506
#define ITEM_FIELD_ARROW ITEMS_COUNT

// Range of berries given out by various NPCS
#define FIRST_BERRY_MASTER_BERRY      ITEM_POMEG_BERRY
#define LAST_BERRY_MASTER_BERRY       ITEM_NOMEL_BERRY
#define FIRST_BERRY_MASTER_WIFE_BERRY ITEM_CHERI_BERRY
#define LAST_BERRY_MASTER_WIFE_BERRY  ITEM_SITRUS_BERRY
#define FIRST_KIRI_BERRY              ITEM_POMEG_BERRY
#define LAST_KIRI_BERRY               ITEM_NOMEL_BERRY
#define FIRST_ROUTE_114_MAN_BERRY     ITEM_RAZZ_BERRY
#define LAST_ROUTE_114_MAN_BERRY      ITEM_PINAP_BERRY

#define NUM_BERRY_MASTER_BERRIES          (LAST_BERRY_MASTER_BERRY - FIRST_BERRY_MASTER_BERRY + 1)
#define NUM_BERRY_MASTER_BERRIES_SKIPPED  (FIRST_BERRY_MASTER_BERRY - FIRST_BERRY_INDEX)
#define NUM_BERRY_MASTER_WIFE_BERRIES     (LAST_BERRY_MASTER_WIFE_BERRY - FIRST_BERRY_MASTER_WIFE_BERRY + 1)
#define NUM_KIRI_BERRIES                  (LAST_KIRI_BERRY - FIRST_KIRI_BERRY + 1)
#define NUM_KIRI_BERRIES_SKIPPED          (FIRST_KIRI_BERRY - FIRST_BERRY_INDEX)
#define NUM_ROUTE_114_MAN_BERRIES         (LAST_ROUTE_114_MAN_BERRY - FIRST_ROUTE_114_MAN_BERRY + 1)
#define NUM_ROUTE_114_MAN_BERRIES_SKIPPED (FIRST_ROUTE_114_MAN_BERRY - FIRST_BERRY_INDEX)

#define ITEM_TO_BERRY(itemId)(((itemId) - FIRST_BERRY_INDEX) + 1)
#define ITEM_TO_MAIL(itemId)((itemId) - FIRST_MAIL_INDEX)
#define MAIL_NONE 0xFF

#define NUM_TECHNICAL_MACHINES 100
#define NUM_HIDDEN_MACHINES     8

#define MAX_BAG_ITEM_CAPACITY  99
#define MAX_PC_ITEM_CAPACITY   999
#define MAX_BERRY_CAPACITY     999

#define BAG_ITEM_CAPACITY_DIGITS 2
#define BERRY_CAPACITY_DIGITS 3
#define MAX_ITEM_DIGITS BERRY_CAPACITY_DIGITS

// Secondary IDs for rods
#define OLD_ROD   0
#define GOOD_ROD  1
#define SUPER_ROD 2

// Secondary IDs for bikes
#define MACH_BIKE 0
#define ACRO_BIKE 1

// Item type IDs (used to determine the exit callback)
#define ITEM_USE_MAIL        0
#define ITEM_USE_PARTY_MENU  1
#define ITEM_USE_FIELD       2
#define ITEM_USE_PBLOCK_CASE 3
#define ITEM_USE_BAG_MENU    4 // No exit callback, stays in bag menu

// Item battle usage IDs (only checked to see if nonzero)
#define ITEM_B_USE_MEDICINE 1
#define ITEM_B_USE_OTHER    2

// Check if the item is one that can be used on a Pokemon.
#define ITEM_HAS_EFFECT(item) ((item) >= ITEM_POTION && (item) <= MAX_BERRY_INDEX)

#endif  // GUARD_CONSTANTS_ITEMS_H