#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.Dictionary`2<System.String,MNPopup/MNPopupAction>
struct Dictionary_2_t4164434265;
// MNPopup/MNPopupAction
struct MNPopupAction_t2249655003;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MNPopup
struct  MNPopup_t3166308983  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,MNPopup/MNPopupAction> MNPopup::actions
	Dictionary_2_t4164434265 * ___actions_0;
	// MNPopup/MNPopupAction MNPopup::dismissCallback
	MNPopupAction_t2249655003 * ___dismissCallback_1;
	// System.String MNPopup::title
	String_t* ___title_2;
	// System.String MNPopup::message
	String_t* ___message_3;

public:
	inline static int32_t get_offset_of_actions_0() { return static_cast<int32_t>(offsetof(MNPopup_t3166308983, ___actions_0)); }
	inline Dictionary_2_t4164434265 * get_actions_0() const { return ___actions_0; }
	inline Dictionary_2_t4164434265 ** get_address_of_actions_0() { return &___actions_0; }
	inline void set_actions_0(Dictionary_2_t4164434265 * value)
	{
		___actions_0 = value;
		Il2CppCodeGenWriteBarrier(&___actions_0, value);
	}

	inline static int32_t get_offset_of_dismissCallback_1() { return static_cast<int32_t>(offsetof(MNPopup_t3166308983, ___dismissCallback_1)); }
	inline MNPopupAction_t2249655003 * get_dismissCallback_1() const { return ___dismissCallback_1; }
	inline MNPopupAction_t2249655003 ** get_address_of_dismissCallback_1() { return &___dismissCallback_1; }
	inline void set_dismissCallback_1(MNPopupAction_t2249655003 * value)
	{
		___dismissCallback_1 = value;
		Il2CppCodeGenWriteBarrier(&___dismissCallback_1, value);
	}

	inline static int32_t get_offset_of_title_2() { return static_cast<int32_t>(offsetof(MNPopup_t3166308983, ___title_2)); }
	inline String_t* get_title_2() const { return ___title_2; }
	inline String_t** get_address_of_title_2() { return &___title_2; }
	inline void set_title_2(String_t* value)
	{
		___title_2 = value;
		Il2CppCodeGenWriteBarrier(&___title_2, value);
	}

	inline static int32_t get_offset_of_message_3() { return static_cast<int32_t>(offsetof(MNPopup_t3166308983, ___message_3)); }
	inline String_t* get_message_3() const { return ___message_3; }
	inline String_t** get_address_of_message_3() { return &___message_3; }
	inline void set_message_3(String_t* value)
	{
		___message_3 = value;
		Il2CppCodeGenWriteBarrier(&___message_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
