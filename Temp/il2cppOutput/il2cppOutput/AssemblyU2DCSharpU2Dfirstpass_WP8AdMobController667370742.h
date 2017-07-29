#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Pattern_Si1149935847.h"

// System.Collections.Generic.Dictionary`2<System.Int32,WP8ADBanner>
struct Dictionary_2_t3307089361;
// System.String
struct String_t;
// System.Action
struct Action_t3226471752;
// System.Action`1<System.String>
struct Action_1_t1831019615;
// System.Action`2<System.String,System.Int32>
struct Action_2_t4277199140;
// System.Action`1<System.Int32>
struct Action_1_t1873676830;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WP8AdMobController
struct  WP8AdMobController_t667370742  : public Singleton_1_t1149935847
{
public:
	// System.Boolean WP8AdMobController::_IsInited
	bool ____IsInited_4;
	// System.Collections.Generic.Dictionary`2<System.Int32,WP8ADBanner> WP8AdMobController::_banners
	Dictionary_2_t3307089361 * ____banners_5;
	// System.String WP8AdMobController::_BannersUunitId
	String_t* ____BannersUunitId_6;
	// System.String WP8AdMobController::_InterstisialUnitId
	String_t* ____InterstisialUnitId_7;
	// System.String WP8AdMobController::_RewardedVideoAdUnitId
	String_t* ____RewardedVideoAdUnitId_8;
	// System.Action WP8AdMobController::OnInterstitialLoaded
	Action_t3226471752 * ___OnInterstitialLoaded_9;
	// System.Action WP8AdMobController::OnInterstitialFailedLoading
	Action_t3226471752 * ___OnInterstitialFailedLoading_10;
	// System.Action WP8AdMobController::OnInterstitialOpened
	Action_t3226471752 * ___OnInterstitialOpened_11;
	// System.Action WP8AdMobController::OnInterstitialClosed
	Action_t3226471752 * ___OnInterstitialClosed_12;
	// System.Action WP8AdMobController::OnInterstitialLeftApplication
	Action_t3226471752 * ___OnInterstitialLeftApplication_13;
	// System.Action`1<System.String> WP8AdMobController::OnAdInAppRequest
	Action_1_t1831019615 * ___OnAdInAppRequest_14;
	// System.Action`2<System.String,System.Int32> WP8AdMobController::OnRewarded
	Action_2_t4277199140 * ___OnRewarded_15;
	// System.Action WP8AdMobController::OnRewardedVideoAdClosed
	Action_t3226471752 * ___OnRewardedVideoAdClosed_16;
	// System.Action`1<System.Int32> WP8AdMobController::OnRewardedVideoAdFailedToLoad
	Action_1_t1873676830 * ___OnRewardedVideoAdFailedToLoad_17;
	// System.Action WP8AdMobController::OnRewardedVideoAdLeftApplication
	Action_t3226471752 * ___OnRewardedVideoAdLeftApplication_18;
	// System.Action WP8AdMobController::OnRewardedVideoLoaded
	Action_t3226471752 * ___OnRewardedVideoLoaded_19;
	// System.Action WP8AdMobController::OnRewardedVideoAdOpened
	Action_t3226471752 * ___OnRewardedVideoAdOpened_20;
	// System.Action WP8AdMobController::OnRewardedVideoStarted
	Action_t3226471752 * ___OnRewardedVideoStarted_21;

public:
	inline static int32_t get_offset_of__IsInited_4() { return static_cast<int32_t>(offsetof(WP8AdMobController_t667370742, ____IsInited_4)); }
	inline bool get__IsInited_4() const { return ____IsInited_4; }
	inline bool* get_address_of__IsInited_4() { return &____IsInited_4; }
	inline void set__IsInited_4(bool value)
	{
		____IsInited_4 = value;
	}

