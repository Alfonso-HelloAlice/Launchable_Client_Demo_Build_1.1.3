#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_GP_GamesStatusCodes1013506173.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayResult
struct  GooglePlayResult_t3097469636  : public Il2CppObject
{
public:
	// GP_GamesStatusCodes GooglePlayResult::_response
	int32_t ____response_0;
	// System.String GooglePlayResult::_message
	String_t* ____message_1;

public:
	inline static int32_t get_offset_of__response_0() { return static_cast<int32_t>(offsetof(GooglePlayResult_t3097469636, ____response_0)); }
	inline int32_t get__response_0() const { return ____response_0; }
	inline int32_t* get_address_of__response_0() { return &____response_0; }
	inline void set__response_0(int32_t value)
	{
		____response_0 = value;
	}

	inline static int32_t get_offset_of__message_1() { return static_cast<int32_t>(offsetof(GooglePlayResult_t3097469636, ____message_1)); }
	inline String_t* get__message_1() const { return ____message_1; }
	inline String_t** get_address_of__message_1() { return &____message_1; }
	inline void set__message_1(String_t* value)
	{
		____message_1 = value;
		Il2CppCodeGenWriteBarrier(&____message_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
