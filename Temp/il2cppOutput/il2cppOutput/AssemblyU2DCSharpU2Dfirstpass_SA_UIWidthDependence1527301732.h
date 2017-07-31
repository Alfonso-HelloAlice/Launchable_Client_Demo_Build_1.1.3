#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

// UnityEngine.RectTransform
struct RectTransform_t3349966182;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA_UIWidthDependence
struct  SA_UIWidthDependence_t1527301732  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.RectTransform SA_UIWidthDependence::_rect
	RectTransform_t3349966182 * ____rect_2;
	// System.Boolean SA_UIWidthDependence::KeepRatioInEdiotr
	bool ___KeepRatioInEdiotr_3;
	// System.Boolean SA_UIWidthDependence::CaclulcateOnlyOntStart
	bool ___CaclulcateOnlyOntStart_4;
	// UnityEngine.Rect SA_UIWidthDependence::InitialRect
	Rect_t3681755626  ___InitialRect_5;
	// UnityEngine.Rect SA_UIWidthDependence::InitialScreen
	Rect_t3681755626  ___InitialScreen_6;

public:
	inline static int32_t get_offset_of__rect_2() { return static_cast<int32_t>(offsetof(SA_UIWidthDependence_t1527301732, ____rect_2)); }
	inline RectTransform_t3349966182 * get__rect_2() const { return ____rect_2; }
	inline RectTransform_t3349966182 ** get_address_of__rect_2() { return &____rect_2; }
	inline void set__rect_2(RectTransform_t3349966182 * value)
	{
		____rect_2 = value;
		Il2CppCodeGenWriteBarrier(&____rect_2, value);
	}

	inline static int32_t get_offset_of_KeepRatioInEdiotr_3() { return static_cast<int32_t>(offsetof(SA_UIWidthDependence_t1527301732, ___KeepRatioInEdiotr_3)); }
	inline bool get_KeepRatioInEdiotr_3() const { return ___KeepRatioInEdiotr_3; }
	inline bool* get_address_of_KeepRatioInEdiotr_3() { return &___KeepRatioInEdiotr_3; }
	inline void set_KeepRatioInEdiotr_3(bool value)
	{
		___KeepRatioInEdiotr_3 = value;
	}

	inline static int32_t get_offset_of_CaclulcateOnlyOntStart_4() { return static_cast<int32_t>(offsetof(SA_UIWidthDependence_t1527301732, ___CaclulcateOnlyOntStart_4)); }
	inline bool get_CaclulcateOnlyOntStart_4() const { return ___CaclulcateOnlyOntStart_4; }
	inline bool* get_address_of_CaclulcateOnlyOntStart_4() { return &___CaclulcateOnlyOntStart_4; }
	inline void set_CaclulcateOnlyOntStart_4(bool value)
	{
		___CaclulcateOnlyOntStart_4 = value;
	}

	inline static int32_t get_offset_of_InitialRect_5() { return static_cast<int32_t>(offsetof(SA_UIWidthDependence_t1527301732, ___InitialRect_5)); }
	inline Rect_t3681755626  get_InitialRect_5() const { return ___InitialRect_5; }
	inline Rect_t3681755626 * get_address_of_InitialRect_5() { return &___InitialRect_5; }
	inline void set_InitialRect_5(Rect_t3681755626  value)
	{
		___InitialRect_5 = value;
	}

	inline static int32_t get_offset_of_InitialScreen_6() { return static_cast<int32_t>(offsetof(SA_UIWidthDependence_t1527301732, ___InitialScreen_6)); }
	inline Rect_t3681755626  get_InitialScreen_6() const { return ___InitialScreen_6; }
	inline Rect_t3681755626 * get_address_of_InitialScreen_6() { return &___InitialScreen_6; }
	inline void set_InitialScreen_6(Rect_t3681755626  value)
	{
		___InitialScreen_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
