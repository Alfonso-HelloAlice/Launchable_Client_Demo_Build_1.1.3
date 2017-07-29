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

// ISN_RemoteNotification
struct  ISN_RemoteNotification_t1449597314  : public Il2CppObject
{
public:
	// System.String ISN_RemoteNotification::_Body
	String_t* ____Body_0;

public:
	inline static int32_t get_offset_of__Body_0() { return static_cast<int32_t>(offsetof(ISN_RemoteNotification_t1449597314, ____Body_0)); }
	inline String_t* get__Body_0() const { return ____Body_0; }
	inline String_t** get_address_of__Body_0() { return &____Body_0; }
	inline void set__Body_0(String_t* value)
	{
		____Body_0 = value;
		Il2CppCodeGenWriteBarrier(&____Body_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
