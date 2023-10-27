.set LOCALID_NURSE, 1

Route10_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route10_PokemonCenter_1F_OnTransition
	.byte 0

Route10_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_ROUTE_10
	end

Route10_PokemonCenter_1F_EventScript_Nurse::
	lock
	faceplayer
	setvar VAR_0x800B, LOCALID_NURSE
	goto Common_EventScript_PkmnCenterNurse
	end

Route10_PokemonCenter_1F_EventScript_FatMan::
	msgbox Route10_PokemonCenter_1F_Text_NuggetUselessSoldFor5000, MSGBOX_NPC
	end

Route10_PokemonCenter_1F_Text_NuggetUselessSoldFor5000::
    .string "A nugget is totally useless.\n"
    .string "So I sold it for ¥5000.$"

Route10_PokemonCenter_1F_EventScript_Gentleman::
	msgbox Route10_PokemonCenter_1F_Text_EveryTypeStrongerThanOthers, MSGBOX_NPC
	end

Route10_PokemonCenter_1F_Text_EveryTypeStrongerThanOthers::
    .string "The types of Pokémon match up\n"
    .string "differently with each other.\p"
    .string "Every type is stronger than some\n"
    .string "types and weaker than others.$"

Route10_PokemonCenter_1F_EventScript_Youngster::
	msgbox Route10_PokemonCenter_1F_Text_HeardGhostsHauntLavender, MSGBOX_NPC
	end

Route10_PokemonCenter_1F_Text_HeardGhostsHauntLavender::
    .string "I heard that ghosts haunt\n"
    .string "Lavender Town.$"

@Aide Gift 2
Route10_PokemonCenter_1F_EventScript_Aide::
    lock
    faceplayer
    goto_if_set FLAG_RECEIVED_EXP_SHARE, Route10_PokemonCenter_1F_EventScript_AlreadyGotReward
    msgbox Route10_PokemonCenter_1F_Text_GiveReward, MSGBOX_DEFAULT
    checkitemspace ITEM_EXP_SHARE, 1
    goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
    giveitem ITEM_EXP_SHARE, 1
    waitmessage
    setflag FLAG_RECEIVED_EXP_SHARE
    setflag FLAG_HIDE_AIDE_ROUTE10
    clearflag FLAG_AIDE_LOCATION_2
    clearflag FLAG_QUEUE_AIDE_CALL
    setvar VAR_AIDE_CALL_STEP_COUNTER, 0
    msgbox Route10_PokemonCenter_1F_Text_ExplainReward, MSGBOX_DEFAULT
    call_if_set FLAG_BADGE04_GET, Route10_PokemonCenter_1F_EventScript_AideNextLocation
    release
    end

Route10_PokemonCenter_1F_Text_GiveReward::
    .string "{PLAYER}!\p"
    .string "You're really on a roll.\p"
    .string "As your journey continues, \n"
    .string "raising Pokémon may get harder,\l"
    .string "especially if your team changes!\p"
    .string "So we came up with a device that\n"
    .string "might make raising Pokémon easier.$"

Route10_PokemonCenter_1F_EventScript_AlreadyGotReward::
    msgbox Route10_PokemonCenter_1F_Text_ExplainReward, MSGBOX_DEFAULT
    release
    end

Route10_PokemonCenter_1F_Text_ExplainReward::
    .string "You can turn Exp. Share on in you\n"
    .string "Key Items bag.\p"
    .string "It spreads EXP. Points to Pokémon\n"
    .string "in your party, even if they didn't\l"
    .string "participate in the battle.\p"
    .string "You can turn it off at any time, too!$"

Route10_PokemonCenter_1F_EventScript_AideNextLocation::
    setflag FLAG_QUEUE_AIDE_CALL
    setflag FLAG_AIDE_LOCATION_3
    return
