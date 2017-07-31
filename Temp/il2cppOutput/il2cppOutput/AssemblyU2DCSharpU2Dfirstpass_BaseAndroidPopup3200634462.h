#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;
// System.Action`1<AndroidDialogResult>
struct Action_1_t1465846336;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BaseAndroidPopup
struct  BaseAndroidPopup_t3200634462  : public MonoBehaviour_t1158329972
{
public:
	// System.String BaseAndroidPopup::title
	String_t* ___title_2;
	// System.String BaseAndroidPopup::message
	String_t* ___message_3;
	// System.Action`1<AndroidDialogResult> BaseAndroidPopup::ActionComplete
	Action_1_t1465846336 * ___ActionComplete_4;

public:
	inline static int32_t get_offset_of_title_2() { return static_cast<int32_t>(offsetof(BaseAndroidPopup_t3200634462, ___title_2)); }
	inline String_t* get_title_2() const { return ___title_2; }
	inline String_t** get_address_of_title_2() { return &___title_2; }
	inline void set_title_2(String_t* value)
	{
		___title_2 = value;
		Il2CppCodeGenWriteBarrier(&___title_2, value);
	}

	inline static int32_t get_offset_of_message_3() { return static_cast<int32_t>(offsetof(BaseAndroidPopup_t3200634462, ___message_3)); }
	inline String_t* get_message_3() const { return ___message_3; }
	inline String_t** get_address_of_message_3() { return &___message_3; }
	inline void set_message_3(String_t* value)
	{
		___message_3 = value;
		Il2CppCodeGenWriteBarrier(&___message_3, value);
	}

	inline static int32_t get_offset_of_ActionComplete_4() { return static_cast<int32_t>(offsetof(BaseAndroidPopup_t3200634462, ___ActionComplete_4)); }
	inline Action_1_t1465846336 * get_ActionComplete_4() const { return ___ActionComplete_4; }
	inline Action_1_t1465846336 ** get_address_of_ActionComplete_4() { return &___ActionComplete_4; }
	inline void set_ActionComplete_4(Action_1_t1465846336 * value)
	{
		___ActionComplete_4 = value;
		Il2CppCodeGenWriteBarrier(&___ActionComplete_4, value);
	}
};

struct BaseAndroidPopup_t3200634462_StaticFields
{
public:
	// System.Action`1<AndroidDialogResult> BaseAndroidPopup::<>f__am$cache0
	Action_1_t1465846336 * ___U3CU3Ef__amU24cache0_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_5() { return static_cast<int32_t>(offsetof(BaseAndroidPopup_t3200634462_StaticFields, ___U3CU3Ef__amU24cache0_5)); }
	inline Action_1_t1465846336 * get_U3CU3Ef__amU24cache0_5() const { return ___U3CU3Ef__amU24cache0_5; }
	inline Action_1_t1465846336 ** get_address_of_U3CU3Ef__amU24cache0_5() { return &___U3CU3Ef__amU24cache0_5; }
	inline void set_U3CU3Ef__amU24cache0_5(Action_1_t1465846336 * value)
	{
		___U3CU3Ef__amU24cache0_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
