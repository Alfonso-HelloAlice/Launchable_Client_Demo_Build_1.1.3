#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Text
struct Text_t356221433;
// MNP_UIButton[]
struct MNP_UIButtonU5BU5D_t1719980777;
// MNPopup/MNPopupAction
struct MNPopupAction_t2249655003;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MNP_EditorUIController
struct  MNP_EditorUIController_t4137967787  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject MNP_EditorUIController::Root
	GameObject_t1756533147 * ___Root_2;
	// UnityEngine.UI.Text MNP_EditorUIController::Title
	Text_t356221433 * ___Title_3;
	// UnityEngine.UI.Text MNP_EditorUIController::Message
	Text_t356221433 * ___Message_4;
	// MNP_UIButton[] MNP_EditorUIController::UIButtons
	MNP_UIButtonU5BU5D_t1719980777* ___UIButtons_5;
	// MNPopup/MNPopupAction MNP_EditorUIController::dismiss
	MNPopupAction_t2249655003 * ___dismiss_6;
	// System.Boolean MNP_EditorUIController::isActive
	bool ___isActive_7;

public:
	inline static int32_t get_offset_of_Root_2() { return static_cast<int32_t>(offsetof(MNP_EditorUIController_t4137967787, ___Root_2)); }
	inline GameObject_t1756533147 * get_Root_2() const { return ___Root_2; }
	inline GameObject_t1756533147 ** get_address_of_Root_2() { return &___Root_2; }
	inline void set_Root_2(GameObject_t1756533147 * value)
	{
		___Root_2 = value;
		Il2CppCodeGenWriteBarrier(&___Root_2, value);
	}

	inline static int32_t get_offset_of_Title_3() { return static_cast<int32_t>(offsetof(MNP_EditorUIController_t4137967787, ___Title_3)); }
	inline Text_t356221433 * get_Title_3() const { return ___Title_3; }
	inline Text_t356221433 ** get_address_of_Title_3() { return &___Title_3; }
	inline void set_Title_3(Text_t356221433 * value)
	{
		___Title_3 = value;
		Il2CppCodeGenWriteBarrier(&___Title_3, value);
	}

	inline static int32_t get_offset_of_Message_4() { return static_cast<int32_t>(offsetof(MNP_EditorUIController_t4137967787, ___Message_4)); }
	inline Text_t356221433 * get_Message_4() const { return ___Message_4; }
	inline Text_t356221433 ** get_address_of_Message_4() { return &___Message_4; }
	inline void set_Message_4(Text_t356221433 * value)
	{
		___Message_4 = value;
		Il2CppCodeGenWriteBarrier(&___Message_4, value);
	}

	inline static int32_t get_offset_of_UIButtons_5() { return static_cast<int32_t>(offsetof(MNP_EditorUIController_t4137967787, ___UIButtons_5)); }
	inline MNP_UIButtonU5BU5D_t1719980777* get_UIButtons_5() const { return ___UIButtons_5; }
	inline MNP_UIButtonU5BU5D_t1719980777** get_address_of_UIButtons_5() { return &___UIButtons_5; }
	inline void set_UIButtons_5(MNP_UIButtonU5BU5D_t1719980777* value)
	{
		___UIButtons_5 = value;
		Il2CppCodeGenWriteBarrier(&___UIButtons_5, value);
	}

	inline static int32_t get_offset_of_dismiss_6() { return static_cast<int32_t>(offsetof(MNP_EditorUIController_t4137967787, ___dismiss_6)); }
	inline MNPopupAction_t2249655003 * get_dismiss_6() const { return ___dismiss_6; }
	inline MNPopupAction_t2249655003 ** get_address_of_dismiss_6() { return &___dismiss_6; }
	inline void set_dismiss_6(MNPopupAction_t2249655003 * value)
	{
		___dismiss_6 = value;
		Il2CppCodeGenWriteBarrier(&___dismiss_6, value);
	}

	inline static int32_t get_offset_of_isActive_7() { return static_cast<int32_t>(offsetof(MNP_EditorUIController_t4137967787, ___isActive_7)); }
	inline bool get_isActive_7() const { return ___isActive_7; }
	inline bool* get_address_of_isActive_7() { return &___isActive_7; }
	inline void set_isActive_7(bool value)
	{
		___isActive_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
