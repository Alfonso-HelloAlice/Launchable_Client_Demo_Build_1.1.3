#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Pattern_Si2922084282.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UM_ConnectionState2887481392.h"

// System.Action
struct Action_t3226471752;
// System.Action`1<UM_ConnectionState>
struct Action_1_t2689280774;
// System.Action`1<UM_LeaderboardResult>
struct Action_1_t3847718715;
// System.Action`1<UM_Result>
struct Action_1_t3250066468;
// UM_Player
struct UM_Player_t1338759646;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UM_GameServiceManager
struct  UM_GameServiceManager_t2439519177  : public Singleton_1_t2922084282
{
public:
	// System.Boolean UM_GameServiceManager::_IsInitedCalled
	bool ____IsInitedCalled_12;
	// System.Boolean UM_GameServiceManager::_IsDataLoaded
	bool ____IsDataLoaded_13;
	// System.Int32 UM_GameServiceManager::_DataEventsCount
	int32_t ____DataEventsCount_14;
	// System.Int32 UM_GameServiceManager::_CurrentEventsCount
	int32_t ____CurrentEventsCount_15;
	// UM_Player UM_GameServiceManager::_Player
	UM_Player_t1338759646 * ____Player_16;
	// UM_ConnectionState UM_GameServiceManager::_ConnectionSate
	int32_t ____ConnectionSate_17;
	// System.Boolean UM_GameServiceManager::_WaitingForLeaderboardsData
	bool ____WaitingForLeaderboardsData_19;
	// System.Int32 UM_GameServiceManager::_LeaderboardsDataEventsCount
	int32_t ____LeaderboardsDataEventsCount_20;
	// System.Int32 UM_GameServiceManager::_CurrentLeaderboardsEventsCount
	int32_t ____CurrentLeaderboardsEventsCount_21;

public:
	inline static int32_t get_offset_of__IsInitedCalled_12() { return static_cast<int32_t>(offsetof(UM_GameServiceManager_t2439519177, ____IsInitedCalled_12)); }
	inline bool get__IsInitedCalled_12() const { return ____IsInitedCalled_12; }
	inline bool* get_address_of__IsInitedCalled_12() { return &____IsInitedCalled_12; }
	inline void set__IsInitedCalled_12(bool value)
	{
		____IsInitedCalled_12 = value;
	}

	inline static int32_t get_offset_of__IsDataLoaded_13() { return static_cast<int32_t>(offsetof(UM_GameServiceManager_t2439519177, ____IsDataLoaded_13)); }
	inline bool get__IsDataLoaded_13() const { return ____IsDataLoaded_13; }
	inline bool* get_address_of__IsDataLoaded_13() { return &____IsDataLoaded_13; }
	inline void set__IsDataLoaded_13(bool value)
	{
		____IsDataLoaded_13 = value;
	}

	inline static int32_t get_offset_of__DataEventsCount_14() { return static_cast<int32_t>(offsetof(UM_GameServiceManager_t2439519177, ____DataEventsCount_14)); }
	inline int32_t get__DataEventsCount_14() const { return ____DataEventsCount_14; }
	inline int32_t* get_address_of__DataEventsCount_14() { return &____DataEventsCount_14; }
	inline void set__DataEventsCount_14(int32_t value)
	{
		____DataEventsCount_14 = value;
	}

	inline static int32_t get_offset_of__CurrentEventsCount_15() { return static_cast<int32_t>(offsetof(UM_GameServiceManager_t2439519177, ____CurrentEventsCount_15)); }
	inline int32_t get__CurrentEventsCount_15() const { return ____CurrentEventsCount_15; }
	inline int32_t* get_address_of__CurrentEventsCount_15() { return &____CurrentEventsCount_15; }
	inline void set__CurrentEventsCount_15(int32_t value)
	{
		____CurrentEventsCount_15 = value;
	}

	inline static int32_t get_offset_of__Player_16() { return static_cast<int32_t>(offsetof(UM_GameServiceManager_t2439519177, ____Player_16)); }
	inline UM_Player_t1338759646 * get__Player_16() const { return ____Player_16; }
	inline UM_Player_t1338759646 ** get_address_of__Player_16() { return &____Player_16; }
	inline void set__Player_16(UM_Player_t1338759646 * value)
	{
		____Player_16 = value;
		Il2CppCodeGenWriteBarrier(&____Player_16, value);
	}

	inline static int32_t get_offset_of__ConnectionSate_17() { return static_cast<int32_t>(offsetof(UM_GameServiceManager_t2439519177, ____ConnectionSate_17)); }
	inline int32_t get__ConnectionSate_17() const { return ____ConnectionSate_17; }
	inline int32_t* get_address_of__ConnectionSate_17() { return &____ConnectionSate_17; }
	inline void set__ConnectionSate_17(int32_t value)
	{
		____ConnectionSate_17 = value;
	}

