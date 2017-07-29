#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// SA.Fitness.Recording
struct Recording_t3050250663;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Common.Pattern.Singleton`1<SA.Fitness.Recording>
struct  Singleton_1_t3532815768  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct Singleton_1_t3532815768_StaticFields
{
public:
	// T SA.Common.Pattern.Singleton`1::_instance
	Recording_t3050250663 * ____instance_2;
	// System.Boolean SA.Common.Pattern.Singleton`1::applicationIsQuitting
	bool ___applicationIsQuitting_3;

public:
	inline static int32_t get_offset_of__instance_2() { return static_cast<int32_t>(offsetof(Singleton_1_t3532815768_StaticFields, ____instance_2)); }
	inline Recording_t3050250663 * get__instance_2() const { return ____instance_2; }
	inline Recording_t3050250663 ** get_address_of__instance_2() { return &____instance_2; }
	inline void set__instance_2(Recording_t3050250663 * value)
	{
		____instance_2 = value;
		Il2CppCodeGenWriteBarrier(&____instance_2, value);
	}

	inline static int32_t get_offset_of_applicationIsQuitting_3() { return static_cast<int32_t>(offsetof(Singleton_1_t3532815768_StaticFields, ___applicationIsQuitting_3)); }
	inline bool get_applicationIsQuitting_3() const { return ___applicationIsQuitting_3; }
	inline bool* get_address_of_applicationIsQuitting_3() { return &___applicationIsQuitting_3; }
	inline void set_applicationIsQuitting_3(bool value)
	{
		___applicationIsQuitting_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