	inline static int32_t get_offset_of__banners_5() { return static_cast<int32_t>(offsetof(WP8AdMobController_t667370742, ____banners_5)); }
	inline Dictionary_2_t3307089361 * get__banners_5() const { return ____banners_5; }
	inline Dictionary_2_t3307089361 ** get_address_of__banners_5() { return &____banners_5; }
	inline void set__banners_5(Dictionary_2_t3307089361 * value)
	{
		____banners_5 = value;
		Il2CppCodeGenWriteBarrier(&____banners_5, value);
	}

	inline static int32_t get_offset_of__BannersUunitId_6() { return static_cast<int32_t>(offsetof(WP8AdMobController_t667370742, ____BannersUunitId_6)); }
	inline String_t* get__BannersUunitId_6() const { return ____BannersUunitId_6; }
	inline String_t** get_address_of__BannersUunitId_6() { return &____BannersUunitId_6; }
	inline void set__BannersUunitId_6(String_t* value)
	{
		____BannersUunitId_6 = value;
		Il2CppCodeGenWriteBarrier(&____BannersUunitId_6, value);
	}

	inline static int32_t get_offset_of__InterstisialUnitId_7() { return static_cast<int32_t>(offsetof(WP8AdMobController_t667370742, ____InterstisialUnitId_7)); }
	inline String_t* get__InterstisialUnitId_7() const { return ____InterstisialUnitId_7; }
	inline String_t** get_address_of__InterstisialUnitId_7() { return &____InterstisialUnitId_7; }
	inline void set__InterstisialUnitId_7(String_t* value)
	{
		____InterstisialUnitId_7 = value;
		Il2CppCodeGenWriteBarrier(&____InterstisialUnitId_7, value);
	}

	inline static int32_t get_offset_of__RewardedVideoAdUnitId_8() { return static_cast<int32_t>(offsetof(WP8AdMobController_t667370742, ____RewardedVideoAdUnitId_8)); }
	inline String_t* get__RewardedVideoAdUnitId_8() const { return ____RewardedVideoAdUnitId_8; }
	inline String_t** get_address_of__RewardedVideoAdUnitId_8() { return &____RewardedVideoAdUnitId_8; }
	inline void set__RewardedVideoAdUnitId_8(String_t* value)
	{
		____RewardedVideoAdUnitId_8 = value;
		Il2CppCodeGenWriteBarrier(&____RewardedVideoAdUnitId_8, value);
	}

	inline static int32_t get_offset_of_OnInterstitialLoaded_9() { return static_cast<int32_t>(offsetof(WP8AdMobController_t667370742, ___OnInterstitialLoaded_9)); }
	inline Action_t3226471752 * get_OnInterstitialLoaded_9() const { return ___OnInterstitialLoaded_9; }
	inline Action_t3226471752 ** get_address_of_OnInterstitialLoaded_9() { return &___OnInterstitialLoaded_9; }
	inline void set_OnInterstitialLoaded_9(Action_t3226471752 * value)
	{
		___OnInterstitialLoaded_9 = value;
		Il2CppCodeGenWriteBarrier(&___OnInterstitialLoaded_9, value);
	}

	inline static int32_t get_offset_of_OnInterstitialFailedLoading_10() { return static_cast<int32_t>(offsetof(WP8AdMobController_t667370742, ___OnInterstitialFailedLoading_10)); }
	inline Action_t3226471752 * get_OnInterstitialFailedLoading_10() const { return ___OnInterstitialFailedLoading_10; }
	inline Action_t3226471752 ** get_address_of_OnInterstitialFailedLoading_10() { return &___OnInterstitialFailedLoading_10; }
	inline void set_OnInterstitialFailedLoading_10(Action_t3226471752 * value)
	{
		___OnInterstitialFailedLoading_10 = value;
		Il2CppCodeGenWriteBarrier(&___OnInterstitialFailedLoading_10, value);
	}

