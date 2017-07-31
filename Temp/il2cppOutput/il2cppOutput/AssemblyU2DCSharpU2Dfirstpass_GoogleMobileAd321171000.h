#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// GoogleMobileAdInterface
struct GoogleMobileAdInterface_t2417383095;
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

// GoogleMobileAd
struct  GoogleMobileAd_t321171000  : public Il2CppObject
{
public:

public:
};

struct GoogleMobileAd_t321171000_StaticFields
{
public:
	// GoogleMobileAdInterface GoogleMobileAd::controller
	Il2CppObject * ___controller_0;
	// System.Boolean GoogleMobileAd::_IsInited
	bool ____IsInited_1;
	// System.Boolean GoogleMobileAd::_IsInterstitialReady
	bool ____IsInterstitialReady_2;
	// System.Boolean GoogleMobileAd::_IsRewardedVideoReady
	bool ____IsRewardedVideoReady_3;
	// System.Action GoogleMobileAd::OnInterstitialLoaded
	Action_t3226471752 * ___OnInterstitialLoaded_4;
	// System.Action GoogleMobileAd::OnInterstitialFailedLoading
	Action_t3226471752 * ___OnInterstitialFailedLoading_5;
	// System.Action GoogleMobileAd::OnInterstitialOpened
	Action_t3226471752 * ___OnInterstitialOpened_6;
	// System.Action GoogleMobileAd::OnInterstitialClosed
	Action_t3226471752 * ___OnInterstitialClosed_7;
	// System.Action GoogleMobileAd::OnInterstitialLeftApplication
	Action_t3226471752 * ___OnInterstitialLeftApplication_8;
	// System.Action`1<System.String> GoogleMobileAd::OnAdInAppRequest
	Action_1_t1831019615 * ___OnAdInAppRequest_9;
	// System.Action`2<System.String,System.Int32> GoogleMobileAd::OnRewarded
	Action_2_t4277199140 * ___OnRewarded_10;
	// System.Action GoogleMobileAd::OnRewardedVideoAdClosed
	Action_t3226471752 * ___OnRewardedVideoAdClosed_11;
	// System.Action`1<System.Int32> GoogleMobileAd::OnRewardedVideoAdFailedToLoad
	Action_1_t1873676830 * ___OnRewardedVideoAdFailedToLoad_12;
	// System.Action GoogleMobileAd::OnRewardedVideoAdLeftApplication
	Action_t3226471752 * ___OnRewardedVideoAdLeftApplication_13;
	// System.Action GoogleMobileAd::OnRewardedVideoLoaded
	Action_t3226471752 * ___OnRewardedVideoLoaded_14;
	// System.Action GoogleMobileAd::OnRewardedVideoAdOpened
	Action_t3226471752 * ___OnRewardedVideoAdOpened_15;
	// System.Action GoogleMobileAd::OnRewardedVideoStarted
	Action_t3226471752 * ___OnRewardedVideoStarted_16;
	// System.Action GoogleMobileAd::<>f__mg$cache0
	Action_t3226471752 * ___U3CU3Ef__mgU24cache0_17;
	// System.Action GoogleMobileAd::<>f__mg$cache1
	Action_t3226471752 * ___U3CU3Ef__mgU24cache1_18;
	// System.Action GoogleMobileAd::<>f__mg$cache2
	Action_t3226471752 * ___U3CU3Ef__mgU24cache2_19;
	// System.Action GoogleMobileAd::<>f__mg$cache3
	Action_t3226471752 * ___U3CU3Ef__mgU24cache3_20;
	// System.Action GoogleMobileAd::<>f__mg$cache4
	Action_t3226471752 * ___U3CU3Ef__mgU24cache4_21;
	// System.Action`1<System.String> GoogleMobileAd::<>f__mg$cache5
	Action_1_t1831019615 * ___U3CU3Ef__mgU24cache5_22;
	// System.Action`2<System.String,System.Int32> GoogleMobileAd::<>f__mg$cache6
	Action_2_t4277199140 * ___U3CU3Ef__mgU24cache6_23;
	// System.Action GoogleMobileAd::<>f__mg$cache7
	Action_t3226471752 * ___U3CU3Ef__mgU24cache7_24;
	// System.Action`1<System.Int32> GoogleMobileAd::<>f__mg$cache8
	Action_1_t1873676830 * ___U3CU3Ef__mgU24cache8_25;
	// System.Action GoogleMobileAd::<>f__mg$cache9
	Action_t3226471752 * ___U3CU3Ef__mgU24cache9_26;
	// System.Action GoogleMobileAd::<>f__mg$cacheA
	Action_t3226471752 * ___U3CU3Ef__mgU24cacheA_27;
	// System.Action GoogleMobileAd::<>f__mg$cacheB
	Action_t3226471752 * ___U3CU3Ef__mgU24cacheB_28;
	// System.Action GoogleMobileAd::<>f__mg$cacheC
	Action_t3226471752 * ___U3CU3Ef__mgU24cacheC_29;

public:
	inline static int32_t get_offset_of_controller_0() { return static_cast<int32_t>(offsetof(GoogleMobileAd_t321171000_StaticFields, ___controller_0)); }
	inline Il2CppObject * get_controller_0() const { return ___controller_0; }
	inline Il2CppObject ** get_address_of_controller_0() { return &___controller_0; }
	inline void set_controller_0(Il2CppObject * value)
	{
		___controller_0 = value;
		Il2CppCodeGenWriteBarrier(&___controller_0, value);
	}

