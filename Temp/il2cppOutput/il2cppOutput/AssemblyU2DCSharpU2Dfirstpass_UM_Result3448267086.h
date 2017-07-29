#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UM_Error
struct UM_Error_t2677340989;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UM_Result
struct  UM_Result_t3448267086  : public Il2CppObject
{
public:
	// UM_Error UM_Result::_Error
	UM_Error_t2677340989 * ____Error_0;
	// System.Boolean UM_Result::_IsSucceeded
	bool ____IsSucceeded_1;

public:
	inline static int32_t get_offset_of__Error_0() { return static_cast<int32_t>(offsetof(UM_Result_t3448267086, ____Error_0)); }
	inline UM_Error_t2677340989 * get__Error_0() const { return ____Error_0; }
	inline UM_Error_t2677340989 ** get_address_of__Error_0() { return &____Error_0; }
	inline void set__Error_0(UM_Error_t2677340989 * value)
	{
		____Error_0 = value;
		Il2CppCodeGenWriteBarrier(&____Error_0, value);
	}

	inline static int32_t get_offset_of__IsSucceeded_1() { return static_cast<int32_t>(offsetof(UM_Result_t3448267086, ____IsSucceeded_1)); }
	inline bool get__IsSucceeded_1() const { return ____IsSucceeded_1; }
	inline bool* get_address_of__IsSucceeded_1() { return &____IsSucceeded_1; }
	inline void set__IsSucceeded_1(bool value)
	{
		____IsSucceeded_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
