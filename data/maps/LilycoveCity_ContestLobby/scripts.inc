@ Note: data/scripts/berry_blender.inc is for the same map, so shares local IDs
.set LOCALID_RECEPTIONIST, 1
.set LOCALID_ARTIST, 3

LilycoveCity_ContestLobby_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LilycoveCity_ContestLobby_OnFrame
	.byte 0

LilycoveCity_ContestLobby_OnFrame:
	map_script_2 VAR_LILYCOVE_CONTEST_LOBBY_STATE, 1, LilycoveCity_ContestLobby_EventScript_TryDoContestArtist
	.2byte 0

LilycoveCity_ContestLobby_OnTransition:
	call LilycoveCity_ContestLobby_EventScript_TryShowBlendMaster
	end

LilycoveCity_ContestLobby_EventScript_TryShowBlendMaster::
	getpokenewsactive POKENEWS_BLENDMASTER
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_ContestLobby_EventScript_ShowBlendMaster
	clearflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER_REPLACEMENT
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER
	return

LilycoveCity_ContestLobby_EventScript_ShowBlendMaster::
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER_REPLACEMENT
	clearflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER
	return

LilycoveCity_ContestLobby_EventScript_TryDoContestArtist::
	goto_if_set FLAG_HIDE_LILYCOVE_MUSEUM_CURATOR, LilycoveCity_ContestLobby_EventScript_ContestArtist
	setvar VAR_LILYCOVE_CONTEST_LOBBY_STATE, 0
	setvar VAR_FOLLOWER_VISIBILITY, 0
	clearflag FLAG_HIDE_FOLLOWER
	end

LilycoveCity_ContestLobby_EventScript_ContestArtist::
	lockall
	addobject LOCALID_ARTIST
	applymovement LOCALID_ARTIST, LilycoveCity_ContestLobby_Movement_ArtistApproachPlayer
	waitmovement LOCALID_ARTIST
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_ContestLobby_Movement_PlayerFaceArtist
	waitmovement 0
	msgbox LilycoveCity_ContestLobby_Text_YourPokemonSpurredMeToPaint, MSGBOX_DEFAULT
	lockall
	fadescreen FADE_TO_BLACK
	showcontestpainting CONTEST_WINNER_ARTIST
	lockall
	msgbox LilycoveCity_ContestLobby_Text_ShouldITakePaintingToMuseum, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseum
	goto_if_eq VAR_RESULT, NO, LilycoveCity_ContestLobby_EventScript_ConfirmDontTakePainting
	setvar VAR_FOLLOWER_VISIBILITY, 0
	clearflag FLAG_HIDE_FOLLOWER
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseum::
	msgbox LilycoveCity_ContestLobby_Text_IllTakePaintingToMuseum, MSGBOX_DEFAULT
	closemessage
	special SaveMuseumContestPainting
	setvar VAR_LILYCOVE_CONTEST_LOBBY_STATE, 0
	specialvar VAR_RESULT, GiveMonArtistRibbon
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_ContestLobby_EventScript_ReceivedArtistRibbon
	applymovement LOCALID_ARTIST, LilycoveCity_ContestLobby_Movement_ArtistExit
	waitmovement 0
	removeobject LOCALID_ARTIST
	call LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons
	call LilycoveCity_ContestLobby_EventScript_SetPaintingFlag
	setvar VAR_FOLLOWER_VISIBILITY, 0
	clearflag FLAG_HIDE_FOLLOWER
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_ConfirmDontTakePainting::
	msgbox LilycoveCity_ContestLobby_Text_TakeHomeButIdLikeToTakeToMuseum, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseum
	msgbox LilycoveCity_ContestLobby_Text_FineThatsTheWayItIs, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ARTIST, LilycoveCity_ContestLobby_Movement_ArtistExit
	waitmovement 0
	setvar VAR_LILYCOVE_CONTEST_LOBBY_STATE, 0
	removeobject LOCALID_ARTIST
	setvar VAR_FOLLOWER_VISIBILITY, 0
	clearflag FLAG_HIDE_FOLLOWER
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_ReceivedArtistRibbon::
	incrementgamestat GAME_STAT_RECEIVED_RIBBONS
	special BufferContestWinnerMonName
	applymovement LOCALID_ARTIST, LilycoveCity_ContestLobby_Movement_ArtistBeginToExit
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_ARTIST, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_ARTIST, LilycoveCity_ContestLobby_Movement_ArtistReturnToPlayer
	waitmovement 0
	msgbox LilycoveCity_ContestLobby_Text_TakeMementoOfPainting, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	msgbox LilycoveCity_ContestLobby_Text_ReceivedARibbon, MSGBOX_DEFAULT
	waitfanfare
	msgbox LilycoveCity_ContestLobby_Text_PutTheRibbonOnMon, MSGBOX_DEFAULT
	msgbox LilycoveCity_ContestLobby_Text_OkaySeeYou, MSGBOX_DEFAULT
	setvar VAR_FOLLOWER_VISIBILITY, 0
	clearflag FLAG_HIDE_FOLLOWER
	closemessage
	return

LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons::
	specialvar VAR_0x8004, CountPlayerMuseumPaintings
	switch VAR_0x8004
	case 1, LilycoveCity_ContestLobby_EventScript_ShowPatron1
	case 2, LilycoveCity_ContestLobby_EventScript_ShowPatron2
	case 3, LilycoveCity_ContestLobby_EventScript_ShowPatron3
	case 4, LilycoveCity_ContestLobby_EventScript_ShowPatron4
	case 5, LilycoveCity_ContestLobby_EventScript_ShowTourists
	return

