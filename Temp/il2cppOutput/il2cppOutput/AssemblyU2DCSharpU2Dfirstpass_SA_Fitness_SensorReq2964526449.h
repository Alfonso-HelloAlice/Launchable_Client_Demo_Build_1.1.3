#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// SA.Fitness.SensorRequest
struct SensorRequest_t1943460265;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Fitness.SensorRequest/Builder
struct  Builder_t2964526449  : public Il2CppObject
{
public:
	// SA.Fitness.SensorRequest SA.Fitness.SensorRequest/Builder::request
	SensorRequest_t1943460265 * ___request_0;

public:
	inline static int32_t get_offset_of_request_0() { return static_cast<int32_t>(offsetof(Builder_t2964526449, ___request_0)); }
	inline SensorRequest_t1943460265 * get_request_0() const { return ___request_0; }
	inline SensorRequest_t1943460265 ** get_address_of_request_0() { return &___request_0; }
	inline void set_request_0(SensorRequest_t1943460265 * value)
	{
		___request_0 = value;
		Il2CppCodeGenWriteBarrier(&___request_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
