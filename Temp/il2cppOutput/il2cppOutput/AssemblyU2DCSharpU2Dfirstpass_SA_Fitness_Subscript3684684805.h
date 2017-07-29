#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// SA.Fitness.DataType
struct DataType_t1476354918;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Fitness.Subscription
struct  Subscription_t3684684805  : public Il2CppObject
{
public:
	// SA.Fitness.DataType SA.Fitness.Subscription::dataType
	DataType_t1476354918 * ___dataType_0;

public:
	inline static int32_t get_offset_of_dataType_0() { return static_cast<int32_t>(offsetof(Subscription_t3684684805, ___dataType_0)); }
	inline DataType_t1476354918 * get_dataType_0() const { return ___dataType_0; }
	inline DataType_t1476354918 ** get_address_of_dataType_0() { return &___dataType_0; }
	inline void set_dataType_0(DataType_t1476354918 * value)
	{
		___dataType_0 = value;
		Il2CppCodeGenWriteBarrier(&___dataType_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
