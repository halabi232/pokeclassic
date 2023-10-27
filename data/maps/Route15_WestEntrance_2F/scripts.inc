Route15_WestEntrance_2F_MapScripts::
	.byte 0

Route15_WestEntrance_2F_EventScript_LeftBinoculars::
	lockall
	goto_if_set FLAG_CAUGHT_ARTICUNO, Route15_WestEntrance_2F_EventScript_RightBinoculars
	msgbox Route15_WestEntrance_2F_Text_LargeShiningBird
	showmonpic SPECIES_ARTICUNO, 10, 3
	delay 20
	waitbuttonpress
	hidemonpic
	setvar VAR_0x8004, SPECIES_ARTICUNO
	special SetSeenMon
	releaseall
	end

Route15_WestEntrance_2F_EventScript_RightBinoculars::
	msgbox Route15_WestEntrance_2F_Text_SmallIslandOnHorizon, MSGBOX_SIGN
	end

Route15_WestEntrance_2F_Text_LargeShiningBird::
    .string "Let's see what the binoculars have\n"
    .string "to show…\p"
    .string "A large, shining bird is flying\n"
    .string "toward the sea.$"

Route15_WestEntrance_2F_Text_SmallIslandOnHorizon::
    .string "Let's see what the binoculars have\n"
    .string "to show…\p"
    .string "It looks like a small island on\n"
    .string "the horizon!$"

@Aide Gift 5
Route15_WestEntrance_2F_EventScript_Aide::
    lock
    faceplayer
    goto_if_set FLAG_RECEIVED_AIDE_EVERSTONE, Route15_WestEntrance_2F_EventScript_AlreadyGotReward
    msgbox Route15_WestEntrance_2F_Text_GiveReward, MSGBOX_DEFAULT
    checkitemspace ITEM_EVERSTONE, 1
    goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
    giveitem ITEM_EVERSTONE, 1
    waitmessage
    setflag FLAG_RECEIVED_AIDE_EVERSTONE
    setflag FLAG_HIDE_AIDE_ROUTE15
    clearflag FLAG_AIDE_LOCATION_5
    clearflag FLAG_QUEUE_AIDE_CALL
    setvar VAR_AIDE_CALL_STEP_COUNTER, 0
    msgbox Route15_WestEntrance_2F_Text_ExplainReward, MSGBOX_DEFAULT
    clearflag FLAG_HIDE_AIDE_OAK_LAB
    release
    end

Route15_WestEntrance_2F_Text_GiveReward::
    .string "Oh… {PLAYER}!\n"
    .string "I've been looking for you!\p"
    .string "It's me, Cedar, the ever-present\n"
    .string "aide to Prof. Oak.\p"
    .string "How's your Pokédex coming along?\p"
    .string "Give Prof. Oak a call sometime to\n"
    .string "review your progress!\p"
    .string "Anyway, he entrusted me with this\n"
    .string "Everstone.\p"
    .string "So, {PLAYER}, here you go!.$"


Route15_WestEntrance_2F_EventScript_AlreadyGotReward::
    msgbox Route15_WestEntrance_2F_Text_ExplainReward, MSGBOX_DEFAULT
    release
    end

Route15_WestEntrance_2F_Text_ExplainReward::
    .string "Making Pokémon evolve certainly\n"
    .string "can add to the Pokédex.\p"
    .string "However, at times, you may not\n"
    .string "want a certain Pokémon to evolve.\p"
    .string "In that case, give the Everstone\n"
    .string "to that Pokémon.\p"
    .string "It will prevent evolution according\n"
    .string "to the Professor.$"
