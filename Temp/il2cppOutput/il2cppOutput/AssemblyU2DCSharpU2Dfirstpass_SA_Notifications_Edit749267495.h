#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t590162004;
// SA_UIHightDependence
struct SA_UIHightDependence_t2303649696;
// SA.Common.Animation.ValuesTween
struct ValuesTween_t4181447589;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA_Notifications_EditorUIController
struct  SA_Notifications_EditorUIController_t749267495  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text SA_Notifications_EditorUIController::Title
	Text_t356221433 * ___Title_2;
	// UnityEngine.UI.Text SA_Notifications_EditorUIController::Message
	Text_t356221433 * ___Message_3;
	// UnityEngine.UI.Image[] SA_Notifications_EditorUIController::Icons
	ImageU5BU5D_t590162004* ___Icons_4;
	// SA_UIHightDependence SA_Notifications_EditorUIController::HightDependence
	SA_UIHightDependence_t2303649696 * ___HightDependence_5;
	// SA.Common.Animation.ValuesTween SA_Notifications_EditorUIController::_CurrentTween
	ValuesTween_t4181447589 * ____CurrentTween_6;

public:
	inline static int32_t get_offset_of_Title_2() { return static_cast<int32_t>(offsetof(SA_Notifications_EditorUIController_t749267495, ___Title_2)); }
	inline Text_t356221433 * get_Title_2() const { return ___Title_2; }
	inline Text_t356221433 ** get_address_of_Title_2() { return &___Title_2; }
	inline void set_Title_2(Text_t356221433 * value)
	{
		___Title_2 = value;
		Il2CppCodeGenWriteBarrier(&___Title_2, value);
	}

	inline static int32_t get_offset_of_Message_3() { return static_cast<int32_t>(offsetof(SA_Notifications_EditorUIController_t749267495, ___Message_3)); }
	inline Text_t356221433 * get_Message_3() const { return ___Message_3; }
	inline Text_t356221433 ** get_address_of_Message_3() { return &___Message_3; }
	inline void set_Message_3(Text_t356221433 * value)
	{
		___Message_3 = value;
		Il2CppCodeGenWriteBarrier(&___Message_3, value);
	}

	inline static int32_t get_offset_of_Icons_4() { return static_cast<int32_t>(offsetof(SA_Notifications_EditorUIController_t749267495, ___Icons_4)); }
	inline ImageU5BU5D_t590162004* get_Icons_4() const { return ___Icons_4; }
	inline ImageU5BU5D_t590162004** get_address_of_Icons_4() { return &___Icons_4; }
	inline void set_Icons_4(ImageU5BU5D_t590162004* value)
	{
		___Icons_4 = value;
		Il2CppCodeGenWriteBarrier(&___Icons_4, value);
	}

	inline static int32_t get_offset_of_HightDependence_5() { return static_cast<int32_t>(offsetof(SA_Notifications_EditorUIController_t749267495, ___HightDependence_5)); }
	inline SA_UIHightDependence_t2303649696 * get_HightDependence_5() const { return ___HightDependence_5; }
	inline SA_UIHightDependence_t2303649696 ** get_address_of_HightDependence_5() { return &___HightDependence_5; }
	inline void set_HightDependence_5(SA_UIHightDependence_t2303649696 * value)
	{
		___HightDependence_5 = value;
		Il2CppCodeGenWriteBarrier(&___HightDependence_5, value);
	}

	inline static int32_t get_offset_of__CurrentTween_6() { return static_cast<int32_t>(offsetof(SA_Notifications_EditorUIController_t749267495, ____CurrentTween_6)); }
	inline ValuesTween_t4181447589 * get__CurrentTween_6() const { return ____CurrentTween_6; }
	inline ValuesTween_t4181447589 ** get_address_of__CurrentTween_6() { return &____CurrentTween_6; }
	inline void set__CurrentTween_6(ValuesTween_t4181447589 * value)
	{
		____CurrentTween_6 = value;
		Il2CppCodeGenWriteBarrier(&____CurrentTween_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
