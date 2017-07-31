#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SA_Fitness_TimeUnit2875490993.h"

// System.Action`1<SA.Common.Models.Result>
struct Action_1_t4089019125;
// System.String
struct String_t;
// SA.Fitness.Activity
struct Activity_t2329090511;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Fitness.StartSessionRequest
struct  StartSessionRequest_t3333839973  : public Il2CppObject
{
public:
	// System.Action`1<SA.Common.Models.Result> SA.Fitness.StartSessionRequest::OnSessionStarted
	Action_1_t4089019125 * ___OnSessionStarted_0;
	// System.Int32 SA.Fitness.StartSessionRequest::id
	int32_t ___id_1;
	// System.String SA.Fitness.StartSessionRequest::name
	String_t* ___name_2;
	// System.String SA.Fitness.StartSessionRequest::sessionId
	String_t* ___sessionId_3;
	// System.String SA.Fitness.StartSessionRequest::description
	String_t* ___description_4;
	// System.Int64 SA.Fitness.StartSessionRequest::startTime
	int64_t ___startTime_5;
	// SA.Fitness.TimeUnit SA.Fitness.StartSessionRequest::timeUnit
	int32_t ___timeUnit_6;
	// SA.Fitness.Activity SA.Fitness.StartSessionRequest::activity
	Activity_t2329090511 * ___activity_7;

public:
	inline static int32_t get_offset_of_OnSessionStarted_0() { return static_cast<int32_t>(offsetof(StartSessionRequest_t3333839973, ___OnSessionStarted_0)); }
	inline Action_1_t4089019125 * get_OnSessionStarted_0() const { return ___OnSessionStarted_0; }
	inline Action_1_t4089019125 ** get_address_of_OnSessionStarted_0() { return &___OnSessionStarted_0; }
	inline void set_OnSessionStarted_0(Action_1_t4089019125 * value)
	{
		___OnSessionStarted_0 = value;
		Il2CppCodeGenWriteBarrier(&___OnSessionStarted_0, value);
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(StartSessionRequest_t3333839973, ___id_1)); }
	inline int32_t get_id_1() const { return ___id_1; }
	inline int32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(int32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(StartSessionRequest_t3333839973, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier(&___name_2, value);
	}

	inline static int32_t get_offset_of_sessionId_3() { return static_cast<int32_t>(offsetof(StartSessionRequest_t3333839973, ___sessionId_3)); }
	inline String_t* get_sessionId_3() const { return ___sessionId_3; }
	inline String_t** get_address_of_sessionId_3() { return &___sessionId_3; }
	inline void set_sessionId_3(String_t* value)
	{
		___sessionId_3 = value;
		Il2CppCodeGenWriteBarrier(&___sessionId_3, value);
	}

	inline static int32_t get_offset_of_description_4() { return static_cast<int32_t>(offsetof(StartSessionRequest_t3333839973, ___description_4)); }
	inline String_t* get_description_4() const { return ___description_4; }
	inline String_t** get_address_of_description_4() { return &___description_4; }
	inline void set_description_4(String_t* value)
	{
		___description_4 = value;
		Il2CppCodeGenWriteBarrier(&___description_4, value);
	}

	inline static int32_t get_offset_of_startTime_5() { return static_cast<int32_t>(offsetof(StartSessionRequest_t3333839973, ___startTime_5)); }
	inline int64_t get_startTime_5() const { return ___startTime_5; }
	inline int64_t* get_address_of_startTime_5() { return &___startTime_5; }
	inline void set_startTime_5(int64_t value)
	{
		___startTime_5 = value;
	}

	inline static int32_t get_offset_of_timeUnit_6() { return static_cast<int32_t>(offsetof(StartSessionRequest_t3333839973, ___timeUnit_6)); }
	inline int32_t get_timeUnit_6() const { return ___timeUnit_6; }
	inline int32_t* get_address_of_timeUnit_6() { return &___timeUnit_6; }
	inline void set_timeUnit_6(int32_t value)
	{
		___timeUnit_6 = value;
	}

	inline static int32_t get_offset_of_activity_7() { return static_cast<int32_t>(offsetof(StartSessionRequest_t3333839973, ___activity_7)); }
	inline Activity_t2329090511 * get_activity_7() const { return ___activity_7; }
	inline Activity_t2329090511 ** get_address_of_activity_7() { return &___activity_7; }
	inline void set_activity_7(Activity_t2329090511 * value)
	{
		___activity_7 = value;
		Il2CppCodeGenWriteBarrier(&___activity_7, value);
	}
};

struct StartSessionRequest_t3333839973_StaticFields
{
public:
	// System.Action`1<SA.Common.Models.Result> SA.Fitness.StartSessionRequest::<>f__am$cache0
	Action_1_t4089019125 * ___U3CU3Ef__amU24cache0_8;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_8() { return static_cast<int32_t>(offsetof(StartSessionRequest_t3333839973_StaticFields, ___U3CU3Ef__amU24cache0_8)); }
	inline Action_1_t4089019125 * get_U3CU3Ef__amU24cache0_8() const { return ___U3CU3Ef__amU24cache0_8; }
	inline Action_1_t4089019125 ** get_address_of_U3CU3Ef__amU24cache0_8() { return &___U3CU3Ef__amU24cache0_8; }
	inline void set_U3CU3Ef__amU24cache0_8(Action_1_t4089019125 * value)
	{
		___U3CU3Ef__amU24cache0_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