	inline static int32_t get_offset_of__IsInited_1() { return static_cast<int32_t>(offsetof(GoogleMobileAd_t321171000_StaticFields, ____IsInited_1)); }
	inline bool get__IsInited_1() const { return ____IsInited_1; }
	inline bool* get_address_of__IsInited_1() { return &____IsInited_1; }
	inline void set__IsInited_1(bool value)
	{
		____IsInited_1 = value;
	}

	inline static int32_t get_offset_of__IsInterstitialReady_2() { return static_cast<int32_t>(offsetof(GoogleMobileAd_t321171000_StaticFields, ____IsInterstitialReady_2)); }
	inline bool get__IsInterstitialReady_2() const { return ____IsInterstitialReady_2; }
	inline bool* get_address_of__IsInterstitialReady_2() { return &____IsInterstitialReady_2; }
	inline void set__IsInterstitialReady_2(bool value)
	{
		____IsInterstitialReady_2 = value;
	}

	inline static int32_t get_offset_of__IsRewardedVideoReady_3() { return static_cast<int32_t>(offsetof(GoogleMobileAd_t321171000_StaticFields, ____IsRewardedVideoReady_3)); }
	inline bool get__IsRewardedVideoReady_3() const { return ____IsRewardedVideoReady_3; }
	inline bool* get_address_of__IsRewardedVideoReady_3() { return &____IsRewardedVideoReady_3; }
	inline void set__IsRewardedVideoReady_3(bool value)
	{
		____IsRewardedVideoReady_3 = value;
	}

