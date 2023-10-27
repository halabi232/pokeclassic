CeladonCity_DepartmentStore_4F_MapScripts::
	.byte 0

CeladonCity_DepartmentStore_4F_EventScript_Man::
	msgbox CeladonCity_DepartmentStore_4F_Text_GettingPokeDollAsPresent, MSGBOX_NPC
	end

CeladonCity_DepartmentStore_4F_Text_GettingPokeDollAsPresent::
    .string "I'm getting a present for my\n"
    .string "girlfriend.\p"
    .string "I guess a Poké Doll will be it.\n"
    .string "It's the popular thing.$"

CeladonCity_DepartmentStore_4F_EventScript_Youngster::
	msgbox CeladonCity_DepartmentStore_4F_Text_CanRunAwayWithPokeDoll, MSGBOX_NPC
	end

CeladonCity_DepartmentStore_4F_Text_CanRunAwayWithPokeDoll::
    .string "I heard something useful.\p"
    .string "If a wild Pokémon appears, you can\n"
    .string "distract it with a Poké Doll.\p"
    .string "You can run away while the wild\n"
    .string "Pokémon is distracted.$"

CeladonCity_DepartmentStore_4F_EventScript_FloorSign::
	msgbox CeladonCity_DepartmentStore_4F_Text_FloorSign, MSGBOX_SIGN
	end

CeladonCity_DepartmentStore_4F_Text_FloorSign::
    .string "Express yourself with gifts!\n"
    .string "4F: Wise Man Gifts\p"
    .string "Evolution Special!\n"
    .string "Element Stones on sale now!$"

CeladonCity_DepartmentStore_4F_EventScript_Clerk::
	goto_if_set FLAG_BADGE08_GET, CeladonCity_DepartmentStore_4F_EventScript_ClerkEightBadges
	goto_if_set FLAG_BADGE04_GET, CeladonCity_DepartmentStore_4F_EventScript_ClerkAfterBadge
	goto_if_unset FLAG_BADGE04_GET, CeladonCity_DepartmentStore_4F_EventScript_ClerkBeforeBadge
	end

CeladonCity_DepartmentStore_4F_EventScript_ClerkBeforeBadge::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart CeladonCity_DepartmentStore_4F_Items
	msgbox gText_PleaseComeAgain
	release
	end

	.align 2
CeladonCity_DepartmentStore_4F_Items::
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_FIRE_STONE
	.2byte ITEM_THUNDER_STONE
	.2byte ITEM_WATER_STONE
	.2byte ITEM_LEAF_STONE
	.2byte ITEM_NONE
	release
	end

CeladonCity_DepartmentStore_4F_EventScript_ClerkAfterBadge::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart CeladonCity_DepartmentStore_4F_ItemsAfter
	msgbox gText_PleaseComeAgain
	release
	end

	.align 2
CeladonCity_DepartmentStore_4F_ItemsAfter::
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_FIRE_STONE
	.2byte ITEM_THUNDER_STONE
	.2byte ITEM_WATER_STONE
	.2byte ITEM_LEAF_STONE
	.2byte ITEM_POWER_STONE
	.2byte ITEM_NONE
	release
	end

CeladonCity_DepartmentStore_4F_EventScript_ClerkEightBadges::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart CeladonCity_DepartmentStore_4F_ItemsEightBadges
	msgbox gText_PleaseComeAgain
	release
	end

	.align 2
CeladonCity_DepartmentStore_4F_ItemsEightBadges::
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_FIRE_STONE
	.2byte ITEM_THUNDER_STONE
	.2byte ITEM_WATER_STONE
	.2byte ITEM_LEAF_STONE
	.2byte ITEM_POWER_STONE
	.2byte ITEM_MOON_STONE
	.2byte ITEM_SUN_STONE
	.2byte ITEM_NONE
	release
	end

CeladonCity_DepartmentStore_4F_EventScript_Clerk2::
	goto_if_set FLAG_BADGE08_GET, CeladonCity_DepartmentStore_4F_EventScript_Clerk2EightBadges
	goto_if_set FLAG_BADGE04_GET, CeladonCity_DepartmentStore_4F_EventScript_Clerk2AfterBadge
	goto_if_unset FLAG_BADGE04_GET, CeladonCity_DepartmentStore_4F_EventScript_Clerk2BeforeBadge
	end
	
	
CeladonCity_DepartmentStore_4F_EventScript_Clerk2BeforeBadge::	
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart CeladonCity_DepartmentStore_4F_PokeBallsBeforeBadge
	msgbox gText_PleaseComeAgain
	release
	end

	.align 2
CeladonCity_DepartmentStore_4F_PokeBallsBeforeBadge::
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL		
	.2byte ITEM_NEST_BALL 	
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_TIMER_BALL 	
	.2byte ITEM_NONE
	release
	end

CeladonCity_DepartmentStore_4F_EventScript_Clerk2AfterBadge::	
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart CeladonCity_DepartmentStore_4F_PokeBallsAfterBadge
	msgbox gText_PleaseComeAgain
	release
	end

	.align 2
CeladonCity_DepartmentStore_4F_PokeBallsAfterBadge::
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL		
	.2byte ITEM_NEST_BALL
	.2byte ITEM_NET_BALL 	
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_TIMER_BALL
	.2byte ITEM_LUXURY_BALL
	.2byte ITEM_QUICK_BALL
	.2byte ITEM_HEAL_BALL	
	.2byte ITEM_NONE
	release
	end


CeladonCity_DepartmentStore_4F_EventScript_Clerk2EightBadges::	
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart CeladonCity_DepartmentStore_4F_PokeBallsEightBadges
	msgbox gText_PleaseComeAgain
	release
	end

	.align 2
CeladonCity_DepartmentStore_4F_PokeBallsEightBadges::
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NET_BALL
	.2byte ITEM_NEST_BALL
	.2byte ITEM_DIVE_BALL
	.2byte ITEM_DUSK_BALL
	.2byte ITEM_TIMER_BALL
	.2byte ITEM_QUICK_BALL
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_LUXURY_BALL
	.2byte ITEM_LEVEL_BALL
	.2byte ITEM_LURE_BALL
	.2byte ITEM_MOON_BALL
	.2byte ITEM_FRIEND_BALL
	.2byte ITEM_LOVE_BALL
	.2byte ITEM_FAST_BALL
	.2byte ITEM_HEAVY_BALL
	.2byte ITEM_DREAM_BALL
	.2byte ITEM_NONE
	release
	end
