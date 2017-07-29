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
// UnityEngine.UI.Toggle
struct Toggle_t3976754468;
// UnityEngine.UI.Image
struct Image_t2042527209;
// SA_UIHightDependence
struct SA_UIHightDependence_t2303649696;
// SA.Common.Animation.ValuesTween
struct ValuesTween_t4181447589;
// System.Action`1<System.Boolean>
struct Action_1_t3627374100;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA_InApps_EditorUIController
struct  SA_InApps_EditorUIController_t628772056  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text SA_InApps_EditorUIController::Title
	Text_t356221433 * ___Title_2;
	// UnityEngine.UI.Text SA_InApps_EditorUIController::Describtion
	Text_t356221433 * ___Describtion_3;
	// UnityEngine.UI.Text SA_InApps_EditorUIController::Price
	Text_t356221433 * ___Price_4;
	// UnityEngine.UI.Toggle SA_InApps_EditorUIController::IsSuccsesPurchase
	Toggle_t3976754468 * ___IsSuccsesPurchase_5;
	// UnityEngine.UI.Image SA_InApps_EditorUIController::Fader
	Image_t2042527209 * ___Fader_6;
	// SA_UIHightDependence SA_InApps_EditorUIController::HightDependence
	SA_UIHightDependence_t2303649696 * ___HightDependence_7;
	// SA.Common.Animation.ValuesTween SA_InApps_EditorUIController::_CurrentTween
	ValuesTween_t4181447589 * ____CurrentTween_8;
	// SA.Common.Animation.ValuesTween SA_InApps_EditorUIController::_FaderTween
	ValuesTween_t4181447589 * ____FaderTween_9;
	// System.Action`1<System.Boolean> SA_InApps_EditorUIController::_OnComplete
	Action_1_t3627374100 * ____OnComplete_10;

public:
	inline static int32_t get_offset_of_Title_2() { return static_cast<int32_t>(offsetof(SA_InApps_EditorUIController_t628772056, ___Title_2)); }
	inline Text_t356221433 * get_Title_2() const { return ___Title_2; }
	inline Text_t356221433 ** get_address_of_Title_2() { return &___Title_2; }
	inline void set_Title_2(Text_t356221433 * value)
	{
		___Title_2 = value;
		Il2CppCodeGenWriteBarrier(&___Title_2, value);
	}

	inline static int32_t get_offset_of_Describtion_3() { return static_cast<int32_t>(offsetof(SA_InApps_EditorUIController_t628772056, ___Describtion_3)); }
	inline Text_t356221433 * get_Describtion_3() const { return ___Describtion_3; }
	inline Text_t356221433 ** get_address_of_Describtion_3() { return &___Describtion_3; }
	inline void set_Describtion_3(Text_t356221433 * value)
	{
		___Describtion_3 = value;
		Il2CppCodeGenWriteBarrier(&___Describtion_3, value);
	}

	inline static int32_t get_offset_of_Price_4() { return static_cast<int32_t>(offsetof(SA_InApps_EditorUIController_t628772056, ___Price_4)); }
	inline Text_t356221433 * get_Price_4() const { return ___Price_4; }
	inline Text_t356221433 ** get_address_of_Price_4() { return &___Price_4; }
	inline void set_Price_4(Text_t356221433 * value)
	{
		___Price_4 = value;
		Il2CppCodeGenWriteBarrier(&___Price_4, value);
	}

	inline static int32_t get_offset_of_IsSuccsesPurchase_5() { return static_cast<int32_t>(offsetof(SA_InApps_EditorUIController_t628772056, ___IsSuccsesPurchase_5)); }
	inline Toggle_t3976754468 * get_IsSuccsesPurchase_5() const { return ___IsSuccsesPurchase_5; }
	inline Toggle_t3976754468 ** get_address_of_IsSuccsesPurchase_5() { return &___IsSuccsesPurchase_5; }
	inline void set_IsSuccsesPurchase_5(Toggle_t3976754468 * value)
	{
		___IsSuccsesPurchase_5 = value;
		Il2CppCodeGenWriteBarrier(&___IsSuccsesPurchase_5, value);
	}

	inline static int32_t get_offset_of_Fader_6() { return static_cast<int32_t>(offsetof(SA_InApps_EditorUIController_t628772056, ___Fader_6)); }
	inline Image_t2042527209 * get_Fader_6() const { return ___Fader_6; }
	inline Image_t2042527209 ** get_address_of_Fader_6() { return &___Fader_6; }
	inline void set_Fader_6(Image_t2042527209 * value)
	{
		___Fader_6 = value;
		Il2CppCodeGenWriteBarrier(&___Fader_6, value);
	}

	inline static int32_t get_offset_of_HightDependence_7() { return static_cast<int32_t>(offsetof(SA_InApps_EditorUIController_t628772056, ___HightDependence_7)); }
	inline SA_UIHightDependence_t2303649696 * get_HightDependence_7() const { return ___HightDependence_7; }
	inline SA_UIHightDependence_t2303649696 ** get_address_of_HightDependence_7() { return &___HightDependence_7; }
	inline void set_HightDependence_7(SA_UIHightDependence_t2303649696 * value)
	{
		___HightDependence_7 = value;
		Il2CppCodeGenWriteBarrier(&___HightDependence_7, value);
	}

	inline static int32_t get_offset_of__CurrentTween_8() { return static_cast<int32_t>(offsetof(SA_InApps_EditorUIController_t628772056, ____CurrentTween_8)); }
	inline ValuesTween_t4181447589 * get__CurrentTween_8() const { return ____CurrentTween_8; }
	inline ValuesTween_t4181447589 ** get_address_of__CurrentTween_8() { return &____CurrentTween_8; }
	inline void set__CurrentTween_8(ValuesTween_t4181447589 * value)
	{
		____CurrentTween_8 = value;
		Il2CppCodeGenWriteBarrier(&____CurrentTween_8, value);
	}

	inline static int32_t get_offset_of__FaderTween_9() { return static_cast<int32_t>(offsetof(SA_InApps_EditorUIController_t628772056, ____FaderTween_9)); }
	inline ValuesTween_t4181447589 * get__FaderTween_9() const { return ____FaderTween_9; }
	inline ValuesTween_t4181447589 ** get_address_of__FaderTween_9() { return &____FaderTween_9; }
	inline void set__FaderTween_9(ValuesTween_t4181447589 * value)
	{
		____FaderTween_9 = value;
		Il2CppCodeGenWriteBarrier(&____FaderTween_9, value);
	}

	inline static int32_t get_offset_of__OnComplete_10() { return static_cast<int32_t>(offsetof(SA_InApps_EditorUIController_t628772056, ____OnComplete_10)); }
	inline Action_1_t3627374100 * get__OnComplete_10() const { return ____OnComplete_10; }
	inline Action_1_t3627374100 ** get_address_of__OnComplete_10() { return &____OnComplete_10; }
	inline void set__OnComplete_10(Action_1_t3627374100 * value)
	{
		____OnComplete_10 = value;
		Il2CppCodeGenWriteBarrier(&____OnComplete_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
