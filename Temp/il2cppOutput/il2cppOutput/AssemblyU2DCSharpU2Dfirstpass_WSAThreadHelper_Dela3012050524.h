#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// System.Action
struct Action_t3226471752;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WSAThreadHelper/DelayedQueueItem
struct  DelayedQueueItem_t3012050524 
{
public:
	// System.Single WSAThreadHelper/DelayedQueueItem::time
	float ___time_0;
	// System.Action WSAThreadHelper/DelayedQueueItem::action
	Action_t3226471752 * ___action_1;

public:
	inline static int32_t get_offset_of_time_0() { return static_cast<int32_t>(offsetof(DelayedQueueItem_t3012050524, ___time_0)); }
	inline float get_time_0() const { return ___time_0; }
	inline float* get_address_of_time_0() { return &___time_0; }
	inline void set_time_0(float value)
	{
		___time_0 = value;
	}

	inline static int32_t get_offset_of_action_1() { return static_cast<int32_t>(offsetof(DelayedQueueItem_t3012050524, ___action_1)); }
	inline Action_t3226471752 * get_action_1() const { return ___action_1; }
	inline Action_t3226471752 ** get_address_of_action_1() { return &___action_1; }
	inline void set_action_1(Action_t3226471752 * value)
	{
		___action_1 = value;
		Il2CppCodeGenWriteBarrier(&___action_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of WSAThreadHelper/DelayedQueueItem
struct DelayedQueueItem_t3012050524_marshaled_pinvoke
{
	float ___time_0;
	Il2CppMethodPointer ___action_1;
};
// Native definition for COM marshalling of WSAThreadHelper/DelayedQueueItem
struct DelayedQueueItem_t3012050524_marshaled_com
{
	float ___time_0;
	Il2CppMethodPointer ___action_1;
};