LilycoveCity_ContestLobby_EventScript_ShowPatron1::
	clearflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_1
	return

LilycoveCity_ContestLobby_EventScript_ShowPatron2::
	clearflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_2
	return

LilycoveCity_ContestLobby_EventScript_ShowPatron3::
	clearflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_3
	return

LilycoveCity_ContestLobby_EventScript_ShowPatron4::
	clearflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_4
	return

LilycoveCity_ContestLobby_EventScript_ShowTourists::
	clearflag FLAG_HIDE_LILYCOVE_MUSEUM_TOURISTS
	return

LilycoveCity_ContestLobby_EventScript_SetPaintingFlag::
	switch VAR_CONTEST_CATEGORY
	case CONTEST_CATEGORY_COOL, LilycoveCity_ContestLobby_EventScript_MadeCoolPainting
	case CONTEST_CATEGORY_BEAUTY, LilycoveCity_ContestLobby_EventScript_MadeBeautyPainting
	case CONTEST_CATEGORY_CUTE, LilycoveCity_ContestLobby_EventScript_MadeCutePainting
	case CONTEST_CATEGORY_SMART, LilycoveCity_ContestLobby_EventScript_MadeSmartPainting
	case CONTEST_CATEGORY_TOUGH, LilycoveCity_ContestLobby_EventScript_MadeToughPainting
	return

LilycoveCity_ContestLobby_EventScript_MadeCoolPainting::
	setflag FLAG_COOL_PAINTING_MADE
	return

LilycoveCity_ContestLobby_EventScript_MadeBeautyPainting::
	setflag FLAG_BEAUTY_PAINTING_MADE
	return

LilycoveCity_ContestLobby_EventScript_MadeCutePainting::
	setflag FLAG_CUTE_PAINTING_MADE
	return

LilycoveCity_ContestLobby_EventScript_MadeSmartPainting::
	setflag FLAG_SMART_PAINTING_MADE
	return

LilycoveCity_ContestLobby_EventScript_MadeToughPainting::
	setflag FLAG_TOUGH_PAINTING_MADE
	return

LilycoveCity_ContestLobby_Movement_ArtistApproachPlayer:
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

LilycoveCity_ContestLobby_Movement_ArtistExit:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

LilycoveCity_ContestLobby_Movement_PlayerFaceArtist:
	walk_in_place_faster_left
	step_end

LilycoveCity_ContestLobby_Movement_ArtistBeginToExit:
	walk_down
	walk_down
	walk_down
	step_end

LilycoveCity_ContestLobby_Movement_ArtistReturnToPlayer:
	delay_16
	delay_16
	delay_16
	delay_16
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_in_place_faster_right
	step_end

@ Either ends or returns to EventScript_ContestReceptionist after submitting a contest entry
LilycoveCity_ContestLobby_EventScript_SpeakToContestReceptionist::
	lock
	faceplayer
	goto_if_ne VAR_CONTEST_PRIZE_PICKUP, 0, LilycoveCity_ContestLobby_EventScript_PickUpPrize
	call_if_set FLAG_RECEIVED_CONTEST_PASS, LilycoveCity_ContestLobby_EventScript_ReceptionWelcome
	call_if_unset FLAG_RECEIVED_CONTEST_PASS, LilycoveCity_ContestLobby_EventScript_NoContestPass
	goto LilycoveCity_ContestLobby_EventScript_AskEnterContest
	end

LilycoveCity_ContestLobby_EventScript_ReceptionWelcome::
	msgbox LilycoveCity_ContestLobby_Text_ContestReception, MSGBOX_DEFAULT
	return

LilycoveCity_ContestLobby_EventScript_NoContestPass::
	msgbox LilycoveCity_ContestLobby_Text_NoContestPass, MSGBOX_DEFAULT
	closemessage
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_PickUpPrize::
	msgbox LilycoveCity_ContestLobby_Text_PokemonWonWeHavePrize, MSGBOX_DEFAULT
	switch VAR_CONTEST_PRIZE_PICKUP
	case 4, LilycoveCity_ContestLobby_EventScript_GiveLuxuryBallAtCounter
	end

LilycoveCity_ContestLobby_EventScript_GiveLuxuryBallAtCounter::
	giveitem ITEM_LUXURY_BALL
	goto_if_eq VAR_RESULT, FALSE, LilycoveCity_ContestLobby_EventScript_NoRoomForLuxuryBallAtCounter
	setvar VAR_CONTEST_PRIZE_PICKUP, 0
	closemessage
	setvar VAR_FOLLOWER_VISIBILITY, 0
	clearflag FLAG_HIDE_FOLLOWER
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_NoRoomForLuxuryBallAtCounter::
	call Common_EventScript_BagIsFull
	msgbox LilycoveCity_ContestLobby_Text_ComeBackForPrizeLater, MSGBOX_DEFAULT
	setvar VAR_FOLLOWER_VISIBILITY, 0
	clearflag FLAG_HIDE_FOLLOWER
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_AskEnterContest::
	applymovement LOCALID_RECEPTIONIST, Common_Movement_FaceOriginalDirection
	waitmovement 1
	message LilycoveCity_ContestLobby_Text_EnterContest1
	waitmessage
	multichoice 0, 0, MULTI_ENTERINFO, FALSE
	switch VAR_RESULT
	case 0, LilycoveCity_ContestLobby_EventScript_ChooseContestRank
	case 1, LilycoveCity_ContestLobby_EventScript_ContestInfo
	case 2, LilycoveCity_ContestLobby_EventScript_CancelEnterContest
	case MULTI_B_PRESSED, LilycoveCity_ContestLobby_EventScript_CancelEnterContest
	end

