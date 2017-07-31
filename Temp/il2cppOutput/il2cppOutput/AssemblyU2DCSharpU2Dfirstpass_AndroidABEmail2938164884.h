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

// AndroidABEmail
struct  AndroidABEmail_t2938164884  : public Il2CppObject
{
public:
	// System.String AndroidABEmail::email
	String_t* ___email_0;
	// System.String AndroidABEmail::emailType
	String_t* ___emailType_1;

public:
	inline static int32_t get_offset_of_email_0() { return static_cast<int32_t>(offsetof(AndroidABEmail_t2938164884, ___email_0)); }
	inline String_t* get_email_0() const { return ___email_0; }
	inline String_t** get_address_of_email_0() { return &___email_0; }
	inline void set_email_0(String_t* value)
	{
		___email_0 = value;
		Il2CppCodeGenWriteBarrier(&___email_0, value);
	}

	inline static int32_t get_offset_of_emailType_1() { return static_cast<int32_t>(offsetof(AndroidABEmail_t2938164884, ___emailType_1)); }
	inline String_t* get_emailType_1() const { return ___emailType_1; }
	inline String_t** get_address_of_emailType_1() { return &___emailType_1; }
	inline void set_emailType_1(String_t* value)
	{
		___emailType_1 = value;
		Il2CppCodeGenWriteBarrier(&___emailType_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
