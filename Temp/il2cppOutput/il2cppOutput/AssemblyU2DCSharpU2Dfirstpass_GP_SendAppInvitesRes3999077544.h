#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_GooglePlayResult3097469636.h"

// System.String[]
struct StringU5BU5D_t1642385972;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GP_SendAppInvitesResult
struct  GP_SendAppInvitesResult_t3999077544  : public GooglePlayResult_t3097469636
{
public:
	// System.String[] GP_SendAppInvitesResult::_InvitationIds
	StringU5BU5D_t1642385972* ____InvitationIds_2;

public:
	inline static int32_t get_offset_of__InvitationIds_2() { return static_cast<int32_t>(offsetof(GP_SendAppInvitesResult_t3999077544, ____InvitationIds_2)); }
	inline StringU5BU5D_t1642385972* get__InvitationIds_2() const { return ____InvitationIds_2; }
	inline StringU5BU5D_t1642385972** get_address_of__InvitationIds_2() { return &____InvitationIds_2; }
	inline void set__InvitationIds_2(StringU5BU5D_t1642385972* value)
	{
		____InvitationIds_2 = value;
		Il2CppCodeGenWriteBarrier(&____InvitationIds_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
