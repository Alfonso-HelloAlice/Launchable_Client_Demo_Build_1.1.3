#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Action`1<SA.Common.Models.Result>
struct Action_1_t4089019125;
// System.Action`1<GK_LeaderboardResult>
struct Action_1_t667880215;
// System.Action`1<GK_AchievementProgressResult>
struct Action_1_t3341373734;
// System.Action
struct Action_t3226471752;
// System.Action`1<GK_UserInfoLoadResult>
struct Action_1_t979640615;
// System.Action`1<GK_PlayerSignatureResult>
struct Action_1_t4110536157;
// System.Collections.Generic.Dictionary`2<System.String,GK_Player>
struct Dictionary_2_t401820260;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.Collections.Generic.List`1<GK_LeaderboardSet>
struct List_1_t3669402526;
// System.Collections.Generic.Dictionary`2<System.Int32,GK_FriendRequest>
struct Dictionary_2_t3109446443;
// GK_Player
struct GK_Player_t2782008294;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameCenterManager
struct  GameCenterManager_t1487113918  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct GameCenterManager_t1487113918_StaticFields
{
public:
	// System.Action`1<SA.Common.Models.Result> GameCenterManager::OnAuthFinished
	Action_1_t4089019125 * ___OnAuthFinished_2;
	// System.Action`1<GK_LeaderboardResult> GameCenterManager::OnScoreSubmitted
	Action_1_t667880215 * ___OnScoreSubmitted_3;
	// System.Action`1<GK_LeaderboardResult> GameCenterManager::OnScoresListLoaded
	Action_1_t667880215 * ___OnScoresListLoaded_4;
	// System.Action`1<GK_LeaderboardResult> GameCenterManager::OnLeadrboardInfoLoaded
	Action_1_t667880215 * ___OnLeadrboardInfoLoaded_5;
	// System.Action`1<SA.Common.Models.Result> GameCenterManager::OnLeaderboardSetsInfoLoaded
	Action_1_t4089019125 * ___OnLeaderboardSetsInfoLoaded_6;
	// System.Action`1<SA.Common.Models.Result> GameCenterManager::OnAchievementsReset
	Action_1_t4089019125 * ___OnAchievementsReset_7;
	// System.Action`1<SA.Common.Models.Result> GameCenterManager::OnAchievementsLoaded
	Action_1_t4089019125 * ___OnAchievementsLoaded_8;
	// System.Action`1<GK_AchievementProgressResult> GameCenterManager::OnAchievementsProgress
	Action_1_t3341373734 * ___OnAchievementsProgress_9;
	// System.Action GameCenterManager::OnGameCenterViewDismissed
	Action_t3226471752 * ___OnGameCenterViewDismissed_10;
	// System.Action`1<SA.Common.Models.Result> GameCenterManager::OnFriendsListLoaded
	Action_1_t4089019125 * ___OnFriendsListLoaded_11;
	// System.Action`1<GK_UserInfoLoadResult> GameCenterManager::OnUserInfoLoaded
	Action_1_t979640615 * ___OnUserInfoLoaded_12;
	// System.Action`1<GK_PlayerSignatureResult> GameCenterManager::OnPlayerSignatureRetrieveResult
	Action_1_t4110536157 * ___OnPlayerSignatureRetrieveResult_13;
	// System.Boolean GameCenterManager::_IsInitialized
	bool ____IsInitialized_14;
	// System.Boolean GameCenterManager::_IsAchievementsInfoLoaded
	bool ____IsAchievementsInfoLoaded_15;
	// System.Collections.Generic.Dictionary`2<System.String,GK_Player> GameCenterManager::_players
	Dictionary_2_t401820260 * ____players_16;
	// System.Collections.Generic.List`1<System.String> GameCenterManager::_friendsList
	List_1_t1398341365 * ____friendsList_17;
	// System.Collections.Generic.List`1<GK_LeaderboardSet> GameCenterManager::_LeaderboardSets
	List_1_t3669402526 * ____LeaderboardSets_18;
	// System.Collections.Generic.Dictionary`2<System.Int32,GK_FriendRequest> GameCenterManager::_FriendRequests
	Dictionary_2_t3109446443 * ____FriendRequests_19;
	// GK_Player GameCenterManager::_player
	GK_Player_t2782008294 * ____player_20;

public:
	inline static int32_t get_offset_of_OnAuthFinished_2() { return static_cast<int32_t>(offsetof(GameCenterManager_t1487113918_StaticFields, ___OnAuthFinished_2)); }
	inline Action_1_t4089019125 * get_OnAuthFinished_2() const { return ___OnAuthFinished_2; }
	inline Action_1_t4089019125 ** get_address_of_OnAuthFinished_2() { return &___OnAuthFinished_2; }
	inline void set_OnAuthFinished_2(Action_1_t4089019125 * value)
	{
		___OnAuthFinished_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnAuthFinished_2, value);
	}

	inline static int32_t get_offset_of_OnScoreSubmitted_3() { return static_cast<int32_t>(offsetof(GameCenterManager_t1487113918_StaticFields, ___OnScoreSubmitted_3)); }
	inline Action_1_t667880215 * get_OnScoreSubmitted_3() const { return ___OnScoreSubmitted_3; }
	inline Action_1_t667880215 ** get_address_of_OnScoreSubmitted_3() { return &___OnScoreSubmitted_3; }
	inline void set_OnScoreSubmitted_3(Action_1_t667880215 * value)
	{
		___OnScoreSubmitted_3 = value;
		Il2CppCodeGenWriteBarrier(&___OnScoreSubmitted_3, value);
	}

	inline static int32_t get_offset_of_OnScoresListLoaded_4() { return static_cast<int32_t>(offsetof(GameCenterManager_t1487113918_StaticFields, ___OnScoresListLoaded_4)); }
	inline Action_1_t667880215 * get_OnScoresListLoaded_4() const { return ___OnScoresListLoaded_4; }
	inline Action_1_t667880215 ** get_address_of_OnScoresListLoaded_4() { return &___OnScoresListLoaded_4; }
	inline void set_OnScoresListLoaded_4(Action_1_t667880215 * value)
	{
		___OnScoresListLoaded_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnScoresListLoaded_4, value);
	}

	inline static int32_t get_offset_of_OnLeadrboardInfoLoaded_5() { return static_cast<int32_t>(offsetof(GameCenterManager_t1487113918_StaticFields, ___OnLeadrboardInfoLoaded_5)); }
	inline Action_1_t667880215 * get_OnLeadrboardInfoLoaded_5() const { return ___OnLeadrboardInfoLoaded_5; }
	inline Action_1_t667880215 ** get_address_of_OnLeadrboardInfoLoaded_5() { return &___OnLeadrboardInfoLoaded_5; }
	inline void set_OnLeadrboardInfoLoaded_5(Action_1_t667880215 * value)
	{
		___OnLeadrboardInfoLoaded_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnLeadrboardInfoLoaded_5, value);
	}

	inline static int32_t get_offset_of_OnLeaderboardSetsInfoLoaded_6() { return static_cast<int32_t>(offsetof(GameCenterManager_t1487113918_StaticFields, ___OnLeaderboardSetsInfoLoaded_6)); }
	inline Action_1_t4089019125 * get_OnLeaderboardSetsInfoLoaded_6() const { return ___OnLeaderboardSetsInfoLoaded_6; }
	inline Action_1_t4089019125 ** get_address_of_OnLeaderboardSetsInfoLoaded_6() { return &___OnLeaderboardSetsInfoLoaded_6; }
	inline void set_OnLeaderboardSetsInfoLoaded_6(Action_1_t4089019125 * value)
	{
		___OnLeaderboardSetsInfoLoaded_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnLeaderboardSetsInfoLoaded_6, value);
	}

	inline static int32_t get_offset_of_OnAchievementsReset_7() { return static_cast<int32_t>(offsetof(GameCenterManager_t1487113918_StaticFields, ___OnAchievementsReset_7)); }
	inline Action_1_t4089019125 * get_OnAchievementsReset_7() const { return ___OnAchievementsReset_7; }
	inline Action_1_t4089019125 ** get_address_of_OnAchievementsReset_7() { return &___OnAchievementsReset_7; }
	inline void set_OnAchievementsReset_7(Action_1_t4089019125 * value)
	{
		___OnAchievementsReset_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnAchievementsReset_7, value);
	}

	inline static int32_t get_offset_of_OnAchievementsLoaded_8() { return static_cast<int32_t>(offsetof(GameCenterManager_t1487113918_StaticFields, ___OnAchievementsLoaded_8)); }
	inline Action_1_t4089019125 * get_OnAchievementsLoaded_8() const { return ___OnAchievementsLoaded_8; }
	inline Action_1_t4089019125 ** get_address_of_OnAchievementsLoaded_8() { return &___OnAchievementsLoaded_8; }
	inline void set_OnAchievementsLoaded_8(Action_1_t4089019125 * value)
	{
		___OnAchievementsLoaded_8 = value;
		Il2CppCodeGenWriteBarrier(&___OnAchievementsLoaded_8, value);
	}

	inline static int32_t get_offset_of_OnAchievementsProgress_9() { return static_cast<int32_t>(offsetof(GameCenterManager_t1487113918_StaticFields, ___OnAchievementsProgress_9)); }
	inline Action_1_t3341373734 * get_OnAchievementsProgress_9() const { return ___OnAchievementsProgress_9; }
	inline Action_1_t3341373734 ** get_address_of_OnAchievementsProgress_9() { return &___OnAchievementsProgress_9; }
	inline void set_OnAchievementsProgress_9(Action_1_t3341373734 * value)
	{
		___OnAchievementsProgress_9 = value;
		Il2CppCodeGenWriteBarrier(&___OnAchievementsProgress_9, value);
	}

	inline static int32_t get_offset_of_OnGameCenterViewDismissed_10() { return static_cast<int32_t>(offsetof(GameCenterManager_t1487113918_StaticFields, ___OnGameCenterViewDismissed_10)); }
	inline Action_t3226471752 * get_OnGameCenterViewDismissed_10() const { return ___OnGameCenterViewDismissed_10; }
	inline Action_t3226471752 ** get_address_of_OnGameCenterViewDismissed_10() { return &___OnGameCenterViewDismissed_10; }
	inline void set_OnGameCenterViewDismissed_10(Action_t3226471752 * value)
	{
		___OnGameCenterViewDismissed_10 = value;
		Il2CppCodeGenWriteBarrier(&___OnGameCenterViewDismissed_10, value);
	}

	inline static int32_t get_offset_of_OnFriendsListLoaded_11() { return static_cast<int32_t>(offsetof(GameCenterManager_t1487113918_StaticFields, ___OnFriendsListLoaded_11)); }
	inline Action_1_t4089019125 * get_OnFriendsListLoaded_11() const { return ___OnFriendsListLoaded_11; }
	inline Action_1_t4089019125 ** get_address_of_OnFriendsListLoaded_11() { return &___OnFriendsListLoaded_11; }
	inline void set_OnFriendsListLoaded_11(Action_1_t4089019125 * value)
	{
		___OnFriendsListLoaded_11 = value;
		Il2CppCodeGenWriteBarrier(&___OnFriendsListLoaded_11, value);
	}

	inline static int32_t get_offset_of_OnUserInfoLoaded_12() { return static_cast<int32_t>(offsetof(GameCenterManager_t1487113918_StaticFields, ___OnUserInfoLoaded_12)); }
	inline Action_1_t979640615 * get_OnUserInfoLoaded_12() const { return ___OnUserInfoLoaded_12; }
	inline Action_1_t979640615 ** get_address_of_OnUserInfoLoaded_12() { return &___OnUserInfoLoaded_12; }
	inline void set_OnUserInfoLoaded_12(Action_1_t979640615 * value)
	{
		___OnUserInfoLoaded_12 = value;
		Il2CppCodeGenWriteBarrier(&___OnUserInfoLoaded_12, value);
	}

	inline static int32_t get_offset_of_OnPlayerSignatureRetrieveResult_13() { return static_cast<int32_t>(offsetof(GameCenterManager_t1487113918_StaticFields, ___OnPlayerSignatureRetrieveResult_13)); }
	inline Action_1_t4110536157 * get_OnPlayerSignatureRetrieveResult_13() const { return ___OnPlayerSignatureRetrieveResult_13; }
	inline Action_1_t4110536157 ** get_address_of_OnPlayerSignatureRetrieveResult_13() { return &___OnPlayerSignatureRetrieveResult_13; }
	inline void set_OnPlayerSignatureRetrieveResult_13(Action_1_t4110536157 * value)
	{
		___OnPlayerSignatureRetrieveResult_13 = value;
		Il2CppCodeGenWriteBarrier(&___OnPlayerSignatureRetrieveResult_13, value);
	}

	inline static int32_t get_offset_of__IsInitialized_14() { return static_cast<int32_t>(offsetof(GameCenterManager_t1487113918_StaticFields, ____IsInitialized_14)); }
	inline bool get__IsInitialized_14() const { return ____IsInitialized_14; }
	inline bool* get_address_of__IsInitialized_14() { return &____IsInitialized_14; }
	inline void set__IsInitialized_14(bool value)
	{
		____IsInitialized_14 = value;
	}

	inline static int32_t get_offset_of__IsAchievementsInfoLoaded_15() { return static_cast<int32_t>(offsetof(GameCenterManager_t1487113918_StaticFields, ____IsAchievementsInfoLoaded_15)); }
	inline bool get__IsAchievementsInfoLoaded_15() const { return ____IsAchievementsInfoLoaded_15; }
	inline bool* get_address_of__IsAchievementsInfoLoaded_15() { return &____IsAchievementsInfoLoaded_15; }
	inline void set__IsAchievementsInfoLoaded_15(bool value)
	{
		____IsAchievementsInfoLoaded_15 = value;
	}

	inline static int32_t get_offset_of__players_16() { return static_cast<int32_t>(offsetof(GameCenterManager_t1487113918_StaticFields, ____players_16)); }
	inline Dictionary_2_t401820260 * get__players_16() const { return ____players_16; }
	inline Dictionary_2_t401820260 ** get_address_of__players_16() { return &____players_16; }
	inline void set__players_16(Dictionary_2_t401820260 * value)
	{
		____players_16 = value;
		Il2CppCodeGenWriteBarrier(&____players_16, value);
	}

	inline static int32_t get_offset_of__friendsList_17() { return static_cast<int32_t>(offsetof(GameCenterManager_t1487113918_StaticFields, ____friendsList_17)); }
	inline List_1_t1398341365 * get__friendsList_17() const { return ____friendsList_17; }
	inline List_1_t1398341365 ** get_address_of__friendsList_17() { return &____friendsList_17; }
	inline void set__friendsList_17(List_1_t1398341365 * value)
	{
		____friendsList_17 = value;
		Il2CppCodeGenWriteBarrier(&____friendsList_17, value);
	}

	inline static int32_t get_offset_of__LeaderboardSets_18() { return static_cast<int32_t>(offsetof(GameCenterManager_t1487113918_StaticFields, ____LeaderboardSets_18)); }
	inline List_1_t3669402526 * get__LeaderboardSets_18() const { return ____LeaderboardSets_18; }
	inline List_1_t3669402526 ** get_address_of__LeaderboardSets_18() { return &____LeaderboardSets_18; }
	inline void set__LeaderboardSets_18(List_1_t3669402526 * value)
	{
		____LeaderboardSets_18 = value;
		Il2CppCodeGenWriteBarrier(&____LeaderboardSets_18, value);
	}

	inline static int32_t get_offset_of__FriendRequests_19() { return static_cast<int32_t>(offsetof(GameCenterManager_t1487113918_StaticFields, ____FriendRequests_19)); }
	inline Dictionary_2_t3109446443 * get__FriendRequests_19() const { return ____FriendRequests_19; }
	inline Dictionary_2_t3109446443 ** get_address_of__FriendRequests_19() { return &____FriendRequests_19; }
	inline void set__FriendRequests_19(Dictionary_2_t3109446443 * value)
	{
		____FriendRequests_19 = value;
		Il2CppCodeGenWriteBarrier(&____FriendRequests_19, value);
	}

	inline static int32_t get_offset_of__player_20() { return static_cast<int32_t>(offsetof(GameCenterManager_t1487113918_StaticFields, ____player_20)); }
	inline GK_Player_t2782008294 * get__player_20() const { return ____player_20; }
	inline GK_Player_t2782008294 ** get_address_of__player_20() { return &____player_20; }
	inline void set__player_20(GK_Player_t2782008294 * value)
	{
		____player_20 = value;
		Il2CppCodeGenWriteBarrier(&____player_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