	inline static int32_t get_offset_of_OnInterstitialLoaded_4() { return static_cast<int32_t>(offsetof(GoogleMobileAd_t321171000_StaticFields, ___OnInterstitialLoaded_4)); }
	inline Action_t3226471752 * get_OnInterstitialLoaded_4() const { return ___OnInterstitialLoaded_4; }
	inline Action_t3226471752 ** get_address_of_OnInterstitialLoaded_4() { return &___OnInterstitialLoaded_4; }
	inline void set_OnInterstitialLoaded_4(Action_t3226471752 * value)
	{
		___OnInterstitialLoaded_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnInterstitialLoaded_4, value);
	}

	inline static int32_t get_offset_of_OnInterstitialFailedLoading_5() { return static_cast<int32_t>(offsetof(GoogleMobileAd_t321171000_StaticFields, ___OnInterstitialFailedLoading_5)); }
	inline Action_t3226471752 * get_OnInterstitialFailedLoading_5() const { return ___OnInterstitialFailedLoading_5; }
	inline Action_t3226471752 ** get_address_of_OnInterstitialFailedLoading_5() { return &___OnInterstitialFailedLoading_5; }
	inline void set_OnInterstitialFailedLoading_5(Action_t3226471752 * value)
	{
		___OnInterstitialFailedLoading_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnInterstitialFailedLoading_5, value);
	}

	inline static int32_t get_offset_of_OnInterstitialOpened_6() { return static_cast<int32_t>(offsetof(GoogleMobileAd_t321171000_StaticFields, ___OnInterstitialOpened_6)); }
	inline Action_t3226471752 * get_OnInterstitialOpened_6() const { return ___OnInterstitialOpened_6; }
	inline Action_t3226471752 ** get_address_of_OnInterstitialOpened_6() { return &___OnInterstitialOpened_6; }
	inline void set_OnInterstitialOpened_6(Action_t3226471752 * value)
	{
		___OnInterstitialOpened_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnInterstitialOpened_6, value);
	}

	inline static int32_t get_offset_of_OnInterstitialClosed_7() { return static_cast<int32_t>(offsetof(GoogleMobileAd_t321171000_StaticFields, ___OnInterstitialClosed_7)); }
	inline Action_t3226471752 * get_OnInterstitialClosed_7() const { return ___OnInterstitialClosed_7; }
	inline Action_t3226471752 ** get_address_of_OnInterstitialClosed_7() { return &___OnInterstitialClosed_7; }
	inline void set_OnInterstitialClosed_7(Action_t3226471752 * value)
	{
		___OnInterstitialClosed_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnInterstitialClosed_7, value);
	}

	inline static int32_t get_offset_of_OnInterstitialLeftApplication_8() { return static_cast<int32_t>(offsetof(GoogleMobileAd_t321171000_StaticFields, ___OnInterstitialLeftApplication_8)); }
	inline Action_t3226471752 * get_OnInterstitialLeftApplication_8() const { return ___OnInterstitialLeftApplication_8; }
	inline Action_t3226471752 ** get_address_of_OnInterstitialLeftApplication_8() { return &___OnInterstitialLeftApplication_8; }
	inline void set_OnInterstitialLeftApplication_8(Action_t3226471752 * value)
	{
		___OnInterstitialLeftApplication_8 = value;
		Il2CppCodeGenWriteBarrier(&___OnInterstitialLeftApplication_8, value);
	}

	inline static int32_t get_offset_of_OnAdInAppRequest_9() { return static_cast<int32_t>(offsetof(GoogleMobileAd_t321171000_StaticFields, ___OnAdInAppRequest_9)); }
	inline Action_1_t1831019615 * get_OnAdInAppRequest_9() const { return ___OnAdInAppRequest_9; }
	inline Action_1_t1831019615 ** get_address_of_OnAdInAppRequest_9() { return &___OnAdInAppRequest_9; }
	inline void set_OnAdInAppRequest_9(Action_1_t1831019615 * value)
	{
		___OnAdInAppRequest_9 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdInAppRequest_9, value);
	}

	inline static int32_t get_offset_of_OnRewarded_10() { return static_cast<int32_t>(offsetof(GoogleMobileAd_t321171000_StaticFields, ___OnRewarded_10)); }
	inline Action_2_t4277199140 * get_OnRewarded_10() const { return ___OnRewarded_10; }
	inline Action_2_t4277199140 ** get_address_of_OnRewarded_10() { return &___OnRewarded_10; }
	inline void set_OnRewarded_10(Action_2_t4277199140 * value)
	{
		___OnRewarded_10 = value;
		Il2CppCodeGenWriteBarrier(&___OnRewarded_10, value);
	}

	inline static int32_t get_offset_of_OnRewardedVideoAdClosed_11() { return static_cast<int32_t>(offsetof(GoogleMobileAd_t321171000_StaticFields, ___OnRewardedVideoAdClosed_11)); }
	inline Action_t3226471752 * get_OnRewardedVideoAdClosed_11() const { return ___OnRewardedVideoAdClosed_11; }
	inline Action_t3226471752 ** get_address_of_OnRewardedVideoAdClosed_11() { return &___OnRewardedVideoAdClosed_11; }
	inline void set_OnRewardedVideoAdClosed_11(Action_t3226471752 * value)
	{
		___OnRewardedVideoAdClosed_11 = value;
		Il2CppCodeGenWriteBarrier(&___OnRewardedVideoAdClosed_11, value);
	}

	inline static int32_t get_offset_of_OnRewardedVideoAdFailedToLoad_12() { return static_cast<int32_t>(offsetof(GoogleMobileAd_t321171000_StaticFields, ___OnRewardedVideoAdFailedToLoad_12)); }
	inline Action_1_t1873676830 * get_OnRewardedVideoAdFailedToLoad_12() const { return ___OnRewardedVideoAdFailedToLoad_12; }
	inline Action_1_t1873676830 ** get_address_of_OnRewardedVideoAdFailedToLoad_12() { return &___OnRewardedVideoAdFailedToLoad_12; }
	inline void set_OnRewardedVideoAdFailedToLoad_12(Action_1_t1873676830 * value)
	{
		___OnRewardedVideoAdFailedToLoad_12 = value;
		Il2CppCodeGenWriteBarrier(&___OnRewardedVideoAdFailedToLoad_12, value);
	}

	inline static int32_t get_offset_of_OnRewardedVideoAdLeftApplication_13() { return static_cast<int32_t>(offsetof(GoogleMobileAd_t321171000_StaticFields, ___OnRewardedVideoAdLeftApplication_13)); }
	inline Action_t3226471752 * get_OnRewardedVideoAdLeftApplication_13() const { return ___OnRewardedVideoAdLeftApplication_13; }
	inline Action_t3226471752 ** get_address_of_OnRewardedVideoAdLeftApplication_13() { return &___OnRewardedVideoAdLeftApplication_13; }
	inline void set_OnRewardedVideoAdLeftApplication_13(Action_t3226471752 * value)
	{
		___OnRewardedVideoAdLeftApplication_13 = value;
		Il2CppCodeGenWriteBarrier(&___OnRewardedVideoAdLeftApplication_13, value);
	}

	inline static int32_t get_offset_of_OnRewardedVideoLoaded_14() { return static_cast<int32_t>(offsetof(GoogleMobileAd_t321171000_StaticFields, ___OnRewardedVideoLoaded_14)); }
	inline Action_t3226471752 * get_OnRewardedVideoLoaded_14() const { return ___OnRewardedVideoLoaded_14; }
	inline Action_t3226471752 ** get_address_of_OnRewardedVideoLoaded_14() { return &___OnRewardedVideoLoaded_14; }
	inline void set_OnRewardedVideoLoaded_14(Action_t3226471752 * value)
	{
		___OnRewardedVideoLoaded_14 = value;
		Il2CppCodeGenWriteBarrier(&___OnRewardedVideoLoaded_14, value);
	}

	inline static int32_t get_offset_of_OnRewardedVideoAdOpened_15() { return static_cast<int32_t>(offsetof(GoogleMobileAd_t321171000_StaticFields, ___OnRewardedVideoAdOpened_15)); }
	inline Action_t3226471752 * get_OnRewardedVideoAdOpened_15() const { return ___OnRewardedVideoAdOpened_15; }
	inline Action_t3226471752 ** get_address_of_OnRewardedVideoAdOpened_15() { return &___OnRewardedVideoAdOpened_15; }
	inline void set_OnRewardedVideoAdOpened_15(Action_t3226471752 * value)
	{
		___OnRewardedVideoAdOpened_15 = value;
		Il2CppCodeGenWriteBarrier(&___OnRewardedVideoAdOpened_15, value);
	}

	inline static int32_t get_offset_of_OnRewardedVideoStarted_16() { return static_cast<int32_t>(offsetof(GoogleMobileAd_t321171000_StaticFields, ___OnRewardedVideoStarted_16)); }
	inline Action_t3226471752 * get_OnRewardedVideoStarted_16() const { return ___OnRewardedVideoStarted_16; }
	inline Action_t3226471752 ** get_address_of_OnRewardedVideoStarted_16() { return &___OnRewardedVideoStarted_16; }
	inline void set_OnRewardedVideoStarted_16(Action_t3226471752 * value)
	{
		___OnRewardedVideoStarted_16 = value;
		Il2CppCodeGenWriteBarrier(&___OnRewardedVideoStarted_16, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_17() { return static_cast<int32_t>(offsetof(GoogleMobileAd_t321171000_StaticFields, ___U3CU3Ef__mgU24cache0_17)); }
	inline Action_t3226471752 * get_U3CU3Ef__mgU24cache0_17() const { return ___U3CU3Ef__mgU24cache0_17; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__mgU24cache0_17() { return &___U3CU3Ef__mgU24cache0_17; }
	inline void set_U3CU3Ef__mgU24cache0_17(Action_t3226471752 * value)
	{
		___U3CU3Ef__mgU24cache0_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_17, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_18() { return static_cast<int32_t>(offsetof(GoogleMobileAd_t321171000_StaticFields, ___U3CU3Ef__mgU24cache1_18)); }
	inline Action_t3226471752 * get_U3CU3Ef__mgU24cache1_18() const { return ___U3CU3Ef__mgU24cache1_18; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__mgU24cache1_18() { return &___U3CU3Ef__mgU24cache1_18; }
	inline void set_U3CU3Ef__mgU24cache1_18(Action_t3226471752 * value)
	{
		___U3CU3Ef__mgU24cache1_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache1_18, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_19() { return static_cast<int32_t>(offsetof(GoogleMobileAd_t321171000_StaticFields, ___U3CU3Ef__mgU24cache2_19)); }
	inline Action_t3226471752 * get_U3CU3Ef__mgU24cache2_19() const { return ___U3CU3Ef__mgU24cache2_19; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__mgU24cache2_19() { return &___U3CU3Ef__mgU24cache2_19; }
	inline void set_U3CU3Ef__mgU24cache2_19(Action_t3226471752 * value)
	{
		___U3CU3Ef__mgU24cache2_19 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache2_19, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_20() { return static_cast<int32_t>(offsetof(GoogleMobileAd_t321171000_StaticFields, ___U3CU3Ef__mgU24cache3_20)); }
	inline Action_t3226471752 * get_U3CU3Ef__mgU24cache3_20() const { return ___U3CU3Ef__mgU24cache3_20; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__mgU24cache3_20() { return &___U3CU3Ef__mgU24cache3_20; }
	inline void set_U3CU3Ef__mgU24cache3_20(Action_t3226471752 * value)
	{
		___U3CU3Ef__mgU24cache3_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache3_20, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_21() { return static_cast<int32_t>(offsetof(GoogleMobileAd_t321171000_StaticFields, ___U3CU3Ef__mgU24cache4_21)); }
	inline Action_t3226471752 * get_U3CU3Ef__mgU24cache4_21() const { return ___U3CU3Ef__mgU24cache4_21; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__mgU24cache4_21() { return &___U3CU3Ef__mgU24cache4_21; }
	inline void set_U3CU3Ef__mgU24cache4_21(Action_t3226471752 * value)
	{
		___U3CU3Ef__mgU24cache4_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache4_21, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5_22() { return static_cast<int32_t>(offsetof(GoogleMobileAd_t321171000_StaticFields, ___U3CU3Ef__mgU24cache5_22)); }
	inline Action_1_t1831019615 * get_U3CU3Ef__mgU24cache5_22() const { return ___U3CU3Ef__mgU24cache5_22; }
	inline Action_1_t1831019615 ** get_address_of_U3CU3Ef__mgU24cache5_22() { return &___U3CU3Ef__mgU24cache5_22; }
	inline void set_U3CU3Ef__mgU24cache5_22(Action_1_t1831019615 * value)
	{
		___U3CU3Ef__mgU24cache5_22 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache5_22, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache6_23() { return static_cast<int32_t>(offsetof(GoogleMobileAd_t321171000_StaticFields, ___U3CU3Ef__mgU24cache6_23)); }
	inline Action_2_t4277199140 * get_U3CU3Ef__mgU24cache6_23() const { return ___U3CU3Ef__mgU24cache6_23; }
	inline Action_2_t4277199140 ** get_address_of_U3CU3Ef__mgU24cache6_23() { return &___U3CU3Ef__mgU24cache6_23; }
	inline void set_U3CU3Ef__mgU24cache6_23(Action_2_t4277199140 * value)
	{
		___U3CU3Ef__mgU24cache6_23 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache6_23, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache7_24() { return static_cast<int32_t>(offsetof(GoogleMobileAd_t321171000_StaticFields, ___U3CU3Ef__mgU24cache7_24)); }
	inline Action_t3226471752 * get_U3CU3Ef__mgU24cache7_24() const { return ___U3CU3Ef__mgU24cache7_24; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__mgU24cache7_24() { return &___U3CU3Ef__mgU24cache7_24; }
	inline void set_U3CU3Ef__mgU24cache7_24(Action_t3226471752 * value)
	{
		___U3CU3Ef__mgU24cache7_24 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache7_24, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache8_25() { return static_cast<int32_t>(offsetof(GoogleMobileAd_t321171000_StaticFields, ___U3CU3Ef__mgU24cache8_25)); }
	inline Action_1_t1873676830 * get_U3CU3Ef__mgU24cache8_25() const { return ___U3CU3Ef__mgU24cache8_25; }
	inline Action_1_t1873676830 ** get_address_of_U3CU3Ef__mgU24cache8_25() { return &___U3CU3Ef__mgU24cache8_25; }
	inline void set_U3CU3Ef__mgU24cache8_25(Action_1_t1873676830 * value)
	{
		___U3CU3Ef__mgU24cache8_25 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache8_25, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache9_26() { return static_cast<int32_t>(offsetof(GoogleMobileAd_t321171000_StaticFields, ___U3CU3Ef__mgU24cache9_26)); }
	inline Action_t3226471752 * get_U3CU3Ef__mgU24cache9_26() const { return ___U3CU3Ef__mgU24cache9_26; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__mgU24cache9_26() { return &___U3CU3Ef__mgU24cache9_26; }
	inline void set_U3CU3Ef__mgU24cache9_26(Action_t3226471752 * value)
	{
		___U3CU3Ef__mgU24cache9_26 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache9_26, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheA_27() { return static_cast<int32_t>(offsetof(GoogleMobileAd_t321171000_StaticFields, ___U3CU3Ef__mgU24cacheA_27)); }
	inline Action_t3226471752 * get_U3CU3Ef__mgU24cacheA_27() const { return ___U3CU3Ef__mgU24cacheA_27; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__mgU24cacheA_27() { return &___U3CU3Ef__mgU24cacheA_27; }
	inline void set_U3CU3Ef__mgU24cacheA_27(Action_t3226471752 * value)
	{
		___U3CU3Ef__mgU24cacheA_27 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cacheA_27, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheB_28() { return static_cast<int32_t>(offsetof(GoogleMobileAd_t321171000_StaticFields, ___U3CU3Ef__mgU24cacheB_28)); }
	inline Action_t3226471752 * get_U3CU3Ef__mgU24cacheB_28() const { return ___U3CU3Ef__mgU24cacheB_28; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__mgU24cacheB_28() { return &___U3CU3Ef__mgU24cacheB_28; }
	inline void set_U3CU3Ef__mgU24cacheB_28(Action_t3226471752 * value)
	{
		___U3CU3Ef__mgU24cacheB_28 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cacheB_28, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheC_29() { return static_cast<int32_t>(offsetof(GoogleMobileAd_t321171000_StaticFields, ___U3CU3Ef__mgU24cacheC_29)); }
	inline Action_t3226471752 * get_U3CU3Ef__mgU24cacheC_29() const { return ___U3CU3Ef__mgU24cacheC_29; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__mgU24cacheC_29() { return &___U3CU3Ef__mgU24cacheC_29; }
	inline void set_U3CU3Ef__mgU24cacheC_29(Action_t3226471752 * value)
	{
		___U3CU3Ef__mgU24cacheC_29 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cacheC_29, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
