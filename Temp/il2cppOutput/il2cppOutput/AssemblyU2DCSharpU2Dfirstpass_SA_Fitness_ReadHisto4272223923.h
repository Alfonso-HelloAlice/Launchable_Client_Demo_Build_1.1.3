#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// SA.Fitness.ReadHistoryRequest
struct ReadHistoryRequest_t1205733107;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Fitness.ReadHistoryRequest/Builder
struct  Builder_t4272223923  : public Il2CppObject
{
public:
	// SA.Fitness.ReadHistoryRequest SA.Fitness.ReadHistoryRequest/Builder::request
	ReadHistoryRequest_t1205733107 * ___request_0;

public:
	inline static int32_t get_offset_of_request_0() { return static_cast<int32_t>(offsetof(Builder_t4272223923, ___request_0)); }
	inline ReadHistoryRequest_t1205733107 * get_request_0() const { return ___request_0; }
	inline ReadHistoryRequest_t1205733107 ** get_address_of_request_0() { return &___request_0; }
	inline void set_request_0(ReadHistoryRequest_t1205733107 * value)
	{
		___request_0 = value;
		Il2CppCodeGenWriteBarrier(&___request_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
