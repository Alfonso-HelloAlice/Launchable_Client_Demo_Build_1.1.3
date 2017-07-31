#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Pattern_Si2120865461.h"

// System.Collections.Generic.Dictionary`2<System.Int32,AndroidADBanner>
struct Dictionary_2_t4189012375;
// System.String
struct String_t;
// System.Action`2<System.String,System.Int32>
struct Action_2_t4277199140;
// System.Action
struct Action_t3226471752;
// System.Action`1<System.Int32>
struct Action_1_t1873676830;
// System.Action`1<System.String>
struct Action_1_t1831019615;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AndroidAdMobController
struct  AndroidAdMobController_t1638300356  : public Singleton_1_t2120865461
{
public:
	// System.Boolean AndroidAdMobController::_IsInited
	bool ____IsInited_4;
	// System.Collections.Generic.Dictionary`2<System.Int32,AndroidADBanner> AndroidAdMobController::_banners
	Dictionary_2_t4189012375 * ____banners_5;
	// System.Boolean AndroidAdMobController::_IsEditorTestingEnabled
	bool ____IsEditorTestingEnabled_6;
	// System.Int32 AndroidAdMobController::_EditorFillRate
	int32_t ____EditorFillRate_7;
	// System.String AndroidAdMobController::_BannersUunitId
	String_t* ____BannersUunitId_8;
	// System.String AndroidAdMobController::_InterstisialUnitId
	String_t* ____InterstisialUnitId_9;
	// System.String AndroidAdMobController::_RewardedVideoAdUnitId
	String_t* ____RewardedVideoAdUnitId_10;
	// System.Action`2<System.String,System.Int32> AndroidAdMobController::OnRewarded
	Action_2_t4277199140 * ___OnRewarded_11;
	// System.Action AndroidAdMobController::OnRewardedVideoAdClosed
	Action_t3226471752 * ___OnRewardedVideoAdClosed_12;
	// System.Action`1<System.Int32> AndroidAdMobController::OnRewardedVideoAdFailedToLoad
	Action_1_t1873676830 * ___OnRewardedVideoAdFailedToLoad_13;
	// System.Action AndroidAdMobController::OnRewardedVideoAdLeftApplication
	Action_t3226471752 * ___OnRewardedVideoAdLeftApplication_14;
	// System.Action AndroidAdMobController::OnRewardedVideoLoaded
	Action_t3226471752 * ___OnRewardedVideoLoaded_15;
	// System.Action AndroidAdMobController::OnRewardedVideoAdOpened
	Action_t3226471752 * ___OnRewardedVideoAdOpened_16;
	// System.Action AndroidAdMobController::OnRewardedVideoStarted
	Action_t3226471752 * ___OnRewardedVideoStarted_17;
	// System.Action AndroidAdMobController::OnInterstitialLoaded
	Action_t3226471752 * ___OnInterstitialLoaded_18;
	// System.Action AndroidAdMobController::OnInterstitialFailedLoading
	Action_t3226471752 * ___OnInterstitialFailedLoading_19;
	// System.Action AndroidAdMobController::OnInterstitialOpened
	Action_t3226471752 * ___OnInterstitialOpened_20;
	// System.Action AndroidAdMobController::OnInterstitialClosed
	Action_t3226471752 * ___OnInterstitialClosed_21;
	// System.Action AndroidAdMobController::OnInterstitialLeftApplication
	Action_t3226471752 * ___OnInterstitialLeftApplication_22;
	// System.Action`1<System.String> AndroidAdMobController::OnAdInAppRequest
	Action_1_t1831019615 * ___OnAdInAppRequest_23;
	// System.Boolean AndroidAdMobController::_InterstitialShowOnLoad
	bool ____InterstitialShowOnLoad_25;
	// System.Boolean AndroidAdMobController::_RewardedVideoShowOnLoad
	bool ____RewardedVideoShowOnLoad_26;

public:
	inline static int32_t get_offset_of__IsInited_4() { return static_cast<int32_t>(offsetof(AndroidAdMobController_t1638300356, ____IsInited_4)); }
	inline bool get__IsInited_4() const { return ____IsInited_4; }
	inline bool* get_address_of__IsInited_4() { return &____IsInited_4; }
	inline void set__IsInited_4(bool value)
	{
		____IsInited_4 = value;
	}

