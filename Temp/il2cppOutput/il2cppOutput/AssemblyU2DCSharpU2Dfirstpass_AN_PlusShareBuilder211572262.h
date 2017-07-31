#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Action`1<SA.Common.Models.Result>
struct Action_1_t4089019125;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.List`1<UnityEngine.Texture2D>
struct List_1_t2912116861;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AN_PlusShareBuilder
struct  AN_PlusShareBuilder_t211572262  : public Il2CppObject
{
public:
	// System.Action`1<SA.Common.Models.Result> AN_PlusShareBuilder::OnPlusShareResult
	Action_1_t4089019125 * ___OnPlusShareResult_0;
	// UnityEngine.GameObject AN_PlusShareBuilder::listenerObject
	GameObject_t1756533147 * ___listenerObject_2;
	// System.String AN_PlusShareBuilder::message
	String_t* ___message_3;
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> AN_PlusShareBuilder::images
	List_1_t2912116861 * ___images_4;

public:
	inline static int32_t get_offset_of_OnPlusShareResult_0() { return static_cast<int32_t>(offsetof(AN_PlusShareBuilder_t211572262, ___OnPlusShareResult_0)); }
	inline Action_1_t4089019125 * get_OnPlusShareResult_0() const { return ___OnPlusShareResult_0; }
	inline Action_1_t4089019125 ** get_address_of_OnPlusShareResult_0() { return &___OnPlusShareResult_0; }
	inline void set_OnPlusShareResult_0(Action_1_t4089019125 * value)
	{
		___OnPlusShareResult_0 = value;
		Il2CppCodeGenWriteBarrier(&___OnPlusShareResult_0, value);
	}

	inline static int32_t get_offset_of_listenerObject_2() { return static_cast<int32_t>(offsetof(AN_PlusShareBuilder_t211572262, ___listenerObject_2)); }
	inline GameObject_t1756533147 * get_listenerObject_2() const { return ___listenerObject_2; }
	inline GameObject_t1756533147 ** get_address_of_listenerObject_2() { return &___listenerObject_2; }
	inline void set_listenerObject_2(GameObject_t1756533147 * value)
	{
		___listenerObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___listenerObject_2, value);
	}

	inline static int32_t get_offset_of_message_3() { return static_cast<int32_t>(offsetof(AN_PlusShareBuilder_t211572262, ___message_3)); }
	inline String_t* get_message_3() const { return ___message_3; }
	inline String_t** get_address_of_message_3() { return &___message_3; }
	inline void set_message_3(String_t* value)
	{
		___message_3 = value;
		Il2CppCodeGenWriteBarrier(&___message_3, value);
	}

	inline static int32_t get_offset_of_images_4() { return static_cast<int32_t>(offsetof(AN_PlusShareBuilder_t211572262, ___images_4)); }
	inline List_1_t2912116861 * get_images_4() const { return ___images_4; }
	inline List_1_t2912116861 ** get_address_of_images_4() { return &___images_4; }
	inline void set_images_4(List_1_t2912116861 * value)
	{
		___images_4 = value;
		Il2CppCodeGenWriteBarrier(&___images_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
