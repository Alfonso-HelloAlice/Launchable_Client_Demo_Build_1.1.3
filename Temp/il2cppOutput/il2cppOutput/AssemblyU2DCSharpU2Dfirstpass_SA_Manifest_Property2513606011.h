#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Manifest_BaseTemp3675092023.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Manifest.PropertyTemplate
struct  PropertyTemplate_t2513606011  : public BaseTemplate_t3675092023
{
public:
	// System.Boolean SA.Manifest.PropertyTemplate::IsOpen
	bool ___IsOpen_2;
	// System.String SA.Manifest.PropertyTemplate::_tag
	String_t* ____tag_3;

public:
	inline static int32_t get_offset_of_IsOpen_2() { return static_cast<int32_t>(offsetof(PropertyTemplate_t2513606011, ___IsOpen_2)); }
	inline bool get_IsOpen_2() const { return ___IsOpen_2; }
	inline bool* get_address_of_IsOpen_2() { return &___IsOpen_2; }
	inline void set_IsOpen_2(bool value)
	{
		___IsOpen_2 = value;
	}

	inline static int32_t get_offset_of__tag_3() { return static_cast<int32_t>(offsetof(PropertyTemplate_t2513606011, ____tag_3)); }
	inline String_t* get__tag_3() const { return ____tag_3; }
	inline String_t** get_address_of__tag_3() { return &____tag_3; }
	inline void set__tag_3(String_t* value)
	{
		____tag_3 = value;
		Il2CppCodeGenWriteBarrier(&____tag_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