	inline static int32_t get_offset_of__banners_5() { return static_cast<int32_t>(offsetof(AndroidAdMobController_t1638300356, ____banners_5)); }
	inline Dictionary_2_t4189012375 * get__banners_5() const { return ____banners_5; }
	inline Dictionary_2_t4189012375 ** get_address_of__banners_5() { return &____banners_5; }
	inline void set__banners_5(Dictionary_2_t4189012375 * value)
	{
		____banners_5 = value;
		Il2CppCodeGenWriteBarrier(&____banners_5, value);
	}

	inline static int32_t get_offset_of__IsEditorTestingEnabled_6() { return static_cast<int32_t>(offsetof(AndroidAdMobController_t1638300356, ____IsEditorTestingEnabled_6)); }
	inline bool get__IsEditorTestingEnabled_6() const { return ____IsEditorTestingEnabled_6; }
	inline bool* get_address_of__IsEditorTestingEnabled_6() { return &____IsEditorTestingEnabled_6; }
	inline void set__IsEditorTestingEnabled_6(bool value)
	{
		____IsEditorTestingEnabled_6 = value;
	}

	inline static int32_t get_offset_of__EditorFillRate_7() { return static_cast<int32_t>(offsetof(AndroidAdMobController_t1638300356, ____EditorFillRate_7)); }
	inline int32_t get__EditorFillRate_7() const { return ____EditorFillRate_7; }
	inline int32_t* get_address_of__EditorFillRate_7() { return &____EditorFillRate_7; }
	inline void set__EditorFillRate_7(int32_t value)
	{
		____EditorFillRate_7 = value;
	}

	inline static int32_t get_offset_of__BannersUunitId_8() { return static_cast<int32_t>(offsetof(AndroidAdMobController_t1638300356, ____BannersUunitId_8)); }
	inline String_t* get__BannersUunitId_8() const { return ____BannersUunitId_8; }
	inline String_t** get_address_of__BannersUunitId_8() { return &____BannersUunitId_8; }
	inline void set__BannersUunitId_8(String_t* value)
	{
		____BannersUunitId_8 = value;
		Il2CppCodeGenWriteBarrier(&____BannersUunitId_8, value);
	}

	inline static int32_t get_offset_of__InterstisialUnitId_9() { return static_cast<int32_t>(offsetof(AndroidAdMobController_t1638300356, ____InterstisialUnitId_9)); }
	inline String_t* get__InterstisialUnitId_9() const { return ____InterstisialUnitId_9; }
	inline String_t** get_address_of__InterstisialUnitId_9() { return &____InterstisialUnitId_9; }
	inline void set__InterstisialUnitId_9(String_t* value)
	{
		____InterstisialUnitId_9 = value;
		Il2CppCodeGenWriteBarrier(&____InterstisialUnitId_9, value);
	}

	inline static int32_t get_offset_of__RewardedVideoAdUnitId_10() { return static_cast<int32_t>(offsetof(AndroidAdMobController_t1638300356, ____RewardedVideoAdUnitId_10)); }
	inline String_t* get__RewardedVideoAdUnitId_10() const { return ____RewardedVideoAdUnitId_10; }
	inline String_t** get_address_of__RewardedVideoAdUnitId_10() { return &____RewardedVideoAdUnitId_10; }
	inline void set__RewardedVideoAdUnitId_10(String_t* value)
	{
		____RewardedVideoAdUnitId_10 = value;
		Il2CppCodeGenWriteBarrier(&____RewardedVideoAdUnitId_10, value);
	}

	inline static int32_t get_offset_of_OnRewarded_11() { return static_cast<int32_t>(offsetof(AndroidAdMobController_t1638300356, ___OnRewarded_11)); }
	inline Action_2_t4277199140 * get_OnRewarded_11() const { return ___OnRewarded_11; }
	inline Action_2_t4277199140 ** get_address_of_OnRewarded_11() { return &___OnRewarded_11; }
	inline void set_OnRewarded_11(Action_2_t4277199140 * value)
	{
		___OnRewarded_11 = value;
		Il2CppCodeGenWriteBarrier(&___OnRewarded_11, value);
	}

	inline static int32_t get_offset_of_OnRewardedVideoAdClosed_12() { return static_cast<int32_t>(offsetof(AndroidAdMobController_t1638300356, ___OnRewardedVideoAdClosed_12)); }
	inline Action_t3226471752 * get_OnRewardedVideoAdClosed_12() const { return ___OnRewardedVideoAdClosed_12; }
	inline Action_t3226471752 ** get_address_of_OnRewardedVideoAdClosed_12() { return &___OnRewardedVideoAdClosed_12; }
	inline void set_OnRewardedVideoAdClosed_12(Action_t3226471752 * value)
	{
		___OnRewardedVideoAdClosed_12 = value;
		Il2CppCodeGenWriteBarrier(&___OnRewardedVideoAdClosed_12, value);
	}

