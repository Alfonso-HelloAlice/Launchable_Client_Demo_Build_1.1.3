#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Pattern_Si1228703225.h"

// System.Action`1<GP_LeaderboardResult>
struct Action_1_t1836014676;
// System.Action`1<GooglePlayResult>
struct Action_1_t2899269018;
// System.Action`1<GP_AchievementResult>
struct Action_1_t3772725756;
// System.Action`1<GooglePlayGiftRequestResult>
struct Action_1_t152001389;
// System.Action
struct Action_t3226471752;
// System.Action`1<System.Collections.Generic.List`1<GPGameRequest>>
struct Action_1_t3329763456;
// System.Action`1<System.Collections.Generic.List`1<System.String>>
struct Action_1_t1200140747;
// System.Action`1<System.String>
struct Action_1_t1831019615;
// System.Action`2<GooglePlayResult,System.String>
struct Action_2_t4084821726;
// GooglePlayerTemplate
struct GooglePlayerTemplate_t2506317812;
// System.Collections.Generic.Dictionary`2<System.String,GooglePlayerTemplate>
struct Dictionary_2_t126129778;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.Collections.Generic.List`1<GPGameRequest>
struct List_1_t3527964074;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayManager
struct  GooglePlayManager_t746138120  : public Singleton_1_t1228703225
{
public:
	// GooglePlayerTemplate GooglePlayManager::_player
	GooglePlayerTemplate_t2506317812 * ____player_17;
	// System.Collections.Generic.Dictionary`2<System.String,GooglePlayerTemplate> GooglePlayManager::_players
	Dictionary_2_t126129778 * ____players_18;
	// System.Collections.Generic.List`1<System.String> GooglePlayManager::_friendsList
	List_1_t1398341365 * ____friendsList_19;
	// System.Collections.Generic.List`1<System.String> GooglePlayManager::_deviceGoogleAccountList
	List_1_t1398341365 * ____deviceGoogleAccountList_20;
	// System.Collections.Generic.List`1<GPGameRequest> GooglePlayManager::_gameRequests
	List_1_t3527964074 * ____gameRequests_21;
	// System.String GooglePlayManager::_loadedAuthToken
	String_t* ____loadedAuthToken_22;
	// System.String GooglePlayManager::_currentAccount
	String_t* ____currentAccount_23;

