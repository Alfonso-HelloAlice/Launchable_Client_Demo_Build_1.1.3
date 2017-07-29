#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// SA.Fitness.SubscribeRequest
struct SubscribeRequest_t3601402779;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Fitness.SubscribeRequest/Builder
struct  Builder_t57430283  : public Il2CppObject
{
public:
	// SA.Fitness.SubscribeRequest SA.Fitness.SubscribeRequest/Builder::request
	SubscribeRequest_t3601402779 * ___request_0;

public:
	inline static int32_t get_offset_of_request_0() { return static_cast<int32_t>(offsetof(Builder_t57430283, ___request_0)); }
	inline SubscribeRequest_t3601402779 * get_request_0() const { return ___request_0; }
	inline SubscribeRequest_t3601402779 ** get_address_of_request_0() { return &___request_0; }
	inline void set_request_0(SubscribeRequest_t3601402779 * value)
	{
		___request_0 = value;
		Il2CppCodeGenWriteBarrier(&___request_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
