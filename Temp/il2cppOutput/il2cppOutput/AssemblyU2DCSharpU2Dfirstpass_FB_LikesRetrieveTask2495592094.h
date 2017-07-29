#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;
// System.Action`2<FB_Result,FB_LikesRetrieveTask>
struct Action_2_t3591491;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FB_LikesRetrieveTask
struct  FB_LikesRetrieveTask_t2495592094  : public MonoBehaviour_t1158329972
{
public:
	// System.String FB_LikesRetrieveTask::_userId
	String_t* ____userId_2;
	// System.Action`2<FB_Result,FB_LikesRetrieveTask> FB_LikesRetrieveTask::ActionComplete
	Action_2_t3591491 * ___ActionComplete_3;

public:
	inline static int32_t get_offset_of__userId_2() { return static_cast<int32_t>(offsetof(FB_LikesRetrieveTask_t2495592094, ____userId_2)); }
	inline String_t* get__userId_2() const { return ____userId_2; }
	inline String_t** get_address_of__userId_2() { return &____userId_2; }
	inline void set__userId_2(String_t* value)
	{
		____userId_2 = value;
		Il2CppCodeGenWriteBarrier(&____userId_2, value);
	}

	inline static int32_t get_offset_of_ActionComplete_3() { return static_cast<int32_t>(offsetof(FB_LikesRetrieveTask_t2495592094, ___ActionComplete_3)); }
	inline Action_2_t3591491 * get_ActionComplete_3() const { return ___ActionComplete_3; }
	inline Action_2_t3591491 ** get_address_of_ActionComplete_3() { return &___ActionComplete_3; }
	inline void set_ActionComplete_3(Action_2_t3591491 * value)
	{
		___ActionComplete_3 = value;
		Il2CppCodeGenWriteBarrier(&___ActionComplete_3, value);
	}
};

struct FB_LikesRetrieveTask_t2495592094_StaticFields
{
public:
	// System.Action`2<FB_Result,FB_LikesRetrieveTask> FB_LikesRetrieveTask::<>f__am$cache0
	Action_2_t3591491 * ___U3CU3Ef__amU24cache0_4;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_4() { return static_cast<int32_t>(offsetof(FB_LikesRetrieveTask_t2495592094_StaticFields, ___U3CU3Ef__amU24cache0_4)); }
	inline Action_2_t3591491 * get_U3CU3Ef__amU24cache0_4() const { return ___U3CU3Ef__amU24cache0_4; }
	inline Action_2_t3591491 ** get_address_of_U3CU3Ef__amU24cache0_4() { return &___U3CU3Ef__amU24cache0_4; }
	inline void set_U3CU3Ef__amU24cache0_4(Action_2_t3591491 * value)
	{
		___U3CU3Ef__amU24cache0_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
