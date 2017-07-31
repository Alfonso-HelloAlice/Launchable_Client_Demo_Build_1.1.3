#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_GooglePlayResult3097469636.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GP_GCM_RegistrationResult
struct  GP_GCM_RegistrationResult_t2892492118  : public GooglePlayResult_t3097469636
{
public:
	// System.String GP_GCM_RegistrationResult::_RegistrationDeviceId
	String_t* ____RegistrationDeviceId_2;

public:
	inline static int32_t get_offset_of__RegistrationDeviceId_2() { return static_cast<int32_t>(offsetof(GP_GCM_RegistrationResult_t2892492118, ____RegistrationDeviceId_2)); }
	inline String_t* get__RegistrationDeviceId_2() const { return ____RegistrationDeviceId_2; }
	inline String_t** get_address_of__RegistrationDeviceId_2() { return &____RegistrationDeviceId_2; }
	inline void set__RegistrationDeviceId_2(String_t* value)
	{
		____RegistrationDeviceId_2 = value;
		Il2CppCodeGenWriteBarrier(&____RegistrationDeviceId_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
