const struct FacilityMon gBattleFrontierMons[NUM_FRONTIER_MONS] =
{
    [FRONTIER_MON_CATERPIE] = {
        .species = SPECIES_CATERPIE,
        .moves = {MOVE_TACKLE, MOVE_STRING_SHOT, MOVE_BUG_BITE, MOVE_NONE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_WEEDLE] = {
        .species = SPECIES_WEEDLE,
        .moves = {MOVE_POISON_STING, MOVE_STRING_SHOT, MOVE_BUG_BITE, MOVE_NONE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_MAGIKARP] = {
        .species = SPECIES_MAGIKARP,
        .moves = {MOVE_FLAIL, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_METAPOD] = {
        .species = SPECIES_METAPOD,
        .moves = {MOVE_HARDEN, MOVE_TACKLE, MOVE_STRING_SHOT, MOVE_BUG_BITE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BASHFUL,
        .ability = 2
    },
    [FRONTIER_MON_KAKUNA] = {
        .species = SPECIES_KAKUNA,
        .moves = {MOVE_HARDEN, MOVE_TACKLE, MOVE_POISON_STING, MOVE_BUG_BITE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BASHFUL,
        .ability = 2
    },
    [FRONTIER_MON_PICHU] = {
        .species = SPECIES_PICHU,
        .moves = {MOVE_SWEET_KISS, MOVE_THUNDER_WAVE, MOVE_ATTRACT, MOVE_SHOCK_WAVE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RASH
    },
    [FRONTIER_MON_IGGLYBUFF] = {
        .species = SPECIES_IGGLYBUFF,
        .moves = {MOVE_SWEET_KISS, MOVE_SING, MOVE_ATTRACT, MOVE_SEISMIC_TOSS},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_TYROGUE] = {
        .species = SPECIES_TYROGUE,
        .moves = {MOVE_MACH_PUNCH, MOVE_PROTECT, MOVE_DOUBLE_TEAM, MOVE_FACADE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_CLEFFA] = {
        .species = SPECIES_CLEFFA,
        .moves = {MOVE_SWEET_KISS, MOVE_SING, MOVE_ATTRACT, MOVE_METRONOME},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_SERIOUS
    },
    [FRONTIER_MON_ZUBAT] = {
        .species = SPECIES_ZUBAT,
        .moves = {MOVE_POISON_FANG, MOVE_WHIRLWIND, MOVE_CONFUSE_RAY, MOVE_AERIAL_ACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_PIDGEY] = {
        .species = SPECIES_PIDGEY,
        .moves = {MOVE_GUST, MOVE_SAND_ATTACK, MOVE_WHIRLWIND, MOVE_QUICK_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHARP_BEAK,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_RATTATA] = {
        .species = SPECIES_RATTATA,
        .moves = {MOVE_HYPER_FANG, MOVE_PURSUIT, MOVE_QUICK_ATTACK, MOVE_SWAGGER},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_SPEAROW] = {
        .species = SPECIES_SPEAROW,
        .moves = {MOVE_FURY_ATTACK, MOVE_PURSUIT, MOVE_MIRROR_MOVE, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_DIGLETT] = {
        .species = SPECIES_DIGLETT,
        .moves = {MOVE_MAGNITUDE, MOVE_SLASH, MOVE_ROCK_TOMB, MOVE_SAND_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_JIGGLYPUFF] = {
        .species = SPECIES_JIGGLYPUFF,
        .moves = {MOVE_SING, MOVE_WISH, MOVE_MIMIC, MOVE_DOUBLE_SLAP},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_NIDORAN_M] = {
        .species = SPECIES_NIDORAN_M,
        .moves = {MOVE_DOUBLE_KICK, MOVE_POISON_STING, MOVE_DISABLE, MOVE_HELPING_HAND},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_NIDORAN_F] = {
        .species = SPECIES_NIDORAN_F,
        .moves = {MOVE_CRUNCH, MOVE_DOUBLE_KICK, MOVE_FLATTER, MOVE_HELPING_HAND},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_PARAS] = {
        .species = SPECIES_PARAS,
        .moves = {MOVE_SPORE, MOVE_LEECH_LIFE, MOVE_SLASH, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_EKANS] = {
        .species = SPECIES_EKANS,
        .moves = {MOVE_ACID, MOVE_DIG, MOVE_SCREECH, MOVE_TORMENT},
        .itemTableId = BATTLE_FRONTIER_ITEM_POISON_BARB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_DITTO] = {
        .species = SPECIES_DITTO,
        .moves = {MOVE_TRANSFORM, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .itemTableId = BATTLE_FRONTIER_ITEM_METAL_POWDER,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_MEOWTH] = {
        .species = SPECIES_MEOWTH,
        .moves = {MOVE_SLASH, MOVE_BITE, MOVE_SCREECH, MOVE_FAKE_OUT},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_HORSEA] = {
        .species = SPECIES_HORSEA,
        .moves = {MOVE_WATER_GUN, MOVE_AGILITY, MOVE_ICY_WIND, MOVE_TWISTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_VULPIX] = {
        .species = SPECIES_VULPIX,
        .moves = {MOVE_WILL_O_WISP, MOVE_CONFUSE_RAY, MOVE_FIRE_SPIN, MOVE_QUICK_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_RAWST_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_PIKACHU] = {
        .species = SPECIES_PIKACHU,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_THUNDER_WAVE, MOVE_DOUBLE_TEAM, MOVE_QUICK_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIGHT_BALL,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_SANDSHREW] = {
        .species = SPECIES_SANDSHREW,
        .moves = {MOVE_DIG, MOVE_ROCK_TOMB, MOVE_SANDSTORM, MOVE_SAND_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_SOFT_SAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_POLIWAG] = {
        .species = SPECIES_POLIWAG,
        .moves = {MOVE_HYPNOSIS, MOVE_ICY_WIND, MOVE_WATER_GUN, MOVE_RAIN_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_MYSTIC_WATER,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_BELLSPROUT] = {
        .species = SPECIES_BELLSPROUT,
        .moves = {MOVE_RAZOR_LEAF, MOVE_ACID, MOVE_STUN_SPORE, MOVE_WRAP},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_LAX
    },
    [FRONTIER_MON_GEODUDE] = {
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_MAGNITUDE, MOVE_ROCK_BLAST, MOVE_STRENGTH, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_DRATINI] = {
        .species = SPECIES_DRATINI,
        .moves = {MOVE_OUTRAGE, MOVE_THUNDER_WAVE, MOVE_SUPERSONIC, MOVE_WATER_PULSE},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_VENONAT] = {
        .species = SPECIES_VENONAT,
        .moves = {MOVE_PSYBEAM, MOVE_SUPERSONIC, MOVE_STUN_SPORE, MOVE_SKILL_SWAP},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_MANKEY] = {
        .species = SPECIES_MANKEY,
        .moves = {MOVE_KARATE_CHOP, MOVE_LOW_KICK, MOVE_SCREECH, MOVE_SWAGGER},
        .itemTableId = BATTLE_FRONTIER_ITEM_BLACK_BELT,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_MACHOP] = {
        .species = SPECIES_MACHOP,
        .moves = {MOVE_SEISMIC_TOSS, MOVE_REVENGE, MOVE_ROCK_TOMB, MOVE_SCARY_FACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SHELLDER] = {
        .species = SPECIES_SHELLDER,
        .moves = {MOVE_ICICLE_SPEAR, MOVE_SUPERSONIC, MOVE_CLAMP, MOVE_WITHDRAW},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_SMOOCHUM] = {
        .species = SPECIES_SMOOCHUM,
        .moves = {MOVE_SWEET_KISS, MOVE_SING, MOVE_MUD_SLAP, MOVE_FAKE_OUT},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_HAPPINY_1] = {
        .species = SPECIES_HAPPINY,
        .moves = {MOVE_SWEET_KISS, MOVE_REFRESH, MOVE_ATTRACT, MOVE_MIMIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_CHARMANDER] = {
        .species = SPECIES_CHARMANDER,
        .moves = {MOVE_FIRE_SPIN, MOVE_METAL_CLAW, MOVE_SMOKESCREEN, MOVE_SCARY_FACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_ABRA] = {
        .species = SPECIES_ABRA,
        .moves = {MOVE_MIMIC, MOVE_METRONOME, MOVE_FLASH, MOVE_SEISMIC_TOSS},
        .itemTableId = BATTLE_FRONTIER_ITEM_TWISTED_SPOON,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_DODUO] = {
        .species = SPECIES_DODUO,
        .moves = {MOVE_FURY_ATTACK, MOVE_UPROAR, MOVE_MUD_SLAP, MOVE_FEINT_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_GASTLY] = {
        .species = SPECIES_GASTLY,
        .moves = {MOVE_DREAM_EATER, MOVE_HYPNOSIS, MOVE_NIGHT_SHADE, MOVE_CONFUSE_RAY},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_SQUIRTLE] = {
        .species = SPECIES_SQUIRTLE,
        .moves = {MOVE_WATER_PULSE, MOVE_BITE, MOVE_WITHDRAW, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_SLOWPOKE] = {
        .species = SPECIES_SLOWPOKE,
        .moves = {MOVE_CONFUSION, MOVE_DISABLE, MOVE_WATER_PULSE, MOVE_YAWN},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_BULBASAUR] = {
        .species = SPECIES_BULBASAUR,
        .moves = {MOVE_RAZOR_LEAF, MOVE_SWEET_SCENT, MOVE_SLEEP_POWDER, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_ODDISH] = {
        .species = SPECIES_ODDISH,
        .moves = {MOVE_ACID, MOVE_STUN_SPORE, MOVE_SWEET_SCENT, MOVE_MOONLIGHT},
        .itemTableId = BATTLE_FRONTIER_ITEM_PECHA_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_PSYDUCK] = {
        .species = SPECIES_PSYDUCK,
        .moves = {MOVE_CONFUSION, MOVE_FURY_SWIPES, MOVE_AERIAL_ACE, MOVE_DISABLE},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_CUBONE] = {
        .species = SPECIES_CUBONE,
        .moves = {MOVE_BONE_CLUB, MOVE_HEADBUTT, MOVE_BRICK_BREAK, MOVE_AERIAL_ACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SOFT_SAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_GOLDEEN] = {
        .species = SPECIES_GOLDEEN,
        .moves = {MOVE_WATERFALL, MOVE_FURY_ATTACK, MOVE_AGILITY, MOVE_PSYBEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_CLEFAIRY] = {
        .species = SPECIES_CLEFAIRY,
        .moves = {MOVE_FOLLOW_ME, MOVE_RETURN, MOVE_ENCORE, MOVE_SING},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_MAGNEMITE] = {
        .species = SPECIES_MAGNEMITE,
        .moves = {MOVE_SHOCK_WAVE, MOVE_SUPERSONIC, MOVE_METAL_SOUND, MOVE_REFLECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_RAWST_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_GENTLE
    },
    [FRONTIER_MON_SEEL] = {
        .species = SPECIES_SEEL,
        .moves = {MOVE_AURORA_BEAM, MOVE_DIVE, MOVE_BODY_SLAM, MOVE_FAKE_OUT},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASPEAR_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_GRIMER] = {
        .species = SPECIES_GRIMER,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_ROCK_TOMB, MOVE_ACID_ARMOR, MOVE_MINIMIZE},
        .itemTableId = BATTLE_FRONTIER_ITEM_BLACK_SLUDGE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .ability = 1,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_KRABBY] = {
        .species = SPECIES_KRABBY,
        .moves = {MOVE_CRABHAMMER, MOVE_MUD_SHOT, MOVE_FLAIL, MOVE_KNOCK_OFF},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_EXEGGCUTE] = {
        .species = SPECIES_EXEGGCUTE,
        .moves = {MOVE_CONFUSION, MOVE_ANCIENT_POWER, MOVE_LEECH_SEED, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .ability = 2,
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_EEVEE] = {
        .species = SPECIES_EEVEE,
        .moves = {MOVE_QUICK_ATTACK, MOVE_ATTRACT, MOVE_FLAIL, MOVE_ENDURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DROWZEE] = {
        .species = SPECIES_DROWZEE,
        .moves = {MOVE_PSYCHIC, MOVE_HEADBUTT, MOVE_DISABLE, MOVE_BARRIER},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_VOLTORB] = {
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_THUNDERBOLT, MOVE_SCREECH, MOVE_ROLLOUT, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .ability = 2,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_TENTACOOL] = {
        .species = SPECIES_TENTACOOL,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_ACID, MOVE_BARRIER, MOVE_WRAP},
        .itemTableId = BATTLE_FRONTIER_ITEM_BLACK_SLUDGE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_KOFFING] = {
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SLUDGE_WAVE, MOVE_SMOKESCREEN, MOVE_TORMENT, MOVE_HAZE},
        .itemTableId = BATTLE_FRONTIER_ITEM_POISON_BARB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_STARYU] = {
        .species = SPECIES_STARYU,
        .moves = {MOVE_SCALD, MOVE_MINIMIZE, MOVE_SWIFT, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_RHYHORN] = {
        .species = SPECIES_RHYHORN,
        .moves = {MOVE_ROCK_BLAST, MOVE_DIG, MOVE_SCARY_FACE, MOVE_ROAR},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_PIDGEOTTO] = {
        .species = SPECIES_PIDGEOTTO,
        .moves = {MOVE_AERIAL_ACE, MOVE_QUICK_ATTACK, MOVE_FEATHER_DANCE, MOVE_SAND_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_GROWLITHE] = {
        .species = SPECIES_GROWLITHE,
        .moves = {MOVE_FLAME_WHEEL, MOVE_BITE, MOVE_ROAR, MOVE_AGILITY},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_FARFETCHD] = {
        .species = SPECIES_FARFETCHD,
        .moves = {MOVE_SLASH, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE, MOVE_AGILITY},
        .itemTableId = BATTLE_FRONTIER_ITEM_STICK,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .ability = 2,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_OMANYTE] = {
        .species = SPECIES_OMANYTE,
        .moves = {MOVE_MUD_SHOT, MOVE_ICE_BEAM, MOVE_ANCIENT_POWER, MOVE_TICKLE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_KABUTO] = {
        .species = SPECIES_KABUTO,
        .moves = {MOVE_MEGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_SAND_ATTACK, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_ELEKID] = {
        .species = SPECIES_ELEKID,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_QUICK_ATTACK, MOVE_SWIFT, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_NIDORINA] = {
        .species = SPECIES_NIDORINA,
        .moves = {MOVE_DOUBLE_KICK, MOVE_BITE, MOVE_AERIAL_ACE, MOVE_FLATTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_NIDORINO] = {
        .species = SPECIES_NIDORINO,
        .moves = {MOVE_DOUBLE_KICK, MOVE_WATER_PULSE, MOVE_MUD_SLAP, MOVE_FLATTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_MAGBY] = {
        .species = SPECIES_MAGBY,
        .moves = {MOVE_FIRE_PUNCH, MOVE_SMOKESCREEN, MOVE_CONFUSE_RAY, MOVE_SMOG},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_BUTTERFREE] = {
        .species = SPECIES_BUTTERFREE,
        .moves = {MOVE_SILVER_WIND, MOVE_BUG_BUZZ, MOVE_TOXIC, MOVE_WHIRLWIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_PECHA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_BEEDRILL] = {
        .species = SPECIES_BEEDRILL,
        .moves = {MOVE_TWINEEDLE, MOVE_PURSUIT, MOVE_ENDEAVOR, MOVE_AGILITY},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_POLIWHIRL] = {
        .species = SPECIES_POLIWHIRL,
        .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_SLAP, MOVE_ICY_WIND, MOVE_RAIN_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_ONIX] = {
        .species = SPECIES_ONIX,
        .moves = {MOVE_ROCK_SLIDE, MOVE_BIND, MOVE_DRAGON_PULSE, MOVE_SANDSTORM},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_LICKITUNG_1] = {
        .species = SPECIES_LICKITUNG,
        .moves = {MOVE_SLAM, MOVE_BRICK_BREAK, MOVE_LICK, MOVE_MUD_SLAP},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_WEEPINBELL_1] = {
        .species = SPECIES_WEEPINBELL,
        .moves = {MOVE_RAZOR_LEAF, MOVE_ACID, MOVE_WRAP, MOVE_SWEET_SCENT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_GRAVELER_1] = {
        .species = SPECIES_GRAVELER,
        .moves = {MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_DEFENSE_CURL, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GLOOM_1] = {
        .species = SPECIES_GLOOM,
        .moves = {MOVE_PETAL_DANCE, MOVE_ACID, MOVE_STUN_SPORE, MOVE_MOONLIGHT},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_PORYGON_1] = {
        .species = SPECIES_PORYGON,
        .moves = {MOVE_PSYBEAM, MOVE_ICY_WIND, MOVE_RECYCLE, MOVE_AGILITY},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_KADABRA_1] = {
        .species = SPECIES_KADABRA,
        .moves = {MOVE_CONFUSION, MOVE_ROLE_PLAY, MOVE_FUTURE_SIGHT, MOVE_DISABLE},
        .itemTableId = BATTLE_FRONTIER_ITEM_TWISTED_SPOON,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_IVYSAUR_1] = {
        .species = SPECIES_IVYSAUR,
        .moves = {MOVE_PETAL_DANCE, MOVE_GROWTH, MOVE_SWEET_SCENT, MOVE_FURY_CUTTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_GENTLE
    },
    [FRONTIER_MON_CHARMELEON_1] = {
        .species = SPECIES_CHARMELEON,
        .moves = {MOVE_SLASH, MOVE_FIRE_SPIN, MOVE_SWORDS_DANCE, MOVE_AERIAL_ACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_WARTORTLE_1] = {
        .species = SPECIES_WARTORTLE,
        .moves = {MOVE_WATER_PULSE, MOVE_BITE, MOVE_MUD_SLAP, MOVE_YAWN},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_PARASECT_1] = {
        .species = SPECIES_PARASECT,
        .moves = {MOVE_SLASH, MOVE_PSYBEAM, MOVE_STUN_SPORE, MOVE_FLASH},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_RASH
    },
    [FRONTIER_MON_MACHOKE_1] = {
        .species = SPECIES_MACHOKE,
        .moves = {MOVE_LOW_KICK, MOVE_ROCK_TOMB, MOVE_FORESIGHT, MOVE_SCARY_FACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HAUNTER_1] = {
        .species = SPECIES_HAUNTER,
        .moves = {MOVE_SHADOW_PUNCH, MOVE_CONFUSE_RAY, MOVE_SPITE, MOVE_GRUDGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RASH
    },
    [FRONTIER_MON_PONYTA_1] = {
        .species = SPECIES_PONYTA,
        .moves = {MOVE_FIRE_SPIN, MOVE_BOUNCE, MOVE_QUICK_ATTACK, MOVE_TAIL_WHIP},
        .itemTableId = BATTLE_FRONTIER_ITEM_RAWST_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_RATICATE_1] = {
        .species = SPECIES_RATICATE,
        .moves = {MOVE_ENDEAVOR, MOVE_PURSUIT, MOVE_SCARY_FACE, MOVE_QUICK_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_SILK_SCARF,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_DRAGONAIR_1] = {
        .species = SPECIES_DRAGONAIR,
        .moves = {MOVE_DRAGON_PULSE, MOVE_THUNDER_WAVE, MOVE_WRAP, MOVE_SAFEGUARD},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_WIGGLYTUFF_1] = {
        .species = SPECIES_WIGGLYTUFF,
        .moves = {MOVE_SING, MOVE_DISABLE, MOVE_WISH, MOVE_SECRET_POWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_SILK_SCARF,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_TANGELA_1] = {
        .species = SPECIES_TANGELA,
        .moves = {MOVE_MEGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_TOXIC, MOVE_BIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_ARBOK_1] = {
        .species = SPECIES_ARBOK,
        .moves = {MOVE_POISON_FANG, MOVE_DIG, MOVE_BITE, MOVE_GLARE},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PERSIAN_1] = {
        .species = SPECIES_PERSIAN,
        .moves = {MOVE_FAKE_OUT, MOVE_SLASH, MOVE_TORMENT, MOVE_SWAGGER},
        .itemTableId = BATTLE_FRONTIER_ITEM_SILK_SCARF,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_SEADRA_1] = {
        .species = SPECIES_SEADRA,
        .moves = {MOVE_AURORA_BEAM, MOVE_SMOKESCREEN, MOVE_WATER_GUN, MOVE_RAIN_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_MYSTIC_WATER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_SANDSLASH_1] = {
        .species = SPECIES_SANDSLASH,
        .moves = {MOVE_CRUSH_CLAW, MOVE_ROCK_SLIDE, MOVE_SWIFT, MOVE_SANDSTORM},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_VENOMOTH_1] = {
        .species = SPECIES_VENOMOTH,
        .moves = {MOVE_SILVER_WIND, MOVE_PSYBEAM, MOVE_SLEEP_POWDER, MOVE_SKILL_SWAP},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_CHANSEY_1] = {
        .species = SPECIES_CHANSEY,
        .moves = {MOVE_METRONOME, MOVE_REFRESH, MOVE_DEFENSE_CURL, MOVE_MINIMIZE},
        .itemTableId = BATTLE_FRONTIER_ITEM_EVIOLITE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_SEAKING_1] = {
        .species = SPECIES_SEAKING,
        .moves = {MOVE_WATERFALL, MOVE_POISON_JAB, MOVE_SWIFT, MOVE_AGILITY},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_GOLBAT_1] = {
        .species = SPECIES_GOLBAT,
        .moves = {MOVE_AIR_CUTTER, MOVE_CONFUSE_RAY, MOVE_TOXIC, MOVE_STEEL_WING},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_PRIMEAPE_1] = {
        .species = SPECIES_PRIMEAPE,
        .moves = {MOVE_KARATE_CHOP, MOVE_COUNTER, MOVE_SWAGGER, MOVE_SCREECH},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_HITMONLEE_1] = {
        .species = SPECIES_HITMONLEE,
        .moves = {MOVE_ROLLING_KICK, MOVE_BRICK_BREAK, MOVE_FOCUS_ENERGY, MOVE_FACADE},
        .itemTableId = BATTLE_FRONTIER_ITEM_BLACK_BELT,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HITMONCHAN_1] = {
        .species = SPECIES_HITMONCHAN,
        .moves = {MOVE_MACH_PUNCH, MOVE_SKY_UPPERCUT, MOVE_DETECT, MOVE_COUNTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HITMONTOP_1] = {
        .species = SPECIES_HITMONTOP,
        .moves = {MOVE_TRIPLE_KICK, MOVE_DIG, MOVE_MACH_PUNCH, MOVE_QUICK_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_MAGNETON_1] = {
        .species = SPECIES_MAGNETON,
        .moves = {MOVE_SHOCK_WAVE, MOVE_SONIC_BOOM, MOVE_THUNDER_WAVE, MOVE_SUPERSONIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_PIDGEOT_1] = {
        .species = SPECIES_PIDGEOT,
        .moves = {MOVE_AERIAL_ACE, MOVE_FEATHER_DANCE, MOVE_MUD_SLAP, MOVE_FEINT_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHARP_BEAK,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_KINGLER_1] = {
        .species = SPECIES_KINGLER,
        .moves = {MOVE_CRABHAMMER, MOVE_METAL_CLAW, MOVE_MUD_SHOT, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_BELLOSSOM_1] = {
        .species = SPECIES_BELLOSSOM,
        .moves = {MOVE_PETAL_DANCE, MOVE_SAFEGUARD, MOVE_SUNNY_DAY, MOVE_SYNTHESIS},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_OMASTAR_1] = {
        .species = SPECIES_OMASTAR,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_SPIKE_CANNON, MOVE_TICKLE, MOVE_ANCIENT_POWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_KABUTOPS_1] = {
        .species = SPECIES_KABUTOPS,
        .moves = {MOVE_SLASH, MOVE_DIG, MOVE_FURY_CUTTER, MOVE_KNOCK_OFF},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_POLIWRATH_1] = {
        .species = SPECIES_POLIWRATH,
        .moves = {MOVE_SUBMISSION, MOVE_DIG, MOVE_ROCK_TOMB, MOVE_DIVE},
        .itemTableId = BATTLE_FRONTIER_ITEM_BLACK_BELT,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SCYTHER_1] = {
        .species = SPECIES_SCYTHER,
        .moves = {MOVE_ROOST, MOVE_AERIAL_ACE, MOVE_SWORDS_DANCE, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIECHI_BERRY,
        .ability = 1,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PINSIR_1] = {
        .species = SPECIES_PINSIR,
        .moves = {MOVE_SUBMISSION, MOVE_FOCUS_ENERGY, MOVE_SWORDS_DANCE, MOVE_REVENGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_EXPERT_BELT,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_POLITOED_1] = {
        .species = SPECIES_POLITOED,
        .moves = {MOVE_DIVE, MOVE_DIG, MOVE_HYPNOSIS, MOVE_SWAGGER},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_CLOYSTER_1] = {
        .species = SPECIES_CLOYSTER,
        .moves = {MOVE_AURORA_BEAM, MOVE_SPIKE_CANNON, MOVE_SUPERSONIC, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_NEVER_MELT_ICE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_LICKITUNG_2] = {
        .species = SPECIES_LICKITUNG,
        .moves = {MOVE_EARTHQUAKE, MOVE_BODY_SLAM, MOVE_SHADOW_BALL, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_WEEPINBELL_2] = {
        .species = SPECIES_WEEPINBELL,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_RAZOR_LEAF, MOVE_SLEEP_POWDER, MOVE_REFLECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_GRAVELER_2] = {
        .species = SPECIES_GRAVELER,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK, MOVE_COUNTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GLOOM_2] = {
        .species = SPECIES_GLOOM,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_SLUDGE_BOMB, MOVE_MOONLIGHT},
        .itemTableId = BATTLE_FRONTIER_ITEM_PECHA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_PORYGON_2] = {
        .species = SPECIES_PORYGON,
        .moves = {MOVE_TRI_ATTACK, MOVE_PSYCHIC, MOVE_THUNDER_WAVE, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_KADABRA_2] = {
        .species = SPECIES_KADABRA,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDER_WAVE, MOVE_REFLECT, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_TWISTED_SPOON,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_IVYSAUR_2] = {
        .species = SPECIES_IVYSAUR,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_LEECH_SEED},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_CHARMELEON_2] = {
        .species = SPECIES_CHARMELEON,
        .moves = {MOVE_FLAMETHROWER, MOVE_SLASH, MOVE_ANCIENT_POWER, MOVE_DRAGON_RAGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_WARTORTLE_2] = {
        .species = SPECIES_WARTORTLE,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_RAPID_SPIN, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_PARASECT_2] = {
        .species = SPECIES_PARASECT,
        .moves = {MOVE_SPORE, MOVE_SHADOW_CLAW, MOVE_DIG, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MACHOKE_2] = {
        .species = SPECIES_MACHOKE,
        .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE, MOVE_FORESIGHT, MOVE_SCARY_FACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HAUNTER_2] = {
        .species = SPECIES_HAUNTER,
        .moves = {MOVE_PSYCHIC, MOVE_HYPNOSIS, MOVE_NIGHTMARE, MOVE_CONFUSE_RAY},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_PONYTA_2] = {
        .species = SPECIES_PONYTA,
        .moves = {MOVE_FLAMETHROWER, MOVE_BODY_SLAM, MOVE_DOUBLE_KICK, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_RATICATE_2] = {
        .species = SPECIES_RATICATE,
        .moves = {MOVE_SUPER_FANG, MOVE_HYPER_FANG, MOVE_SHADOW_BALL, MOVE_SCARY_FACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DRAGONAIR_2] = {
        .species = SPECIES_DRAGONAIR,
        .moves = {MOVE_RETURN, MOVE_REST, MOVE_THUNDER_WAVE, MOVE_DRAGON_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_WIGGLYTUFF_2] = {
        .species = SPECIES_WIGGLYTUFF,
        .moves = {MOVE_FAKE_TEARS, MOVE_SING, MOVE_DREAM_EATER, MOVE_MOONBLAST},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_TANGELA_2] = {
        .species = SPECIES_TANGELA,
        .moves = {MOVE_GIGA_DRAIN, MOVE_STUN_SPORE, MOVE_REST, MOVE_AMNESIA},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_ARBOK_2] = {
        .species = SPECIES_ARBOK,
        .moves = {MOVE_POISON_JAB, MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_GLARE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PERSIAN_2] = {
        .species = SPECIES_PERSIAN,
        .moves = {MOVE_FRUSTRATION, MOVE_SHADOW_BALL, MOVE_ROAR, MOVE_FAKE_OUT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SILK_SCARF,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_SEADRA_2] = {
        .species = SPECIES_SEADRA,
        .moves = {MOVE_HYDRO_PUMP, MOVE_FRUSTRATION, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_SANDSLASH_2] = {
        .species = SPECIES_SANDSLASH,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CRUSH_CLAW, MOVE_SANDSTORM},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_VENOMOTH_2] = {
        .species = SPECIES_VENOMOTH,
        .moves = {MOVE_SIGNAL_BEAM, MOVE_PSYCHIC, MOVE_SLUDGE_WAVE, MOVE_GIGA_DRAIN},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_CHANSEY_2] = {
        .species = SPECIES_CHANSEY,
        .moves = {MOVE_SEISMIC_TOSS, MOVE_SHADOW_BALL, MOVE_DOUBLE_TEAM, MOVE_SOFT_BOILED},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SEAKING_2] = {
        .species = SPECIES_SEAKING,
        .moves = {MOVE_HORN_DRILL, MOVE_MEGAHORN, MOVE_SLEEP_TALK, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .ability = 2,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_GOLBAT_2] = {
        .species = SPECIES_GOLBAT,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY, MOVE_AIR_CUTTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PRIMEAPE_2] = {
        .species = SPECIES_PRIMEAPE,
        .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_TOMB, MOVE_OVERHEAT, MOVE_BULK_UP},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_HITMONLEE_2] = {
        .species = SPECIES_HITMONLEE,
        .moves = {MOVE_MEGA_KICK, MOVE_BRICK_BREAK, MOVE_HIGH_JUMP_KICK, MOVE_ROCK_TOMB},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HITMONCHAN_2] = {
        .species = SPECIES_HITMONCHAN,
        .moves = {MOVE_DYNAMIC_PUNCH, MOVE_MACH_PUNCH, MOVE_DETECT, MOVE_COUNTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HITMONTOP_2] = {
        .species = SPECIES_HITMONTOP,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_SEISMIC_TOSS, MOVE_ROCK_SLIDE, MOVE_COUNTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_EXPERT_BELT,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAGNETON_2] = {
        .species = SPECIES_MAGNETON,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_THUNDER_WAVE, MOVE_METAL_SOUND},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .ability = 2,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_PIDGEOT_2] = {
        .species = SPECIES_PIDGEOT,
        .moves = {MOVE_RETURN, MOVE_AERIAL_ACE, MOVE_STEEL_WING, MOVE_MUD_SLAP},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KINGLER_2] = {
        .species = SPECIES_KINGLER,
        .moves = {MOVE_GUILLOTINE, MOVE_ROCK_TOMB, MOVE_FLAIL, MOVE_ENDURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BELLOSSOM_2] = {
        .species = SPECIES_BELLOSSOM,
        .moves = {MOVE_GIGA_DRAIN, MOVE_MOONBLAST, MOVE_QUIVER_DANCE, MOVE_SLUDGE_BOMB},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_OMASTAR_2] = {
        .species = SPECIES_OMASTAR,
        .moves = {MOVE_HYDRO_PUMP, MOVE_SHELL_SMASH, MOVE_ICE_BEAM, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK| F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_KABUTOPS_2] = {
        .species = SPECIES_KABUTOPS,
        .moves = {MOVE_SLASH, MOVE_ROCK_SLIDE, MOVE_FLAIL, MOVE_ENDURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_POLIWRATH_2] = {
        .species = SPECIES_POLIWRATH,
        .moves = {MOVE_BRICK_BREAK, MOVE_HYPNOSIS, MOVE_REST, MOVE_BELLY_DRUM},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SCYTHER_2] = {
        .species = SPECIES_SCYTHER,
        .moves = {MOVE_FURY_CUTTER, MOVE_AERIAL_ACE, MOVE_SWORDS_DANCE, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PINSIR_2] = {
        .species = SPECIES_PINSIR,
        .moves = {MOVE_GUILLOTINE, MOVE_SWORDS_DANCE, MOVE_FLAIL, MOVE_ENDURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_POLITOED_2] = {
        .species = SPECIES_POLITOED,
        .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_MUDDY_WATER, MOVE_SWAGGER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CLOYSTER_2] = {
        .species = SPECIES_CLOYSTER,
        .moves = {MOVE_ICICLE_SPEAR, MOVE_SHELL_SMASH, MOVE_ROCK_BLAST, MOVE_PIN_MISSILE},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .ability = 1,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DUGTRIO_1] = {
        .species = SPECIES_DUGTRIO,
        .moves = {MOVE_EARTHQUAKE, MOVE_TRI_ATTACK, MOVE_SLASH, MOVE_SAND_TOMB},
        .itemTableId = BATTLE_FRONTIER_ITEM_SOFT_SAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_FEAROW_1] = {
        .species = SPECIES_FEAROW,
        .moves = {MOVE_DRILL_PECK, MOVE_TRI_ATTACK, MOVE_FACADE, MOVE_PURSUIT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHARP_BEAK,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_JYNX_1] = {
        .species = SPECIES_JYNX,
        .moves = {MOVE_ICE_BEAM, MOVE_FAKE_OUT, MOVE_LOVELY_KISS, MOVE_ATTRACT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DODRIO_1] = {
        .species = SPECIES_DODRIO,
        .moves = {MOVE_DRILL_PECK, MOVE_TRI_ATTACK, MOVE_SLEEP_TALK, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MR_MIME_1] = {
        .species = SPECIES_MR_MIME,
        .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_FAKE_OUT, MOVE_REFLECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_MAROWAK_1] = {
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_BONEMERANG, MOVE_ROCK_SLIDE, MOVE_ICY_WIND, MOVE_HEADBUTT},
        .itemTableId = BATTLE_FRONTIER_ITEM_THICK_CLUB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CLEFABLE_1] = {
        .species = SPECIES_CLEFABLE,
        .moves = {MOVE_METRONOME, MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_MOONBLAST},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .ability = 1,
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_RAICHU_1] = {
        .species = SPECIES_RAICHU,
        .moves = {MOVE_KNOCK_OFF, MOVE_QUICK_ATTACK, MOVE_BRICK_BREAK, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DEWGONG_1] = {
        .species = SPECIES_DEWGONG,
        .moves = {MOVE_ICE_BEAM, MOVE_ICY_WIND, MOVE_HEADBUTT, MOVE_FAKE_OUT},
        .itemTableId = BATTLE_FRONTIER_ITEM_NEVER_MELT_ICE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_VILEPLUME_1] = {
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_PETAL_DANCE, MOVE_MOONLIGHT, MOVE_AROMATHERAPY},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_VICTREEBEL_1] = {
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLEEP_POWDER, MOVE_SWEET_SCENT, MOVE_SYNTHESIS},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_ELECTRODE_1] = {
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_THUNDERBOLT, MOVE_EXPLOSION, MOVE_LIGHT_SCREEN, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_HYPNO_1] = {
        .species = SPECIES_HYPNO,
        .moves = {MOVE_PSYCHIC, MOVE_NASTY_PLOT, MOVE_DARK_PULSE, MOVE_HYPNOSIS},
        .itemTableId = BATTLE_FRONTIER_ITEM_TWISTED_SPOON,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_GOLEM_1] = {
        .species = SPECIES_GOLEM,
        .moves = {MOVE_EARTHQUAKE, MOVE_SUCKER_PUNCH, MOVE_COUNTER, MOVE_ROCK_TOMB},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RHYDON_1] = {
        .species = SPECIES_RHYDON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_TOMB, MOVE_SCARY_FACE, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_EVIOLITE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ALAKAZAM_1] = {
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_PSYCHIC, MOVE_SHOCK_WAVE, MOVE_RECOVER, MOVE_THUNDER_WAVE},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_WEEZING_1] = {
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_WILL_O_WISP, MOVE_SHADOW_BALL, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_BLACK_SLUDGE,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_KANGASKHAN_1] = {
        .species = SPECIES_KANGASKHAN,
        .moves = {MOVE_DIZZY_PUNCH, MOVE_BRICK_BREAK, MOVE_POWER_UP_PUNCH, MOVE_FAKE_OUT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .ability = 1,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ELECTABUZZ_1] = {
        .species = SPECIES_ELECTABUZZ,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_THUNDER_WAVE, MOVE_FIRE_PUNCH, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_EXPERT_BELT,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TAUROS_1] = {
        .species = SPECIES_TAUROS,
        .moves = {MOVE_EARTHQUAKE, MOVE_THRASH, MOVE_SWAGGER, MOVE_FACADE},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SLOWBRO_1] = {
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_SURF, MOVE_RAIN_DANCE, MOVE_HEADBUTT, MOVE_ICE_BEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .ability = 2,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_SLOWKING_1] = {
        .species = SPECIES_SLOWKING,
        .moves = {MOVE_PSYCHIC, MOVE_BRICK_BREAK, MOVE_AMNESIA, MOVE_ATTRACT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .ability = 2,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_NIDOQUEEN_1] = {
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_POISON_FANG, MOVE_DOUBLE_KICK, MOVE_BODY_SLAM, MOVE_ICE_BEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_NIDOKING_1] = {
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_HORN_DRILL, MOVE_DOUBLE_KICK, MOVE_BODY_SLAM, MOVE_THUNDER_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAGMAR_1] = {
        .species = SPECIES_MAGMAR,
        .moves = {MOVE_FLAMETHROWER, MOVE_SMOKESCREEN, MOVE_BRICK_BREAK, MOVE_BARRIER},
        .itemTableId = BATTLE_FRONTIER_ITEM_RAWST_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_GOLDUCK_1] = {
        .species = SPECIES_GOLDUCK,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DIG, MOVE_BRICK_BREAK, MOVE_PSYCHIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_RAPIDASH_1] = {
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_FLARE_BLITZ, MOVE_DOUBLE_KICK, MOVE_QUICK_ATTACK, MOVE_PLAY_ROUGH},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHARCOAL,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MUK_1] = {
        .species = SPECIES_MUK,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_BODY_SLAM, MOVE_SCREECH, MOVE_MINIMIZE},
        .itemTableId = BATTLE_FRONTIER_ITEM_POISON_BARB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GENGAR_1] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_DREAM_EATER, MOVE_HYPNOSIS, MOVE_CONFUSE_RAY, MOVE_ATTRACT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SCIZOR_1] = {
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_METAL_CLAW, MOVE_AERIAL_ACE, MOVE_LUNGE, MOVE_BULLET_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .ability = 1,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_NINETALES_1] = {
        .species = SPECIES_NINETALES,
        .moves = {MOVE_FLAMETHROWER, MOVE_ROAR, MOVE_CONFUSE_RAY, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MACHAMP_1] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE, MOVE_COUNTER, MOVE_SCARY_FACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_STEELIX_1] = {
        .species = SPECIES_STEELIX,
        .moves = {MOVE_EARTHQUAKE, MOVE_DRAGON_PULSE, MOVE_ROCK_TOMB, MOVE_ROAR},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TENTACRUEL_1] = {
        .species = SPECIES_TENTACRUEL,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_ICY_WIND, MOVE_WATER_PULSE, MOVE_BARRIER},
        .itemTableId = BATTLE_FRONTIER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_AERODACTYL_1] = {
        .species = SPECIES_AERODACTYL,
        .moves = {MOVE_ROCK_SLIDE, MOVE_DRAGON_CLAW, MOVE_AERIAL_ACE, MOVE_ROAR},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PORYGON2_1] = {
        .species = SPECIES_PORYGON2,
        .moves = {MOVE_TRI_ATTACK, MOVE_AERIAL_ACE, MOVE_SHADOW_BALL, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_EVIOLITE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .ability = 1,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_EXEGGUTOR_1] = {
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_SUBSTITUTE, MOVE_LEECH_SEED},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_STARMIE_1] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_PSYCHIC, MOVE_WATER_PULSE, MOVE_THUNDER_WAVE, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VENUSAUR_1] = {
        .species = SPECIES_VENUSAUR,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_WAVE, MOVE_SYNTHESIS, MOVE_SLEEP_POWDER},
        .itemTableId = BATTLE_FRONTIER_ITEM_BLACK_SLUDGE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_VAPOREON_1] = {
        .species = SPECIES_VAPOREON,
        .moves = {MOVE_SURF, MOVE_ROAR, MOVE_BITE, MOVE_ICE_BEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_MYSTIC_WATER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_JOLTEON_1] = {
        .species = SPECIES_JOLTEON,
        .moves = {MOVE_THUNDERBOLT, MOVE_SIGNAL_BEAM, MOVE_SHADOW_BALL, MOVE_HYPER_BEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_FLAREON_1] = {
        .species = SPECIES_FLAREON,
        .moves = {MOVE_FLAMETHROWER, MOVE_ROAR, MOVE_BITE, MOVE_SAND_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ESPEON_1] = {
        .species = SPECIES_ESPEON,
        .moves = {MOVE_PSYCHIC, MOVE_CHARM, MOVE_CALM_MIND, MOVE_BATON_PASS},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_UMBREON_1] = {
        .species = SPECIES_UMBREON,
        .moves = {MOVE_CONFUSE_RAY, MOVE_FEINT_ATTACK, MOVE_DOUBLE_TEAM, MOVE_BATON_PASS},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_BLASTOISE_1] = {
        .species = SPECIES_BLASTOISE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_RAIN_DANCE, MOVE_DRAGON_PULSE, MOVE_FLASH_CANNON},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CHARIZARD_1] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_FIRE_BLAST, MOVE_AIR_SLASH, MOVE_FOCUS_BLAST, MOVE_DRAGON_PULSE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LAPRAS_1] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_SURF, MOVE_DRAGON_PULSE, MOVE_CONFUSE_RAY, MOVE_SING},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CROBAT_1] = {
        .species = SPECIES_CROBAT,
        .moves = {MOVE_POISON_FANG, MOVE_ROOST, MOVE_AIR_SLASH, MOVE_SCREECH},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread =  F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GYARADOS_1] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_RETURN, MOVE_WATERFALL, MOVE_OUTRAGE, MOVE_DRAGON_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_SNORLAX_1] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_FACADE, MOVE_SHADOW_CLAW, MOVE_CURSE, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KINGDRA_1] = {
        .species = SPECIES_KINGDRA,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DRAGON_PULSE, MOVE_ICY_WIND, MOVE_RAIN_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_DAMP_ROCK,
        .ability = 0,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BLISSEY_1] = {
        .species = SPECIES_BLISSEY,
        .moves = {MOVE_TOXIC, MOVE_DOUBLE_TEAM, MOVE_SEISMIC_TOSS, MOVE_SOFT_BOILED},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ARCANINE_1] = {
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_FLARE_BLITZ, MOVE_EXTREME_SPEED, MOVE_CRUNCH, MOVE_BODY_SLAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DUGTRIO_2] = {
        .species = SPECIES_DUGTRIO,
        .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_AERIAL_ACE, MOVE_TRI_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAROWAK_2] = {
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_ICY_WIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_THICK_CLUB,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_FEAROW_2] = {
        .species = SPECIES_FEAROW,
        .moves = {MOVE_DRILL_PECK, MOVE_TRI_ATTACK, MOVE_ATTRACT, MOVE_PURSUIT},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_JYNX_2] = {
        .species = SPECIES_JYNX,
        .moves = {MOVE_PERISH_SONG, MOVE_MEAN_LOOK, MOVE_LOVELY_KISS, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_DODRIO_2] = {
        .species = SPECIES_DODRIO,
        .moves = {MOVE_DRILL_PECK, MOVE_DOUBLE_EDGE, MOVE_FEINT_ATTACK, MOVE_BULLDOZE},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MR_MIME_2] = {
        .species = SPECIES_MR_MIME,
        .moves = {MOVE_BATON_PASS, MOVE_SWAGGER, MOVE_PSYCH_UP, MOVE_PSYCHIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CLEFABLE_2] = {
        .species = SPECIES_CLEFABLE,
        .moves = {MOVE_METEOR_MASH, MOVE_COSMIC_POWER, MOVE_DOUBLE_TEAM, MOVE_STORED_POWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .ability = 1,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RAICHU_2] = {
        .species = SPECIES_RAICHU,
        .moves = {MOVE_THUNDERBOLT, MOVE_FOCUS_BLAST, MOVE_ENDURE, MOVE_AGILITY},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DEWGONG_2] = {
        .species = SPECIES_DEWGONG,
        .moves = {MOVE_BLIZZARD, MOVE_DOUBLE_EDGE, MOVE_ENCORE, MOVE_DISABLE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_VILEPLUME_2] = {
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_INGRAIN, MOVE_DOUBLE_TEAM, MOVE_TOXIC, MOVE_GIGA_DRAIN},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_VICTREEBEL_2] = {
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_LEAF_BLADE, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_ATTRACT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_SERIOUS
    },
    [FRONTIER_MON_ELECTRODE_2] = {
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_DOUBLE_TEAM, MOVE_SWAGGER},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_HYPNO_2] = {
        .species = SPECIES_HYPNO,
        .moves = {MOVE_HYPNOSIS, MOVE_NIGHTMARE, MOVE_DREAM_EATER, MOVE_PSYCHIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_TWISTED_SPOON,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GOLEM_2] = {
        .species = SPECIES_GOLEM,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_SUBSTITUTE, MOVE_DOUBLE_TEAM, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RHYDON_2] = {
        .species = SPECIES_RHYDON,
        .moves = {MOVE_EARTHQUAKE, MOVE_HORN_DRILL, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_EVIOLITE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ALAKAZAM_2] = {
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_THUNDER_WAVE, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_WEEZING_2] = {
        .species = SPECIES_WEEZING,
        .moves = {MOVE_MEMENTO, MOVE_SLUDGE_BOMB, MOVE_FLAMETHROWER, MOVE_DESTINY_BOND},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_KANGASKHAN_2] = {
        .species = SPECIES_KANGASKHAN,
        .moves = {MOVE_CRUSH_CLAW, MOVE_SHADOW_CLAW, MOVE_POWER_UP_PUNCH, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ELECTABUZZ_2] = {
        .species = SPECIES_ELECTABUZZ,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_ATTRACT, MOVE_FOCUS_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_TAUROS_2] = {
        .species = SPECIES_TAUROS,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_BRICK_BREAK, MOVE_ZEN_HEADBUTT},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SLOWBRO_2] = {
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_YAWN},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .ability = 2,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SLOWKING_2] = {
        .species = SPECIES_SLOWKING,
        .moves = {MOVE_YAWN, MOVE_THUNDER_WAVE, MOVE_SURF, MOVE_PSYCHIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .ability = 2,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_NIDOQUEEN_2] = {
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_NIDOKING_2] = {
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_MEGA_KICK, MOVE_EARTHQUAKE, MOVE_POISON_JAB, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAGMAR_2] = {
        .species = SPECIES_MAGMAR,
        .moves = {MOVE_FIRE_BLAST, MOVE_FOCUS_BLAST, MOVE_THUNDERBOLT, MOVE_SMOG},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GOLDUCK_2] = {
        .species = SPECIES_GOLDUCK,
        .moves = {MOVE_CROSS_CHOP, MOVE_SURF, MOVE_SWAGGER, MOVE_PSYCH_UP},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_RAPIDASH_2] = {
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_FLARE_BLITZ, MOVE_BOUNCE, MOVE_PLAY_ROUGH, MOVE_MORNING_SUN},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread =  F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MUK_2] = {
        .species = SPECIES_MUK,
        .moves = {MOVE_CURSE, MOVE_REST, MOVE_SLUDGE_BOMB, MOVE_SHADOW_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .ability = 2,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_GENGAR_2] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY, MOVE_WILL_O_WISP},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SCIZOR_2] = {
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_BUG_BITE, MOVE_STEEL_WING, MOVE_SWORDS_DANCE, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_NINETALES_2] = {
        .species = SPECIES_NINETALES,
        .moves = {MOVE_HEAT_WAVE, MOVE_BODY_SLAM, MOVE_GRUDGE, MOVE_SUNNY_DAY},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_MACHAMP_2] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_BULK_UP, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_STEELIX_2] = {
        .species = SPECIES_STEELIX,
        .moves = {MOVE_EARTHQUAKE, MOVE_DRAGON_PULSE, MOVE_SANDSTORM, MOVE_BLOCK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_TENTACRUEL_2] = {
        .species = SPECIES_TENTACRUEL,
        .moves = {MOVE_TOXIC, MOVE_GIGA_DRAIN, MOVE_CONFUSE_RAY, MOVE_SURF},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_AERODACTYL_2] = {
        .species = SPECIES_AERODACTYL,
        .moves = {MOVE_HYPER_BEAM, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_ANCIENT_POWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PORYGON2_2] = {
        .species = SPECIES_PORYGON_Z,
        .moves = {MOVE_TRI_ATTACK, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_EXEGGUTOR_2] = {
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_RETURN, MOVE_CURSE, MOVE_SLEEP_POWDER, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_STARMIE_2] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VENUSAUR_2] = {
        .species = SPECIES_VENUSAUR,
        .moves = {MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_DOUBLE_TEAM, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_VAPOREON_2] = {
        .species = SPECIES_VAPOREON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_BODY_SLAM, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_JOLTEON_2] = {
        .species = SPECIES_JOLTEON,
        .moves = {MOVE_THUNDERBOLT, MOVE_DIG, MOVE_DOUBLE_KICK, MOVE_ROAR},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_FLAREON_2] = {
        .species = SPECIES_FLAREON,
        .moves = {MOVE_CURSE, MOVE_ATTRACT, MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_ESPEON_2] = {
        .species = SPECIES_ESPEON,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_UMBREON_2] = {
        .species = SPECIES_UMBREON,
        .moves = {MOVE_CURSE, MOVE_SCREECH, MOVE_DOUBLE_TEAM, MOVE_DOUBLE_EDGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BLASTOISE_2] = {
        .species = SPECIES_BLASTOISE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_MEGA_KICK, MOVE_BRICK_BREAK, MOVE_MIRROR_COAT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_CHARIZARD_2] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_DRAGON_DANCE, MOVE_FIRE_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LAPRAS_2] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_BODY_SLAM, MOVE_ROAR},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CROBAT_2] = {
        .species = SPECIES_CROBAT,
        .moves = {MOVE_TOXIC, MOVE_GIGA_DRAIN, MOVE_CONFUSE_RAY, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_GYARADOS_2] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDERBOLT, MOVE_FIRE_BLAST, MOVE_BLIZZARD},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SNORLAX_2] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CURSE, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KINGDRA_2] = {
        .species = SPECIES_KINGDRA,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_DRAGON_PULSE, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BLISSEY_2] = {
        .species = SPECIES_BLISSEY,
        .moves = {MOVE_SEISMIC_TOSS, MOVE_SING, MOVE_ATTRACT, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ARCANINE_2] = {
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_FIRE_BLAST, MOVE_SUNNY_DAY, MOVE_HYPER_VOICE, MOVE_ROAR},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_DUGTRIO_3] = {
        .species = SPECIES_DUGTRIO,
        .moves = {MOVE_EARTHQUAKE,MOVE_SUBSTITUTE, MOVE_SLUDGE_BOMB, MOVE_FISSURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .ability = 1,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_FEAROW_3] = {
        .species = SPECIES_FEAROW,
        .moves = {MOVE_DRILL_PECK, MOVE_THROAT_CHOP, MOVE_AERIAL_ACE, MOVE_ROOST},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .ability = 2,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_JYNX_3] = {
        .species = SPECIES_JYNX,
        .moves = {MOVE_DREAM_EATER, MOVE_LOVELY_KISS, MOVE_ATTRACT, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_DODRIO_3] = {
        .species = SPECIES_DODRIO,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_DRILL_PECK, MOVE_DRILL_RUN, MOVE_KNOCK_OFF},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MR_MIME_3] = {
        .species = SPECIES_MR_MIME,
        .moves = {MOVE_TRICK, MOVE_TORMENT, MOVE_PSYCHIC, MOVE_THUNDERBOLT},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MAROWAK_3] = {
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_THICK_CLUB,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CLEFABLE_3] = {
        .species = SPECIES_CLEFABLE,
        .moves = {MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_FLAMETHROWER, MOVE_MOONBLAST},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .ability = 1,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_RAICHU_3] = {
        .species = SPECIES_RAICHU,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_NASTY_PLOT, MOVE_FOCUS_BLAST},
        .itemTableId = BATTLE_FRONTIER_ITEM_MAGNET,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DEWGONG_3] = {
        .species = SPECIES_DEWGONG,
        .moves = {MOVE_HORN_DRILL, MOVE_SHEER_COLD, MOVE_SLEEP_TALK, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_VILEPLUME_3] = {
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_ATTRACT, MOVE_STUN_SPORE, MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN},
        .itemTableId = BATTLE_FRONTIER_ITEM_BLACK_SLUDGE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VICTREEBEL_3] = {
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_STUN_SPORE, MOVE_INGRAIN, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ELECTRODE_3] = {
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_EXPLOSION, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_ENDURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_HYPNO_3] = {
        .species = SPECIES_HYPNO,
        .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_DARK_PULSE, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GOLEM_3] = {
        .species = SPECIES_GOLEM,
        .moves = {MOVE_EXPLOSION, MOVE_EARTHQUAKE, MOVE_FLAMETHROWER, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RHYDON_3] = {
        .species = SPECIES_RHYPERIOR,
        .moves = {MOVE_MEGAHORN, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_HORN_DRILL},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ALAKAZAM_3] = {
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_TRICK, MOVE_DISABLE, MOVE_PSYCHIC, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_WEEZING_3] = {
        .species = SPECIES_WEEZING,
        .moves = {MOVE_EXPLOSION, MOVE_SLUDGE_BOMB, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_KANGASKHAN_3] = {
        .species = SPECIES_KANGASKHAN,
        .moves = {MOVE_REVERSAL, MOVE_ENDURE, MOVE_DIZZY_PUNCH, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .ability = 1,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ELECTABUZZ_3] = {
        .species = SPECIES_ELECTIVIRE,
        .moves = {MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_CROSS_CHOP},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .ability = 0,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TAUROS_3] = {
        .species = SPECIES_TAUROS,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_ZEN_HEADBUTT, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SLOWBRO_3] = {
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_ATTRACT},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_SLOWKING_3] = {
        .species = SPECIES_SLOWKING,
        .moves = {MOVE_PSYCHIC, MOVE_SURF, MOVE_ICE_BEAM, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_NIDOQUEEN_3] = {
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_ICE_BEAM, MOVE_CRUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .ability = 1,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_NIDOKING_3] = {
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_EARTHQUAKE, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_POISON_JAB},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .ability = 1,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAGMAR_3] = {
        .species = SPECIES_MAGMAR,
        .moves = {MOVE_MEGA_KICK, MOVE_CROSS_CHOP, MOVE_IRON_TAIL, MOVE_COUNTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_GOLDUCK_3] = {
        .species = SPECIES_GOLDUCK,
        .moves = {MOVE_HYDRO_PUMP, MOVE_CROSS_CHOP, MOVE_BLIZZARD, MOVE_ZEN_HEADBUTT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_RAPIDASH_3] = {
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_OVERHEAT, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_MORNING_SUN},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MUK_3] = {
        .species = SPECIES_MUK,
        .moves = {MOVE_POISON_JAB, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_BLACK_SLUDGE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_GENGAR_3] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_GIGA_DRAIN, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SCIZOR_3] = {
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_REVERSAL, MOVE_ENDURE, MOVE_AGILITY, MOVE_BULLET_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_NINETALES_3] = {
        .species = SPECIES_NINETALES,
        .moves = {MOVE_FIRE_BLAST, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY, MOVE_ATTRACT},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MACHAMP_3] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_CROSS_CHOP, MOVE_MACH_PUNCH, MOVE_DRAIN_PUNCH, MOVE_ICE_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_FLAME_ORB,
        .ability = 0,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_STEELIX_3] = {
        .species = SPECIES_STEELIX,
        .moves = {MOVE_EARTHQUAKE, MOVE_HEAVY_SLAM, MOVE_STONE_EDGE, MOVE_EXPLOSION},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TENTACRUEL_3] = {
        .species = SPECIES_TENTACRUEL,
        .moves = {MOVE_SURF, MOVE_GIGA_DRAIN, MOVE_ICE_BEAM, MOVE_MIRROR_COAT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_AERODACTYL_3] = {
        .species = SPECIES_AERODACTYL,
        .moves = {MOVE_HONE_CLAWS, MOVE_STONE_EDGE, MOVE_FLY, MOVE_ROOST},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PORYGON2_3] = {
        .species = SPECIES_PORYGON_Z,
        .moves = {MOVE_PSYCHIC, MOVE_TRI_ATTACK, MOVE_THUNDER_WAVE, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_WEAKNESS_POLICY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_EXEGGUTOR_3] = {
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .ability = 2,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_STARMIE_3] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_BEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VENUSAUR_3] = {
        .species = SPECIES_VENUSAUR,
        .moves = {MOVE_GROWTH, MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN, MOVE_SUNNY_DAY},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .ability = 2,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VAPOREON_3] = {
        .species = SPECIES_VAPOREON,
        .moves = {MOVE_SCALD, MOVE_WISH, MOVE_ACID_ARMOR, MOVE_BATON_PASS},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .ability = 1,
        .evSpread =  F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_JOLTEON_3] = {
        .species = SPECIES_JOLTEON,
        .moves = {MOVE_YAWN, MOVE_VOLT_SWITCH, MOVE_CHARGE_BEAM, MOVE_BATON_PASS},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .ability = 2,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_FLAREON_3] = {
        .species = SPECIES_FLAREON,
        .moves = {MOVE_FLARE_BLITZ, MOVE_FLAME_CHARGE, MOVE_SUPERPOWER, MOVE_DOUBLE_EDGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_TOXIC_ORB,
        .ability = 2,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ESPEON_3] = {
        .species = SPECIES_ESPEON,
        .moves = {MOVE_PSYSHOCK, MOVE_CALM_MIND, MOVE_SHADOW_BALL, MOVE_MORNING_SUN},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .ability = 2,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_UMBREON_3] = {
        .species = SPECIES_UMBREON,
        .moves = {MOVE_WISH, MOVE_SWAGGER, MOVE_FOUL_PLAY, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .ability = 1,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_BLASTOISE_3] = {
        .species = SPECIES_BLASTOISE,
        .moves = {MOVE_AURA_SPHERE, MOVE_DARK_PULSE, MOVE_ICE_BEAM, MOVE_HYDRO_PUMP},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CHARIZARD_3] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_BELLY_DRUM, MOVE_DRAGON_CLAW, MOVE_FIRE_PUNCH, MOVE_FLY},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LAPRAS_3] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_SCALD, MOVE_DRACO_METEOR, MOVE_BLIZZARD, MOVE_FREEZE_DRY},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_CROBAT_3] = {
        .species = SPECIES_CROBAT,
        .moves = {MOVE_BRAVE_BIRD, MOVE_CROSS_POISON, MOVE_ROOST, MOVE_TAUNT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHARP_BEAK,
        .ability = 2,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GYARADOS_3] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_WATERFALL, MOVE_OUTRAGE, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .ability = 1,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SNORLAX_3] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_BODY_SLAM, MOVE_CRUNCH, MOVE_SWAGGER, MOVE_PSYCH_UP},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KINGDRA_3] = {
        .species = SPECIES_KINGDRA,
        .moves = {MOVE_FLAIL, MOVE_WATERFALL, MOVE_DRAGON_DANCE, MOVE_ENDURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BLISSEY_3] = {
        .species = SPECIES_BLISSEY,
        .moves = {MOVE_FIRE_BLAST, MOVE_BLIZZARD, MOVE_CALM_MIND, MOVE_SOFT_BOILED},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ARCANINE_3] = {
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_SACRED_FIRE, MOVE_EXTREME_SPEED, MOVE_CRUNCH, MOVE_AERIAL_ACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHARCOAL,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DUGTRIO_4] = {
        .species = SPECIES_DUGTRIO,
        .moves = {MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_ROCK_SLIDE, MOVE_FISSURE},
        .itemTableId = BATTLE_FRONTIER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_FEAROW_4] = {
        .species = SPECIES_FEAROW,
        .moves = {MOVE_DRILL_PECK, MOVE_DOUBLE_EDGE, MOVE_THROAT_CHOP, MOVE_SKY_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_POWER_HERB,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_JYNX_4] = {
        .species = SPECIES_JYNX,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_LOVELY_KISS, MOVE_FAKE_TEARS},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DODRIO_4] = {
        .species = SPECIES_DODRIO,
        .moves = {MOVE_DRILL_RUN, MOVE_KNOCK_OFF, MOVE_BRAVE_BIRD, MOVE_JUMP_KICK},
        .itemTableId = BATTLE_FRONTIER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MR_MIME_4] = {
        .species = SPECIES_MR_MIME,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL, MOVE_DAZZLING_GLEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_PIXIE_DUST,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MAROWAK_4] = {
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_SHADOW_BONE},
        .itemTableId = BATTLE_FRONTIER_ITEM_THICK_CLUB,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CLEFABLE_4] = {
        .species = SPECIES_CLEFABLE,
        .moves = {MOVE_STORED_POWER, MOVE_MINIMIZE, MOVE_COSMIC_POWER, MOVE_SOFT_BOILED},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .ability = 2,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_RAICHU_4] = {
        .species = SPECIES_RAICHU,
        .moves = {MOVE_THUNDERBOLT, MOVE_GRASS_KNOT, MOVE_NASTY_PLOT, MOVE_FOCUS_BLAST},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DEWGONG_4] = {
        .species = SPECIES_DEWGONG,
        .moves = {MOVE_SHEER_COLD, MOVE_ICE_BEAM, MOVE_SURF, MOVE_SIGNAL_BEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_VILEPLUME_4] = {
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SLUDGE_BOMB, MOVE_SUNNY_DAY, MOVE_SYNTHESIS},
        .itemTableId = BATTLE_FRONTIER_ITEM_BLACK_BELT,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VICTREEBEL_4] = {
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_KNOCK_OFF, MOVE_DOUBLE_EDGE, MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_ELECTRODE_4] = {
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_EXPLOSION, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_MIRROR_COAT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_HYPNO_4] = {
        .species = SPECIES_HYPNO,
        .moves = {MOVE_PSYCHIC, MOVE_DARK_PULSE, MOVE_FOCUS_BLAST, MOVE_TRI_ATTACK},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GOLEM_4] = {
        .species = SPECIES_GOLEM,
        .moves = {MOVE_EXPLOSION, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_DOUBLE_EDGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_WEAKNESS_POLICY,
        .ability = 1,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RHYDON_4] = {
        .species = SPECIES_RHYPERIOR,
        .moves = {MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_SWORDS_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ALAKAZAM_4] = {
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_PSYCHIC, MOVE_FOCUS_BLAST, MOVE_SHADOW_BALL, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .ability = 2,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_WEEZING_4] = {
        .species = SPECIES_WEEZING,
        .moves = {MOVE_EXPLOSION, MOVE_SLUDGE_BOMB, MOVE_FRUSTRATION, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_POISON_BARB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_KANGASKHAN_4] = {
        .species = SPECIES_KANGASKHAN,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_SHADOW_CLAW, MOVE_DRAIN_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_SILK_SCARF,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ELECTABUZZ_4] = {
        .species = SPECIES_ELECTIVIRE,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_PSYCHIC, MOVE_MEGA_KICK, MOVE_CROSS_CHOP},
        .itemTableId = BATTLE_FRONTIER_ITEM_WEAKNESS_POLICY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_TAUROS_4] = {
        .species = SPECIES_TAUROS,
        .moves = {MOVE_BODY_SLAM, MOVE_ROCK_SLIDE, MOVE_ZEN_HEADBUTT, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .ability 2,
        .evSpread = F_EV_SPREAD_SPEED| F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SLOWBRO_4] = {
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_PSYCHIC, MOVE_SURF, MOVE_EARTHQUAKE, MOVE_ICE_BEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_SLOWKING_4] = {
        .species = SPECIES_SLOWKING,
        .moves = {MOVE_PSYCHIC, MOVE_SURF, MOVE_ICE_BEAM, MOVE_FLAMETHROWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_NIDOQUEEN_4] = {
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_ICE_BEAM, MOVE_SLUDGE_BOMB, MOVE_EARTH_POWER, MOVE_THUNDERBOLT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .ability = 2,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_NIDOKING_4] = {
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_EARTHQUAKE, MOVE_POISON_JAB, MOVE_WATERFALL, MOVE_CRUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .ability = 2,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAGMAR_4] = {
        .species = SPECIES_MAGMORTAR,
        .moves = {MOVE_FIRE_BLAST, MOVE_PSYCHIC, MOVE_CROSS_CHOP, MOVE_CONFUSE_RAY},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_GOLDUCK_4] = {
        .species = SPECIES_GOLDUCK,
        .moves = {MOVE_SURF, MOVE_CROSS_CHOP, MOVE_ICE_BEAM, MOVE_AERIAL_ACE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_RAPIDASH_4] = {
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_FLARE_BLITZ, MOVE_DOUBLE_EDGE, MOVE_JUMP_KICK, MOVE_DOUBLE_KICK},
        .itemTableId = BATTLE_FRONTIER_ITEM_FIGY_BERRY,
        .ability = 2,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MUK_4] = {
        .species = SPECIES_MUK,
        .moves = {MOVE_CURSE, MOVE_POISON_JAB, MOVE_REST, MOVE_SLEEP_TALK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .ability = 1,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_GENGAR_4] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_SHADOW_SNEAK, MOVE_DESTINY_BOND},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SCIZOR_4] = {
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_ROOST, MOVE_SWORDS_DANCE, MOVE_BULLET_PUNCH, MOVE_KNOCK_OFF},
        .itemTableId = BATTLE_FRONTIER_ITEM_METAL_COAT,
        .ability = 1,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_NINETALES_4] = {
        .species = SPECIES_NINETALES,
        .moves = {MOVE_OVERHEAT, MOVE_SHADOW_FORCE, MOVE_NASTY_PLOT, MOVE_PSYSHOCK},
        .itemTableId = BATTLE_FRONTIER_ITEM_SPELL_TAG,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MACHAMP_4] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_DYNAMIC_PUNCH, MOVE_STONE_EDGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .ability = 1,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_STEELIX_4] = {
        .species = SPECIES_STEELIX,
        .moves = {MOVE_CURSE, MOVE_REST, MOVE_SLEEP_TALK, MOVE_HEAVY_SLAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_METAL_COAT,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_TENTACRUEL_4] = {
        .species = SPECIES_TENTACRUEL,
        .moves = {MOVE_HYDRO_PUMP, MOVE_SLUDGE_BOMB, MOVE_ICE_BEAM, MOVE_MIRROR_COAT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_AERODACTYL_4] = {
        .species = SPECIES_AERODACTYL,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_HEAD_SMASH, MOVE_BRAVE_BIRD, MOVE_HONE_CLAWS},
        .itemTableId = BATTLE_FRONTIER_ITEM_HARD_STONE,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PORYGON2_4] = {
        .species = SPECIES_PORYGON2,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_EVIOLITE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_EXEGGUTOR_4] = {
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_SUBSTITUTE, MOVE_LEECH_SEED, MOVE_PSYCHIC, MOVE_GIGA_DRAIN},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .ability = 2,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_STARMIE_4] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_PSYCHIC, MOVE_POWER_GEM, MOVE_ICE_BEAM, MOVE_THUNDERBOLT},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VENUSAUR_4] = {
        .species = SPECIES_VENUSAUR,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SLUDGE_BOMB, MOVE_SUNNY_DAY, MOVE_SYNTHESIS},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAT_ROCK,
        .ability = 2,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VAPOREON_4] = {
        .species = SPECIES_VAPOREON,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .ability = 1,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_JOLTEON_4] = {
        .species = SPECIES_JOLTEON,
        .moves = {MOVE_THUNDERBOLT, MOVE_SIGNAL_BEAM, MOVE_HIDDEN_POWER, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SPECS,
        .ability = 1,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_FLAREON_4] = {
        .species = SPECIES_FLAREON,
        .moves = {MOVE_BODY_SLAM, MOVE_FLARE_BLITZ, MOVE_WORK_UP, MOVE_IRON_TAIL},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .ability = 1,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ESPEON_4] = {
        .species = SPECIES_ESPEON,
        .moves = {MOVE_PSYCHIC, MOVE_YAWN, MOVE_REFLECT, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIGHT_CLAY,
        .ability = 1,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_UMBREON_4] = {
        .species = SPECIES_UMBREON,
        .moves = {MOVE_SUBSTITUTE, MOVE_TOXIC, MOVE_FOUL_PLAY, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .ability = 1,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_BLASTOISE_4] = {
        .species = SPECIES_BLASTOISE,
        .moves = {MOVE_SHELL_SMASH, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_FLASH_CANNON},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CHARIZARD_4] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_FIRE_BLAST, MOVE_FOCUS_BLAST, MOVE_DRAGON_PULSE, MOVE_SUNNY_DAY},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAT_ROCK,
        .ability = 2,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LAPRAS_4] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_BLIZZARD, MOVE_DRAGON_PULSE, MOVE_THUNDERBOLT, MOVE_PSYCHIC},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CROBAT_4] = {
        .species = SPECIES_CROBAT,
        .moves = {MOVE_HAZE, MOVE_AERIAL_ACE, MOVE_CROSS_POISON, MOVE_TAUNT},
        .itemTableId = BATTLE_FRONTIER_ITEM_BLACK_SLUDGE,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GYARADOS_4] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_WATERFALL, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SNORLAX_4] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_CURSE, MOVE_BODY_SLAM, MOVE_REST, MOVE_CRUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KINGDRA_4] = {
        .species = SPECIES_KINGDRA,
        .moves = {MOVE_FOCUS_ENERGY, MOVE_DRACO_METEOR, MOVE_SURF, MOVE_AGILITY},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .ability = 2,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BLISSEY_4] = {
        .species = SPECIES_BLISSEY,
        .moves = {MOVE_SEISMIC_TOSS, MOVE_TOXIC, MOVE_COUNTER, MOVE_SOFT_BOILED},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ELECTIVIRE_1] = {
        .species = SPECIES_ELECTIVIRE,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_SUBSTITUTE, MOVE_DRAIN_PUNCH, MOVE_FOCUS_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_EXPERT_BELT,
        .ability = 0,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LICKILICKY_1] = {
        .species = SPECIES_LICKILICKY,
        .moves = {MOVE_SLAM, MOVE_BRICK_BREAK, MOVE_LICK, MOVE_ROLLOUT},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_LICKILICKY_2] = {
        .species = SPECIES_LICKILICKY,
        .moves = {MOVE_EARTHQUAKE, MOVE_BODY_SLAM, MOVE_KNOCK_OFF, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAGMORTAR_1] = {
        .species = SPECIES_MAGMORTAR,
        .moves = {MOVE_FIRE_BLAST, MOVE_DARK_PULSE, MOVE_FOCUS_BLAST, MOVE_THUNDERBOLT},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .ability = 2,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MAGNEZONE_1] = {
        .species = SPECIES_MAGNEZONE,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_THUNDER_WAVE, MOVE_ZAP_CANNON},
        .itemTableId = BATTLE_FRONTIER_ITEM_MAGNET,
        .ability = 2,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_MIME_JR_1] = {
        .species = SPECIES_MIME_JR,
        .moves = {MOVE_CONFUSION, MOVE_MIMIC, MOVE_FAKE_OUT, MOVE_REFLECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_MUNCHLAX_1] = {
        .species = SPECIES_MUNCHLAX,
        .moves = {MOVE_REST, MOVE_SLEEP_TALK, MOVE_ATTRACT, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TANGROWTH_1] = {
        .species = SPECIES_TANGROWTH,
        .moves = {MOVE_GIGA_DRAIN, MOVE_KNOCK_OFF, MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_ANNIHILAPE_1] = {
        .species = SPECIES_ANNIHILAPE,
        .moves = {MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_SUBSTITUTE, MOVE_SHADOW_PUNCH},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GLACEON_1] = {
        .species = SPECIES_GLACEON,
        .moves = {MOVE_HYPER_VOICE, MOVE_FREEZE_DRY, MOVE_WATER_PULSE, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SPECS,
        .ability = 1,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GLACEON_2] = {
        .species = SPECIES_GLACEON,
        .moves = {MOVE_HYPER_VOICE, MOVE_SHADOW_BALL, MOVE_FREEZE_DRY, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .ability = 1,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LEAFEON_1] = {
        .species = SPECIES_LEAFEON,
        .moves = {MOVE_KNOCK_OFF, MOVE_SOLAR_BLADE, MOVE_SWORDS_DANCE, MOVE_DOUBLE_EDGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .ability = 0,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LEAFEON_2] = {
        .species = SPECIES_LEAFEON,
        .moves = {MOVE_WISH, MOVE_PROTECT, MOVE_YAWN, MOVE_LEAF_BLADE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .ability = 1,
        .evSpread =  F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_SYLVEON_1] = {
        .species = SPECIES_SYLVEON,
        .moves = {MOVE_HYPER_VOICE, MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_HYPER_BEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SPECS,
        .ability = 2,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SYLVEON_2] = {
        .species = SPECIES_SYLVEON,
        .moves = {MOVE_MOONBLAST, MOVE_PSYSHOCK, MOVE_WISH, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIFE_ORB,
        .ability = 1,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARCANINE_4] = {
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_SACRED_FIRE, MOVE_EXTREME_SPEED, MOVE_CRUNCH, MOVE_DOUBLE_EDGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ARTICUNO_1] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_BLIZZARD, MOVE_ROOST, MOVE_HURRICANE, MOVE_AURORA_VEIL},
        .itemTableId = BATTLE_FRONTIER_ITEM_ICY_ROCK,
        .ability = 1,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ZAPDOS_1] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_THUNDER, MOVE_HURRICANE, MOVE_ROOST, MOVE_WEATHER_BALL},
        .itemTableId = BATTLE_FRONTIER_ITEM_DAMP_ROCK,
        .ability = 1,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MOLTRES_1] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_FIRE_BLAST, MOVE_AIR_SLASH, MOVE_ROOST, MOVE_SOLAR_BEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAT_ROCK,
        .ability = 1,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARTICUNO_2] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_SUBSTITUTE, MOVE_TOXIC, MOVE_BLIZZARD, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .ability = 2,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_ZAPDOS_2] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_WILD_CHARGE, MOVE_ROOST, MOVE_DRILL_PECK, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .ability = 2,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MOLTRES_2] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_OVERHEAT, MOVE_HURRICANE, MOVE_ROOST, MOVE_PROTECT},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .ability = 2,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_ARTICUNO_3] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_HURRICANE, MOVE_BLIZZARD, MOVE_FREEZE_DRY, MOVE_ANCIENT_POWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_ICY_ROCK,
        .ability = 1,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ZAPDOS_3] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_THUNDER, MOVE_HURRICANE, MOVE_WEATHER_BALL, MOVE_SIGNAL_BEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SPECS,
        .ability = 1,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MOLTRES_3] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_FIRE_BLAST, MOVE_SOLAR_BEAM, MOVE_ROOST, MOVE_AGILITY},
        .itemTableId = BATTLE_FRONTIER_ITEM_HEAT_ROCK,
        .ability = 1,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARTICUNO_4] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_FREEZE_DRY, MOVE_ROOST, MOVE_SUBSTITUTE, MOVE_HURRICANE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .ability = 2,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ZAPDOS_4] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_THUNDERBOLT, MOVE_DRILL_PECK, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_MOLTRES_4] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_FLAME_CHARGE, MOVE_DOUBLE_EDGE, MOVE_STEEL_WING, MOVE_DRILL_PECK},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .ability = 2,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ARTICUNO_5] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_BLIZZARD, MOVE_DOUBLE_EDGE, MOVE_AGILITY, MOVE_SWAGGER},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_ARTICUNO_6] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_MIND_READER, MOVE_SHEER_COLD, MOVE_SUBSTITUTE, MOVE_ROOST},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .ability = 1,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ZAPDOS_5] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_THUNDERBOLT, MOVE_DRILL_PECK, MOVE_DOUBLE_EDGE, MOVE_THUNDER_WAVE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_ZAPDOS_6] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_THUNDER, MOVE_VOLT_SWITCH, MOVE_WEATHER_BALL, MOVE_HURRICANE},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .ability = 1,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MOLTRES_5] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_SWAGGER, MOVE_FACADE},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_MOLTRES_6] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_OVERHEAT, MOVE_DOUBLE_EDGE, MOVE_HURRICANE, MOVE_STEEL_WING},
        .itemTableId = BATTLE_FRONTIER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .ability = 1,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_GENGAR_5] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_EXPLOSION},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GENGAR_6] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_ICY_WIND},
        .itemTableId = BATTLE_FRONTIER_ITEM_WEAKNESS_POLICY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GENGAR_7] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_EXPLOSION, MOVE_DESTINY_BOND},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GENGAR_8] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICY_WIND, MOVE_DESTINY_BOND},
        .itemTableId = BATTLE_FRONTIER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MACHAMP_5] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_CROSS_CHOP, MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_STONE_EDGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SCOPE_LENS,
        .ability = 1,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MACHAMP_6] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_DYNAMIC_PUNCH, MOVE_EARTHQUAKE, MOVE_BRICK_BREAK, MOVE_STONE_EDGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_BLACK_BELT,
        .ability = 1,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MACHAMP_7] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_SUBSTITUTE, MOVE_ATTRACT, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MACHAMP_8] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_REVENGE, MOVE_DRAIN_PUNCH, MOVE_FACADE, MOVE_COUNTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_FLAME_ORB,
        .ability = 0,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_STARMIE_5] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_RECOVER, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_FRONTIER_ITEM_LIGHT_CLAY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_STARMIE_6] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_SURF, MOVE_CONFUSE_RAY, MOVE_THUNDER_WAVE, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_STARMIE_7] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_COSMIC_POWER, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_STARMIE_8] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_SURF, MOVE_THUNDERBOLT, MOVE_COSMIC_POWER, MOVE_RECOVER},
        .itemTableId = BATTLE_FRONTIER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LAPRAS_5] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_IRON_TAIL, MOVE_DOUBLE_EDGE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_LAPRAS_6] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_REST, MOVE_DRAGON_PULSE, MOVE_HAIL, MOVE_BLIZZARD},
        .itemTableId = BATTLE_FRONTIER_ITEM_DAMP_ROCK,
        .ability = 2,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LAPRAS_7] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_SHEER_COLD, MOVE_HORN_DRILL, MOVE_REST, MOVE_SLEEP_TALK},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEPPA_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_LAPRAS_8] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_SHEER_COLD, MOVE_HORN_DRILL, MOVE_SING, MOVE_ATTRACT},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SNORLAX_5] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_BODY_PRESS, MOVE_CRUNCH, MOVE_SKULL_BASH, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SNORLAX_6] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_BRICK_BREAK, MOVE_COUNTER},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SNORLAX_7] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_BODY_SLAM, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_CURSE},
        .itemTableId = BATTLE_FRONTIER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SNORLAX_8] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_RETURN, MOVE_SHADOW_CLAW, MOVE_BELLY_DRUM, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DRAGONITE_1] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_EARTHQUAKE, MOVE_DUAL_WINGBEAT, MOVE_BRICK_BREAK, MOVE_DRAGON_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_SITRUS_BERRY,
        .ability = 2,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DRAGONITE_2] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROOST, MOVE_OUTRAGE, MOVE_DRAGON_DANCE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LUM_BERRY,
        .ability = 2,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DRAGONITE_3] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_HYPER_BEAM, MOVE_ATTRACT, MOVE_DOUBLE_TEAM, MOVE_THUNDER_WAVE},
        .itemTableId = BATTLE_FRONTIER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DRAGONITE_4] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_FLY, MOVE_OUTRAGE, MOVE_DRAGON_DANCE, MOVE_REST},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHESTO_BERRY,
        .ability = 2,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DRAGONITE_5] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_OUTRAGE, MOVE_DOUBLE_EDGE, MOVE_FLY, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DRAGONITE_6] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_DRAGON_PULSE, MOVE_THUNDERBOLT, MOVE_SURF, MOVE_FLAMETHROWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_ASSAULT_VEST,
        .ability = 2,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DRAGONITE_7] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_DRACO_METEOR, MOVE_THUNDERBOLT, MOVE_SURF, MOVE_ICE_BEAM},
        .itemTableId = BATTLE_FRONTIER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DRAGONITE_8] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_DRAGON_PULSE, MOVE_FLAMETHROWER, MOVE_ICE_BEAM, MOVE_FOCUS_BLAST},
        .itemTableId = BATTLE_FRONTIER_ITEM_SHELL_BELL,
        .ability = 2,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DRAGONITE_9] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_THUNDER, MOVE_SURF, MOVE_RAIN_DANCE, MOVE_HURRICANE},
        .itemTableId = BATTLE_FRONTIER_ITEM_DAMP_ROCK,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DRAGONITE_10] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_FIRE_BLAST, MOVE_BLIZZARD, MOVE_THUNDER, MOVE_EARTH_POWER},
        .itemTableId = BATTLE_FRONTIER_ITEM_WEAKNESS_POLICY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    }
};