LilycoveCity_ContestLobby_EventScript_ContestInfo::
	message LilycoveCity_ContestLobby_Text_WhichTopic1
	waitmessage
	multichoice 0, 0, MULTI_CONTEST_INFO, FALSE
	switch VAR_RESULT
	case 0, LilycoveCity_ContestLobby_EventScript_ExplainContests
	case 1, LilycoveCity_ContestLobby_EventScript_ExplainContestTypes
	case 2, LilycoveCity_ContestLobby_EventScript_ExplainContestRanks
	case 3, LilycoveCity_ContestLobby_EventScript_AskEnterContest
	case MULTI_B_PRESSED, LilycoveCity_ContestLobby_EventScript_AskEnterContest
	end

LilycoveCity_ContestLobby_EventScript_ExplainContests::
	msgbox LilycoveCity_ContestLobby_Text_ExplainContests, MSGBOX_DEFAULT
	goto LilycoveCity_ContestLobby_EventScript_ContestInfo
	end

LilycoveCity_ContestLobby_EventScript_ExplainContestTypes::
	msgbox LilycoveCity_ContestLobby_Text_ExplainContestTypes, MSGBOX_DEFAULT
	goto LilycoveCity_ContestLobby_EventScript_ContestInfo
	end

LilycoveCity_ContestLobby_EventScript_ExplainContestRanks::
	msgbox LilycoveCity_ContestLobby_Text_ExplainContestRanks, MSGBOX_DEFAULT
	goto LilycoveCity_ContestLobby_EventScript_ContestInfo
	end

LilycoveCity_ContestLobby_EventScript_CancelEnterContest::
	msgbox LilycoveCity_ContestLobby_Text_ParticipateAnotherTime, MSGBOX_DEFAULT
	setvar VAR_FOLLOWER_VISIBILITY, 0
	clearflag FLAG_HIDE_FOLLOWER
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_ChooseContestMon::
	msgbox LilycoveCity_ContestLobby_Text_EnterWhichPokemon1, MSGBOX_DEFAULT
	choosecontestmon
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, LilycoveCity_ContestLobby_EventScript_CancelEnterContest
	special TryEnterContestMon
	goto_if_eq VAR_RESULT, CANT_ENTER_CONTEST, LilycoveCity_ContestLobby_EventScript_CantEnterLowRank
	goto_if_eq VAR_RESULT, CAN_ENTER_CONTEST_EQUAL_RANK, LilycoveCity_ContestLobby_EventScript_EnterMon
	goto_if_eq VAR_RESULT, CAN_ENTER_CONTEST_HIGH_RANK, LilycoveCity_ContestLobby_EventScript_ConfirmEntryAlreadyWon
	goto_if_eq VAR_RESULT, CANT_ENTER_CONTEST_EGG, LilycoveCity_ContestLobby_EventScript_CantEnterEgg
	goto_if_eq VAR_RESULT, CANT_ENTER_CONTEST_FAINTED, LilycoveCity_ContestLobby_EventScript_CantEnterFainted
	end

LilycoveCity_ContestLobby_EventScript_ChooseContestRank::
	message LilycoveCity_ContestLobby_Text_EnterWhichRank
	waitmessage
	multichoice 0, 0, MULTI_CONTEST_RANK, FALSE
	switch VAR_RESULT
	case 0, LilycoveCity_ContestLobby_EventScript_EnterNormalRank
	case 1, LilycoveCity_ContestLobby_EventScript_EnterSuperRank
	case 2, LilycoveCity_ContestLobby_EventScript_EnterHyperRank
	case 3, LilycoveCity_ContestLobby_EventScript_EnterMasterRank
	case 4, LilycoveCity_ContestLobby_EventScript_CancelEnterContest
	case MULTI_B_PRESSED, LilycoveCity_ContestLobby_EventScript_CancelEnterContest
	end

LilycoveCity_ContestLobby_EventScript_EnterNormalRank::
	setvar VAR_CONTEST_RANK, CONTEST_RANK_NORMAL
	goto LilycoveCity_ContestLobby_EventScript_ChooseContestType
	end

LilycoveCity_ContestLobby_EventScript_EnterSuperRank::
	setvar VAR_CONTEST_RANK, CONTEST_RANK_SUPER
	goto LilycoveCity_ContestLobby_EventScript_ChooseContestType
	end

LilycoveCity_ContestLobby_EventScript_EnterHyperRank::
	setvar VAR_CONTEST_RANK, CONTEST_RANK_HYPER
	goto LilycoveCity_ContestLobby_EventScript_ChooseContestType
	end

LilycoveCity_ContestLobby_EventScript_EnterMasterRank::
	setvar VAR_CONTEST_RANK, CONTEST_RANK_MASTER
	goto LilycoveCity_ContestLobby_EventScript_ChooseContestType
	end