public:
	inline static int32_t get_offset_of__player_17() { return static_cast<int32_t>(offsetof(GooglePlayManager_t746138120, ____player_17)); }
	inline GooglePlayerTemplate_t2506317812 * get__player_17() const { return ____player_17; }
	inline GooglePlayerTemplate_t2506317812 ** get_address_of__player_17() { return &____player_17; }
	inline void set__player_17(GooglePlayerTemplate_t2506317812 * value)
	{
		____player_17 = value;
		Il2CppCodeGenWriteBarrier(&____player_17, value);
	}

	inline static int32_t get_offset_of__players_18() { return static_cast<int32_t>(offsetof(GooglePlayManager_t746138120, ____players_18)); }
	inline Dictionary_2_t126129778 * get__players_18() const { return ____players_18; }
	inline Dictionary_2_t126129778 ** get_address_of__players_18() { return &____players_18; }
	inline void set__players_18(Dictionary_2_t126129778 * value)
	{
		____players_18 = value;
		Il2CppCodeGenWriteBarrier(&____players_18, value);
	}

	inline static int32_t get_offset_of__friendsList_19() { return static_cast<int32_t>(offsetof(GooglePlayManager_t746138120, ____friendsList_19)); }
	inline List_1_t1398341365 * get__friendsList_19() const { return ____friendsList_19; }
	inline List_1_t1398341365 ** get_address_of__friendsList_19() { return &____friendsList_19; }
	inline void set__friendsList_19(List_1_t1398341365 * value)
	{
		____friendsList_19 = value;
		Il2CppCodeGenWriteBarrier(&____friendsList_19, value);
	}

	inline static int32_t get_offset_of__deviceGoogleAccountList_20() { return static_cast<int32_t>(offsetof(GooglePlayManager_t746138120, ____deviceGoogleAccountList_20)); }
	inline List_1_t1398341365 * get__deviceGoogleAccountList_20() const { return ____deviceGoogleAccountList_20; }
	inline List_1_t1398341365 ** get_address_of__deviceGoogleAccountList_20() { return &____deviceGoogleAccountList_20; }
	inline void set__deviceGoogleAccountList_20(List_1_t1398341365 * value)
	{
		____deviceGoogleAccountList_20 = value;
		Il2CppCodeGenWriteBarrier(&____deviceGoogleAccountList_20, value);
	}

	inline static int32_t get_offset_of__gameRequests_21() { return static_cast<int32_t>(offsetof(GooglePlayManager_t746138120, ____gameRequests_21)); }
	inline List_1_t3527964074 * get__gameRequests_21() const { return ____gameRequests_21; }
	inline List_1_t3527964074 ** get_address_of__gameRequests_21() { return &____gameRequests_21; }
	inline void set__gameRequests_21(List_1_t3527964074 * value)
	{
		____gameRequests_21 = value;
		Il2CppCodeGenWriteBarrier(&____gameRequests_21, value);
	}

	inline static int32_t get_offset_of__loadedAuthToken_22() { return static_cast<int32_t>(offsetof(GooglePlayManager_t746138120, ____loadedAuthToken_22)); }
	inline String_t* get__loadedAuthToken_22() const { return ____loadedAuthToken_22; }
	inline String_t** get_address_of__loadedAuthToken_22() { return &____loadedAuthToken_22; }
	inline void set__loadedAuthToken_22(String_t* value)
	{
		____loadedAuthToken_22 = value;
		Il2CppCodeGenWriteBarrier(&____loadedAuthToken_22, value);
	}

	inline static int32_t get_offset_of__currentAccount_23() { return static_cast<int32_t>(offsetof(GooglePlayManager_t746138120, ____currentAccount_23)); }
	inline String_t* get__currentAccount_23() const { return ____currentAccount_23; }
	inline String_t** get_address_of__currentAccount_23() { return &____currentAccount_23; }
	inline void set__currentAccount_23(String_t* value)
	{
		____currentAccount_23 = value;
		Il2CppCodeGenWriteBarrier(&____currentAccount_23, value);
	}
};

