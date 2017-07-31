#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UM_AdExample
struct  UM_AdExample_t4143800180  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GUIStyle UM_AdExample::style
	GUIStyle_t1799908754 * ___style_2;
	// UnityEngine.GUIStyle UM_AdExample::style2
	GUIStyle_t1799908754 * ___style2_3;
	// System.Int32 UM_AdExample::bannerId1
	int32_t ___bannerId1_4;
	// System.Int32 UM_AdExample::bannerId2
	int32_t ___bannerId2_5;
	// System.Boolean UM_AdExample::isLoadInt
	bool ___isLoadInt_6;

public:
	inline static int32_t get_offset_of_style_2() { return static_cast<int32_t>(offsetof(UM_AdExample_t4143800180, ___style_2)); }
	inline GUIStyle_t1799908754 * get_style_2() const { return ___style_2; }
	inline GUIStyle_t1799908754 ** get_address_of_style_2() { return &___style_2; }
	inline void set_style_2(GUIStyle_t1799908754 * value)
	{
		___style_2 = value;
		Il2CppCodeGenWriteBarrier(&___style_2, value);
	}

	inline static int32_t get_offset_of_style2_3() { return static_cast<int32_t>(offsetof(UM_AdExample_t4143800180, ___style2_3)); }
	inline GUIStyle_t1799908754 * get_style2_3() const { return ___style2_3; }
	inline GUIStyle_t1799908754 ** get_address_of_style2_3() { return &___style2_3; }
	inline void set_style2_3(GUIStyle_t1799908754 * value)
	{
		___style2_3 = value;
		Il2CppCodeGenWriteBarrier(&___style2_3, value);
	}

	inline static int32_t get_offset_of_bannerId1_4() { return static_cast<int32_t>(offsetof(UM_AdExample_t4143800180, ___bannerId1_4)); }
	inline int32_t get_bannerId1_4() const { return ___bannerId1_4; }
	inline int32_t* get_address_of_bannerId1_4() { return &___bannerId1_4; }
	inline void set_bannerId1_4(int32_t value)
	{
		___bannerId1_4 = value;
	}

	inline static int32_t get_offset_of_bannerId2_5() { return static_cast<int32_t>(offsetof(UM_AdExample_t4143800180, ___bannerId2_5)); }
	inline int32_t get_bannerId2_5() const { return ___bannerId2_5; }
	inline int32_t* get_address_of_bannerId2_5() { return &___bannerId2_5; }
	inline void set_bannerId2_5(int32_t value)
	{
		___bannerId2_5 = value;
	}

	inline static int32_t get_offset_of_isLoadInt_6() { return static_cast<int32_t>(offsetof(UM_AdExample_t4143800180, ___isLoadInt_6)); }
	inline bool get_isLoadInt_6() const { return ___isLoadInt_6; }
	inline bool* get_address_of_isLoadInt_6() { return &___isLoadInt_6; }
	inline void set_isLoadInt_6(bool value)
	{
		___isLoadInt_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
