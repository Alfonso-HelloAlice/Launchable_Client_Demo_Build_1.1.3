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
// ISN_TimeZone
struct ISN_TimeZone_t4102960324;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ISN_TimeZone
struct  ISN_TimeZone_t4102960324  : public Il2CppObject
{
public:
	// System.Int64 ISN_TimeZone::_SecondsFromGMT
	int64_t ____SecondsFromGMT_0;
	// System.String ISN_TimeZone::_Name
	String_t* ____Name_1;

public:
	inline static int32_t get_offset_of__SecondsFromGMT_0() { return static_cast<int32_t>(offsetof(ISN_TimeZone_t4102960324, ____SecondsFromGMT_0)); }
	inline int64_t get__SecondsFromGMT_0() const { return ____SecondsFromGMT_0; }
	inline int64_t* get_address_of__SecondsFromGMT_0() { return &____SecondsFromGMT_0; }
	inline void set__SecondsFromGMT_0(int64_t value)
	{
		____SecondsFromGMT_0 = value;
	}

	inline static int32_t get_offset_of__Name_1() { return static_cast<int32_t>(offsetof(ISN_TimeZone_t4102960324, ____Name_1)); }
	inline String_t* get__Name_1() const { return ____Name_1; }
	inline String_t** get_address_of__Name_1() { return &____Name_1; }
	inline void set__Name_1(String_t* value)
	{
		____Name_1 = value;
		Il2CppCodeGenWriteBarrier(&____Name_1, value);
	}
};

struct ISN_TimeZone_t4102960324_StaticFields
{
public:
	// ISN_TimeZone ISN_TimeZone::_LocalTimeZone
	ISN_TimeZone_t4102960324 * ____LocalTimeZone_2;

public:
	inline static int32_t get_offset_of__LocalTimeZone_2() { return static_cast<int32_t>(offsetof(ISN_TimeZone_t4102960324_StaticFields, ____LocalTimeZone_2)); }
	inline ISN_TimeZone_t4102960324 * get__LocalTimeZone_2() const { return ____LocalTimeZone_2; }
	inline ISN_TimeZone_t4102960324 ** get_address_of__LocalTimeZone_2() { return &____LocalTimeZone_2; }
	inline void set__LocalTimeZone_2(ISN_TimeZone_t4102960324 * value)
	{
		____LocalTimeZone_2 = value;
		Il2CppCodeGenWriteBarrier(&____LocalTimeZone_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
