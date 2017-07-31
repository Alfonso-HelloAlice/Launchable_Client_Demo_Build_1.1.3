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
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t2321347278;
// System.Action`1<System.String>
struct Action_1_t1831019615;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MNAndroidAlert
struct  MNAndroidAlert_t2789165288  : public MonoBehaviour_t1158329972
{
public:
	// System.String MNAndroidAlert::title
	String_t* ___title_2;
	// System.String MNAndroidAlert::message
	String_t* ___message_3;
	// System.Collections.Generic.IEnumerable`1<System.String> MNAndroidAlert::actions
	Il2CppObject* ___actions_4;
	// System.Action`1<System.String> MNAndroidAlert::OnComplete
	Action_1_t1831019615 * ___OnComplete_5;

public:
	inline static int32_t get_offset_of_title_2() { return static_cast<int32_t>(offsetof(MNAndroidAlert_t2789165288, ___title_2)); }
	inline String_t* get_title_2() const { return ___title_2; }
	inline String_t** get_address_of_title_2() { return &___title_2; }
	inline void set_title_2(String_t* value)
	{
		___title_2 = value;
		Il2CppCodeGenWriteBarrier(&___title_2, value);
	}

	inline static int32_t get_offset_of_message_3() { return static_cast<int32_t>(offsetof(MNAndroidAlert_t2789165288, ___message_3)); }
	inline String_t* get_message_3() const { return ___message_3; }
	inline String_t** get_address_of_message_3() { return &___message_3; }
	inline void set_message_3(String_t* value)
	{
		___message_3 = value;
		Il2CppCodeGenWriteBarrier(&___message_3, value);
	}

	inline static int32_t get_offset_of_actions_4() { return static_cast<int32_t>(offsetof(MNAndroidAlert_t2789165288, ___actions_4)); }
	inline Il2CppObject* get_actions_4() const { return ___actions_4; }
	inline Il2CppObject** get_address_of_actions_4() { return &___actions_4; }
	inline void set_actions_4(Il2CppObject* value)
	{
		___actions_4 = value;
		Il2CppCodeGenWriteBarrier(&___actions_4, value);
	}

	inline static int32_t get_offset_of_OnComplete_5() { return static_cast<int32_t>(offsetof(MNAndroidAlert_t2789165288, ___OnComplete_5)); }
	inline Action_1_t1831019615 * get_OnComplete_5() const { return ___OnComplete_5; }
	inline Action_1_t1831019615 ** get_address_of_OnComplete_5() { return &___OnComplete_5; }
	inline void set_OnComplete_5(Action_1_t1831019615 * value)
	{
		___OnComplete_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnComplete_5, value);
	}
};

struct MNAndroidAlert_t2789165288_StaticFields
{
public:
	// System.Action`1<System.String> MNAndroidAlert::<>f__am$cache0
	Action_1_t1831019615 * ___U3CU3Ef__amU24cache0_6;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_6() { return static_cast<int32_t>(offsetof(MNAndroidAlert_t2789165288_StaticFields, ___U3CU3Ef__amU24cache0_6)); }
	inline Action_1_t1831019615 * get_U3CU3Ef__amU24cache0_6() const { return ___U3CU3Ef__amU24cache0_6; }
	inline Action_1_t1831019615 ** get_address_of_U3CU3Ef__amU24cache0_6() { return &___U3CU3Ef__amU24cache0_6; }
	inline void set_U3CU3Ef__amU24cache0_6(Action_1_t1831019615 * value)
	{
		___U3CU3Ef__amU24cache0_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
