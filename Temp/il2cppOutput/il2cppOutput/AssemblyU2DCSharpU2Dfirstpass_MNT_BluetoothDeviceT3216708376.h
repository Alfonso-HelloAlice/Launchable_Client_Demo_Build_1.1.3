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

// MNT_BluetoothDeviceTemplate
struct  MNT_BluetoothDeviceTemplate_t3216708376  : public Il2CppObject
{
public:
	// System.String MNT_BluetoothDeviceTemplate::_name
	String_t* ____name_0;
	// System.String MNT_BluetoothDeviceTemplate::_address
	String_t* ____address_1;

public:
	inline static int32_t get_offset_of__name_0() { return static_cast<int32_t>(offsetof(MNT_BluetoothDeviceTemplate_t3216708376, ____name_0)); }
	inline String_t* get__name_0() const { return ____name_0; }
	inline String_t** get_address_of__name_0() { return &____name_0; }
	inline void set__name_0(String_t* value)
	{
		____name_0 = value;
		Il2CppCodeGenWriteBarrier(&____name_0, value);
	}

	inline static int32_t get_offset_of__address_1() { return static_cast<int32_t>(offsetof(MNT_BluetoothDeviceTemplate_t3216708376, ____address_1)); }
	inline String_t* get__address_1() const { return ____address_1; }
	inline String_t** get_address_of__address_1() { return &____address_1; }
	inline void set__address_1(String_t* value)
	{
		____address_1 = value;
		Il2CppCodeGenWriteBarrier(&____address_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
