#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.IOSNative.Gestures.ForceInfo
struct  ForceInfo_t478691871  : public Il2CppObject
{
public:
	// System.Single SA.IOSNative.Gestures.ForceInfo::_Force
	float ____Force_0;
	// System.Single SA.IOSNative.Gestures.ForceInfo::_MaxForce
	float ____MaxForce_1;

public:
	inline static int32_t get_offset_of__Force_0() { return static_cast<int32_t>(offsetof(ForceInfo_t478691871, ____Force_0)); }
	inline float get__Force_0() const { return ____Force_0; }
	inline float* get_address_of__Force_0() { return &____Force_0; }
	inline void set__Force_0(float value)
	{
		____Force_0 = value;
	}

	inline static int32_t get_offset_of__MaxForce_1() { return static_cast<int32_t>(offsetof(ForceInfo_t478691871, ____MaxForce_1)); }
	inline float get__MaxForce_1() const { return ____MaxForce_1; }
	inline float* get_address_of__MaxForce_1() { return &____MaxForce_1; }
	inline void set__MaxForce_1(float value)
	{
		____MaxForce_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
