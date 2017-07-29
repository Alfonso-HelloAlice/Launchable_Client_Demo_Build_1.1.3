#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_GooglePlayResult3097469636.h"

// GP_AppInvite
struct GP_AppInvite_t1121244750;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GP_RetrieveAppInviteResult
struct  GP_RetrieveAppInviteResult_t18485229  : public GooglePlayResult_t3097469636
{
public:
	// GP_AppInvite GP_RetrieveAppInviteResult::_AppInvite
	GP_AppInvite_t1121244750 * ____AppInvite_2;

public:
	inline static int32_t get_offset_of__AppInvite_2() { return static_cast<int32_t>(offsetof(GP_RetrieveAppInviteResult_t18485229, ____AppInvite_2)); }
	inline GP_AppInvite_t1121244750 * get__AppInvite_2() const { return ____AppInvite_2; }
	inline GP_AppInvite_t1121244750 ** get_address_of__AppInvite_2() { return &____AppInvite_2; }
	inline void set__AppInvite_2(GP_AppInvite_t1121244750 * value)
	{
		____AppInvite_2 = value;
		Il2CppCodeGenWriteBarrier(&____AppInvite_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