struct GooglePlayManager_t746138120_StaticFields
{
public:
	// System.Action`1<GP_LeaderboardResult> GooglePlayManager::ActionScoreSubmited
	Action_1_t1836014676 * ___ActionScoreSubmited_4;
	// System.Action`1<GP_LeaderboardResult> GooglePlayManager::ActionScoresListLoaded
	Action_1_t1836014676 * ___ActionScoresListLoaded_5;
	// System.Action`1<GooglePlayResult> GooglePlayManager::ActionLeaderboardsLoaded
	Action_1_t2899269018 * ___ActionLeaderboardsLoaded_6;
	// System.Action`1<GP_AchievementResult> GooglePlayManager::ActionAchievementUpdated
	Action_1_t3772725756 * ___ActionAchievementUpdated_7;
	// System.Action`1<GooglePlayResult> GooglePlayManager::ActionFriendsListLoaded
	Action_1_t2899269018 * ___ActionFriendsListLoaded_8;
	// System.Action`1<GooglePlayResult> GooglePlayManager::ActionAchievementsLoaded
	Action_1_t2899269018 * ___ActionAchievementsLoaded_9;
	// System.Action`1<GooglePlayGiftRequestResult> GooglePlayManager::ActionSendGiftResultReceived
	Action_1_t152001389 * ___ActionSendGiftResultReceived_10;
	// System.Action GooglePlayManager::ActionRequestsInboxDialogDismissed
	Action_t3226471752 * ___ActionRequestsInboxDialogDismissed_11;
	// System.Action`1<System.Collections.Generic.List`1<GPGameRequest>> GooglePlayManager::ActionPendingGameRequestsDetected
	Action_1_t3329763456 * ___ActionPendingGameRequestsDetected_12;
	// System.Action`1<System.Collections.Generic.List`1<GPGameRequest>> GooglePlayManager::ActionGameRequestsAccepted
	Action_1_t3329763456 * ___ActionGameRequestsAccepted_13;
	// System.Action`1<System.Collections.Generic.List`1<System.String>> GooglePlayManager::ActionAvailableDeviceAccountsLoaded
	Action_1_t1200140747 * ___ActionAvailableDeviceAccountsLoaded_14;
	// System.Action`1<System.String> GooglePlayManager::ActionOAuthTokenLoaded
	Action_1_t1831019615 * ___ActionOAuthTokenLoaded_15;
	// System.Action`2<GooglePlayResult,System.String> GooglePlayManager::ActionServerAuthCodeLoaded
	Action_2_t4084821726 * ___ActionServerAuthCodeLoaded_16;
	// System.Boolean GooglePlayManager::_IsLeaderboardsDataLoaded
	bool ____IsLeaderboardsDataLoaded_24;

public:
	inline static int32_t get_offset_of_ActionScoreSubmited_4() { return static_cast<int32_t>(offsetof(GooglePlayManager_t746138120_StaticFields, ___ActionScoreSubmited_4)); }
	inline Action_1_t1836014676 * get_ActionScoreSubmited_4() const { return ___ActionScoreSubmited_4; }
	inline Action_1_t1836014676 ** get_address_of_ActionScoreSubmited_4() { return &___ActionScoreSubmited_4; }
	inline void set_ActionScoreSubmited_4(Action_1_t1836014676 * value)
	{
		___ActionScoreSubmited_4 = value;
		Il2CppCodeGenWriteBarrier(&___ActionScoreSubmited_4, value);
	}

	inline static int32_t get_offset_of_ActionScoresListLoaded_5() { return static_cast<int32_t>(offsetof(GooglePlayManager_t746138120_StaticFields, ___ActionScoresListLoaded_5)); }
	inline Action_1_t1836014676 * get_ActionScoresListLoaded_5() const { return ___ActionScoresListLoaded_5; }
	inline Action_1_t1836014676 ** get_address_of_ActionScoresListLoaded_5() { return &___ActionScoresListLoaded_5; }
	inline void set_ActionScoresListLoaded_5(Action_1_t1836014676 * value)
	{
		___ActionScoresListLoaded_5 = value;
		Il2CppCodeGenWriteBarrier(&___ActionScoresListLoaded_5, value);
	}

	inline static int32_t get_offset_of_ActionLeaderboardsLoaded_6() { return static_cast<int32_t>(offsetof(GooglePlayManager_t746138120_StaticFields, ___ActionLeaderboardsLoaded_6)); }
	inline Action_1_t2899269018 * get_ActionLeaderboardsLoaded_6() const { return ___ActionLeaderboardsLoaded_6; }
	inline Action_1_t2899269018 ** get_address_of_ActionLeaderboardsLoaded_6() { return &___ActionLeaderboardsLoaded_6; }
	inline void set_ActionLeaderboardsLoaded_6(Action_1_t2899269018 * value)
	{
		___ActionLeaderboardsLoaded_6 = value;
		Il2CppCodeGenWriteBarrier(&___ActionLeaderboardsLoaded_6, value);
	}

	inline static int32_t get_offset_of_ActionAchievementUpdated_7() { return static_cast<int32_t>(offsetof(GooglePlayManager_t746138120_StaticFields, ___ActionAchievementUpdated_7)); }
	inline Action_1_t3772725756 * get_ActionAchievementUpdated_7() const { return ___ActionAchievementUpdated_7; }
	inline Action_1_t3772725756 ** get_address_of_ActionAchievementUpdated_7() { return &___ActionAchievementUpdated_7; }
	inline void set_ActionAchievementUpdated_7(Action_1_t3772725756 * value)
	{
		___ActionAchievementUpdated_7 = value;
		Il2CppCodeGenWriteBarrier(&___ActionAchievementUpdated_7, value);
	}

