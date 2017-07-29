#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// SA.Fitness.SensorListener
struct SensorListener_t2222594412;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Fitness.SensorListener/Builder
struct  Builder_t2198421178  : public Il2CppObject
{
public:
	// SA.Fitness.SensorListener SA.Fitness.SensorListener/Builder::listener
	SensorListener_t2222594412 * ___listener_0;

public:
	inline static int32_t get_offset_of_listener_0() { return static_cast<int32_t>(offsetof(Builder_t2198421178, ___listener_0)); }
	inline SensorListener_t2222594412 * get_listener_0() const { return ___listener_0; }
	inline SensorListener_t2222594412 ** get_address_of_listener_0() { return &___listener_0; }
	inline void set_listener_0(SensorListener_t2222594412 * value)
	{
		___listener_0 = value;
		Il2CppCodeGenWriteBarrier(&___listener_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
