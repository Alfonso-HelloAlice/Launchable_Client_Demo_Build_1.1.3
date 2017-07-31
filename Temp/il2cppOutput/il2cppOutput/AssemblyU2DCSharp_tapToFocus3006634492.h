#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Focus4087668361.h"
#include "UnityEngine_UnityEngine_Touch407273883.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// tapToFocus
struct  tapToFocus_t3006634492  : public MonoBehaviour_t1158329972
{
public:
	// Vuforia.CameraDevice/FocusMode tapToFocus::mFocusMode
	int32_t ___mFocusMode_2;
	// System.String tapToFocus::mAutoFocusText
	String_t* ___mAutoFocusText_5;
	// System.Single tapToFocus::touchDuration
	float ___touchDuration_6;
	// UnityEngine.Touch tapToFocus::touch
	Touch_t407273883  ___touch_7;

public:
	inline static int32_t get_offset_of_mFocusMode_2() { return static_cast<int32_t>(offsetof(tapToFocus_t3006634492, ___mFocusMode_2)); }
	inline int32_t get_mFocusMode_2() const { return ___mFocusMode_2; }
	inline int32_t* get_address_of_mFocusMode_2() { return &___mFocusMode_2; }
	inline void set_mFocusMode_2(int32_t value)
	{
		___mFocusMode_2 = value;
	}

	inline static int32_t get_offset_of_mAutoFocusText_5() { return static_cast<int32_t>(offsetof(tapToFocus_t3006634492, ___mAutoFocusText_5)); }
	inline String_t* get_mAutoFocusText_5() const { return ___mAutoFocusText_5; }
	inline String_t** get_address_of_mAutoFocusText_5() { return &___mAutoFocusText_5; }
	inline void set_mAutoFocusText_5(String_t* value)
	{
		___mAutoFocusText_5 = value;
		Il2CppCodeGenWriteBarrier(&___mAutoFocusText_5, value);
	}

	inline static int32_t get_offset_of_touchDuration_6() { return static_cast<int32_t>(offsetof(tapToFocus_t3006634492, ___touchDuration_6)); }
	inline float get_touchDuration_6() const { return ___touchDuration_6; }
	inline float* get_address_of_touchDuration_6() { return &___touchDuration_6; }
	inline void set_touchDuration_6(float value)
	{
		___touchDuration_6 = value;
	}

	inline static int32_t get_offset_of_touch_7() { return static_cast<int32_t>(offsetof(tapToFocus_t3006634492, ___touch_7)); }
	inline Touch_t407273883  get_touch_7() const { return ___touch_7; }
	inline Touch_t407273883 * get_address_of_touch_7() { return &___touch_7; }
	inline void set_touch_7(Touch_t407273883  value)
	{
		___touch_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
