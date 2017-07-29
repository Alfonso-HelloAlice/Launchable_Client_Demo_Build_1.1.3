#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Models_Res4287219743.h"

// ISN_DeviceToken
struct ISN_DeviceToken_t380973950;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ISN_RemoteNotificationsRegistrationResult
struct  ISN_RemoteNotificationsRegistrationResult_t3335875151  : public Result_t4287219743
{
public:
	// ISN_DeviceToken ISN_RemoteNotificationsRegistrationResult::_Token
	ISN_DeviceToken_t380973950 * ____Token_1;

public:
	inline static int32_t get_offset_of__Token_1() { return static_cast<int32_t>(offsetof(ISN_RemoteNotificationsRegistrationResult_t3335875151, ____Token_1)); }
	inline ISN_DeviceToken_t380973950 * get__Token_1() const { return ____Token_1; }
	inline ISN_DeviceToken_t380973950 ** get_address_of__Token_1() { return &____Token_1; }
	inline void set__Token_1(ISN_DeviceToken_t380973950 * value)
	{
		____Token_1 = value;
		Il2CppCodeGenWriteBarrier(&____Token_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