@ The multichoice selection IDs are equal to the CATEGORY values
@ So rather than list the cases they just copy VAR_RESULT for a valid selection into VAR_CONTEST_CATEGORY
LilycoveCity_ContestLobby_EventScript_ChooseContestType::
	message LilycoveCity_ContestLobby_Text_EnterWhichContest1
	waitmessage
	multichoice 0, 0, MULTI_CONTEST_TYPE, FALSE
	switch VAR_RESULT
	case 5, LilycoveCity_ContestLobby_EventScript_CancelEnterContest
	case MULTI_B_PRESSED, LilycoveCity_ContestLobby_EventScript_CancelEnterContest
	copyvar VAR_CONTEST_CATEGORY, VAR_RESULT
	goto LilycoveCity_ContestLobby_EventScript_ChooseContestMon
	end

LilycoveCity_ContestLobby_EventScript_CantEnterLowRank::
	msgbox LilycoveCity_ContestLobby_Text_MonNotQualifiedForRank, MSGBOX_DEFAULT
	goto LilycoveCity_ContestLobby_EventScript_ChooseContestMon
	release
	end

@ Unused
LilycoveCity_ContestLobby_EventScript_ConfirmEntry::
	msgbox LilycoveCity_ContestLobby_Text_ConfirmContestMon, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, LilycoveCity_ContestLobby_EventScript_ChooseContestMon
	case YES, LilycoveCity_ContestLobby_EventScript_EnterMon
	end

LilycoveCity_ContestLobby_EventScript_ConfirmEntryAlreadyWon::
	msgbox LilycoveCity_ContestLobby_Text_AlreadyWonEnterAnyway, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, LilycoveCity_ContestLobby_EventScript_ChooseContestMon
	case YES, LilycoveCity_ContestLobby_EventScript_EnterMon
	end

LilycoveCity_ContestLobby_EventScript_CantEnterEgg::
	msgbox LilycoveCity_ContestLobby_Text_EggCannotTakePart, MSGBOX_DEFAULT
	goto LilycoveCity_ContestLobby_EventScript_ChooseContestMon
	release
	end

LilycoveCity_ContestLobby_EventScript_CantEnterFainted::
	msgbox LilycoveCity_ContestLobby_Text_MonInNoConditionForContest, MSGBOX_DEFAULT
	goto LilycoveCity_ContestLobby_EventScript_ChooseContestMon
	release
	end

@ The return here is back to LilycoveCity_ContestLobby_EventScript_ContestReceptionist
LilycoveCity_ContestLobby_EventScript_EnterMon::
	msgbox LilycoveCity_ContestLobby_Text_YourMonIsEntryNum4, MSGBOX_DEFAULT
	closemessage
	releaseall
	setvar VAR_CONTEST_HALL_STATE, 1
	return

LilycoveCity_ContestLobby_EventScript_SetMuseumCurator::
	setflag FLAG_HIDE_LILYCOVE_MUSEUM_CURATOR
	return

@ EventScript_SpeakToContestReceptionist either ends or returns after a contest entry is submitted
LilycoveCity_ContestLobby_EventScript_ContestReceptionist::
	special ClearLinkContestFlags
	specialvar VAR_RESULT, IsContestDebugActive  @ Always FALSE
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_ContestLobby_EventScript_SetDebug
	call_if_unset FLAG_HIDE_LILYCOVE_MUSEUM_CURATOR, LilycoveCity_ContestLobby_EventScript_SetMuseumCurator
	call LilycoveCity_ContestLobby_EventScript_SpeakToContestReceptionist
	call LilycoveCity_ContestLobby_EventScript_LeadToContestHall
	special SetContestTrainerGfxIds
	call LilycoveCity_ContestLobby_EventScript_SetPlayerGfx
	call LilycoveCity_ContestLobby_EventScript_SetContestType
	call LilycoveCity_ContestLobby_EventScript_WarpToContestHall
	waitstate
	end

LilycoveCity_ContestLobby_EventScript_SetContestType::
	switch VAR_CONTEST_RANK
	case CONTEST_RANK_NORMAL, LilycoveCity_ContestLobby_EventScript_SetNormalContestType
	case CONTEST_RANK_SUPER, LilycoveCity_ContestLobby_EventScript_SetSuperContestType
	case CONTEST_RANK_HYPER, LilycoveCity_ContestLobby_EventScript_SetHyperContestType
	case CONTEST_RANK_MASTER, LilycoveCity_ContestLobby_EventScript_SetMasterContestType
	return

LilycoveCity_ContestLobby_EventScript_SetNormalContestType::
	setvar VAR_CONTEST_TYPE, CONTEST_TYPE_NPC_NORMAL
	return

LilycoveCity_ContestLobby_EventScript_SetSuperContestType::
	setvar VAR_CONTEST_TYPE, CONTEST_TYPE_NPC_SUPER
	return

LilycoveCity_ContestLobby_EventScript_SetHyperContestType::
	setvar VAR_CONTEST_TYPE, CONTEST_TYPE_NPC_HYPER
	return

LilycoveCity_ContestLobby_EventScript_SetMasterContestType::
	setvar VAR_CONTEST_TYPE, CONTEST_TYPE_NPC_MASTER
	return

@ Functionally unused
LilycoveCity_ContestLobby_EventScript_SetDebug::
	copyvar VAR_LILYCOVE_MUSEUM_2F_STATE, 1
	additem ITEM_CONTEST_PASS
	setvar VAR_0x800B, 8
	setvar VAR_CONTEST_RANK, CONTEST_RANK_MASTER
	setvar VAR_LILYCOVE_CONTEST_LOBBY_STATE, 1
	setflag FLAG_SYS_RIBBON_GET
	end

