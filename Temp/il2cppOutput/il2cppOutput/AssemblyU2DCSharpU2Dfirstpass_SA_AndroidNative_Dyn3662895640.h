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

// SA.AndroidNative.DynamicLinks.Link/AndroidParameters
struct  AndroidParameters_t3662895640  : public Il2CppObject
{
public:
	// System.String SA.AndroidNative.DynamicLinks.Link/AndroidParameters::appBundle
	String_t* ___appBundle_0;
	// System.String SA.AndroidNative.DynamicLinks.Link/AndroidParameters::fallbackUrl
	String_t* ___fallbackUrl_1;
	// System.Int32 SA.AndroidNative.DynamicLinks.Link/AndroidParameters::minimumVersion
	int32_t ___minimumVersion_2;

public:
	inline static int32_t get_offset_of_appBundle_0() { return static_cast<int32_t>(offsetof(AndroidParameters_t3662895640, ___appBundle_0)); }
	inline String_t* get_appBundle_0() const { return ___appBundle_0; }
	inline String_t** get_address_of_appBundle_0() { return &___appBundle_0; }
	inline void set_appBundle_0(String_t* value)
	{
		___appBundle_0 = value;
		Il2CppCodeGenWriteBarrier(&___appBundle_0, value);
	}

	inline static int32_t get_offset_of_fallbackUrl_1() { return static_cast<int32_t>(offsetof(AndroidParameters_t3662895640, ___fallbackUrl_1)); }
	inline String_t* get_fallbackUrl_1() const { return ___fallbackUrl_1; }
	inline String_t** get_address_of_fallbackUrl_1() { return &___fallbackUrl_1; }
	inline void set_fallbackUrl_1(String_t* value)
	{
		___fallbackUrl_1 = value;
		Il2CppCodeGenWriteBarrier(&___fallbackUrl_1, value);
	}

	inline static int32_t get_offset_of_minimumVersion_2() { return static_cast<int32_t>(offsetof(AndroidParameters_t3662895640, ___minimumVersion_2)); }
	inline int32_t get_minimumVersion_2() const { return ___minimumVersion_2; }
	inline int32_t* get_address_of_minimumVersion_2() { return &___minimumVersion_2; }
	inline void set_minimumVersion_2(int32_t value)
	{
		___minimumVersion_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
