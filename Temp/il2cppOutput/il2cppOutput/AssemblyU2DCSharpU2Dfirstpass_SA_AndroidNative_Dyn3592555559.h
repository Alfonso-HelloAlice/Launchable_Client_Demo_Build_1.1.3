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

// SA.AndroidNative.DynamicLinks.Link/SocialMetaTagParameters
struct  SocialMetaTagParameters_t3592555559  : public Il2CppObject
{
public:
	// System.String SA.AndroidNative.DynamicLinks.Link/SocialMetaTagParameters::title
	String_t* ___title_0;
	// System.String SA.AndroidNative.DynamicLinks.Link/SocialMetaTagParameters::description
	String_t* ___description_1;
	// System.String SA.AndroidNative.DynamicLinks.Link/SocialMetaTagParameters::imageUrl
	String_t* ___imageUrl_2;

public:
	inline static int32_t get_offset_of_title_0() { return static_cast<int32_t>(offsetof(SocialMetaTagParameters_t3592555559, ___title_0)); }
	inline String_t* get_title_0() const { return ___title_0; }
	inline String_t** get_address_of_title_0() { return &___title_0; }
	inline void set_title_0(String_t* value)
	{
		___title_0 = value;
		Il2CppCodeGenWriteBarrier(&___title_0, value);
	}

	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(SocialMetaTagParameters_t3592555559, ___description_1)); }
	inline String_t* get_description_1() const { return ___description_1; }
	inline String_t** get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(String_t* value)
	{
		___description_1 = value;
		Il2CppCodeGenWriteBarrier(&___description_1, value);
	}

	inline static int32_t get_offset_of_imageUrl_2() { return static_cast<int32_t>(offsetof(SocialMetaTagParameters_t3592555559, ___imageUrl_2)); }
	inline String_t* get_imageUrl_2() const { return ___imageUrl_2; }
	inline String_t** get_address_of_imageUrl_2() { return &___imageUrl_2; }
	inline void set_imageUrl_2(String_t* value)
	{
		___imageUrl_2 = value;
		Il2CppCodeGenWriteBarrier(&___imageUrl_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
