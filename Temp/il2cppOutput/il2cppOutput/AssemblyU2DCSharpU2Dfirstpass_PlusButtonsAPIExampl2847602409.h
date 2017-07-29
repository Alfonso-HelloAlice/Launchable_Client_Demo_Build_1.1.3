#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Collections.Generic.List`1<AN_PlusButton>
struct List_1_t739879572;
// AN_PlusButton
struct AN_PlusButton_t1370758440;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlusButtonsAPIExample
struct  PlusButtonsAPIExample_t2847602409  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<AN_PlusButton> PlusButtonsAPIExample::Abuttons
	List_1_t739879572 * ___Abuttons_2;
	// AN_PlusButton PlusButtonsAPIExample::PlusButton
	AN_PlusButton_t1370758440 * ___PlusButton_3;
	// System.String PlusButtonsAPIExample::PlusUrl
	String_t* ___PlusUrl_4;

public:
	inline static int32_t get_offset_of_Abuttons_2() { return static_cast<int32_t>(offsetof(PlusButtonsAPIExample_t2847602409, ___Abuttons_2)); }
	inline List_1_t739879572 * get_Abuttons_2() const { return ___Abuttons_2; }
	inline List_1_t739879572 ** get_address_of_Abuttons_2() { return &___Abuttons_2; }
	inline void set_Abuttons_2(List_1_t739879572 * value)
	{
		___Abuttons_2 = value;
		Il2CppCodeGenWriteBarrier(&___Abuttons_2, value);
	}

	inline static int32_t get_offset_of_PlusButton_3() { return static_cast<int32_t>(offsetof(PlusButtonsAPIExample_t2847602409, ___PlusButton_3)); }
	inline AN_PlusButton_t1370758440 * get_PlusButton_3() const { return ___PlusButton_3; }
	inline AN_PlusButton_t1370758440 ** get_address_of_PlusButton_3() { return &___PlusButton_3; }
	inline void set_PlusButton_3(AN_PlusButton_t1370758440 * value)
	{
		___PlusButton_3 = value;
		Il2CppCodeGenWriteBarrier(&___PlusButton_3, value);
	}

	inline static int32_t get_offset_of_PlusUrl_4() { return static_cast<int32_t>(offsetof(PlusButtonsAPIExample_t2847602409, ___PlusUrl_4)); }
	inline String_t* get_PlusUrl_4() const { return ___PlusUrl_4; }
	inline String_t** get_address_of_PlusUrl_4() { return &___PlusUrl_4; }
	inline void set_PlusUrl_4(String_t* value)
	{
		___PlusUrl_4 = value;
		Il2CppCodeGenWriteBarrier(&___PlusUrl_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