	inline static int32_t get_offset_of_ActionFriendsListLoaded_8() { return static_cast<int32_t>(offsetof(GooglePlayManager_t746138120_StaticFields, ___ActionFriendsListLoaded_8)); }
	inline Action_1_t2899269018 * get_ActionFriendsListLoaded_8() const { return ___ActionFriendsListLoaded_8; }
	inline Action_1_t2899269018 ** get_address_of_ActionFriendsListLoaded_8() { return &___ActionFriendsListLoaded_8; }
	inline void set_ActionFriendsListLoaded_8(Action_1_t2899269018 * value)
	{
		___ActionFriendsListLoaded_8 = value;
		Il2CppCodeGenWriteBarrier(&___ActionFriendsListLoaded_8, value);
	}

	inline static int32_t get_offset_of_ActionAchievementsLoaded_9() { return static_cast<int32_t>(offsetof(GooglePlayManager_t746138120_StaticFields, ___ActionAchievementsLoaded_9)); }
	inline Action_1_t2899269018 * get_ActionAchievementsLoaded_9() const { return ___ActionAchievementsLoaded_9; }
	inline Action_1_t2899269018 ** get_address_of_ActionAchievementsLoaded_9() { return &___ActionAchievementsLoaded_9; }
	inline void set_ActionAchievementsLoaded_9(Action_1_t2899269018 * value)
	{
		___ActionAchievementsLoaded_9 = value;
		Il2CppCodeGenWriteBarrier(&___ActionAchievementsLoaded_9, value);
	}

	inline static int32_t get_offset_of_ActionSendGiftResultReceived_10() { return static_cast<int32_t>(offsetof(GooglePlayManager_t746138120_StaticFields, ___ActionSendGiftResultReceived_10)); }
	inline Action_1_t152001389 * get_ActionSendGiftResultReceived_10() const { return ___ActionSendGiftResultReceived_10; }
	inline Action_1_t152001389 ** get_address_of_ActionSendGiftResultReceived_10() { return &___ActionSendGiftResultReceived_10; }
	inline void set_ActionSendGiftResultReceived_10(Action_1_t152001389 * value)
	{
		___ActionSendGiftResultReceived_10 = value;
		Il2CppCodeGenWriteBarrier(&___ActionSendGiftResultReceived_10, value);
	}

	inline static int32_t get_offset_of_ActionRequestsInboxDialogDismissed_11() { return static_cast<int32_t>(offsetof(GooglePlayManager_t746138120_StaticFields, ___ActionRequestsInboxDialogDismissed_11)); }
	inline Action_t3226471752 * get_ActionRequestsInboxDialogDismissed_11() const { return ___ActionRequestsInboxDialogDismissed_11; }
	inline Action_t3226471752 ** get_address_of_ActionRequestsInboxDialogDismissed_11() { return &___ActionRequestsInboxDialogDismissed_11; }
	inline void set_ActionRequestsInboxDialogDismissed_11(Action_t3226471752 * value)
	{
		___ActionRequestsInboxDialogDismissed_11 = value;
		Il2CppCodeGenWriteBarrier(&___ActionRequestsInboxDialogDismissed_11, value);
	}

	inline static int32_t get_offset_of_ActionPendingGameRequestsDetected_12() { return static_cast<int32_t>(offsetof(GooglePlayManager_t746138120_StaticFields, ___ActionPendingGameRequestsDetected_12)); }
	inline Action_1_t3329763456 * get_ActionPendingGameRequestsDetected_12() const { return ___ActionPendingGameRequestsDetected_12; }
	inline Action_1_t3329763456 ** get_address_of_ActionPendingGameRequestsDetected_12() { return &___ActionPendingGameRequestsDetected_12; }
	inline void set_ActionPendingGameRequestsDetected_12(Action_1_t3329763456 * value)
	{
		___ActionPendingGameRequestsDetected_12 = value;
		Il2CppCodeGenWriteBarrier(&___ActionPendingGameRequestsDetected_12, value);
	}