	inline static int32_t get_offset_of_OnInterstitialOpened_11() { return static_cast<int32_t>(offsetof(WP8AdMobController_t667370742, ___OnInterstitialOpened_11)); }
	inline Action_t3226471752 * get_OnInterstitialOpened_11() const { return ___OnInterstitialOpened_11; }
	inline Action_t3226471752 ** get_address_of_OnInterstitialOpened_11() { return &___OnInterstitialOpened_11; }
	inline void set_OnInterstitialOpened_11(Action_t3226471752 * value)
	{
		___OnInterstitialOpened_11 = value;
		Il2CppCodeGenWriteBarrier(&___OnInterstitialOpened_11, value);
	}

	inline static int32_t get_offset_of_OnInterstitialClosed_12() { return static_cast<int32_t>(offsetof(WP8AdMobController_t667370742, ___OnInterstitialClosed_12)); }
	inline Action_t3226471752 * get_OnInterstitialClosed_12() const { return ___OnInterstitialClosed_12; }
	inline Action_t3226471752 ** get_address_of_OnInterstitialClosed_12() { return &___OnInterstitialClosed_12; }
	inline void set_OnInterstitialClosed_12(Action_t3226471752 * value)
	{
		___OnInterstitialClosed_12 = value;
		Il2CppCodeGenWriteBarrier(&___OnInterstitialClosed_12, value);
	}

	inline static int32_t get_offset_of_OnInterstitialLeftApplication_13() { return static_cast<int32_t>(offsetof(WP8AdMobController_t667370742, ___OnInterstitialLeftApplication_13)); }
	inline Action_t3226471752 * get_OnInterstitialLeftApplication_13() const { return ___OnInterstitialLeftApplication_13; }
	inline Action_t3226471752 ** get_address_of_OnInterstitialLeftApplication_13() { return &___OnInterstitialLeftApplication_13; }
	inline void set_OnInterstitialLeftApplication_13(Action_t3226471752 * value)
	{
		___OnInterstitialLeftApplication_13 = value;
		Il2CppCodeGenWriteBarrier(&___OnInterstitialLeftApplication_13, value);
	}

