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

// GADTestDevice
struct  GADTestDevice_t1561919298  : public Il2CppObject
{
public:
	// System.String GADTestDevice::Name
	String_t* ___Name_0;
	// System.String GADTestDevice::ID
	String_t* ___ID_1;
	// System.Boolean GADTestDevice::IsOpen
	bool ___IsOpen_2;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(GADTestDevice_t1561919298, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier(&___Name_0, value);
	}

	inline static int32_t get_offset_of_ID_1() { return static_cast<int32_t>(offsetof(GADTestDevice_t1561919298, ___ID_1)); }
	inline String_t* get_ID_1() const { return ___ID_1; }
	inline String_t** get_address_of_ID_1() { return &___ID_1; }
	inline void set_ID_1(String_t* value)
	{
		___ID_1 = value;
		Il2CppCodeGenWriteBarrier(&___ID_1, value);
	}

	inline static int32_t get_offset_of_IsOpen_2() { return static_cast<int32_t>(offsetof(GADTestDevice_t1561919298, ___IsOpen_2)); }
	inline bool get_IsOpen_2() const { return ___IsOpen_2; }
	inline bool* get_address_of_IsOpen_2() { return &___IsOpen_2; }
	inline void set_IsOpen_2(bool value)
	{
		___IsOpen_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