LilycoveCity_ContestLobby_EventScript_WarpToContestHall::
	setflag FLAG_ENTERED_CONTEST
	switch VAR_CONTEST_CATEGORY
	case CONTEST_CATEGORY_COOL, LilycoveCity_ContestLobby_EventScript_WarpToCoolContestHall
	case CONTEST_CATEGORY_BEAUTY, LilycoveCity_ContestLobby_EventScript_WarpToBeautyContestHall
	case CONTEST_CATEGORY_CUTE, LilycoveCity_ContestLobby_EventScript_WarpToCuteContestHall
	case CONTEST_CATEGORY_SMART, LilycoveCity_ContestLobby_EventScript_WarpToSmartContestHall
	case CONTEST_CATEGORY_TOUGH, LilycoveCity_ContestLobby_EventScript_WarpToToughContestHall
	return

LilycoveCity_ContestLobby_EventScript_WarpToCoolContestHall::
	setwarp MAP_CONTEST_HALL_COOL, 7, 5
	special DoContestHallWarp
	waitstate
	return

LilycoveCity_ContestLobby_EventScript_WarpToBeautyContestHall::
	setwarp MAP_CONTEST_HALL_BEAUTY, 7, 5
	special DoContestHallWarp
	waitstate
	return

LilycoveCity_ContestLobby_EventScript_WarpToCuteContestHall::
	setwarp MAP_CONTEST_HALL_CUTE, 7, 5
	special DoContestHallWarp
	waitstate
	return

LilycoveCity_ContestLobby_EventScript_WarpToSmartContestHall::
	setwarp MAP_CONTEST_HALL_SMART, 7, 5
	special DoContestHallWarp
	waitstate
	return

LilycoveCity_ContestLobby_EventScript_WarpToToughContestHall::
	setwarp MAP_CONTEST_HALL_TOUGH, 7, 5
	special DoContestHallWarp
	waitstate
	return

LilycoveCity_ContestLobby_EventScript_LeadToContestHall::
	setvar VAR_FOLLOWER_VISIBILITY, 1
	setflag FLAG_HIDE_FOLLOWER
	lockall
	applymovement LOCALID_RECEPTIONIST, LilycoveCity_ContestLobby_Movement_ReceptionistApproachCounter
	waitmovement 1
	playse SE_BRIDGE_WALK
	setmetatile 13, 2, METATILE_Contest_WallShadow, TRUE
	setmetatile 13, 3, METATILE_Contest_FloorShadow, TRUE
	special DrawWholeMapView
	applymovement LOCALID_RECEPTIONIST, LilycoveCity_ContestLobby_Movement_ReceptionistExitCounter
	waitmovement 1
	playse SE_BRIDGE_WALK
	setmetatile 13, 2, METATILE_Contest_CounterFlap_Top, TRUE
	setmetatile 13, 3, METATILE_Contest_CounterFlap_Bottom, TRUE
	special DrawWholeMapView
	delay 20
	applymovement LOCALID_RECEPTIONIST, LilycoveCity_ContestLobby_Movement_ReceptionistFacePlayer
	waitmovement 1
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_ContestLobby_Movement_PlayerApproachReceptionist
	waitmovement 1
	msgbox LilycoveCity_ContestLobby_Text_ComeThroughHere, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_RECEPTIONIST, LilycoveCity_ContestLobby_Movement_ReceptionistWalkToContestHall
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_ContestLobby_Movement_PlayerWalkToContestHall
	waitmovement 0
	releaseall
	return

LilycoveCity_ContestLobby_Movement_PlayerWalkToContestHall:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	delay_8
	set_invisible
	step_end

LilycoveCity_ContestLobby_Movement_PlayerApproachReceptionist:
	walk_in_place_faster_left
	walk_left
	step_end

LilycoveCity_ContestLobby_Movement_ReceptionistApproachCounter:
	walk_left
	walk_left
	walk_in_place_faster_down
	step_end

LilycoveCity_ContestLobby_Movement_ReceptionistExitCounter:
	walk_down
	walk_down
	walk_in_place_faster_up
	step_end

LilycoveCity_ContestLobby_Movement_ReceptionistWalkToContestHall:
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	delay_8
	set_invisible
	step_end

LilycoveCity_ContestLobby_Movement_ReceptionistFacePlayer:
	walk_in_place_faster_right
	step_end

LilycoveCity_ContestLobby_EventScript_BlackBelt::
	msgbox LilycoveCity_ContestLobby_Text_MasterRankHereICome, MSGBOX_NPC
	end

LilycoveCity_ContestLobby_EventScript_Girl::
	msgbox LilycoveCity_ContestLobby_Text_WholeVarietyOfPokemonHere, MSGBOX_NPC
	end

LilycoveCity_ContestLobby_EventScript_Artist::
	msgbox LilycoveCity_ContestLobby_Text_ContestFeastForEyes, MSGBOX_NPC
	end

LilycoveCity_ContestLobby_EventScript_FatMan::
	msgbox LilycoveCity_ContestLobby_Text_ToughContestIsExtreme, MSGBOX_NPC
	end

LilycoveCity_ContestLobby_EventScript_Fisherman::
	msgbox LilycoveCity_ContestLobby_Text_LavishedCareOnMon, MSGBOX_NPC
	end

