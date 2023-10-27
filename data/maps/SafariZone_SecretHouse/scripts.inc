SafariZone_SecretHouse_MapScripts::
	.byte 0

SafariZone_SecretHouse_EventScript_Attendant::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_HM03, SafariZone_SecretHouse_EventScript_HM03
	goto_if_unset FLAG_RECEIVED_HM07, SafariZone_SecretHouse_EventScript_HM07
	goto_if_set FLAG_RECEIVED_HM07, SafariZone_SecretHouse_EventScript_CheckDailyPrize
	goto_if_set FLAG_RECEIVED_HM03, SafariZone_SecretHouse_EventScript_CheckDailyPrize
	release
	end

SafariZone_SecretHouse_EventScript_HM03::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HM03, SafariZone_SecretHouse_EventScript_CheckDailyPrize
	msgbox SafariZone_SecretHouse_Text_CongratsYouveWon
	checkitemspace ITEM_HM03, 1
	goto_if_eq VAR_RESULT, FALSE, SafariZone_SecretHouse_EventScript_NoRoomForHM03
	playfanfare MUS_OBTAIN_TMHM
	message SafariZone_SecretHouse_Text_ReceivedHM03FromAttendant
	waitfanfare
	waitmessage
	additem ITEM_HM03, 1
	msgbox SafariZone_SecretHouse_Text_ExplainSurf
	setflag FLAG_RECEIVED_HM03
	goto_if_unset FLAG_RECEIVED_HM07, SafariZone_SecretHouse_EventScript_HM07
	release
	end

SafariZone_SecretHouse_EventScript_HM07::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HM07, SafariZone_SecretHouse_EventScript_CheckDailyPrize
	msgbox SafariZone_SecretHouse_Text_BonusPrize
	checkitemspace ITEM_HM07, 1
	goto_if_eq VAR_RESULT, FALSE, SafariZone_SecretHouse_EventScript_NoRoomForHM07
	playfanfare MUS_OBTAIN_TMHM
	message SafariZone_SecretHouse_Text_ReceivedHM07FromAttendant
	waitfanfare
	waitmessage
	additem ITEM_HM07, 1
	msgbox SafariZone_SecretHouse_Text_ExplainWaterfall
	setflag FLAG_RECEIVED_HM07
	setflag FLAG_DAILY_SAFARI_GAME_PRIZE
	releaseall
	end

SafariZone_SecretHouse_Text_CongratsYouveWon::
    .string "Ah! Finally!\p"
    .string "You're the first person to reach\n"
    .string "the Secret House!\p"
    .string "Although I made a campaign\n"
    .string "for our grand opening,\p"
    .string "I was getting worried that no one\n"
    .string "would win our campaign prize.\p"
    .string "Congratulations!\n"
    .string "You have won!$"

SafariZone_SecretHouse_Text_ExplainSurf::
    .string "HM03 is Surf.\p"
    .string "Pokémon will be able to ferry you\n"
    .string "across water using it.\p"

SafariZone_SecretHouse_Text_ReceivedHM03FromAttendant::
    .string "{PLAYER} received HM03\n"
    .string "from the attendant!$"

SafariZone_SecretHouse_EventScript_NoRoomForHM03::
	msgbox SafariZone_SecretHouse_Text_DontHaveRoomForPrize
	release
	end

SafariZone_SecretHouse_Text_BonusPrize::
	.string "You also receive this bonus prize!$"

SafariZone_SecretHouse_Text_ExplainWaterfall::
    .string "HM07 is Waterfall.\p"
    .string "It is not very usefull around Kanto\n"
    .string "but still is a powerfull move!\p"
	.string "It teachs how the physical strength\n"
	.string "of a Pokémon can be used to climb\l"
	.string "even the highest of the waterfalls!\p"
    .string "You're super lucky for winning this\n"
    .string "fabulous prizes!$"

SafariZone_SecretHouse_Text_ReceivedHM07FromAttendant::
    .string "{PLAYER} received HM07\n"
    .string "from the attendant!$"

SafariZone_SecretHouse_EventScript_NoRoomForHM07::
	msgbox SafariZone_SecretHouse_Text_DontHaveRoomForPrize
	release
	end

SafariZone_SecretHouse_Text_DontHaveRoomForPrize::
    .string "You don't have room for this\n"
    .string "fabulous prize!$"

SafariZone_SecretHouse_EventScript_CheckDailyPrize::
	goto_if_set FLAG_DAILY_SAFARI_GAME_PRIZE, SafariZone_SecretHouse_EventScript_ExplainDailyPrize
	msgbox SafariZone_SecretHouse_Text_WinDailyPrize
	giveitem ITEM_ABILITY_PATCH
	setflag FLAG_DAILY_SAFARI_GAME_PRIZE
	release
	end

SafariZone_SecretHouse_Text_WinDailyPrize::
	.string "Congratulations!\n"
    .string "You made it to the Secret House-\p"
    .string "Oh! Hey, you're the Grand Prize\n"
    .string "winner. You already knew the way\l"
    .string "here, huh?\p"
    .string "Well, you're still eligible for the\n"
    .string "normal prize, so here you go!$"

SafariZone_SecretHouse_EventScript_ExplainDailyPrize::
	msgbox SafariZone_SecretHouse_Text_ExplainDailyPrize
	release
	end

SafariZone_SecretHouse_Text_ExplainDailyPrize::
	.string "You already got the grand prize\n"
	.string "for being the first person to\l"
	.string "reach the Secret House, but you\l"
	.string "are still eligible to receive a\l"
	.string "normal prize if you make it here\l"
	.string "again!\p"
	.string "We only give out normal prizes once\n"
	.string "per day, though!\p"
	.string "Come back tomorrow!$"
