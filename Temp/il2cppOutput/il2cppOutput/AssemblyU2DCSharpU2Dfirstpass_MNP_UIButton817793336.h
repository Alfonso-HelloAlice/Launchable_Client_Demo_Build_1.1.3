#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MNP_UIButton
struct  MNP_UIButton_t817793336  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Button MNP_UIButton::Button
	Button_t2872111280 * ___Button_2;
	// UnityEngine.UI.Text MNP_UIButton::Title
	Text_t356221433 * ___Title_3;

public:
	inline static int32_t get_offset_of_Button_2() { return static_cast<int32_t>(offsetof(MNP_UIButton_t817793336, ___Button_2)); }
	inline Button_t2872111280 * get_Button_2() const { return ___Button_2; }
	inline Button_t2872111280 ** get_address_of_Button_2() { return &___Button_2; }
	inline void set_Button_2(Button_t2872111280 * value)
	{
		___Button_2 = value;
		Il2CppCodeGenWriteBarrier(&___Button_2, value);
	}

	inline static int32_t get_offset_of_Title_3() { return static_cast<int32_t>(offsetof(MNP_UIButton_t817793336, ___Title_3)); }
	inline Text_t356221433 * get_Title_3() const { return ___Title_3; }
	inline Text_t356221433 ** get_address_of_Title_3() { return &___Title_3; }
	inline void set_Title_3(Text_t356221433 * value)
	{
		___Title_3 = value;
		Il2CppCodeGenWriteBarrier(&___Title_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