LilycoveCity_ContestLobby_EventScript_NinjaBoy::
	msgbox LilycoveCity_ContestLobby_Text_MadePokeblocksWithFamily, MSGBOX_NPC
	end

LilycoveCity_ContestLobby_EventScript_ContestWinner1::
	lockall
	fadescreen FADE_TO_BLACK
	showcontestpainting CONTEST_WINNER_HALL_1
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_ContestWinner2::
	lockall
	fadescreen FADE_TO_BLACK
	showcontestpainting CONTEST_WINNER_HALL_2
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_ContestWinner3::
	lockall
	fadescreen FADE_TO_BLACK
	showcontestpainting CONTEST_WINNER_HALL_3
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_ContestWinner4::
	lockall
	fadescreen FADE_TO_BLACK
	showcontestpainting CONTEST_WINNER_HALL_4
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_ContestWinner5::
	lockall
	fadescreen FADE_TO_BLACK
	showcontestpainting CONTEST_WINNER_HALL_5
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_ContestWinner6::
	lockall
	fadescreen FADE_TO_BLACK
	showcontestpainting CONTEST_WINNER_HALL_6
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_Blender3Boy::
	msgbox BerryBlender_Text_LetsGetBlendingAlready, MSGBOX_NPC
	end

LilycoveCity_ContestLobby_EventScript_Blender3Girl::
	msgbox BerryBlender_Text_WhatKindOfPokeblockWillIGet, MSGBOX_NPC
	end

LilycoveCity_ContestLobby_EventScript_BerryBlenderSpeedRecords::
	lockall
	special ShowBerryBlenderRecordWindow
	waitbuttonpress
	special RemoveRecordsWindow
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_BlendMaster::
	lock
	faceplayer
	msgbox BerryBlender_Text_BlendWithTheBlendMaster, MSGBOX_DEFAULT
	goto LilycoveCity_ContestLobby_EventScript_FaceOriginalDirection
	end

LilycoveCity_ContestLobby_EventScript_BlendMasterOnlooker1::
	lock
	msgbox BerryBlender_Text_WhoaAwesome, MSGBOX_DEFAULT
	release
	end

LilycoveCity_ContestLobby_EventScript_BlendMasterOnlooker2::
	lock
	msgbox BerryBlender_Text_WickedlyFast, MSGBOX_DEFAULT
	release
	end

LilycoveCity_ContestLobby_EventScript_BlendMasterOnlooker3::
	lock
	msgbox BerryBlender_Text_WhatAnExpert, MSGBOX_DEFAULT
	release
	end

LilycoveCity_ContestLobby_EventScript_BlendMasterOnlooker4::
	lock
	faceplayer
	msgbox BerryBlender_Text_MadeAmazingPokeblocksWithMaster, MSGBOX_DEFAULT
	goto LilycoveCity_ContestLobby_EventScript_FaceOriginalDirection
	end

LilycoveCity_ContestLobby_EventScript_BlendMasterOnlooker5::
	lock
	faceplayer
	msgbox BerryBlender_Text_QualitiesOfBlendMaster, MSGBOX_DEFAULT
	goto LilycoveCity_ContestLobby_EventScript_FaceOriginalDirection
	end

LilycoveCity_ContestLobby_EventScript_BlendMasterOnlooker6::
	lock
	faceplayer
	msgbox BerryBlender_Text_MasterWorksOnSkillsInMountains, MSGBOX_DEFAULT
	goto LilycoveCity_ContestLobby_EventScript_FaceOriginalDirection
	end

LilycoveCity_ContestLobby_EventScript_FaceOriginalDirection::
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end


LilycoveCity_ContestLobby_EventScript_LittleGirl::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_POKEBLOCK_CASE, LilycoveCity_ContestLobby_EventScript_LittleGirlHaveCase
	msgbox LilycoveCity_ContestLobby_Text_LadyGaveMePokeblockCase, MSGBOX_DEFAULT
	release
	end

LilycoveCity_ContestLobby_EventScript_LittleGirlHaveCase::
	msgbox LilycoveCity_ContestLobby_Text_MakePokeblocksDifferentBerries, MSGBOX_DEFAULT
	release
	end

LilycoveCity_ContestLobby_Text_LadyGaveMePokeblockCase:
	.string "Yippee!\p"
	.string "I can make {POKEBLOCK}s with\n"
	.string "this case my daddy gave me!$"

LilycoveCity_ContestLobby_Text_MakePokeblocksDifferentBerries:
	.string "Make {POKEBLOCK}s and put them in there.\p"
	.string "When you make a {POKEBLOCK}, everyone\n"
	.string "has to put in a different Berry.$"

LilycoveCity_ContestLobby_Text_YourPokemonSpurredMeToPaint:
	.string "Congratulations!\p"
	.string "It was an amazing perfomance\n"
	.string "of you and your Pokémon!\p"
	.string "It also inspired me to capture\n"
	.string "this moment in a painting!\p"
	.string "Look, see?$"

LilycoveCity_ContestLobby_Text_ShouldITakePaintingToMuseum:
	.string "What do you think? I'm confident in\n"
	.string "what I've done, but do you like it?\p"
	.string "Since it shows a Master Rank Contest\n"
	.string "and all its amazing details, I feel\l"
	.string "that it can be exposed upstaris,\l"
	.string "in the Contest Hall Exhibit\p"
	.string "Do you think I can take it there?$"

