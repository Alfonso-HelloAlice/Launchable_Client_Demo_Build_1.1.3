#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Pattern_Si1830890259.h"

// System.String
struct String_t;
// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UM_ExampleStatusBar
struct  UM_ExampleStatusBar_t1348325154  : public Singleton_1_t1830890259
{
public:
	// System.String UM_ExampleStatusBar::_text
	String_t* ____text_4;
	// System.Single UM_ExampleStatusBar::h
	float ___h_5;
	// UnityEngine.GUIStyle UM_ExampleStatusBar::style
	GUIStyle_t1799908754 * ___style_6;

public:
	inline static int32_t get_offset_of__text_4() { return static_cast<int32_t>(offsetof(UM_ExampleStatusBar_t1348325154, ____text_4)); }
	inline String_t* get__text_4() const { return ____text_4; }
	inline String_t** get_address_of__text_4() { return &____text_4; }
	inline void set__text_4(String_t* value)
	{
		____text_4 = value;
		Il2CppCodeGenWriteBarrier(&____text_4, value);
	}

	inline static int32_t get_offset_of_h_5() { return static_cast<int32_t>(offsetof(UM_ExampleStatusBar_t1348325154, ___h_5)); }
	inline float get_h_5() const { return ___h_5; }
	inline float* get_address_of_h_5() { return &___h_5; }
	inline void set_h_5(float value)
	{
		___h_5 = value;
	}

	inline static int32_t get_offset_of_style_6() { return static_cast<int32_t>(offsetof(UM_ExampleStatusBar_t1348325154, ___style_6)); }
	inline GUIStyle_t1799908754 * get_style_6() const { return ___style_6; }
	inline GUIStyle_t1799908754 ** get_address_of_style_6() { return &___style_6; }
	inline void set_style_6(GUIStyle_t1799908754 * value)
	{
		___style_6 = value;
		Il2CppCodeGenWriteBarrier(&___style_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