	inline static int32_t get_offset_of_OnAdInAppRequest_14() { return static_cast<int32_t>(offsetof(WP8AdMobController_t667370742, ___OnAdInAppRequest_14)); }
	inline Action_1_t1831019615 * get_OnAdInAppRequest_14() const { return ___OnAdInAppRequest_14; }
	inline Action_1_t1831019615 ** get_address_of_OnAdInAppRequest_14() { return &___OnAdInAppRequest_14; }
	inline void set_OnAdInAppRequest_14(Action_1_t1831019615 * value)
	{
		___OnAdInAppRequest_14 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdInAppRequest_14, value);
	}

	inline static int32_t get_offset_of_OnRewarded_15() { return static_cast<int32_t>(offsetof(WP8AdMobController_t667370742, ___OnRewarded_15)); }
	inline Action_2_t4277199140 * get_OnRewarded_15() const { return ___OnRewarded_15; }
	inline Action_2_t4277199140 ** get_address_of_OnRewarded_15() { return &___OnRewarded_15; }
	inline void set_OnRewarded_15(Action_2_t4277199140 * value)
	{
		___OnRewarded_15 = value;
		Il2CppCodeGenWriteBarrier(&___OnRewarded_15, value);
	}

	inline static int32_t get_offset_of_OnRewardedVideoAdClosed_16() { return static_cast<int32_t>(offsetof(WP8AdMobController_t667370742, ___OnRewardedVideoAdClosed_16)); }
	inline Action_t3226471752 * get_OnRewardedVideoAdClosed_16() const { return ___OnRewardedVideoAdClosed_16; }
	inline Action_t3226471752 ** get_address_of_OnRewardedVideoAdClosed_16() { return &___OnRewardedVideoAdClosed_16; }
	inline void set_OnRewardedVideoAdClosed_16(Action_t3226471752 * value)
	{
		___OnRewardedVideoAdClosed_16 = value;
		Il2CppCodeGenWriteBarrier(&___OnRewardedVideoAdClosed_16, value);
	}

	inline static int32_t get_offset_of_OnRewardedVideoAdFailedToLoad_17() { return static_cast<int32_t>(offsetof(WP8AdMobController_t667370742, ___OnRewardedVideoAdFailedToLoad_17)); }
	inline Action_1_t1873676830 * get_OnRewardedVideoAdFailedToLoad_17() const { return ___OnRewardedVideoAdFailedToLoad_17; }
	inline Action_1_t1873676830 ** get_address_of_OnRewardedVideoAdFailedToLoad_17() { return &___OnRewardedVideoAdFailedToLoad_17; }
	inline void set_OnRewardedVideoAdFailedToLoad_17(Action_1_t1873676830 * value)
	{
		___OnRewardedVideoAdFailedToLoad_17 = value;
		Il2CppCodeGenWriteBarrier(&___OnRewardedVideoAdFailedToLoad_17, value);
	}

	inline static int32_t get_offset_of_OnRewardedVideoAdLeftApplication_18() { return static_cast<int32_t>(offsetof(WP8AdMobController_t667370742, ___OnRewardedVideoAdLeftApplication_18)); }
	inline Action_t3226471752 * get_OnRewardedVideoAdLeftApplication_18() const { return ___OnRewardedVideoAdLeftApplication_18; }
	inline Action_t3226471752 ** get_address_of_OnRewardedVideoAdLeftApplication_18() { return &___OnRewardedVideoAdLeftApplication_18; }
	inline void set_OnRewardedVideoAdLeftApplication_18(Action_t3226471752 * value)
	{
		___OnRewardedVideoAdLeftApplication_18 = value;
		Il2CppCodeGenWriteBarrier(&___OnRewardedVideoAdLeftApplication_18, value);
	}

	inline static int32_t get_offset_of_OnRewardedVideoLoaded_19() { return static_cast<int32_t>(offsetof(WP8AdMobController_t667370742, ___OnRewardedVideoLoaded_19)); }
	inline Action_t3226471752 * get_OnRewardedVideoLoaded_19() const { return ___OnRewardedVideoLoaded_19; }
	inline Action_t3226471752 ** get_address_of_OnRewardedVideoLoaded_19() { return &___OnRewardedVideoLoaded_19; }
	inline void set_OnRewardedVideoLoaded_19(Action_t3226471752 * value)
	{
		___OnRewardedVideoLoaded_19 = value;
		Il2CppCodeGenWriteBarrier(&___OnRewardedVideoLoaded_19, value);
	}

	inline static int32_t get_offset_of_OnRewardedVideoAdOpened_20() { return static_cast<int32_t>(offsetof(WP8AdMobController_t667370742, ___OnRewardedVideoAdOpened_20)); }
	inline Action_t3226471752 * get_OnRewardedVideoAdOpened_20() const { return ___OnRewardedVideoAdOpened_20; }
	inline Action_t3226471752 ** get_address_of_OnRewardedVideoAdOpened_20() { return &___OnRewardedVideoAdOpened_20; }
	inline void set_OnRewardedVideoAdOpened_20(Action_t3226471752 * value)
	{
		___OnRewardedVideoAdOpened_20 = value;
		Il2CppCodeGenWriteBarrier(&___OnRewardedVideoAdOpened_20, value);
	}

	inline static int32_t get_offset_of_OnRewardedVideoStarted_21() { return static_cast<int32_t>(offsetof(WP8AdMobController_t667370742, ___OnRewardedVideoStarted_21)); }
	inline Action_t3226471752 * get_OnRewardedVideoStarted_21() const { return ___OnRewardedVideoStarted_21; }
	inline Action_t3226471752 ** get_address_of_OnRewardedVideoStarted_21() { return &___OnRewardedVideoStarted_21; }
	inline void set_OnRewardedVideoStarted_21(Action_t3226471752 * value)
	{
		___OnRewardedVideoStarted_21 = value;
		Il2CppCodeGenWriteBarrier(&___OnRewardedVideoStarted_21, value);
	}
};

