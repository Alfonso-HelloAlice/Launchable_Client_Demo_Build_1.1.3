#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_AMN_Singleton_1_gen3140976.h"

// System.Action`1<AMN_InitializeResult>
struct Action_1_t2686103564;
// System.Action`1<AMN_RequestPlayerDataResult>
struct Action_1_t2644708652;
// System.Action`1<AMN_RequestAchievementsResult>
struct Action_1_t3208758901;
// System.Action`1<AMN_UpdateAchievementResult>
struct Action_1_t2679604744;
// System.Action`1<AMN_RequestLeaderboardsResult>
struct Action_1_t1305268751;
// System.Action`1<AMN_SubmitLeaderboardResult>
struct Action_1_t2286565425;
// System.Action`1<AMN_LocalPlayerScoreLoadedResult>
struct Action_1_t2302595829;
// System.Action`1<AMN_ScoresLoadedResult>
struct Action_1_t3408297196;
// GC_Player
struct GC_Player_t1334946238;
// System.Collections.Generic.Dictionary`2<System.String,GC_Player>
struct Dictionary_2_t3249725500;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA_AmazonGameCircleManager
struct  SA_AmazonGameCircleManager_t3020790074  : public AMN_Singleton_1_t3140976
{
public:
	// System.Action`1<AMN_InitializeResult> SA_AmazonGameCircleManager::OnInitializeResult
	Action_1_t2686103564 * ___OnInitializeResult_4;
	// System.Action`1<AMN_RequestPlayerDataResult> SA_AmazonGameCircleManager::OnRequestPlayerDataReceived
	Action_1_t2644708652 * ___OnRequestPlayerDataReceived_5;
	// System.Action`1<AMN_RequestAchievementsResult> SA_AmazonGameCircleManager::OnRequestAchievementsReceived
	Action_1_t3208758901 * ___OnRequestAchievementsReceived_6;
	// System.Action`1<AMN_UpdateAchievementResult> SA_AmazonGameCircleManager::OnUpdateAchievementReceived
	Action_1_t2679604744 * ___OnUpdateAchievementReceived_7;
	// System.Action`1<AMN_RequestLeaderboardsResult> SA_AmazonGameCircleManager::OnRequestLeaderboardsReceived
	Action_1_t1305268751 * ___OnRequestLeaderboardsReceived_8;
	// System.Action`1<AMN_SubmitLeaderboardResult> SA_AmazonGameCircleManager::OnSubmitLeaderboardReceived
	Action_1_t2286565425 * ___OnSubmitLeaderboardReceived_9;
	// System.Action`1<AMN_LocalPlayerScoreLoadedResult> SA_AmazonGameCircleManager::OnLocalPlayerScoreLoaded
	Action_1_t2302595829 * ___OnLocalPlayerScoreLoaded_10;
	// System.Action`1<AMN_ScoresLoadedResult> SA_AmazonGameCircleManager::OnScoresLoaded
	Action_1_t3408297196 * ___OnScoresLoaded_11;
	// GC_Player SA_AmazonGameCircleManager::_player
	GC_Player_t1334946238 * ____player_12;
	// System.Collections.Generic.Dictionary`2<System.String,GC_Player> SA_AmazonGameCircleManager::_Players
	Dictionary_2_t3249725500 * ____Players_13;
	// System.Boolean SA_AmazonGameCircleManager::_isInitialized
	bool ____isInitialized_14;

public:
	inline static int32_t get_offset_of_OnInitializeResult_4() { return static_cast<int32_t>(offsetof(SA_AmazonGameCircleManager_t3020790074, ___OnInitializeResult_4)); }
	inline Action_1_t2686103564 * get_OnInitializeResult_4() const { return ___OnInitializeResult_4; }
	inline Action_1_t2686103564 ** get_address_of_OnInitializeResult_4() { return &___OnInitializeResult_4; }
	inline void set_OnInitializeResult_4(Action_1_t2686103564 * value)
	{
		___OnInitializeResult_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnInitializeResult_4, value);
	}

	inline static int32_t get_offset_of_OnRequestPlayerDataReceived_5() { return static_cast<int32_t>(offsetof(SA_AmazonGameCircleManager_t3020790074, ___OnRequestPlayerDataReceived_5)); }
	inline Action_1_t2644708652 * get_OnRequestPlayerDataReceived_5() const { return ___OnRequestPlayerDataReceived_5; }
	inline Action_1_t2644708652 ** get_address_of_OnRequestPlayerDataReceived_5() { return &___OnRequestPlayerDataReceived_5; }
	inline void set_OnRequestPlayerDataReceived_5(Action_1_t2644708652 * value)
	{
		___OnRequestPlayerDataReceived_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnRequestPlayerDataReceived_5, value);
	}

	inline static int32_t get_offset_of_OnRequestAchievementsReceived_6() { return static_cast<int32_t>(offsetof(SA_AmazonGameCircleManager_t3020790074, ___OnRequestAchievementsReceived_6)); }
	inline Action_1_t3208758901 * get_OnRequestAchievementsReceived_6() const { return ___OnRequestAchievementsReceived_6; }
	inline Action_1_t3208758901 ** get_address_of_OnRequestAchievementsReceived_6() { return &___OnRequestAchievementsReceived_6; }
	inline void set_OnRequestAchievementsReceived_6(Action_1_t3208758901 * value)
	{
		___OnRequestAchievementsReceived_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnRequestAchievementsReceived_6, value);
	}

	inline static int32_t get_offset_of_OnUpdateAchievementReceived_7() { return static_cast<int32_t>(offsetof(SA_AmazonGameCircleManager_t3020790074, ___OnUpdateAchievementReceived_7)); }
	inline Action_1_t2679604744 * get_OnUpdateAchievementReceived_7() const { return ___OnUpdateAchievementReceived_7; }
	inline Action_1_t2679604744 ** get_address_of_OnUpdateAchievementReceived_7() { return &___OnUpdateAchievementReceived_7; }
	inline void set_OnUpdateAchievementReceived_7(Action_1_t2679604744 * value)
	{
		___OnUpdateAchievementReceived_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnUpdateAchievementReceived_7, value);
	}

	inline static int32_t get_offset_of_OnRequestLeaderboardsReceived_8() { return static_cast<int32_t>(offsetof(SA_AmazonGameCircleManager_t3020790074, ___OnRequestLeaderboardsReceived_8)); }
	inline Action_1_t1305268751 * get_OnRequestLeaderboardsReceived_8() const { return ___OnRequestLeaderboardsReceived_8; }
	inline Action_1_t1305268751 ** get_address_of_OnRequestLeaderboardsReceived_8() { return &___OnRequestLeaderboardsReceived_8; }
	inline void set_OnRequestLeaderboardsReceived_8(Action_1_t1305268751 * value)
	{
		___OnRequestLeaderboardsReceived_8 = value;
		Il2CppCodeGenWriteBarrier(&___OnRequestLeaderboardsReceived_8, value);
	}

	inline static int32_t get_offset_of_OnSubmitLeaderboardReceived_9() { return static_cast<int32_t>(offsetof(SA_AmazonGameCircleManager_t3020790074, ___OnSubmitLeaderboardReceived_9)); }
	inline Action_1_t2286565425 * get_OnSubmitLeaderboardReceived_9() const { return ___OnSubmitLeaderboardReceived_9; }
	inline Action_1_t2286565425 ** get_address_of_OnSubmitLeaderboardReceived_9() { return &___OnSubmitLeaderboardReceived_9; }
	inline void set_OnSubmitLeaderboardReceived_9(Action_1_t2286565425 * value)
	{
		___OnSubmitLeaderboardReceived_9 = value;
		Il2CppCodeGenWriteBarrier(&___OnSubmitLeaderboardReceived_9, value);
	}

	inline static int32_t get_offset_of_OnLocalPlayerScoreLoaded_10() { return static_cast<int32_t>(offsetof(SA_AmazonGameCircleManager_t3020790074, ___OnLocalPlayerScoreLoaded_10)); }
	inline Action_1_t2302595829 * get_OnLocalPlayerScoreLoaded_10() const { return ___OnLocalPlayerScoreLoaded_10; }
	inline Action_1_t2302595829 ** get_address_of_OnLocalPlayerScoreLoaded_10() { return &___OnLocalPlayerScoreLoaded_10; }
	inline void set_OnLocalPlayerScoreLoaded_10(Action_1_t2302595829 * value)
	{
		___OnLocalPlayerScoreLoaded_10 = value;
		Il2CppCodeGenWriteBarrier(&___OnLocalPlayerScoreLoaded_10, value);
	}

	inline static int32_t get_offset_of_OnScoresLoaded_11() { return static_cast<int32_t>(offsetof(SA_AmazonGameCircleManager_t3020790074, ___OnScoresLoaded_11)); }
	inline Action_1_t3408297196 * get_OnScoresLoaded_11() const { return ___OnScoresLoaded_11; }
	inline Action_1_t3408297196 ** get_address_of_OnScoresLoaded_11() { return &___OnScoresLoaded_11; }
	inline void set_OnScoresLoaded_11(Action_1_t3408297196 * value)
	{
		___OnScoresLoaded_11 = value;
		Il2CppCodeGenWriteBarrier(&___OnScoresLoaded_11, value);
	}

	inline static int32_t get_offset_of__player_12() { return static_cast<int32_t>(offsetof(SA_AmazonGameCircleManager_t3020790074, ____player_12)); }
	inline GC_Player_t1334946238 * get__player_12() const { return ____player_12; }
	inline GC_Player_t1334946238 ** get_address_of__player_12() { return &____player_12; }
	inline void set__player_12(GC_Player_t1334946238 * value)
	{
		____player_12 = value;
		Il2CppCodeGenWriteBarrier(&____player_12, value);
	}

	inline static int32_t get_offset_of__Players_13() { return static_cast<int32_t>(offsetof(SA_AmazonGameCircleManager_t3020790074, ____Players_13)); }
	inline Dictionary_2_t3249725500 * get__Players_13() const { return ____Players_13; }
	inline Dictionary_2_t3249725500 ** get_address_of__Players_13() { return &____Players_13; }
	inline void set__Players_13(Dictionary_2_t3249725500 * value)
	{
		____Players_13 = value;
		Il2CppCodeGenWriteBarrier(&____Players_13, value);
	}

	inline static int32_t get_offset_of__isInitialized_14() { return static_cast<int32_t>(offsetof(SA_AmazonGameCircleManager_t3020790074, ____isInitialized_14)); }
	inline bool get__isInitialized_14() const { return ____isInitialized_14; }
	inline bool* get_address_of__isInitialized_14() { return &____isInitialized_14; }
	inline void set__isInitialized_14(bool value)
	{
		____isInitialized_14 = value;
	}
};

