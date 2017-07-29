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

// TWResult
struct  TWResult_t1480791060  : public Il2CppObject
{
public:
	// System.Boolean TWResult::_IsSucceeded
	bool ____IsSucceeded_0;
	// System.String TWResult::_data
	String_t* ____data_1;

public:
	inline static int32_t get_offset_of__IsSucceeded_0() { return static_cast<int32_t>(offsetof(TWResult_t1480791060, ____IsSucceeded_0)); }
	inline bool get__IsSucceeded_0() const { return ____IsSucceeded_0; }
	inline bool* get_address_of__IsSucceeded_0() { return &____IsSucceeded_0; }
	inline void set__IsSucceeded_0(bool value)
	{
		____IsSucceeded_0 = value;
	}

	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(TWResult_t1480791060, ____data_1)); }
	inline String_t* get__data_1() const { return ____data_1; }
	inline String_t** get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(String_t* value)
	{
		____data_1 = value;
		Il2CppCodeGenWriteBarrier(&____data_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