	inline static int32_t get_offset_of_OnRewardedVideoAdFailedToLoad_13() { return static_cast<int32_t>(offsetof(AndroidAdMobController_t1638300356, ___OnRewardedVideoAdFailedToLoad_13)); }
	inline Action_1_t1873676830 * get_OnRewardedVideoAdFailedToLoad_13() const { return ___OnRewardedVideoAdFailedToLoad_13; }
	inline Action_1_t1873676830 ** get_address_of_OnRewardedVideoAdFailedToLoad_13() { return &___OnRewardedVideoAdFailedToLoad_13; }
	inline void set_OnRewardedVideoAdFailedToLoad_13(Action_1_t1873676830 * value)
	{
		___OnRewardedVideoAdFailedToLoad_13 = value;
		Il2CppCodeGenWriteBarrier(&___OnRewardedVideoAdFailedToLoad_13, value);
	}

	inline static int32_t get_offset_of_OnRewardedVideoAdLeftApplication_14() { return static_cast<int32_t>(offsetof(AndroidAdMobController_t1638300356, ___OnRewardedVideoAdLeftApplication_14)); }
	inline Action_t3226471752 * get_OnRewardedVideoAdLeftApplication_14() const { return ___OnRewardedVideoAdLeftApplication_14; }
	inline Action_t3226471752 ** get_address_of_OnRewardedVideoAdLeftApplication_14() { return &___OnRewardedVideoAdLeftApplication_14; }
	inline void set_OnRewardedVideoAdLeftApplication_14(Action_t3226471752 * value)
	{
		___OnRewardedVideoAdLeftApplication_14 = value;
		Il2CppCodeGenWriteBarrier(&___OnRewardedVideoAdLeftApplication_14, value);
	}

	inline static int32_t get_offset_of_OnRewardedVideoLoaded_15() { return static_cast<int32_t>(offsetof(AndroidAdMobController_t1638300356, ___OnRewardedVideoLoaded_15)); }
	inline Action_t3226471752 * get_OnRewardedVideoLoaded_15() const { return ___OnRewardedVideoLoaded_15; }
	inline Action_t3226471752 ** get_address_of_OnRewardedVideoLoaded_15() { return &___OnRewardedVideoLoaded_15; }
	inline void set_OnRewardedVideoLoaded_15(Action_t3226471752 * value)
	{
		___OnRewardedVideoLoaded_15 = value;
		Il2CppCodeGenWriteBarrier(&___OnRewardedVideoLoaded_15, value);
	}

	inline static int32_t get_offset_of_OnRewardedVideoAdOpened_16() { return static_cast<int32_t>(offsetof(AndroidAdMobController_t1638300356, ___OnRewardedVideoAdOpened_16)); }
	inline Action_t3226471752 * get_OnRewardedVideoAdOpened_16() const { return ___OnRewardedVideoAdOpened_16; }
	inline Action_t3226471752 ** get_address_of_OnRewardedVideoAdOpened_16() { return &___OnRewardedVideoAdOpened_16; }
	inline void set_OnRewardedVideoAdOpened_16(Action_t3226471752 * value)
	{
		___OnRewardedVideoAdOpened_16 = value;
		Il2CppCodeGenWriteBarrier(&___OnRewardedVideoAdOpened_16, value);
	}

	inline static int32_t get_offset_of_OnRewardedVideoStarted_17() { return static_cast<int32_t>(offsetof(AndroidAdMobController_t1638300356, ___OnRewardedVideoStarted_17)); }
	inline Action_t3226471752 * get_OnRewardedVideoStarted_17() const { return ___OnRewardedVideoStarted_17; }
	inline Action_t3226471752 ** get_address_of_OnRewardedVideoStarted_17() { return &___OnRewardedVideoStarted_17; }
	inline void set_OnRewardedVideoStarted_17(Action_t3226471752 * value)
	{
		___OnRewardedVideoStarted_17 = value;
		Il2CppCodeGenWriteBarrier(&___OnRewardedVideoStarted_17, value);
	}