struct SA_AmazonGameCircleManager_t3020790074_StaticFields
{
public:
	// System.Action`1<AMN_InitializeResult> SA_AmazonGameCircleManager::<>f__am$cache0
	Action_1_t2686103564 * ___U3CU3Ef__amU24cache0_15;
	// System.Action`1<AMN_RequestPlayerDataResult> SA_AmazonGameCircleManager::<>f__am$cache1
	Action_1_t2644708652 * ___U3CU3Ef__amU24cache1_16;
	// System.Action`1<AMN_RequestAchievementsResult> SA_AmazonGameCircleManager::<>f__am$cache2
	Action_1_t3208758901 * ___U3CU3Ef__amU24cache2_17;
	// System.Action`1<AMN_UpdateAchievementResult> SA_AmazonGameCircleManager::<>f__am$cache3
	Action_1_t2679604744 * ___U3CU3Ef__amU24cache3_18;
	// System.Action`1<AMN_RequestLeaderboardsResult> SA_AmazonGameCircleManager::<>f__am$cache4
	Action_1_t1305268751 * ___U3CU3Ef__amU24cache4_19;
	// System.Action`1<AMN_SubmitLeaderboardResult> SA_AmazonGameCircleManager::<>f__am$cache5
	Action_1_t2286565425 * ___U3CU3Ef__amU24cache5_20;
	// System.Action`1<AMN_LocalPlayerScoreLoadedResult> SA_AmazonGameCircleManager::<>f__am$cache6
	Action_1_t2302595829 * ___U3CU3Ef__amU24cache6_21;
	// System.Action`1<AMN_ScoresLoadedResult> SA_AmazonGameCircleManager::<>f__am$cache7
	Action_1_t3408297196 * ___U3CU3Ef__amU24cache7_22;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_15() { return static_cast<int32_t>(offsetof(SA_AmazonGameCircleManager_t3020790074_StaticFields, ___U3CU3Ef__amU24cache0_15)); }
	inline Action_1_t2686103564 * get_U3CU3Ef__amU24cache0_15() const { return ___U3CU3Ef__amU24cache0_15; }
	inline Action_1_t2686103564 ** get_address_of_U3CU3Ef__amU24cache0_15() { return &___U3CU3Ef__amU24cache0_15; }
	inline void set_U3CU3Ef__amU24cache0_15(Action_1_t2686103564 * value)
	{
		___U3CU3Ef__amU24cache0_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_15, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_16() { return static_cast<int32_t>(offsetof(SA_AmazonGameCircleManager_t3020790074_StaticFields, ___U3CU3Ef__amU24cache1_16)); }
	inline Action_1_t2644708652 * get_U3CU3Ef__amU24cache1_16() const { return ___U3CU3Ef__amU24cache1_16; }
	inline Action_1_t2644708652 ** get_address_of_U3CU3Ef__amU24cache1_16() { return &___U3CU3Ef__amU24cache1_16; }
	inline void set_U3CU3Ef__amU24cache1_16(Action_1_t2644708652 * value)
	{
		___U3CU3Ef__amU24cache1_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_16, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_17() { return static_cast<int32_t>(offsetof(SA_AmazonGameCircleManager_t3020790074_StaticFields, ___U3CU3Ef__amU24cache2_17)); }
	inline Action_1_t3208758901 * get_U3CU3Ef__amU24cache2_17() const { return ___U3CU3Ef__amU24cache2_17; }
	inline Action_1_t3208758901 ** get_address_of_U3CU3Ef__amU24cache2_17() { return &___U3CU3Ef__amU24cache2_17; }
	inline void set_U3CU3Ef__amU24cache2_17(Action_1_t3208758901 * value)
	{
		___U3CU3Ef__amU24cache2_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_17, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_18() { return static_cast<int32_t>(offsetof(SA_AmazonGameCircleManager_t3020790074_StaticFields, ___U3CU3Ef__amU24cache3_18)); }
	inline Action_1_t2679604744 * get_U3CU3Ef__amU24cache3_18() const { return ___U3CU3Ef__amU24cache3_18; }
	inline Action_1_t2679604744 ** get_address_of_U3CU3Ef__amU24cache3_18() { return &___U3CU3Ef__amU24cache3_18; }
	inline void set_U3CU3Ef__amU24cache3_18(Action_1_t2679604744 * value)
	{
		___U3CU3Ef__amU24cache3_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache3_18, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_19() { return static_cast<int32_t>(offsetof(SA_AmazonGameCircleManager_t3020790074_StaticFields, ___U3CU3Ef__amU24cache4_19)); }
	inline Action_1_t1305268751 * get_U3CU3Ef__amU24cache4_19() const { return ___U3CU3Ef__amU24cache4_19; }
	inline Action_1_t1305268751 ** get_address_of_U3CU3Ef__amU24cache4_19() { return &___U3CU3Ef__amU24cache4_19; }
	inline void set_U3CU3Ef__amU24cache4_19(Action_1_t1305268751 * value)
	{
		___U3CU3Ef__amU24cache4_19 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache4_19, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache5_20() { return static_cast<int32_t>(offsetof(SA_AmazonGameCircleManager_t3020790074_StaticFields, ___U3CU3Ef__amU24cache5_20)); }
	inline Action_1_t2286565425 * get_U3CU3Ef__amU24cache5_20() const { return ___U3CU3Ef__amU24cache5_20; }
	inline Action_1_t2286565425 ** get_address_of_U3CU3Ef__amU24cache5_20() { return &___U3CU3Ef__amU24cache5_20; }
	inline void set_U3CU3Ef__amU24cache5_20(Action_1_t2286565425 * value)
	{
		___U3CU3Ef__amU24cache5_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache5_20, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache6_21() { return static_cast<int32_t>(offsetof(SA_AmazonGameCircleManager_t3020790074_StaticFields, ___U3CU3Ef__amU24cache6_21)); }
	inline Action_1_t2302595829 * get_U3CU3Ef__amU24cache6_21() const { return ___U3CU3Ef__amU24cache6_21; }
	inline Action_1_t2302595829 ** get_address_of_U3CU3Ef__amU24cache6_21() { return &___U3CU3Ef__amU24cache6_21; }
	inline void set_U3CU3Ef__amU24cache6_21(Action_1_t2302595829 * value)
	{
		___U3CU3Ef__amU24cache6_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache6_21, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache7_22() { return static_cast<int32_t>(offsetof(SA_AmazonGameCircleManager_t3020790074_StaticFields, ___U3CU3Ef__amU24cache7_22)); }
	inline Action_1_t3408297196 * get_U3CU3Ef__amU24cache7_22() const { return ___U3CU3Ef__amU24cache7_22; }
	inline Action_1_t3408297196 ** get_address_of_U3CU3Ef__amU24cache7_22() { return &___U3CU3Ef__amU24cache7_22; }
	inline void set_U3CU3Ef__amU24cache7_22(Action_1_t3408297196 * value)
	{
		___U3CU3Ef__amU24cache7_22 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache7_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