	inline static int32_t get_offset_of_ActionGameRequestsAccepted_13() { return static_cast<int32_t>(offsetof(GooglePlayManager_t746138120_StaticFields, ___ActionGameRequestsAccepted_13)); }
	inline Action_1_t3329763456 * get_ActionGameRequestsAccepted_13() const { return ___ActionGameRequestsAccepted_13; }
	inline Action_1_t3329763456 ** get_address_of_ActionGameRequestsAccepted_13() { return &___ActionGameRequestsAccepted_13; }
	inline void set_ActionGameRequestsAccepted_13(Action_1_t3329763456 * value)
	{
		___ActionGameRequestsAccepted_13 = value;
		Il2CppCodeGenWriteBarrier(&___ActionGameRequestsAccepted_13, value);
	}

	inline static int32_t get_offset_of_ActionAvailableDeviceAccountsLoaded_14() { return static_cast<int32_t>(offsetof(GooglePlayManager_t746138120_StaticFields, ___ActionAvailableDeviceAccountsLoaded_14)); }
	inline Action_1_t1200140747 * get_ActionAvailableDeviceAccountsLoaded_14() const { return ___ActionAvailableDeviceAccountsLoaded_14; }
	inline Action_1_t1200140747 ** get_address_of_ActionAvailableDeviceAccountsLoaded_14() { return &___ActionAvailableDeviceAccountsLoaded_14; }
	inline void set_ActionAvailableDeviceAccountsLoaded_14(Action_1_t1200140747 * value)
	{
		___ActionAvailableDeviceAccountsLoaded_14 = value;
		Il2CppCodeGenWriteBarrier(&___ActionAvailableDeviceAccountsLoaded_14, value);
	}

	inline static int32_t get_offset_of_ActionOAuthTokenLoaded_15() { return static_cast<int32_t>(offsetof(GooglePlayManager_t746138120_StaticFields, ___ActionOAuthTokenLoaded_15)); }
	inline Action_1_t1831019615 * get_ActionOAuthTokenLoaded_15() const { return ___ActionOAuthTokenLoaded_15; }
	inline Action_1_t1831019615 ** get_address_of_ActionOAuthTokenLoaded_15() { return &___ActionOAuthTokenLoaded_15; }
	inline void set_ActionOAuthTokenLoaded_15(Action_1_t1831019615 * value)
	{
		___ActionOAuthTokenLoaded_15 = value;
		Il2CppCodeGenWriteBarrier(&___ActionOAuthTokenLoaded_15, value);
	}

	inline static int32_t get_offset_of_ActionServerAuthCodeLoaded_16() { return static_cast<int32_t>(offsetof(GooglePlayManager_t746138120_StaticFields, ___ActionServerAuthCodeLoaded_16)); }
	inline Action_2_t4084821726 * get_ActionServerAuthCodeLoaded_16() const { return ___ActionServerAuthCodeLoaded_16; }
	inline Action_2_t4084821726 ** get_address_of_ActionServerAuthCodeLoaded_16() { return &___ActionServerAuthCodeLoaded_16; }
	inline void set_ActionServerAuthCodeLoaded_16(Action_2_t4084821726 * value)
	{
		___ActionServerAuthCodeLoaded_16 = value;
		Il2CppCodeGenWriteBarrier(&___ActionServerAuthCodeLoaded_16, value);
	}

	inline static int32_t get_offset_of__IsLeaderboardsDataLoaded_24() { return static_cast<int32_t>(offsetof(GooglePlayManager_t746138120_StaticFields, ____IsLeaderboardsDataLoaded_24)); }
	inline bool get__IsLeaderboardsDataLoaded_24() const { return ____IsLeaderboardsDataLoaded_24; }
	inline bool* get_address_of__IsLeaderboardsDataLoaded_24() { return &____IsLeaderboardsDataLoaded_24; }
	inline void set__IsLeaderboardsDataLoaded_24(bool value)
	{
		____IsLeaderboardsDataLoaded_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