	inline static int32_t get_offset_of__WaitingForLeaderboardsData_19() { return static_cast<int32_t>(offsetof(UM_GameServiceManager_t2439519177, ____WaitingForLeaderboardsData_19)); }
	inline bool get__WaitingForLeaderboardsData_19() const { return ____WaitingForLeaderboardsData_19; }
	inline bool* get_address_of__WaitingForLeaderboardsData_19() { return &____WaitingForLeaderboardsData_19; }
	inline void set__WaitingForLeaderboardsData_19(bool value)
	{
		____WaitingForLeaderboardsData_19 = value;
	}

	inline static int32_t get_offset_of__LeaderboardsDataEventsCount_20() { return static_cast<int32_t>(offsetof(UM_GameServiceManager_t2439519177, ____LeaderboardsDataEventsCount_20)); }
	inline int32_t get__LeaderboardsDataEventsCount_20() const { return ____LeaderboardsDataEventsCount_20; }
	inline int32_t* get_address_of__LeaderboardsDataEventsCount_20() { return &____LeaderboardsDataEventsCount_20; }
	inline void set__LeaderboardsDataEventsCount_20(int32_t value)
	{
		____LeaderboardsDataEventsCount_20 = value;
	}

	inline static int32_t get_offset_of__CurrentLeaderboardsEventsCount_21() { return static_cast<int32_t>(offsetof(UM_GameServiceManager_t2439519177, ____CurrentLeaderboardsEventsCount_21)); }
	inline int32_t get__CurrentLeaderboardsEventsCount_21() const { return ____CurrentLeaderboardsEventsCount_21; }
	inline int32_t* get_address_of__CurrentLeaderboardsEventsCount_21() { return &____CurrentLeaderboardsEventsCount_21; }
	inline void set__CurrentLeaderboardsEventsCount_21(int32_t value)
	{
		____CurrentLeaderboardsEventsCount_21 = value;
	}
};

