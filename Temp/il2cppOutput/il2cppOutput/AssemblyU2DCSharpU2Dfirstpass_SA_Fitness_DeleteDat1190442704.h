#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// SA.Fitness.DeleteDataRequest
struct DeleteDataRequest_t4235195678;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Fitness.DeleteDataRequest/Builder
struct  Builder_t1190442704  : public Il2CppObject
{
public:
	// SA.Fitness.DeleteDataRequest SA.Fitness.DeleteDataRequest/Builder::request
	DeleteDataRequest_t4235195678 * ___request_0;

public:
	inline static int32_t get_offset_of_request_0() { return static_cast<int32_t>(offsetof(Builder_t1190442704, ___request_0)); }
	inline DeleteDataRequest_t4235195678 * get_request_0() const { return ___request_0; }
	inline DeleteDataRequest_t4235195678 ** get_address_of_request_0() { return &___request_0; }
	inline void set_request_0(DeleteDataRequest_t4235195678 * value)
	{
		___request_0 = value;
		Il2CppCodeGenWriteBarrier(&___request_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
