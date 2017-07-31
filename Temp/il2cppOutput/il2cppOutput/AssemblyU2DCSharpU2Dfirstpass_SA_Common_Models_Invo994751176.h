#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Action
struct Action_t3226471752;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Common.Models.Invoker
struct  Invoker_t994751176  : public MonoBehaviour_t1158329972
{
public:
	// System.Action SA.Common.Models.Invoker::_callback
	Action_t3226471752 * ____callback_2;

public:
	inline static int32_t get_offset_of__callback_2() { return static_cast<int32_t>(offsetof(Invoker_t994751176, ____callback_2)); }
	inline Action_t3226471752 * get__callback_2() const { return ____callback_2; }
	inline Action_t3226471752 ** get_address_of__callback_2() { return &____callback_2; }
	inline void set__callback_2(Action_t3226471752 * value)
	{
		____callback_2 = value;
		Il2CppCodeGenWriteBarrier(&____callback_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
