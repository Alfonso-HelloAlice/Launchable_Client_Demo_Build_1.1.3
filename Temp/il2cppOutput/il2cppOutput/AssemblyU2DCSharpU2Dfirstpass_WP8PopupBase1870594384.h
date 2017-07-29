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
// System.Action`1<WP8DialogResult>
struct Action_1_t3586813062;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WP8PopupBase
struct  WP8PopupBase_t1870594384  : public MonoBehaviour_t1158329972
{
public:
	// System.String WP8PopupBase::title
	String_t* ___title_2;
	// System.String WP8PopupBase::message
	String_t* ___message_3;
	// System.Action`1<WP8DialogResult> WP8PopupBase::OnComplete
	Action_1_t3586813062 * ___OnComplete_4;

public:
	inline static int32_t get_offset_of_title_2() { return static_cast<int32_t>(offsetof(WP8PopupBase_t1870594384, ___title_2)); }
	inline String_t* get_title_2() const { return ___title_2; }
	inline String_t** get_address_of_title_2() { return &___title_2; }
	inline void set_title_2(String_t* value)
	{
		___title_2 = value;
		Il2CppCodeGenWriteBarrier(&___title_2, value);
	}

	inline static int32_t get_offset_of_message_3() { return static_cast<int32_t>(offsetof(WP8PopupBase_t1870594384, ___message_3)); }
	inline String_t* get_message_3() const { return ___message_3; }
	inline String_t** get_address_of_message_3() { return &___message_3; }
	inline void set_message_3(String_t* value)
	{
		___message_3 = value;
		Il2CppCodeGenWriteBarrier(&___message_3, value);
	}

	inline static int32_t get_offset_of_OnComplete_4() { return static_cast<int32_t>(offsetof(WP8PopupBase_t1870594384, ___OnComplete_4)); }
	inline Action_1_t3586813062 * get_OnComplete_4() const { return ___OnComplete_4; }
	inline Action_1_t3586813062 ** get_address_of_OnComplete_4() { return &___OnComplete_4; }
	inline void set_OnComplete_4(Action_1_t3586813062 * value)
	{
		___OnComplete_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnComplete_4, value);
	}
};

struct WP8PopupBase_t1870594384_StaticFields
{
public:
	// System.Action`1<WP8DialogResult> WP8PopupBase::<>f__am$cache0
	Action_1_t3586813062 * ___U3CU3Ef__amU24cache0_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_5() { return static_cast<int32_t>(offsetof(WP8PopupBase_t1870594384_StaticFields, ___U3CU3Ef__amU24cache0_5)); }
	inline Action_1_t3586813062 * get_U3CU3Ef__amU24cache0_5() const { return ___U3CU3Ef__amU24cache0_5; }
	inline Action_1_t3586813062 ** get_address_of_U3CU3Ef__amU24cache0_5() { return &___U3CU3Ef__amU24cache0_5; }
	inline void set_U3CU3Ef__amU24cache0_5(Action_1_t3586813062 * value)
	{
		___U3CU3Ef__amU24cache0_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
