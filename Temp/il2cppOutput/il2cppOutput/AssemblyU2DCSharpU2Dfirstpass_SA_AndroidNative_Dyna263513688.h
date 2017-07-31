#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// SA.AndroidNative.DynamicLinks.Link/AndroidParameters
struct AndroidParameters_t3662895640;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.AndroidNative.DynamicLinks.Link/AndroidParameters/Builder
struct  Builder_t263513688  : public Il2CppObject
{
public:
	// SA.AndroidNative.DynamicLinks.Link/AndroidParameters SA.AndroidNative.DynamicLinks.Link/AndroidParameters/Builder::param
	AndroidParameters_t3662895640 * ___param_0;

public:
	inline static int32_t get_offset_of_param_0() { return static_cast<int32_t>(offsetof(Builder_t263513688, ___param_0)); }
	inline AndroidParameters_t3662895640 * get_param_0() const { return ___param_0; }
	inline AndroidParameters_t3662895640 ** get_address_of_param_0() { return &___param_0; }
	inline void set_param_0(AndroidParameters_t3662895640 * value)
	{
		___param_0 = value;
		Il2CppCodeGenWriteBarrier(&___param_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
