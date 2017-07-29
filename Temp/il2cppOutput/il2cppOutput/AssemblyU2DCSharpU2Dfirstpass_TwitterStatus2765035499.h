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

// TwitterStatus
struct  TwitterStatus_t2765035499  : public Il2CppObject
{
public:
	// System.String TwitterStatus::_rawJSON
	String_t* ____rawJSON_0;
	// System.String TwitterStatus::_text
	String_t* ____text_1;
	// System.String TwitterStatus::_geo
	String_t* ____geo_2;

public:
	inline static int32_t get_offset_of__rawJSON_0() { return static_cast<int32_t>(offsetof(TwitterStatus_t2765035499, ____rawJSON_0)); }
	inline String_t* get__rawJSON_0() const { return ____rawJSON_0; }
	inline String_t** get_address_of__rawJSON_0() { return &____rawJSON_0; }
	inline void set__rawJSON_0(String_t* value)
	{
		____rawJSON_0 = value;
		Il2CppCodeGenWriteBarrier(&____rawJSON_0, value);
	}

	inline static int32_t get_offset_of__text_1() { return static_cast<int32_t>(offsetof(TwitterStatus_t2765035499, ____text_1)); }
	inline String_t* get__text_1() const { return ____text_1; }
	inline String_t** get_address_of__text_1() { return &____text_1; }
	inline void set__text_1(String_t* value)
	{
		____text_1 = value;
		Il2CppCodeGenWriteBarrier(&____text_1, value);
	}

	inline static int32_t get_offset_of__geo_2() { return static_cast<int32_t>(offsetof(TwitterStatus_t2765035499, ____geo_2)); }
	inline String_t* get__geo_2() const { return ____geo_2; }
	inline String_t** get_address_of__geo_2() { return &____geo_2; }
	inline void set__geo_2(String_t* value)
	{
		____geo_2 = value;
		Il2CppCodeGenWriteBarrier(&____geo_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