	inline static int32_t get_offset_of_OnInterstitialLoaded_18() { return static_cast<int32_t>(offsetof(AndroidAdMobController_t1638300356, ___OnInterstitialLoaded_18)); }
	inline Action_t3226471752 * get_OnInterstitialLoaded_18() const { return ___OnInterstitialLoaded_18; }
	inline Action_t3226471752 ** get_address_of_OnInterstitialLoaded_18() { return &___OnInterstitialLoaded_18; }
	inline void set_OnInterstitialLoaded_18(Action_t3226471752 * value)
	{
		___OnInterstitialLoaded_18 = value;
		Il2CppCodeGenWriteBarrier(&___OnInterstitialLoaded_18, value);
	}

	inline static int32_t get_offset_of_OnInterstitialFailedLoading_19() { return static_cast<int32_t>(offsetof(AndroidAdMobController_t1638300356, ___OnInterstitialFailedLoading_19)); }
	inline Action_t3226471752 * get_OnInterstitialFailedLoading_19() const { return ___OnInterstitialFailedLoading_19; }
	inline Action_t3226471752 ** get_address_of_OnInterstitialFailedLoading_19() { return &___OnInterstitialFailedLoading_19; }
	inline void set_OnInterstitialFailedLoading_19(Action_t3226471752 * value)
	{
		___OnInterstitialFailedLoading_19 = value;
		Il2CppCodeGenWriteBarrier(&___OnInterstitialFailedLoading_19, value);
	}

	inline static int32_t get_offset_of_OnInterstitialOpened_20() { return static_cast<int32_t>(offsetof(AndroidAdMobController_t1638300356, ___OnInterstitialOpened_20)); }
	inline Action_t3226471752 * get_OnInterstitialOpened_20() const { return ___OnInterstitialOpened_20; }
	inline Action_t3226471752 ** get_address_of_OnInterstitialOpened_20() { return &___OnInterstitialOpened_20; }
	inline void set_OnInterstitialOpened_20(Action_t3226471752 * value)
	{
		___OnInterstitialOpened_20 = value;
		Il2CppCodeGenWriteBarrier(&___OnInterstitialOpened_20, value);
	}

	inline static int32_t get_offset_of_OnInterstitialClosed_21() { return static_cast<int32_t>(offsetof(AndroidAdMobController_t1638300356, ___OnInterstitialClosed_21)); }
	inline Action_t3226471752 * get_OnInterstitialClosed_21() const { return ___OnInterstitialClosed_21; }
	inline Action_t3226471752 ** get_address_of_OnInterstitialClosed_21() { return &___OnInterstitialClosed_21; }
	inline void set_OnInterstitialClosed_21(Action_t3226471752 * value)
	{
		___OnInterstitialClosed_21 = value;
		Il2CppCodeGenWriteBarrier(&___OnInterstitialClosed_21, value);
	}

	inline static int32_t get_offset_of_OnInterstitialLeftApplication_22() { return static_cast<int32_t>(offsetof(AndroidAdMobController_t1638300356, ___OnInterstitialLeftApplication_22)); }
	inline Action_t3226471752 * get_OnInterstitialLeftApplication_22() const { return ___OnInterstitialLeftApplication_22; }
	inline Action_t3226471752 ** get_address_of_OnInterstitialLeftApplication_22() { return &___OnInterstitialLeftApplication_22; }
	inline void set_OnInterstitialLeftApplication_22(Action_t3226471752 * value)
	{
		___OnInterstitialLeftApplication_22 = value;
		Il2CppCodeGenWriteBarrier(&___OnInterstitialLeftApplication_22, value);
	}

	inline static int32_t get_offset_of_OnAdInAppRequest_23() { return static_cast<int32_t>(offsetof(AndroidAdMobController_t1638300356, ___OnAdInAppRequest_23)); }
	inline Action_1_t1831019615 * get_OnAdInAppRequest_23() const { return ___OnAdInAppRequest_23; }
	inline Action_1_t1831019615 ** get_address_of_OnAdInAppRequest_23() { return &___OnAdInAppRequest_23; }
	inline void set_OnAdInAppRequest_23(Action_1_t1831019615 * value)
	{
		___OnAdInAppRequest_23 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdInAppRequest_23, value);
	}

	inline static int32_t get_offset_of__InterstitialShowOnLoad_25() { return static_cast<int32_t>(offsetof(AndroidAdMobController_t1638300356, ____InterstitialShowOnLoad_25)); }
	inline bool get__InterstitialShowOnLoad_25() const { return ____InterstitialShowOnLoad_25; }
	inline bool* get_address_of__InterstitialShowOnLoad_25() { return &____InterstitialShowOnLoad_25; }
	inline void set__InterstitialShowOnLoad_25(bool value)
	{
		____InterstitialShowOnLoad_25 = value;
	}

	inline static int32_t get_offset_of__RewardedVideoShowOnLoad_26() { return static_cast<int32_t>(offsetof(AndroidAdMobController_t1638300356, ____RewardedVideoShowOnLoad_26)); }
	inline bool get__RewardedVideoShowOnLoad_26() const { return ____RewardedVideoShowOnLoad_26; }
	inline bool* get_address_of__RewardedVideoShowOnLoad_26() { return &____RewardedVideoShowOnLoad_26; }
	inline void set__RewardedVideoShowOnLoad_26(bool value)
	{
		____RewardedVideoShowOnLoad_26 = value;
	}
};

