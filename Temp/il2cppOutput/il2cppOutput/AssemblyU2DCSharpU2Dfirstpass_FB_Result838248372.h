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

// FB_Result
struct  FB_Result_t838248372  : public Il2CppObject
{
public:
	// System.String FB_Result::_RawData
	String_t* ____RawData_0;
	// System.String FB_Result::_Error
	String_t* ____Error_1;
	// System.Boolean FB_Result::_IsSucceeded
	bool ____IsSucceeded_2;

public:
	inline static int32_t get_offset_of__RawData_0() { return static_cast<int32_t>(offsetof(FB_Result_t838248372, ____RawData_0)); }
	inline String_t* get__RawData_0() const { return ____RawData_0; }
	inline String_t** get_address_of__RawData_0() { return &____RawData_0; }
	inline void set__RawData_0(String_t* value)
	{
		____RawData_0 = value;
		Il2CppCodeGenWriteBarrier(&____RawData_0, value);
	}

	inline static int32_t get_offset_of__Error_1() { return static_cast<int32_t>(offsetof(FB_Result_t838248372, ____Error_1)); }
	inline String_t* get__Error_1() const { return ____Error_1; }
	inline String_t** get_address_of__Error_1() { return &____Error_1; }
	inline void set__Error_1(String_t* value)
	{
		____Error_1 = value;
		Il2CppCodeGenWriteBarrier(&____Error_1, value);
	}

	inline static int32_t get_offset_of__IsSucceeded_2() { return static_cast<int32_t>(offsetof(FB_Result_t838248372, ____IsSucceeded_2)); }
	inline bool get__IsSucceeded_2() const { return ____IsSucceeded_2; }
	inline bool* get_address_of__IsSucceeded_2() { return &____IsSucceeded_2; }
	inline void set__IsSucceeded_2(bool value)
	{
		____IsSucceeded_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
