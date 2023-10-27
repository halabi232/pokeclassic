CinnabarIsland_Mart_MapScripts::
	.byte 0

CinnabarIsland_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart 0
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
CinnabarIsland_Pokemart::
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE
	release
	end

CinnabarIsland_Mart_EventScript_TM::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart CinnabarIsland_TM
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
CinnabarIsland_TM::
	.2byte ITEM_TM52
	.2byte ITEM_TM60
	.2byte ITEM_TM62
	.2byte ITEM_TM53
	.2byte ITEM_NONE
	release
	end

CinnabarIsland_Mart_EventScript_Woman::
	msgbox CinnabarIsland_Mart_Text_DontTheyHaveXAttack, MSGBOX_NPC
	end

CinnabarIsland_Mart_EventScript_Scientist::
	msgbox CinnabarIsland_Mart_Text_ExtraItemsNeverHurt, MSGBOX_NPC
	end

CinnabarIsland_Mart_Text_DontTheyHaveXAttack::
    .string "Don't they have X Attack?\p"
    .string "I like it because it raises the\n"
    .string "Attack stat in battle.$"

CinnabarIsland_Mart_Text_ExtraItemsNeverHurt::
    .string "It never hurts to have extra items.\n"
    .string "You never know what might happen.$"
