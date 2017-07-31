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
// ISN_Build
struct ISN_Build_t8796455;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ISN_Build
struct  ISN_Build_t8796455  : public Il2CppObject
{
public:
	// System.String ISN_Build::_Version
	String_t* ____Version_0;
	// System.Int32 ISN_Build::_Number
	int32_t ____Number_1;

public:
	inline static int32_t get_offset_of__Version_0() { return static_cast<int32_t>(offsetof(ISN_Build_t8796455, ____Version_0)); }
	inline String_t* get__Version_0() const { return ____Version_0; }
	inline String_t** get_address_of__Version_0() { return &____Version_0; }
	inline void set__Version_0(String_t* value)
	{
		____Version_0 = value;
		Il2CppCodeGenWriteBarrier(&____Version_0, value);
	}

	inline static int32_t get_offset_of__Number_1() { return static_cast<int32_t>(offsetof(ISN_Build_t8796455, ____Number_1)); }
	inline int32_t get__Number_1() const { return ____Number_1; }
	inline int32_t* get_address_of__Number_1() { return &____Number_1; }
	inline void set__Number_1(int32_t value)
	{
		____Number_1 = value;
	}
};

struct ISN_Build_t8796455_StaticFields
{
public:
	// ISN_Build ISN_Build::_Current
	ISN_Build_t8796455 * ____Current_2;

public:
	inline static int32_t get_offset_of__Current_2() { return static_cast<int32_t>(offsetof(ISN_Build_t8796455_StaticFields, ____Current_2)); }
	inline ISN_Build_t8796455 * get__Current_2() const { return ____Current_2; }
	inline ISN_Build_t8796455 ** get_address_of__Current_2() { return &____Current_2; }
	inline void set__Current_2(ISN_Build_t8796455 * value)
	{
		____Current_2 = value;
		Il2CppCodeGenWriteBarrier(&____Current_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
