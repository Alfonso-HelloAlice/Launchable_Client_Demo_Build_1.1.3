#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.AndroidNative.DynamicLinks.Link/ItunesConnectAnalyticsParameters
struct  ItunesConnectAnalyticsParameters_t1457136423  : public Il2CppObject
{
public:
	// System.String SA.AndroidNative.DynamicLinks.Link/ItunesConnectAnalyticsParameters::providerToken
	String_t* ___providerToken_0;
	// System.String SA.AndroidNative.DynamicLinks.Link/ItunesConnectAnalyticsParameters::affiliateToken
	String_t* ___affiliateToken_1;
	// System.String SA.AndroidNative.DynamicLinks.Link/ItunesConnectAnalyticsParameters::campaignToken
	String_t* ___campaignToken_2;

public:
	inline static int32_t get_offset_of_providerToken_0() { return static_cast<int32_t>(offsetof(ItunesConnectAnalyticsParameters_t1457136423, ___providerToken_0)); }
	inline String_t* get_providerToken_0() const { return ___providerToken_0; }
	inline String_t** get_address_of_providerToken_0() { return &___providerToken_0; }
	inline void set_providerToken_0(String_t* value)
	{
		___providerToken_0 = value;
		Il2CppCodeGenWriteBarrier(&___providerToken_0, value);
	}

	inline static int32_t get_offset_of_affiliateToken_1() { return static_cast<int32_t>(offsetof(ItunesConnectAnalyticsParameters_t1457136423, ___affiliateToken_1)); }
	inline String_t* get_affiliateToken_1() const { return ___affiliateToken_1; }
	inline String_t** get_address_of_affiliateToken_1() { return &___affiliateToken_1; }
	inline void set_affiliateToken_1(String_t* value)
	{
		___affiliateToken_1 = value;
		Il2CppCodeGenWriteBarrier(&___affiliateToken_1, value);
	}

	inline static int32_t get_offset_of_campaignToken_2() { return static_cast<int32_t>(offsetof(ItunesConnectAnalyticsParameters_t1457136423, ___campaignToken_2)); }
	inline String_t* get_campaignToken_2() const { return ___campaignToken_2; }
	inline String_t** get_address_of_campaignToken_2() { return &___campaignToken_2; }
	inline void set_campaignToken_2(String_t* value)
	{
		___campaignToken_2 = value;
		Il2CppCodeGenWriteBarrier(&___campaignToken_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
