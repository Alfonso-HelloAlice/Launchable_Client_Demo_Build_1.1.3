#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Action`1<SA.Fitness.StopSessionResult>
struct Action_1_t3327757191;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Fitness.StopSessionRequest
struct  StopSessionRequest_t3205415913  : public Il2CppObject
{
public:
	// System.Action`1<SA.Fitness.StopSessionResult> SA.Fitness.StopSessionRequest::OnSessionStopped
	Action_1_t3327757191 * ___OnSessionStopped_0;
	// System.Int32 SA.Fitness.StopSessionRequest::id
	int32_t ___id_1;
	// System.String SA.Fitness.StopSessionRequest::sessionId
	String_t* ___sessionId_2;

public:
	inline static int32_t get_offset_of_OnSessionStopped_0() { return static_cast<int32_t>(offsetof(StopSessionRequest_t3205415913, ___OnSessionStopped_0)); }
	inline Action_1_t3327757191 * get_OnSessionStopped_0() const { return ___OnSessionStopped_0; }
	inline Action_1_t3327757191 ** get_address_of_OnSessionStopped_0() { return &___OnSessionStopped_0; }
	inline void set_OnSessionStopped_0(Action_1_t3327757191 * value)
	{
		___OnSessionStopped_0 = value;
		Il2CppCodeGenWriteBarrier(&___OnSessionStopped_0, value);
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(StopSessionRequest_t3205415913, ___id_1)); }
	inline int32_t get_id_1() const { return ___id_1; }
	inline int32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(int32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_sessionId_2() { return static_cast<int32_t>(offsetof(StopSessionRequest_t3205415913, ___sessionId_2)); }
	inline String_t* get_sessionId_2() const { return ___sessionId_2; }
	inline String_t** get_address_of_sessionId_2() { return &___sessionId_2; }
	inline void set_sessionId_2(String_t* value)
	{
		___sessionId_2 = value;
		Il2CppCodeGenWriteBarrier(&___sessionId_2, value);
	}
};

struct StopSessionRequest_t3205415913_StaticFields
{
public:
	// System.Action`1<SA.Fitness.StopSessionResult> SA.Fitness.StopSessionRequest::<>f__am$cache0
	Action_1_t3327757191 * ___U3CU3Ef__amU24cache0_3;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_3() { return static_cast<int32_t>(offsetof(StopSessionRequest_t3205415913_StaticFields, ___U3CU3Ef__amU24cache0_3)); }
	inline Action_1_t3327757191 * get_U3CU3Ef__amU24cache0_3() const { return ___U3CU3Ef__amU24cache0_3; }
	inline Action_1_t3327757191 ** get_address_of_U3CU3Ef__amU24cache0_3() { return &___U3CU3Ef__amU24cache0_3; }
	inline void set_U3CU3Ef__amU24cache0_3(Action_1_t3327757191 * value)
	{
		___U3CU3Ef__amU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
