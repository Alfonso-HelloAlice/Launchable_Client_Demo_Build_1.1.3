#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Models_Res4287219743.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.AndroidNative.DynamicLinks.ShortLinkResult
struct  ShortLinkResult_t1458475359  : public Result_t4287219743
{
public:
	// System.String SA.AndroidNative.DynamicLinks.ShortLinkResult::shortLink
	String_t* ___shortLink_1;

public:
	inline static int32_t get_offset_of_shortLink_1() { return static_cast<int32_t>(offsetof(ShortLinkResult_t1458475359, ___shortLink_1)); }
	inline String_t* get_shortLink_1() const { return ___shortLink_1; }
	inline String_t** get_address_of_shortLink_1() { return &___shortLink_1; }
	inline void set_shortLink_1(String_t* value)
	{
		___shortLink_1 = value;
		Il2CppCodeGenWriteBarrier(&___shortLink_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
