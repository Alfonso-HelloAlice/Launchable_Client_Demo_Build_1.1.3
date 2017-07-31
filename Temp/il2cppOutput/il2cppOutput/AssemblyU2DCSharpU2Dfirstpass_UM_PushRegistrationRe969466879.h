#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_UM_BaseResult1340611101.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UM_PushRegistrationResult
struct  UM_PushRegistrationResult_t969466879  : public UM_BaseResult_t1340611101
{
public:
	// System.String UM_PushRegistrationResult::_deviceId
	String_t* ____deviceId_1;

public:
	inline static int32_t get_offset_of__deviceId_1() { return static_cast<int32_t>(offsetof(UM_PushRegistrationResult_t969466879, ____deviceId_1)); }
	inline String_t* get__deviceId_1() const { return ____deviceId_1; }
	inline String_t** get_address_of__deviceId_1() { return &____deviceId_1; }
	inline void set__deviceId_1(String_t* value)
	{
		____deviceId_1 = value;
		Il2CppCodeGenWriteBarrier(&____deviceId_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
