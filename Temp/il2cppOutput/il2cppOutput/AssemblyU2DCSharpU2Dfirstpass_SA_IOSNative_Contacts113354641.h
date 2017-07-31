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

// SA.IOSNative.Contacts.PhoneNumber
struct  PhoneNumber_t113354641  : public Il2CppObject
{
public:
	// System.String SA.IOSNative.Contacts.PhoneNumber::CountryCode
	String_t* ___CountryCode_0;
	// System.String SA.IOSNative.Contacts.PhoneNumber::Digits
	String_t* ___Digits_1;

public:
	inline static int32_t get_offset_of_CountryCode_0() { return static_cast<int32_t>(offsetof(PhoneNumber_t113354641, ___CountryCode_0)); }
	inline String_t* get_CountryCode_0() const { return ___CountryCode_0; }
	inline String_t** get_address_of_CountryCode_0() { return &___CountryCode_0; }
	inline void set_CountryCode_0(String_t* value)
	{
		___CountryCode_0 = value;
		Il2CppCodeGenWriteBarrier(&___CountryCode_0, value);
	}

	inline static int32_t get_offset_of_Digits_1() { return static_cast<int32_t>(offsetof(PhoneNumber_t113354641, ___Digits_1)); }
	inline String_t* get_Digits_1() const { return ___Digits_1; }
	inline String_t** get_address_of_Digits_1() { return &___Digits_1; }
	inline void set_Digits_1(String_t* value)
	{
		___Digits_1 = value;
		Il2CppCodeGenWriteBarrier(&___Digits_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
