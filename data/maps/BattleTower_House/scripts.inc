BattleTower_House_MapScripts::
	.byte 0

BattleTower_House_Scott::
	lock
	faceplayer
	msgbox BattleTower_House_Text_Scott, MSGBOX_NPC
	release
	end

BattleTower_House_Text_Scott::
	.string "Scott: Hey, Champ!\n"
	.string "Enjoying the Battle Tower?\p"
	.string "I think I'm finally going to\n"
	.string "to take a break from scouting\l"
	.string "trainers.\p"
	.string "Who knows, maybe I'll try out\n"
	.string "some battles of my own! Ha!\p"
	.string "By the way, have you checked\n"
	.string "the Contest Hall?\p"
	.string "It is a faithful copy from the\n"
	.string "Hoenn Contest Hall!\p"
	.string "We felt that this place needed\n"
	.string "something to alleviate the stress\l"
	.string "of battling!\p"
	.string "We still haven't finished\n"
	.string "setting up all the details\l"
	.string "thats why we are limiting entry\l"
	.string "to a few selected trainers.\p"
	.string "Unfortenatly we ran out of\n"
	.string "Contest Passes so I can't\l"
	.string "help you out.\p"
	.string "But a person from Pallet Town seems\n"
	.string "to be rocking the stages!\p"
	.string "Her name was Daisy, I guess...\p"
	.string "Why don't you go congratulate her?$"

BattleTower_House_Sign::
	msgbox BattleTower_House_Text_Permit, MSGBOX_SIGN
	release
	end

BattleTower_House_Text_Permit::
	.string "It's a permit to build\n"
	.string "the Battle Tower!$"
