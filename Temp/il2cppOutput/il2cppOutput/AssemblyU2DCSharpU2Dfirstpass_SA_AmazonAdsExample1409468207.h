#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA_AmazonAdsExample
struct  SA_AmazonAdsExample_t1409468207  : public MonoBehaviour_t1158329972
{
public:
	// System.String SA_AmazonAdsExample::api_key
	String_t* ___api_key_2;
	// System.Boolean SA_AmazonAdsExample::isTestMode
	bool ___isTestMode_3;
	// System.Single SA_AmazonAdsExample::RefreshInterval
	float ___RefreshInterval_5;
	// System.Boolean SA_AmazonAdsExample::IsBannerCreated
	bool ___IsBannerCreated_6;
	// System.String SA_AmazonAdsExample::message
	String_t* ___message_7;
	// System.Int32 SA_AmazonAdsExample::bannerId
	int32_t ___bannerId_8;

public:
	inline static int32_t get_offset_of_api_key_2() { return static_cast<int32_t>(offsetof(SA_AmazonAdsExample_t1409468207, ___api_key_2)); }
	inline String_t* get_api_key_2() const { return ___api_key_2; }
	inline String_t** get_address_of_api_key_2() { return &___api_key_2; }
	inline void set_api_key_2(String_t* value)
	{
		___api_key_2 = value;
		Il2CppCodeGenWriteBarrier(&___api_key_2, value);
	}

	inline static int32_t get_offset_of_isTestMode_3() { return static_cast<int32_t>(offsetof(SA_AmazonAdsExample_t1409468207, ___isTestMode_3)); }
	inline bool get_isTestMode_3() const { return ___isTestMode_3; }
	inline bool* get_address_of_isTestMode_3() { return &___isTestMode_3; }
	inline void set_isTestMode_3(bool value)
	{
		___isTestMode_3 = value;
	}

	inline static int32_t get_offset_of_RefreshInterval_5() { return static_cast<int32_t>(offsetof(SA_AmazonAdsExample_t1409468207, ___RefreshInterval_5)); }
	inline float get_RefreshInterval_5() const { return ___RefreshInterval_5; }
	inline float* get_address_of_RefreshInterval_5() { return &___RefreshInterval_5; }
	inline void set_RefreshInterval_5(float value)
	{
		___RefreshInterval_5 = value;
	}

	inline static int32_t get_offset_of_IsBannerCreated_6() { return static_cast<int32_t>(offsetof(SA_AmazonAdsExample_t1409468207, ___IsBannerCreated_6)); }
	inline bool get_IsBannerCreated_6() const { return ___IsBannerCreated_6; }
	inline bool* get_address_of_IsBannerCreated_6() { return &___IsBannerCreated_6; }
	inline void set_IsBannerCreated_6(bool value)
	{
		___IsBannerCreated_6 = value;
	}

	inline static int32_t get_offset_of_message_7() { return static_cast<int32_t>(offsetof(SA_AmazonAdsExample_t1409468207, ___message_7)); }
	inline String_t* get_message_7() const { return ___message_7; }
	inline String_t** get_address_of_message_7() { return &___message_7; }
	inline void set_message_7(String_t* value)
	{
		___message_7 = value;
		Il2CppCodeGenWriteBarrier(&___message_7, value);
	}

	inline static int32_t get_offset_of_bannerId_8() { return static_cast<int32_t>(offsetof(SA_AmazonAdsExample_t1409468207, ___bannerId_8)); }
	inline int32_t get_bannerId_8() const { return ___bannerId_8; }
	inline int32_t* get_address_of_bannerId_8() { return &___bannerId_8; }
	inline void set_bannerId_8(int32_t value)
	{
		___bannerId_8 = value;
	}
};

struct SA_AmazonAdsExample_t1409468207_StaticFields
{
public:
	// System.Boolean SA_AmazonAdsExample::isInterstitialLoaded
	bool ___isInterstitialLoaded_4;

public:
	inline static int32_t get_offset_of_isInterstitialLoaded_4() { return static_cast<int32_t>(offsetof(SA_AmazonAdsExample_t1409468207_StaticFields, ___isInterstitialLoaded_4)); }
	inline bool get_isInterstitialLoaded_4() const { return ___isInterstitialLoaded_4; }
	inline bool* get_address_of_isInterstitialLoaded_4() { return &___isInterstitialLoaded_4; }
	inline void set_isInterstitialLoaded_4(bool value)
	{
		___isInterstitialLoaded_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
