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

// SP_FB_API_v7
struct  SP_FB_API_v7_t4234733891  : public Il2CppObject
{
public:
	// System.String SP_FB_API_v7::_UserId
	String_t* ____UserId_1;
	// System.String SP_FB_API_v7::_AccessToken
	String_t* ____AccessToken_2;

public:
	inline static int32_t get_offset_of__UserId_1() { return static_cast<int32_t>(offsetof(SP_FB_API_v7_t4234733891, ____UserId_1)); }
	inline String_t* get__UserId_1() const { return ____UserId_1; }
	inline String_t** get_address_of__UserId_1() { return &____UserId_1; }
	inline void set__UserId_1(String_t* value)
	{
		____UserId_1 = value;
		Il2CppCodeGenWriteBarrier(&____UserId_1, value);
	}

	inline static int32_t get_offset_of__AccessToken_2() { return static_cast<int32_t>(offsetof(SP_FB_API_v7_t4234733891, ____AccessToken_2)); }
	inline String_t* get__AccessToken_2() const { return ____AccessToken_2; }
	inline String_t** get_address_of__AccessToken_2() { return &____AccessToken_2; }
	inline void set__AccessToken_2(String_t* value)
	{
		____AccessToken_2 = value;
		Il2CppCodeGenWriteBarrier(&____AccessToken_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
