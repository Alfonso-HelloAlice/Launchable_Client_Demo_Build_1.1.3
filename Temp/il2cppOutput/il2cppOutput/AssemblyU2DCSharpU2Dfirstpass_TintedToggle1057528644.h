#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// UnityEngine.UI.Toggle
struct Toggle_t3976754468;
// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TintedToggle
struct  TintedToggle_t1057528644  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Toggle TintedToggle::ToggleButton
	Toggle_t3976754468 * ___ToggleButton_2;
	// UnityEngine.UI.Text TintedToggle::Label
	Text_t356221433 * ___Label_3;
	// UnityEngine.Color TintedToggle::TintColor
	Color_t2020392075  ___TintColor_4;
	// UnityEngine.Color TintedToggle::Color
	Color_t2020392075  ___Color_5;

public:
	inline static int32_t get_offset_of_ToggleButton_2() { return static_cast<int32_t>(offsetof(TintedToggle_t1057528644, ___ToggleButton_2)); }
	inline Toggle_t3976754468 * get_ToggleButton_2() const { return ___ToggleButton_2; }
	inline Toggle_t3976754468 ** get_address_of_ToggleButton_2() { return &___ToggleButton_2; }
	inline void set_ToggleButton_2(Toggle_t3976754468 * value)
	{
		___ToggleButton_2 = value;
		Il2CppCodeGenWriteBarrier(&___ToggleButton_2, value);
	}

	inline static int32_t get_offset_of_Label_3() { return static_cast<int32_t>(offsetof(TintedToggle_t1057528644, ___Label_3)); }
	inline Text_t356221433 * get_Label_3() const { return ___Label_3; }
	inline Text_t356221433 ** get_address_of_Label_3() { return &___Label_3; }
	inline void set_Label_3(Text_t356221433 * value)
	{
		___Label_3 = value;
		Il2CppCodeGenWriteBarrier(&___Label_3, value);
	}

	inline static int32_t get_offset_of_TintColor_4() { return static_cast<int32_t>(offsetof(TintedToggle_t1057528644, ___TintColor_4)); }
	inline Color_t2020392075  get_TintColor_4() const { return ___TintColor_4; }
	inline Color_t2020392075 * get_address_of_TintColor_4() { return &___TintColor_4; }
	inline void set_TintColor_4(Color_t2020392075  value)
	{
		___TintColor_4 = value;
	}

	inline static int32_t get_offset_of_Color_5() { return static_cast<int32_t>(offsetof(TintedToggle_t1057528644, ___Color_5)); }
	inline Color_t2020392075  get_Color_5() const { return ___Color_5; }
	inline Color_t2020392075 * get_address_of_Color_5() { return &___Color_5; }
	inline void set_Color_5(Color_t2020392075  value)
	{
		___Color_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