struct UM_GameServiceManager_t2439519177_StaticFields
{
public:
	// System.Action UM_GameServiceManager::OnPlayerConnected
	Action_t3226471752 * ___OnPlayerConnected_4;
	// System.Action UM_GameServiceManager::OnPlayerDisconnected
	Action_t3226471752 * ___OnPlayerDisconnected_5;
	// System.Action`1<UM_ConnectionState> UM_GameServiceManager::OnConnectionStateChnaged
	Action_1_t2689280774 * ___OnConnectionStateChnaged_6;
	// System.Action`1<UM_LeaderboardResult> UM_GameServiceManager::ActionScoreSubmitted
	Action_1_t3847718715 * ___ActionScoreSubmitted_7;
	// System.Action`1<UM_LeaderboardResult> UM_GameServiceManager::ActionScoresListLoaded
	Action_1_t3847718715 * ___ActionScoresListLoaded_8;
	// System.Action`1<UM_Result> UM_GameServiceManager::ActionFriendsListLoaded
	Action_1_t3250066468 * ___ActionFriendsListLoaded_9;
	// System.Action`1<UM_Result> UM_GameServiceManager::ActionAchievementsInfoLoaded
	Action_1_t3250066468 * ___ActionAchievementsInfoLoaded_10;
	// System.Action`1<UM_Result> UM_GameServiceManager::ActionLeaderboardsInfoLoaded
	Action_1_t3250066468 * ___ActionLeaderboardsInfoLoaded_11;
	// System.Collections.Generic.List`1<System.String> UM_GameServiceManager::_FriendsList
	List_1_t1398341365 * ____FriendsList_18;

public:
	inline static int32_t get_offset_of_OnPlayerConnected_4() { return static_cast<int32_t>(offsetof(UM_GameServiceManager_t2439519177_StaticFields, ___OnPlayerConnected_4)); }
	inline Action_t3226471752 * get_OnPlayerConnected_4() const { return ___OnPlayerConnected_4; }
	inline Action_t3226471752 ** get_address_of_OnPlayerConnected_4() { return &___OnPlayerConnected_4; }
	inline void set_OnPlayerConnected_4(Action_t3226471752 * value)
	{
		___OnPlayerConnected_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnPlayerConnected_4, value);
	}

	inline static int32_t get_offset_of_OnPlayerDisconnected_5() { return static_cast<int32_t>(offsetof(UM_GameServiceManager_t2439519177_StaticFields, ___OnPlayerDisconnected_5)); }
	inline Action_t3226471752 * get_OnPlayerDisconnected_5() const { return ___OnPlayerDisconnected_5; }
	inline Action_t3226471752 ** get_address_of_OnPlayerDisconnected_5() { return &___OnPlayerDisconnected_5; }
	inline void set_OnPlayerDisconnected_5(Action_t3226471752 * value)
	{
		___OnPlayerDisconnected_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnPlayerDisconnected_5, value);
	}

	inline static int32_t get_offset_of_OnConnectionStateChnaged_6() { return static_cast<int32_t>(offsetof(UM_GameServiceManager_t2439519177_StaticFields, ___OnConnectionStateChnaged_6)); }
	inline Action_1_t2689280774 * get_OnConnectionStateChnaged_6() const { return ___OnConnectionStateChnaged_6; }
	inline Action_1_t2689280774 ** get_address_of_OnConnectionStateChnaged_6() { return &___OnConnectionStateChnaged_6; }
	inline void set_OnConnectionStateChnaged_6(Action_1_t2689280774 * value)
	{
		___OnConnectionStateChnaged_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnConnectionStateChnaged_6, value);
	}

	inline static int32_t get_offset_of_ActionScoreSubmitted_7() { return static_cast<int32_t>(offsetof(UM_GameServiceManager_t2439519177_StaticFields, ___ActionScoreSubmitted_7)); }
	inline Action_1_t3847718715 * get_ActionScoreSubmitted_7() const { return ___ActionScoreSubmitted_7; }
	inline Action_1_t3847718715 ** get_address_of_ActionScoreSubmitted_7() { return &___ActionScoreSubmitted_7; }
	inline void set_ActionScoreSubmitted_7(Action_1_t3847718715 * value)
	{
		___ActionScoreSubmitted_7 = value;
		Il2CppCodeGenWriteBarrier(&___ActionScoreSubmitted_7, value);
	}

	inline static int32_t get_offset_of_ActionScoresListLoaded_8() { return static_cast<int32_t>(offsetof(UM_GameServiceManager_t2439519177_StaticFields, ___ActionScoresListLoaded_8)); }
	inline Action_1_t3847718715 * get_ActionScoresListLoaded_8() const { return ___ActionScoresListLoaded_8; }
	inline Action_1_t3847718715 ** get_address_of_ActionScoresListLoaded_8() { return &___ActionScoresListLoaded_8; }
	inline void set_ActionScoresListLoaded_8(Action_1_t3847718715 * value)
	{
		___ActionScoresListLoaded_8 = value;
		Il2CppCodeGenWriteBarrier(&___ActionScoresListLoaded_8, value);
	}

	inline static int32_t get_offset_of_ActionFriendsListLoaded_9() { return static_cast<int32_t>(offsetof(UM_GameServiceManager_t2439519177_StaticFields, ___ActionFriendsListLoaded_9)); }
	inline Action_1_t3250066468 * get_ActionFriendsListLoaded_9() const { return ___ActionFriendsListLoaded_9; }
	inline Action_1_t3250066468 ** get_address_of_ActionFriendsListLoaded_9() { return &___ActionFriendsListLoaded_9; }
	inline void set_ActionFriendsListLoaded_9(Action_1_t3250066468 * value)
	{
		___ActionFriendsListLoaded_9 = value;
		Il2CppCodeGenWriteBarrier(&___ActionFriendsListLoaded_9, value);
	}

	inline static int32_t get_offset_of_ActionAchievementsInfoLoaded_10() { return static_cast<int32_t>(offsetof(UM_GameServiceManager_t2439519177_StaticFields, ___ActionAchievementsInfoLoaded_10)); }
	inline Action_1_t3250066468 * get_ActionAchievementsInfoLoaded_10() const { return ___ActionAchievementsInfoLoaded_10; }
	inline Action_1_t3250066468 ** get_address_of_ActionAchievementsInfoLoaded_10() { return &___ActionAchievementsInfoLoaded_10; }
	inline void set_ActionAchievementsInfoLoaded_10(Action_1_t3250066468 * value)
	{
		___ActionAchievementsInfoLoaded_10 = value;
		Il2CppCodeGenWriteBarrier(&___ActionAchievementsInfoLoaded_10, value);
	}

	inline static int32_t get_offset_of_ActionLeaderboardsInfoLoaded_11() { return static_cast<int32_t>(offsetof(UM_GameServiceManager_t2439519177_StaticFields, ___ActionLeaderboardsInfoLoaded_11)); }
	inline Action_1_t3250066468 * get_ActionLeaderboardsInfoLoaded_11() const { return ___ActionLeaderboardsInfoLoaded_11; }
	inline Action_1_t3250066468 ** get_address_of_ActionLeaderboardsInfoLoaded_11() { return &___ActionLeaderboardsInfoLoaded_11; }
	inline void set_ActionLeaderboardsInfoLoaded_11(Action_1_t3250066468 * value)
	{
		___ActionLeaderboardsInfoLoaded_11 = value;
		Il2CppCodeGenWriteBarrier(&___ActionLeaderboardsInfoLoaded_11, value);
	}

	inline static int32_t get_offset_of__FriendsList_18() { return static_cast<int32_t>(offsetof(UM_GameServiceManager_t2439519177_StaticFields, ____FriendsList_18)); }
	inline List_1_t1398341365 * get__FriendsList_18() const { return ____FriendsList_18; }
	inline List_1_t1398341365 ** get_address_of__FriendsList_18() { return &____FriendsList_18; }
	inline void set__FriendsList_18(List_1_t1398341365 * value)
	{
		____FriendsList_18 = value;
		Il2CppCodeGenWriteBarrier(&____FriendsList_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
