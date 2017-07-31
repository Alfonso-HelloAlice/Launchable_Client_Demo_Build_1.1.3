#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_AMN_Singleton_1_gen2099775630.h"

// System.Action`1<AMN_InterstitialDataResult>
struct Action_1_t1884830908;
// System.Action`1<AMN_InterstitialDismissedResult>
struct Action_1_t1584709077;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.Int32,AmazonAdBanner>
struct Dictionary_2_t3345326472;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA_AmazonAdsManager
struct  SA_AmazonAdsManager_t822457432  : public AMN_Singleton_1_t2099775630
{
public:
	// System.Action`1<AMN_InterstitialDataResult> SA_AmazonAdsManager::OnInterstitialDataReceived
	Action_1_t1884830908 * ___OnInterstitialDataReceived_4;
	// System.Action`1<AMN_InterstitialDismissedResult> SA_AmazonAdsManager::OnInterstitialDismissed
	Action_1_t1584709077 * ___OnInterstitialDismissed_5;
	// System.Boolean SA_AmazonAdsManager::_isInitialized
	bool ____isInitialized_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,AmazonAdBanner> SA_AmazonAdsManager::_banners
	Dictionary_2_t3345326472 * ____banners_8;

public:
	inline static int32_t get_offset_of_OnInterstitialDataReceived_4() { return static_cast<int32_t>(offsetof(SA_AmazonAdsManager_t822457432, ___OnInterstitialDataReceived_4)); }
	inline Action_1_t1884830908 * get_OnInterstitialDataReceived_4() const { return ___OnInterstitialDataReceived_4; }
	inline Action_1_t1884830908 ** get_address_of_OnInterstitialDataReceived_4() { return &___OnInterstitialDataReceived_4; }
	inline void set_OnInterstitialDataReceived_4(Action_1_t1884830908 * value)
	{
		___OnInterstitialDataReceived_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnInterstitialDataReceived_4, value);
	}

	inline static int32_t get_offset_of_OnInterstitialDismissed_5() { return static_cast<int32_t>(offsetof(SA_AmazonAdsManager_t822457432, ___OnInterstitialDismissed_5)); }
	inline Action_1_t1584709077 * get_OnInterstitialDismissed_5() const { return ___OnInterstitialDismissed_5; }
	inline Action_1_t1584709077 ** get_address_of_OnInterstitialDismissed_5() { return &___OnInterstitialDismissed_5; }
	inline void set_OnInterstitialDismissed_5(Action_1_t1584709077 * value)
	{
		___OnInterstitialDismissed_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnInterstitialDismissed_5, value);
	}

	inline static int32_t get_offset_of__isInitialized_7() { return static_cast<int32_t>(offsetof(SA_AmazonAdsManager_t822457432, ____isInitialized_7)); }
	inline bool get__isInitialized_7() const { return ____isInitialized_7; }
	inline bool* get_address_of__isInitialized_7() { return &____isInitialized_7; }
	inline void set__isInitialized_7(bool value)
	{
		____isInitialized_7 = value;
	}

	inline static int32_t get_offset_of__banners_8() { return static_cast<int32_t>(offsetof(SA_AmazonAdsManager_t822457432, ____banners_8)); }
	inline Dictionary_2_t3345326472 * get__banners_8() const { return ____banners_8; }
	inline Dictionary_2_t3345326472 ** get_address_of__banners_8() { return &____banners_8; }
	inline void set__banners_8(Dictionary_2_t3345326472 * value)
	{
		____banners_8 = value;
		Il2CppCodeGenWriteBarrier(&____banners_8, value);
	}
};

struct SA_AmazonAdsManager_t822457432_StaticFields
{
public:
	// System.Action`1<AMN_InterstitialDataResult> SA_AmazonAdsManager::<>f__am$cache0
	Action_1_t1884830908 * ___U3CU3Ef__amU24cache0_9;
	// System.Action`1<AMN_InterstitialDismissedResult> SA_AmazonAdsManager::<>f__am$cache1
	Action_1_t1584709077 * ___U3CU3Ef__amU24cache1_10;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_9() { return static_cast<int32_t>(offsetof(SA_AmazonAdsManager_t822457432_StaticFields, ___U3CU3Ef__amU24cache0_9)); }
	inline Action_1_t1884830908 * get_U3CU3Ef__amU24cache0_9() const { return ___U3CU3Ef__amU24cache0_9; }
	inline Action_1_t1884830908 ** get_address_of_U3CU3Ef__amU24cache0_9() { return &___U3CU3Ef__amU24cache0_9; }
	inline void set_U3CU3Ef__amU24cache0_9(Action_1_t1884830908 * value)
	{
		___U3CU3Ef__amU24cache0_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_9, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_10() { return static_cast<int32_t>(offsetof(SA_AmazonAdsManager_t822457432_StaticFields, ___U3CU3Ef__amU24cache1_10)); }
	inline Action_1_t1584709077 * get_U3CU3Ef__amU24cache1_10() const { return ___U3CU3Ef__amU24cache1_10; }
	inline Action_1_t1584709077 ** get_address_of_U3CU3Ef__amU24cache1_10() { return &___U3CU3Ef__amU24cache1_10; }
	inline void set_U3CU3Ef__amU24cache1_10(Action_1_t1584709077 * value)
	{
		___U3CU3Ef__amU24cache1_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