LilycoveCity_ContestLobby_Text_IllTakePaintingToMuseum:
	.string "What, really? Then, sure, I will take\n"
	.string "this painting there right now.\p"
	.string "I'll give it a proper title, too.\p"
	.string "It will surely be a delight for the eyes!\p"
	.string "Thank you!$"

LilycoveCity_ContestLobby_Text_TakeMementoOfPainting:
	.string "Oh, that's right!\p"
	.string "As a memento of me painting your\n"
	.string "Pokémon, please take this.$"

LilycoveCity_ContestLobby_Text_ReceivedARibbon:
	.string "{PLAYER} received a Ribbon.$"

LilycoveCity_ContestLobby_Text_PutTheRibbonOnMon:
	.string "{PLAYER} put the Ribbon on\n"
	.string "{STR_VAR_1}.$"

LilycoveCity_ContestLobby_Text_OkaySeeYou:
	.string "Okay, see you!$"

LilycoveCity_ContestLobby_Text_TakeHomeButIdLikeToTakeToMuseum:
	.string "Oh… Then, I guess I'll just take\n"
	.string "this home with me…\p"
	.string "But, you know, I would like to expose\n"
	.string "it in the Exhibit… Okay?$"

LilycoveCity_ContestLobby_Text_FineThatsTheWayItIs:
	.string "Oh, fine, that's the way it is.\n"
	.string "I will hang this in my own house.\p"
	.string "I'll just have to try harder next time.\n"
	.string "Well, be seeing you.$"

LilycoveCity_ContestLobby_Text_MasterRankHereICome:
	.string "Hoo, boy… Master Rank Contests,\n"
	.string "here I come.\p"
	.string "The world will know that my dearest\n"
	.string "Pokémon is the cutest being in all\l"
	.string "existence. The time has come!\l"
	.string "Uheheheh!\p"
	.string "Huh? Daisy is here again?!\n"
	.string "Oh, no…\p"
	.string "Nevermind! Let's do this!\n"
	.string "Seventh time is the charm!$"

LilycoveCity_ContestLobby_Text_WholeVarietyOfPokemonHere:
	.string "You can see a whole variety of\n"
	.string "Pokémon here.\p"
	.string "That's why I make this place a regular\n"
	.string "part of my daily stroll.\p"
	.string "Mr. Scott surely invited only the best\n"
	.string "to perform here!$"

LilycoveCity_ContestLobby_Text_ContestFeastForEyes:
	.string "Wow, coming out to a Contest is\n"
	.string "a feast for these eyes!\p"
	.string "Would you look at all the Pokémon\n"
	.string "that just scream to be painted?\p"
	.string "This place turned out to be very\n"
	.string "faithful to the Hoenn Contest Hall!\p"
	.string "Even the quality of the shows and\n"
	.string "Pokémon are similar!\p"
	.string "But that girl Daisy surely is\n"
	.string "on another level…$"
	
LilycoveCity_ContestLobby_Text_ToughContestIsExtreme:
	.string "The Toughness Contest is like\n"
	.string "extreme, man!\p"
	.string "Those muscular appeals…\n"
	.string "Cascading sweat… I swoon!\p"
	.string "Whenever I'm tired of battling\n"
	.string "at the Battle Tower\p"
	.string "I come here to watch the Contests.$"

LilycoveCity_ContestLobby_Text_LavishedCareOnMon:
	.string "Day in and day out, I lavished my care\n"
	.string "on this Pokémon.\p"
	.string "Its condition is peaking.\n"
	.string "Today, victory is mine!\p"
	.string "If that girl from Pallete Town\n"
	.string "don't show up…\p"
	.string "She's such a pro at Contests!$"

LilycoveCity_ContestLobby_Text_MadePokeblocksWithFamily:
	.string "I made {POKEBLOCK}s with Mom, Dad, and\n"
	.string "Big Sister. They turned out great!\p"
	.string "I bet you can make smoother, better\n"
	.string "{POKEBLOCK}s if you have more people.$"

LilycoveCity_ContestLobby_Text_ParticipateAnotherTime:
	.string "We hope you will participate another\n"
	.string "time.$"

LilycoveCity_ContestLobby_Text_PleaseDecideLinkLeader:
	.string "Please decide which of you will\n"
	.string "become the Group Leader.\p"
	.string "The other players must then choose\n"
	.string "“Join Group.”$"

LilycoveCity_ContestLobby_Text_WhichContestMode:
	.string "Which Contest Mode would you like\n"
	.string "to enter?$"

LilycoveCity_ContestLobby_EventScript_DelayIfContestWithRSPlayer::
	specialvar VAR_RESULT, IsContestWithRSPlayer
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_ContestLobby_EventScript_DelayForRSPlayer
	return

LilycoveCity_ContestLobby_EventScript_DelayForRSPlayer::
	delay 9
	return

LilycoveCity_ContestLobby_Text_NoContestPass:
	.string "Hello!\p"
	.string "Welcome to the new Kanto Contest Hall!\n"
	.string "This is the reception counter for\l"
	.string "Pokémon Contests.\p"
	.string "Oh? It appears that you don't have\n"
	.string "a Contest Pass.\p"
	.string "Since we are still setting up\n"
	.string "we are limiting the entrance for invited\l"
	.string "Trainers only.\p" 
	.string "I'm terribly sorry but I'm afraid\n"
	.string "I can't let you enter without a Contest Pass.\p"
	.string "Please return once you have\n"
	.string "a Contest Pass.$"

