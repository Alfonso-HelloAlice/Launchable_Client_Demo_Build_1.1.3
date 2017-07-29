#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// SA.Fitness.SubscriptionsRequest
struct SubscriptionsRequest_t2177629031;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Fitness.SubscriptionsRequest/Builder
struct  Builder_t292752071  : public Il2CppObject
{
public:
	// SA.Fitness.SubscriptionsRequest SA.Fitness.SubscriptionsRequest/Builder::request
	SubscriptionsRequest_t2177629031 * ___request_0;

public:
	inline static int32_t get_offset_of_request_0() { return static_cast<int32_t>(offsetof(Builder_t292752071, ___request_0)); }
	inline SubscriptionsRequest_t2177629031 * get_request_0() const { return ___request_0; }
	inline SubscriptionsRequest_t2177629031 ** get_address_of_request_0() { return &___request_0; }
	inline void set_request_0(SubscriptionsRequest_t2177629031 * value)
	{
		___request_0 = value;
		Il2CppCodeGenWriteBarrier(&___request_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
