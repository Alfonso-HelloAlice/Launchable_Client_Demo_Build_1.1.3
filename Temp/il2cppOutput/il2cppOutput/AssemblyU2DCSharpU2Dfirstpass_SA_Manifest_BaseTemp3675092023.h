#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<SA.Manifest.PropertyTemplate>>
struct Dictionary_2_t3797506405;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Manifest.BaseTemplate
struct  BaseTemplate_t3675092023  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<SA.Manifest.PropertyTemplate>> SA.Manifest.BaseTemplate::_properties
	Dictionary_2_t3797506405 * ____properties_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> SA.Manifest.BaseTemplate::_values
	Dictionary_2_t3943999495 * ____values_1;

public:
	inline static int32_t get_offset_of__properties_0() { return static_cast<int32_t>(offsetof(BaseTemplate_t3675092023, ____properties_0)); }
	inline Dictionary_2_t3797506405 * get__properties_0() const { return ____properties_0; }
	inline Dictionary_2_t3797506405 ** get_address_of__properties_0() { return &____properties_0; }
	inline void set__properties_0(Dictionary_2_t3797506405 * value)
	{
		____properties_0 = value;
		Il2CppCodeGenWriteBarrier(&____properties_0, value);
	}

	inline static int32_t get_offset_of__values_1() { return static_cast<int32_t>(offsetof(BaseTemplate_t3675092023, ____values_1)); }
	inline Dictionary_2_t3943999495 * get__values_1() const { return ____values_1; }
	inline Dictionary_2_t3943999495 ** get_address_of__values_1() { return &____values_1; }
	inline void set__values_1(Dictionary_2_t3943999495 * value)
	{
		____values_1 = value;
		Il2CppCodeGenWriteBarrier(&____values_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
