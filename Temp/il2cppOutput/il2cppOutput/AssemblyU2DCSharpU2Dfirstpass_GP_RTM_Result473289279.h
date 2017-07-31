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

// GP_RTM_Result
struct  GP_RTM_Result_t473289279  : public Il2CppObject
{
public:
	// GP_GamesStatusCodes GP_RTM_Result::_status
	int32_t ____status_0;
	// System.String GP_RTM_Result::_roomId
	String_t* ____roomId_1;

public:
	inline static int32_t get_offset_of__status_0() { return static_cast<int32_t>(offsetof(GP_RTM_Result_t473289279, ____status_0)); }
	inline int32_t get__status_0() const { return ____status_0; }
	inline int32_t* get_address_of__status_0() { return &____status_0; }
	inline void set__status_0(int32_t value)
	{
		____status_0 = value;
	}

	inline static int32_t get_offset_of__roomId_1() { return static_cast<int32_t>(offsetof(GP_RTM_Result_t473289279, ____roomId_1)); }
	inline String_t* get__roomId_1() const { return ____roomId_1; }
	inline String_t** get_address_of__roomId_1() { return &____roomId_1; }
	inline void set__roomId_1(String_t* value)
	{
		____roomId_1 = value;
		Il2CppCodeGenWriteBarrier(&____roomId_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