LilycoveCity_ContestLobby_Text_ContestReception:
	.string "Hello!\p"
	.string "Welcome to the new Kanto Contest Hall!\n"
	.string "This is the reception counter for\l"
	.string "Pokémon Contests.\p"
	.string "Oh! You have a Contest Pass!\n"
	.string "That means you can enter any\l"
	.string "event in here!$"

LilycoveCity_ContestLobby_Text_EnterContest1:
	.string "Would you like to enter your Pokémon\n"
	.string "in our Contests?$"

LilycoveCity_ContestLobby_Text_WhichTopic1:
	.string "Which topic would you like?$"

LilycoveCity_ContestLobby_Text_ExplainContests:
	.string "A Pokémon Contest involves four\n"
	.string "Trainers entering one Pokémon each\l"
	.string "in competitive judging.\p"
	.string "A Contest has two stages of judging,\n"
	.string "primary and secondary.\p"
	.string "Primary judging is a popularity poll\n"
	.string "involving the audience.\p"
	.string "Secondary judging features appeals\n"
	.string "by the Pokémon using their moves.\p"
	.string "Plan appeals carefully to earn the\n"
	.string "most attention of the Judge and\l"
	.string "excite the audience.\l"
	.string "Do your best to stand out.\p"
	.string "The primary and secondary scores are\n"
	.string "added at the end.\p"
	.string "The Pokémon garnering the highest\n"
	.string "score is declared the winner.$"

LilycoveCity_ContestLobby_Text_ExplainContestTypes:
	.string "There are five kinds of Contests.\p"
	.string "Cool, Beauty, Cute, Smart, and\n"
	.string "Tough are the five categories.\p"
	.string "Choose the Contest that is right for\n"
	.string "the Pokémon you plan to enter.$"

LilycoveCity_ContestLobby_Text_ExplainContestRanks:
	.string "There are four ranks of Pokémon\n"
	.string "Contests.\p"
	.string "Normal, Super, Hyper, and Master\n"
	.string "are the four ranks.\p"
	.string "In the Normal Rank, any Pokémon may\n"
	.string "enter.\p"
	.string "Any Pokémon that won a Normal Rank\n"
	.string "Contest may move up to the Super Rank\l"
	.string "in the same category.\p"
	.string "In the same way, a Super Rank winner\n"
	.string "can move up to the Hyper Rank, and\l"
	.string "a Hyper Rank winner can advance to\l"
	.string "the Master Rank in the same category.\p"
	.string "A Pokémon that won in the Master Rank\n"
	.string "may compete in the Master Rank as\l"
	.string "often as its Trainer wants.$"

LilycoveCity_ContestLobby_Text_EnterWhichRank:
	.string "Which Rank would you like to enter?$"

LilycoveCity_ContestLobby_Text_EnterWhichContest1:
	.string "Which Contest would you like to enter?$"

LilycoveCity_ContestLobby_Text_EnterWhichPokemon1:
	.string "Which Pokémon would you like to enter?$"

LilycoveCity_ContestLobby_Text_MonNotQualifiedForRank:
	.string "I'm terribly sorry, but your Pokémon\n"
	.string "is not qualified to compete at this\l"
	.string "Rank yet…$"

LilycoveCity_ContestLobby_Text_EggCannotTakePart:
	.string "I'm sorry, but an Egg cannot take part\n"
	.string "in a Pokémon Contest.$"

LilycoveCity_ContestLobby_Text_MonInNoConditionForContest:
	.string "Your Pokémon appears to be in no\n"
	.string "condition to take part in a Contest…$"

LilycoveCity_ContestLobby_Text_AlreadyWonEnterAnyway:
	.string "Oh, but that Ribbon…\p"
	.string "Your Pokémon has won this Contest\n"
	.string "before, hasn't it?\p"
	.string "Would you like to enter it in this\n"
	.string "Contest anyway?$"

LilycoveCity_ContestLobby_Text_ConfirmContestMon:
	.string "Is that your Contest Pokémon?$"

LilycoveCity_ContestLobby_Text_YourMonIsEntryNum4:
	.string "Okay, your Pokémon will be entered\n"
	.string "in this Contest.\p"
	.string "Your Pokémon is Entry No. 4.\n"
	.string "The Contest will begin shortly.$"

LilycoveCity_ContestLobby_Text_ComeThroughHere:
	.string "Please come in through here.\n"
	.string "Good luck!$"

LilycoveCity_ContestLobby_Text_PokemonWonWeHavePrize:
	.string "Congratulations! Your Pokémon is the\n"
	.string "Contest winner!\p"
	.string "We have your prize right here.\n"
	.string "Please, right this way!$"

LilycoveCity_ContestLobby_Text_ComeBackForPrizeLater:
	.string "Please come back for your prize\n"
	.string "later on.$"

LilycoveCity_ContestLobby_EventScript_ExhibitHall::
	msgbox LilycoveCity_ContestLobby_Text_ExhibitHall, MSGBOX_SIGN
	end

LilycoveCity_ContestLobby_EventScript_ContestSign::
	msgbox LilycoveCity_ContestLobby_Text_Contest, MSGBOX_SIGN
	end

LilycoveCity_ContestLobby_Text_ExhibitHall:
	.string "Contest Hall Exhibit\n"
	.string "Now Open!$"

LilycoveCity_ContestLobby_Text_Contest:
	.string "Kanto Contest Hall\n"
	.string "Shine on the Stage!$"
