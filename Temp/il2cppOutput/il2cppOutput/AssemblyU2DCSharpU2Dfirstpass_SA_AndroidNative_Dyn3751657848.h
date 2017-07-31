#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// SA.AndroidNative.DynamicLinks.Link
struct Link_t1045045226;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.AndroidNative.DynamicLinks.Link/Builder
struct  Builder_t3751657848  : public Il2CppObject
{
public:
	// SA.AndroidNative.DynamicLinks.Link SA.AndroidNative.DynamicLinks.Link/Builder::link
	Link_t1045045226 * ___link_0;

public:
	inline static int32_t get_offset_of_link_0() { return static_cast<int32_t>(offsetof(Builder_t3751657848, ___link_0)); }
	inline Link_t1045045226 * get_link_0() const { return ___link_0; }
	inline Link_t1045045226 ** get_address_of_link_0() { return &___link_0; }
	inline void set_link_0(Link_t1045045226 * value)
	{
		___link_0 = value;
		Il2CppCodeGenWriteBarrier(&___link_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
