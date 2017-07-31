#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Random
struct Random_t1044426839;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Common.Util.IdFactory/<>c__AnonStorey0
struct  U3CU3Ec__AnonStorey0_t255967364  : public Il2CppObject
{
public:
	// System.Random SA.Common.Util.IdFactory/<>c__AnonStorey0::random
	Random_t1044426839 * ___random_0;

public:
	inline static int32_t get_offset_of_random_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__AnonStorey0_t255967364, ___random_0)); }
	inline Random_t1044426839 * get_random_0() const { return ___random_0; }
	inline Random_t1044426839 ** get_address_of_random_0() { return &___random_0; }
	inline void set_random_0(Random_t1044426839 * value)
	{
		___random_0 = value;
		Il2CppCodeGenWriteBarrier(&___random_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
