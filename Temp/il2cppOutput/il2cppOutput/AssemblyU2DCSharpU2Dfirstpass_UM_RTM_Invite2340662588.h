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

// UM_RTM_Invite
struct  UM_RTM_Invite_t2340662588  : public Il2CppObject
{
public:
	// System.String UM_RTM_Invite::_Id
	String_t* ____Id_0;
	// System.String UM_RTM_Invite::_SenderId
	String_t* ____SenderId_1;

public:
	inline static int32_t get_offset_of__Id_0() { return static_cast<int32_t>(offsetof(UM_RTM_Invite_t2340662588, ____Id_0)); }
	inline String_t* get__Id_0() const { return ____Id_0; }
	inline String_t** get_address_of__Id_0() { return &____Id_0; }
	inline void set__Id_0(String_t* value)
	{
		____Id_0 = value;
		Il2CppCodeGenWriteBarrier(&____Id_0, value);
	}

	inline static int32_t get_offset_of__SenderId_1() { return static_cast<int32_t>(offsetof(UM_RTM_Invite_t2340662588, ____SenderId_1)); }
	inline String_t* get__SenderId_1() const { return ____SenderId_1; }
	inline String_t** get_address_of__SenderId_1() { return &____SenderId_1; }
	inline void set__SenderId_1(String_t* value)
	{
		____SenderId_1 = value;
		Il2CppCodeGenWriteBarrier(&____SenderId_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
