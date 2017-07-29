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

// UM_InAppProductTemplate
struct  UM_InAppProductTemplate_t815754684  : public Il2CppObject
{
public:
	// System.String UM_InAppProductTemplate::id
	String_t* ___id_0;
	// System.String UM_InAppProductTemplate::title
	String_t* ___title_1;
	// System.String UM_InAppProductTemplate::description
	String_t* ___description_2;
	// System.String UM_InAppProductTemplate::price
	String_t* ___price_3;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(UM_InAppProductTemplate_t815754684, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier(&___id_0, value);
	}

	inline static int32_t get_offset_of_title_1() { return static_cast<int32_t>(offsetof(UM_InAppProductTemplate_t815754684, ___title_1)); }
	inline String_t* get_title_1() const { return ___title_1; }
	inline String_t** get_address_of_title_1() { return &___title_1; }
	inline void set_title_1(String_t* value)
	{
		___title_1 = value;
		Il2CppCodeGenWriteBarrier(&___title_1, value);
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(UM_InAppProductTemplate_t815754684, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier(&___description_2, value);
	}

	inline static int32_t get_offset_of_price_3() { return static_cast<int32_t>(offsetof(UM_InAppProductTemplate_t815754684, ___price_3)); }
	inline String_t* get_price_3() const { return ___price_3; }
	inline String_t** get_address_of_price_3() { return &___price_3; }
	inline void set_price_3(String_t* value)
	{
		___price_3 = value;
		Il2CppCodeGenWriteBarrier(&___price_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
