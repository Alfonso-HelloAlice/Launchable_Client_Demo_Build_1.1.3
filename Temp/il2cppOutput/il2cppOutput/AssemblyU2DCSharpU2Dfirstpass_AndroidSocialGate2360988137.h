#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// AndroidSocialGate
struct AndroidSocialGate_t2360988137;
// System.Action`2<System.Boolean,System.String>
struct Action_2_t1865222972;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AndroidSocialGate
struct  AndroidSocialGate_t2360988137  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct AndroidSocialGate_t2360988137_StaticFields
{
public:
	// AndroidSocialGate AndroidSocialGate::_Instance
	AndroidSocialGate_t2360988137 * ____Instance_2;
	// System.Action`2<System.Boolean,System.String> AndroidSocialGate::OnShareIntentCallback
	Action_2_t1865222972 * ___OnShareIntentCallback_3;

public:
	inline static int32_t get_offset_of__Instance_2() { return static_cast<int32_t>(offsetof(AndroidSocialGate_t2360988137_StaticFields, ____Instance_2)); }
	inline AndroidSocialGate_t2360988137 * get__Instance_2() const { return ____Instance_2; }
	inline AndroidSocialGate_t2360988137 ** get_address_of__Instance_2() { return &____Instance_2; }
	inline void set__Instance_2(AndroidSocialGate_t2360988137 * value)
	{
		____Instance_2 = value;
		Il2CppCodeGenWriteBarrier(&____Instance_2, value);
	}

	inline static int32_t get_offset_of_OnShareIntentCallback_3() { return static_cast<int32_t>(offsetof(AndroidSocialGate_t2360988137_StaticFields, ___OnShareIntentCallback_3)); }
	inline Action_2_t1865222972 * get_OnShareIntentCallback_3() const { return ___OnShareIntentCallback_3; }
	inline Action_2_t1865222972 ** get_address_of_OnShareIntentCallback_3() { return &___OnShareIntentCallback_3; }
	inline void set_OnShareIntentCallback_3(Action_2_t1865222972 * value)
	{
		___OnShareIntentCallback_3 = value;
		Il2CppCodeGenWriteBarrier(&___OnShareIntentCallback_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