struct AndroidAdMobController_t1638300356_StaticFields
{
public:
	// System.Action`2<System.String,System.Int32> AndroidAdMobController::<>f__am$cache0
	Action_2_t4277199140 * ___U3CU3Ef__amU24cache0_27;
	// System.Action AndroidAdMobController::<>f__am$cache1
	Action_t3226471752 * ___U3CU3Ef__amU24cache1_28;
	// System.Action`1<System.Int32> AndroidAdMobController::<>f__am$cache2
	Action_1_t1873676830 * ___U3CU3Ef__amU24cache2_29;
	// System.Action AndroidAdMobController::<>f__am$cache3
	Action_t3226471752 * ___U3CU3Ef__amU24cache3_30;
	// System.Action AndroidAdMobController::<>f__am$cache4
	Action_t3226471752 * ___U3CU3Ef__amU24cache4_31;
	// System.Action AndroidAdMobController::<>f__am$cache5
	Action_t3226471752 * ___U3CU3Ef__amU24cache5_32;
	// System.Action AndroidAdMobController::<>f__am$cache6
	Action_t3226471752 * ___U3CU3Ef__amU24cache6_33;
	// System.Action AndroidAdMobController::<>f__am$cache7
	Action_t3226471752 * ___U3CU3Ef__amU24cache7_34;
	// System.Action AndroidAdMobController::<>f__am$cache8
	Action_t3226471752 * ___U3CU3Ef__amU24cache8_35;
	// System.Action AndroidAdMobController::<>f__am$cache9
	Action_t3226471752 * ___U3CU3Ef__amU24cache9_36;
	// System.Action AndroidAdMobController::<>f__am$cacheA
	Action_t3226471752 * ___U3CU3Ef__amU24cacheA_37;
	// System.Action AndroidAdMobController::<>f__am$cacheB
	Action_t3226471752 * ___U3CU3Ef__amU24cacheB_38;
	// System.Action`1<System.String> AndroidAdMobController::<>f__am$cacheC
	Action_1_t1831019615 * ___U3CU3Ef__amU24cacheC_39;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_27() { return static_cast<int32_t>(offsetof(AndroidAdMobController_t1638300356_StaticFields, ___U3CU3Ef__amU24cache0_27)); }
	inline Action_2_t4277199140 * get_U3CU3Ef__amU24cache0_27() const { return ___U3CU3Ef__amU24cache0_27; }
	inline Action_2_t4277199140 ** get_address_of_U3CU3Ef__amU24cache0_27() { return &___U3CU3Ef__amU24cache0_27; }
	inline void set_U3CU3Ef__amU24cache0_27(Action_2_t4277199140 * value)
	{
		___U3CU3Ef__amU24cache0_27 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_27, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_28() { return static_cast<int32_t>(offsetof(AndroidAdMobController_t1638300356_StaticFields, ___U3CU3Ef__amU24cache1_28)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cache1_28() const { return ___U3CU3Ef__amU24cache1_28; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cache1_28() { return &___U3CU3Ef__amU24cache1_28; }
	inline void set_U3CU3Ef__amU24cache1_28(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cache1_28 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_28, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_29() { return static_cast<int32_t>(offsetof(AndroidAdMobController_t1638300356_StaticFields, ___U3CU3Ef__amU24cache2_29)); }
	inline Action_1_t1873676830 * get_U3CU3Ef__amU24cache2_29() const { return ___U3CU3Ef__amU24cache2_29; }
	inline Action_1_t1873676830 ** get_address_of_U3CU3Ef__amU24cache2_29() { return &___U3CU3Ef__amU24cache2_29; }
	inline void set_U3CU3Ef__amU24cache2_29(Action_1_t1873676830 * value)
	{
		___U3CU3Ef__amU24cache2_29 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_29, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_30() { return static_cast<int32_t>(offsetof(AndroidAdMobController_t1638300356_StaticFields, ___U3CU3Ef__amU24cache3_30)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cache3_30() const { return ___U3CU3Ef__amU24cache3_30; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cache3_30() { return &___U3CU3Ef__amU24cache3_30; }
	inline void set_U3CU3Ef__amU24cache3_30(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cache3_30 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache3_30, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_31() { return static_cast<int32_t>(offsetof(AndroidAdMobController_t1638300356_StaticFields, ___U3CU3Ef__amU24cache4_31)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cache4_31() const { return ___U3CU3Ef__amU24cache4_31; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cache4_31() { return &___U3CU3Ef__amU24cache4_31; }
	inline void set_U3CU3Ef__amU24cache4_31(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cache4_31 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache4_31, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache5_32() { return static_cast<int32_t>(offsetof(AndroidAdMobController_t1638300356_StaticFields, ___U3CU3Ef__amU24cache5_32)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cache5_32() const { return ___U3CU3Ef__amU24cache5_32; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cache5_32() { return &___U3CU3Ef__amU24cache5_32; }
	inline void set_U3CU3Ef__amU24cache5_32(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cache5_32 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache5_32, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache6_33() { return static_cast<int32_t>(offsetof(AndroidAdMobController_t1638300356_StaticFields, ___U3CU3Ef__amU24cache6_33)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cache6_33() const { return ___U3CU3Ef__amU24cache6_33; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cache6_33() { return &___U3CU3Ef__amU24cache6_33; }
	inline void set_U3CU3Ef__amU24cache6_33(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cache6_33 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache6_33, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache7_34() { return static_cast<int32_t>(offsetof(AndroidAdMobController_t1638300356_StaticFields, ___U3CU3Ef__amU24cache7_34)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cache7_34() const { return ___U3CU3Ef__amU24cache7_34; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cache7_34() { return &___U3CU3Ef__amU24cache7_34; }
	inline void set_U3CU3Ef__amU24cache7_34(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cache7_34 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache7_34, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache8_35() { return static_cast<int32_t>(offsetof(AndroidAdMobController_t1638300356_StaticFields, ___U3CU3Ef__amU24cache8_35)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cache8_35() const { return ___U3CU3Ef__amU24cache8_35; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cache8_35() { return &___U3CU3Ef__amU24cache8_35; }
	inline void set_U3CU3Ef__amU24cache8_35(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cache8_35 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache8_35, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache9_36() { return static_cast<int32_t>(offsetof(AndroidAdMobController_t1638300356_StaticFields, ___U3CU3Ef__amU24cache9_36)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cache9_36() const { return ___U3CU3Ef__amU24cache9_36; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cache9_36() { return &___U3CU3Ef__amU24cache9_36; }
	inline void set_U3CU3Ef__amU24cache9_36(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cache9_36 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache9_36, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheA_37() { return static_cast<int32_t>(offsetof(AndroidAdMobController_t1638300356_StaticFields, ___U3CU3Ef__amU24cacheA_37)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cacheA_37() const { return ___U3CU3Ef__amU24cacheA_37; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cacheA_37() { return &___U3CU3Ef__amU24cacheA_37; }
	inline void set_U3CU3Ef__amU24cacheA_37(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cacheA_37 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheA_37, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_38() { return static_cast<int32_t>(offsetof(AndroidAdMobController_t1638300356_StaticFields, ___U3CU3Ef__amU24cacheB_38)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cacheB_38() const { return ___U3CU3Ef__amU24cacheB_38; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cacheB_38() { return &___U3CU3Ef__amU24cacheB_38; }
	inline void set_U3CU3Ef__amU24cacheB_38(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cacheB_38 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheB_38, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheC_39() { return static_cast<int32_t>(offsetof(AndroidAdMobController_t1638300356_StaticFields, ___U3CU3Ef__amU24cacheC_39)); }
	inline Action_1_t1831019615 * get_U3CU3Ef__amU24cacheC_39() const { return ___U3CU3Ef__amU24cacheC_39; }
	inline Action_1_t1831019615 ** get_address_of_U3CU3Ef__amU24cacheC_39() { return &___U3CU3Ef__amU24cacheC_39; }
	inline void set_U3CU3Ef__amU24cacheC_39(Action_1_t1831019615 * value)
	{
		___U3CU3Ef__amU24cacheC_39 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheC_39, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
