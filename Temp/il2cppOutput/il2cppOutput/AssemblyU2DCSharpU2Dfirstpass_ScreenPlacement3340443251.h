#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ScreenPosition2449785599.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_ScreenOrientation4019489636.h"

// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScreenPlacement
struct  ScreenPlacement_t3340443251  : public MonoBehaviour_t1158329972
{
public:
	// ScreenPosition ScreenPlacement::position
	int32_t ___position_2;
	// UnityEngine.Vector2 ScreenPlacement::pixelOffset
	Vector2_t2243707579  ___pixelOffset_3;
	// System.Boolean ScreenPlacement::persents
	bool ___persents_4;
	// System.Boolean ScreenPlacement::calulateStartOnly
	bool ___calulateStartOnly_5;
	// UnityEngine.Transform ScreenPlacement::boundsTransform
	Transform_t3275118058 * ___boundsTransform_6;
	// UnityEngine.Vector2 ScreenPlacement::actualOffset
	Vector2_t2243707579  ___actualOffset_7;
	// UnityEngine.ScreenOrientation ScreenPlacement::orinetation
	int32_t ___orinetation_8;

public:
	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(ScreenPlacement_t3340443251, ___position_2)); }
	inline int32_t get_position_2() const { return ___position_2; }
	inline int32_t* get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(int32_t value)
	{
		___position_2 = value;
	}

	inline static int32_t get_offset_of_pixelOffset_3() { return static_cast<int32_t>(offsetof(ScreenPlacement_t3340443251, ___pixelOffset_3)); }
	inline Vector2_t2243707579  get_pixelOffset_3() const { return ___pixelOffset_3; }
	inline Vector2_t2243707579 * get_address_of_pixelOffset_3() { return &___pixelOffset_3; }
	inline void set_pixelOffset_3(Vector2_t2243707579  value)
	{
		___pixelOffset_3 = value;
	}

	inline static int32_t get_offset_of_persents_4() { return static_cast<int32_t>(offsetof(ScreenPlacement_t3340443251, ___persents_4)); }
	inline bool get_persents_4() const { return ___persents_4; }
	inline bool* get_address_of_persents_4() { return &___persents_4; }
	inline void set_persents_4(bool value)
	{
		___persents_4 = value;
	}

	inline static int32_t get_offset_of_calulateStartOnly_5() { return static_cast<int32_t>(offsetof(ScreenPlacement_t3340443251, ___calulateStartOnly_5)); }
	inline bool get_calulateStartOnly_5() const { return ___calulateStartOnly_5; }
	inline bool* get_address_of_calulateStartOnly_5() { return &___calulateStartOnly_5; }
	inline void set_calulateStartOnly_5(bool value)
	{
		___calulateStartOnly_5 = value;
	}

	inline static int32_t get_offset_of_boundsTransform_6() { return static_cast<int32_t>(offsetof(ScreenPlacement_t3340443251, ___boundsTransform_6)); }
	inline Transform_t3275118058 * get_boundsTransform_6() const { return ___boundsTransform_6; }
	inline Transform_t3275118058 ** get_address_of_boundsTransform_6() { return &___boundsTransform_6; }
	inline void set_boundsTransform_6(Transform_t3275118058 * value)
	{
		___boundsTransform_6 = value;
		Il2CppCodeGenWriteBarrier(&___boundsTransform_6, value);
	}

	inline static int32_t get_offset_of_actualOffset_7() { return static_cast<int32_t>(offsetof(ScreenPlacement_t3340443251, ___actualOffset_7)); }
	inline Vector2_t2243707579  get_actualOffset_7() const { return ___actualOffset_7; }
	inline Vector2_t2243707579 * get_address_of_actualOffset_7() { return &___actualOffset_7; }
	inline void set_actualOffset_7(Vector2_t2243707579  value)
	{
		___actualOffset_7 = value;
	}

	inline static int32_t get_offset_of_orinetation_8() { return static_cast<int32_t>(offsetof(ScreenPlacement_t3340443251, ___orinetation_8)); }
	inline int32_t get_orinetation_8() const { return ___orinetation_8; }
	inline int32_t* get_address_of_orinetation_8() { return &___orinetation_8; }
	inline void set_orinetation_8(int32_t value)
	{
		___orinetation_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