struct WP8AdMobController_t667370742_StaticFields
{
public:
	// System.Action WP8AdMobController::<>f__am$cache0
	Action_t3226471752 * ___U3CU3Ef__amU24cache0_23;
	// System.Action WP8AdMobController::<>f__am$cache1
	Action_t3226471752 * ___U3CU3Ef__amU24cache1_24;
	// System.Action WP8AdMobController::<>f__am$cache2
	Action_t3226471752 * ___U3CU3Ef__amU24cache2_25;
	// System.Action WP8AdMobController::<>f__am$cache3
	Action_t3226471752 * ___U3CU3Ef__amU24cache3_26;
	// System.Action WP8AdMobController::<>f__am$cache4
	Action_t3226471752 * ___U3CU3Ef__amU24cache4_27;
	// System.Action`1<System.String> WP8AdMobController::<>f__am$cache5
	Action_1_t1831019615 * ___U3CU3Ef__amU24cache5_28;
	// System.Action`2<System.String,System.Int32> WP8AdMobController::<>f__am$cache6
	Action_2_t4277199140 * ___U3CU3Ef__amU24cache6_29;
	// System.Action WP8AdMobController::<>f__am$cache7
	Action_t3226471752 * ___U3CU3Ef__amU24cache7_30;
	// System.Action`1<System.Int32> WP8AdMobController::<>f__am$cache8
	Action_1_t1873676830 * ___U3CU3Ef__amU24cache8_31;
	// System.Action WP8AdMobController::<>f__am$cache9
	Action_t3226471752 * ___U3CU3Ef__amU24cache9_32;
	// System.Action WP8AdMobController::<>f__am$cacheA
	Action_t3226471752 * ___U3CU3Ef__amU24cacheA_33;
	// System.Action WP8AdMobController::<>f__am$cacheB
	Action_t3226471752 * ___U3CU3Ef__amU24cacheB_34;
	// System.Action WP8AdMobController::<>f__am$cacheC
	Action_t3226471752 * ___U3CU3Ef__amU24cacheC_35;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_23() { return static_cast<int32_t>(offsetof(WP8AdMobController_t667370742_StaticFields, ___U3CU3Ef__amU24cache0_23)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cache0_23() const { return ___U3CU3Ef__amU24cache0_23; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cache0_23() { return &___U3CU3Ef__amU24cache0_23; }
	inline void set_U3CU3Ef__amU24cache0_23(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cache0_23 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_23, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_24() { return static_cast<int32_t>(offsetof(WP8AdMobController_t667370742_StaticFields, ___U3CU3Ef__amU24cache1_24)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cache1_24() const { return ___U3CU3Ef__amU24cache1_24; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cache1_24() { return &___U3CU3Ef__amU24cache1_24; }
	inline void set_U3CU3Ef__amU24cache1_24(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cache1_24 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_24, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_25() { return static_cast<int32_t>(offsetof(WP8AdMobController_t667370742_StaticFields, ___U3CU3Ef__amU24cache2_25)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cache2_25() const { return ___U3CU3Ef__amU24cache2_25; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cache2_25() { return &___U3CU3Ef__amU24cache2_25; }
	inline void set_U3CU3Ef__amU24cache2_25(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cache2_25 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_25, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_26() { return static_cast<int32_t>(offsetof(WP8AdMobController_t667370742_StaticFields, ___U3CU3Ef__amU24cache3_26)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cache3_26() const { return ___U3CU3Ef__amU24cache3_26; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cache3_26() { return &___U3CU3Ef__amU24cache3_26; }
	inline void set_U3CU3Ef__amU24cache3_26(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cache3_26 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache3_26, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_27() { return static_cast<int32_t>(offsetof(WP8AdMobController_t667370742_StaticFields, ___U3CU3Ef__amU24cache4_27)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cache4_27() const { return ___U3CU3Ef__amU24cache4_27; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cache4_27() { return &___U3CU3Ef__amU24cache4_27; }
	inline void set_U3CU3Ef__amU24cache4_27(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cache4_27 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache4_27, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache5_28() { return static_cast<int32_t>(offsetof(WP8AdMobController_t667370742_StaticFields, ___U3CU3Ef__amU24cache5_28)); }
	inline Action_1_t1831019615 * get_U3CU3Ef__amU24cache5_28() const { return ___U3CU3Ef__amU24cache5_28; }
	inline Action_1_t1831019615 ** get_address_of_U3CU3Ef__amU24cache5_28() { return &___U3CU3Ef__amU24cache5_28; }
	inline void set_U3CU3Ef__amU24cache5_28(Action_1_t1831019615 * value)
	{
		___U3CU3Ef__amU24cache5_28 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache5_28, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache6_29() { return static_cast<int32_t>(offsetof(WP8AdMobController_t667370742_StaticFields, ___U3CU3Ef__amU24cache6_29)); }
	inline Action_2_t4277199140 * get_U3CU3Ef__amU24cache6_29() const { return ___U3CU3Ef__amU24cache6_29; }
	inline Action_2_t4277199140 ** get_address_of_U3CU3Ef__amU24cache6_29() { return &___U3CU3Ef__amU24cache6_29; }
	inline void set_U3CU3Ef__amU24cache6_29(Action_2_t4277199140 * value)
	{
		___U3CU3Ef__amU24cache6_29 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache6_29, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache7_30() { return static_cast<int32_t>(offsetof(WP8AdMobController_t667370742_StaticFields, ___U3CU3Ef__amU24cache7_30)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cache7_30() const { return ___U3CU3Ef__amU24cache7_30; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cache7_30() { return &___U3CU3Ef__amU24cache7_30; }
	inline void set_U3CU3Ef__amU24cache7_30(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cache7_30 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache7_30, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache8_31() { return static_cast<int32_t>(offsetof(WP8AdMobController_t667370742_StaticFields, ___U3CU3Ef__amU24cache8_31)); }
	inline Action_1_t1873676830 * get_U3CU3Ef__amU24cache8_31() const { return ___U3CU3Ef__amU24cache8_31; }
	inline Action_1_t1873676830 ** get_address_of_U3CU3Ef__amU24cache8_31() { return &___U3CU3Ef__amU24cache8_31; }
	inline void set_U3CU3Ef__amU24cache8_31(Action_1_t1873676830 * value)
	{
		___U3CU3Ef__amU24cache8_31 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache8_31, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache9_32() { return static_cast<int32_t>(offsetof(WP8AdMobController_t667370742_StaticFields, ___U3CU3Ef__amU24cache9_32)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cache9_32() const { return ___U3CU3Ef__amU24cache9_32; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cache9_32() { return &___U3CU3Ef__amU24cache9_32; }
	inline void set_U3CU3Ef__amU24cache9_32(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cache9_32 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache9_32, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheA_33() { return static_cast<int32_t>(offsetof(WP8AdMobController_t667370742_StaticFields, ___U3CU3Ef__amU24cacheA_33)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cacheA_33() const { return ___U3CU3Ef__amU24cacheA_33; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cacheA_33() { return &___U3CU3Ef__amU24cacheA_33; }
	inline void set_U3CU3Ef__amU24cacheA_33(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cacheA_33 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheA_33, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_34() { return static_cast<int32_t>(offsetof(WP8AdMobController_t667370742_StaticFields, ___U3CU3Ef__amU24cacheB_34)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cacheB_34() const { return ___U3CU3Ef__amU24cacheB_34; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cacheB_34() { return &___U3CU3Ef__amU24cacheB_34; }
	inline void set_U3CU3Ef__amU24cacheB_34(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cacheB_34 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheB_34, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheC_35() { return static_cast<int32_t>(offsetof(WP8AdMobController_t667370742_StaticFields, ___U3CU3Ef__amU24cacheC_35)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cacheC_35() const { return ___U3CU3Ef__amU24cacheC_35; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cacheC_35() { return &___U3CU3Ef__amU24cacheC_35; }
	inline void set_U3CU3Ef__amU24cacheC_35(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cacheC_35 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheC_35, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
