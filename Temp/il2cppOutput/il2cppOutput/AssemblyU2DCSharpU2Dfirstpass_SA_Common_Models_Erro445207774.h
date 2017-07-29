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

// SA.Common.Models.Error
struct  Error_t445207774  : public Il2CppObject
{
public:
	// System.Int32 SA.Common.Models.Error::_Code
	int32_t ____Code_0;
	// System.String SA.Common.Models.Error::_Messgae
	String_t* ____Messgae_1;

public:
	inline static int32_t get_offset_of__Code_0() { return static_cast<int32_t>(offsetof(Error_t445207774, ____Code_0)); }
	inline int32_t get__Code_0() const { return ____Code_0; }
	inline int32_t* get_address_of__Code_0() { return &____Code_0; }
	inline void set__Code_0(int32_t value)
	{
		____Code_0 = value;
	}

	inline static int32_t get_offset_of__Messgae_1() { return static_cast<int32_t>(offsetof(Error_t445207774, ____Messgae_1)); }
	inline String_t* get__Messgae_1() const { return ____Messgae_1; }
	inline String_t** get_address_of__Messgae_1() { return &____Messgae_1; }
	inline void set__Messgae_1(String_t* value)
	{
		____Messgae_1 = value;
		Il2CppCodeGenWriteBarrier(&____Messgae_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
