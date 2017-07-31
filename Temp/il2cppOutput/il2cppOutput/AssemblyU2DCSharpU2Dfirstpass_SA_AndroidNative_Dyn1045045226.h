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
// SA.AndroidNative.DynamicLinks.Link/AndroidParameters
struct AndroidParameters_t3662895640;
// SA.AndroidNative.DynamicLinks.Link/IosParameters
struct IosParameters_t598691298;
// SA.AndroidNative.DynamicLinks.Link/GoogleAnalyticsParameters
struct GoogleAnalyticsParameters_t3669567738;
// SA.AndroidNative.DynamicLinks.Link/ItunesConnectAnalyticsParameters
struct ItunesConnectAnalyticsParameters_t1457136423;
// SA.AndroidNative.DynamicLinks.Link/SocialMetaTagParameters
struct SocialMetaTagParameters_t3592555559;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.AndroidNative.DynamicLinks.Link
struct  Link_t1045045226  : public Il2CppObject
{
public:
	// System.String SA.AndroidNative.DynamicLinks.Link::url
	String_t* ___url_0;
	// System.String SA.AndroidNative.DynamicLinks.Link::domain
	String_t* ___domain_1;
	// SA.AndroidNative.DynamicLinks.Link/AndroidParameters SA.AndroidNative.DynamicLinks.Link::androidParams
	AndroidParameters_t3662895640 * ___androidParams_2;
	// SA.AndroidNative.DynamicLinks.Link/IosParameters SA.AndroidNative.DynamicLinks.Link::iosParams
	IosParameters_t598691298 * ___iosParams_3;
	// SA.AndroidNative.DynamicLinks.Link/GoogleAnalyticsParameters SA.AndroidNative.DynamicLinks.Link::googleAnalyticsParams
	GoogleAnalyticsParameters_t3669567738 * ___googleAnalyticsParams_4;
	// SA.AndroidNative.DynamicLinks.Link/ItunesConnectAnalyticsParameters SA.AndroidNative.DynamicLinks.Link::itunesAnalyticsParams
	ItunesConnectAnalyticsParameters_t1457136423 * ___itunesAnalyticsParams_5;
	// SA.AndroidNative.DynamicLinks.Link/SocialMetaTagParameters SA.AndroidNative.DynamicLinks.Link::socialMetaTagParams
	SocialMetaTagParameters_t3592555559 * ___socialMetaTagParams_6;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(Link_t1045045226, ___url_0)); }
	inline String_t* get_url_0() const { return ___url_0; }
	inline String_t** get_address_of_url_0() { return &___url_0; }
	inline void set_url_0(String_t* value)
	{
		___url_0 = value;
		Il2CppCodeGenWriteBarrier(&___url_0, value);
	}

	inline static int32_t get_offset_of_domain_1() { return static_cast<int32_t>(offsetof(Link_t1045045226, ___domain_1)); }
	inline String_t* get_domain_1() const { return ___domain_1; }
	inline String_t** get_address_of_domain_1() { return &___domain_1; }
	inline void set_domain_1(String_t* value)
	{
		___domain_1 = value;
		Il2CppCodeGenWriteBarrier(&___domain_1, value);
	}

	inline static int32_t get_offset_of_androidParams_2() { return static_cast<int32_t>(offsetof(Link_t1045045226, ___androidParams_2)); }
	inline AndroidParameters_t3662895640 * get_androidParams_2() const { return ___androidParams_2; }
	inline AndroidParameters_t3662895640 ** get_address_of_androidParams_2() { return &___androidParams_2; }
	inline void set_androidParams_2(AndroidParameters_t3662895640 * value)
	{
		___androidParams_2 = value;
		Il2CppCodeGenWriteBarrier(&___androidParams_2, value);
	}

	inline static int32_t get_offset_of_iosParams_3() { return static_cast<int32_t>(offsetof(Link_t1045045226, ___iosParams_3)); }
	inline IosParameters_t598691298 * get_iosParams_3() const { return ___iosParams_3; }
	inline IosParameters_t598691298 ** get_address_of_iosParams_3() { return &___iosParams_3; }
	inline void set_iosParams_3(IosParameters_t598691298 * value)
	{
		___iosParams_3 = value;
		Il2CppCodeGenWriteBarrier(&___iosParams_3, value);
	}

	inline static int32_t get_offset_of_googleAnalyticsParams_4() { return static_cast<int32_t>(offsetof(Link_t1045045226, ___googleAnalyticsParams_4)); }
	inline GoogleAnalyticsParameters_t3669567738 * get_googleAnalyticsParams_4() const { return ___googleAnalyticsParams_4; }
	inline GoogleAnalyticsParameters_t3669567738 ** get_address_of_googleAnalyticsParams_4() { return &___googleAnalyticsParams_4; }
	inline void set_googleAnalyticsParams_4(GoogleAnalyticsParameters_t3669567738 * value)
	{
		___googleAnalyticsParams_4 = value;
		Il2CppCodeGenWriteBarrier(&___googleAnalyticsParams_4, value);
	}

	inline static int32_t get_offset_of_itunesAnalyticsParams_5() { return static_cast<int32_t>(offsetof(Link_t1045045226, ___itunesAnalyticsParams_5)); }
	inline ItunesConnectAnalyticsParameters_t1457136423 * get_itunesAnalyticsParams_5() const { return ___itunesAnalyticsParams_5; }
	inline ItunesConnectAnalyticsParameters_t1457136423 ** get_address_of_itunesAnalyticsParams_5() { return &___itunesAnalyticsParams_5; }
	inline void set_itunesAnalyticsParams_5(ItunesConnectAnalyticsParameters_t1457136423 * value)
	{
		___itunesAnalyticsParams_5 = value;
		Il2CppCodeGenWriteBarrier(&___itunesAnalyticsParams_5, value);
	}

	inline static int32_t get_offset_of_socialMetaTagParams_6() { return static_cast<int32_t>(offsetof(Link_t1045045226, ___socialMetaTagParams_6)); }
	inline SocialMetaTagParameters_t3592555559 * get_socialMetaTagParams_6() const { return ___socialMetaTagParams_6; }
	inline SocialMetaTagParameters_t3592555559 ** get_address_of_socialMetaTagParams_6() { return &___socialMetaTagParams_6; }
	inline void set_socialMetaTagParams_6(SocialMetaTagParameters_t3592555559 * value)
	{
		___socialMetaTagParams_6 = value;
		Il2CppCodeGenWriteBarrier(&___socialMetaTagParams_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
