#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UM_BillingConnectionResult
struct  UM_BillingConnectionResult_t1285161681  : public Il2CppObject
{
public:
	// System.Boolean UM_BillingConnectionResult::isSuccess
	bool ___isSuccess_0;
	// System.String UM_BillingConnectionResult::message
	String_t* ___message_1;

public:
	inline static int32_t get_offset_of_isSuccess_0() { return static_cast<int32_t>(offsetof(UM_BillingConnectionResult_t1285161681, ___isSuccess_0)); }
	inline bool get_isSuccess_0() const { return ___isSuccess_0; }
	inline bool* get_address_of_isSuccess_0() { return &___isSuccess_0; }
	inline void set_isSuccess_0(bool value)
	{
		___isSuccess_0 = value;
	}

	inline static int32_t get_offset_of_message_1() { return static_cast<int32_t>(offsetof(UM_BillingConnectionResult_t1285161681, ___message_1)); }
	inline String_t* get_message_1() const { return ___message_1; }
	inline String_t** get_address_of_message_1() { return &___message_1; }
	inline void set_message_1(String_t* value)
	{
		___message_1 = value;
		Il2CppCodeGenWriteBarrier(&___message_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
