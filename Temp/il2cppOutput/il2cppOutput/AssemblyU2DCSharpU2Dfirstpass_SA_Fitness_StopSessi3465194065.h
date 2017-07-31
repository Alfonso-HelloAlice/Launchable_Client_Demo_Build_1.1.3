#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// SA.Fitness.StopSessionRequest
struct StopSessionRequest_t3205415913;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Fitness.StopSessionRequest/Builder
struct  Builder_t3465194065  : public Il2CppObject
{
public:
	// SA.Fitness.StopSessionRequest SA.Fitness.StopSessionRequest/Builder::request
	StopSessionRequest_t3205415913 * ___request_0;

public:
	inline static int32_t get_offset_of_request_0() { return static_cast<int32_t>(offsetof(Builder_t3465194065, ___request_0)); }
	inline StopSessionRequest_t3205415913 * get_request_0() const { return ___request_0; }
	inline StopSessionRequest_t3205415913 ** get_address_of_request_0() { return &___request_0; }
	inline void set_request_0(StopSessionRequest_t3205415913 * value)
	{
		___request_0 = value;
		Il2CppCodeGenWriteBarrier(&___request_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
