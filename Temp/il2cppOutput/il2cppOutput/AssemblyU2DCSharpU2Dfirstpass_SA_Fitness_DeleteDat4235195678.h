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

// System.Action
struct Action_t3226471752;
// System.Collections.Generic.List`1<SA.Fitness.DataType>
struct List_1_t845476050;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Fitness.DeleteDataRequest
struct  DeleteDataRequest_t4235195678  : public Il2CppObject
{
public:
	// System.Action SA.Fitness.DeleteDataRequest::OnRequestFinished
	Action_t3226471752 * ___OnRequestFinished_0;
	// System.Int32 SA.Fitness.DeleteDataRequest::id
	int32_t ___id_1;
	// System.Int64 SA.Fitness.DeleteDataRequest::startTime
	int64_t ___startTime_2;
	// System.Int64 SA.Fitness.DeleteDataRequest::endTime
	int64_t ___endTime_3;
	// SA.Fitness.TimeUnit SA.Fitness.DeleteDataRequest::timeUnit
	int32_t ___timeUnit_4;
	// System.Collections.Generic.List`1<SA.Fitness.DataType> SA.Fitness.DeleteDataRequest::dataTypes
	List_1_t845476050 * ___dataTypes_5;
	// System.Collections.Generic.List`1<System.String> SA.Fitness.DeleteDataRequest::sessions
	List_1_t1398341365 * ___sessions_6;

public:
	inline static int32_t get_offset_of_OnRequestFinished_0() { return static_cast<int32_t>(offsetof(DeleteDataRequest_t4235195678, ___OnRequestFinished_0)); }
	inline Action_t3226471752 * get_OnRequestFinished_0() const { return ___OnRequestFinished_0; }
	inline Action_t3226471752 ** get_address_of_OnRequestFinished_0() { return &___OnRequestFinished_0; }
	inline void set_OnRequestFinished_0(Action_t3226471752 * value)
	{
		___OnRequestFinished_0 = value;
		Il2CppCodeGenWriteBarrier(&___OnRequestFinished_0, value);
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(DeleteDataRequest_t4235195678, ___id_1)); }
	inline int32_t get_id_1() const { return ___id_1; }
	inline int32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(int32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_startTime_2() { return static_cast<int32_t>(offsetof(DeleteDataRequest_t4235195678, ___startTime_2)); }
	inline int64_t get_startTime_2() const { return ___startTime_2; }
	inline int64_t* get_address_of_startTime_2() { return &___startTime_2; }
	inline void set_startTime_2(int64_t value)
	{
		___startTime_2 = value;
	}

	inline static int32_t get_offset_of_endTime_3() { return static_cast<int32_t>(offsetof(DeleteDataRequest_t4235195678, ___endTime_3)); }
	inline int64_t get_endTime_3() const { return ___endTime_3; }
	inline int64_t* get_address_of_endTime_3() { return &___endTime_3; }
	inline void set_endTime_3(int64_t value)
	{
		___endTime_3 = value;
	}

	inline static int32_t get_offset_of_timeUnit_4() { return static_cast<int32_t>(offsetof(DeleteDataRequest_t4235195678, ___timeUnit_4)); }
	inline int32_t get_timeUnit_4() const { return ___timeUnit_4; }
	inline int32_t* get_address_of_timeUnit_4() { return &___timeUnit_4; }
	inline void set_timeUnit_4(int32_t value)
	{
		___timeUnit_4 = value;
	}

	inline static int32_t get_offset_of_dataTypes_5() { return static_cast<int32_t>(offsetof(DeleteDataRequest_t4235195678, ___dataTypes_5)); }
	inline List_1_t845476050 * get_dataTypes_5() const { return ___dataTypes_5; }
	inline List_1_t845476050 ** get_address_of_dataTypes_5() { return &___dataTypes_5; }
	inline void set_dataTypes_5(List_1_t845476050 * value)
	{
		___dataTypes_5 = value;
		Il2CppCodeGenWriteBarrier(&___dataTypes_5, value);
	}

	inline static int32_t get_offset_of_sessions_6() { return static_cast<int32_t>(offsetof(DeleteDataRequest_t4235195678, ___sessions_6)); }
	inline List_1_t1398341365 * get_sessions_6() const { return ___sessions_6; }
	inline List_1_t1398341365 ** get_address_of_sessions_6() { return &___sessions_6; }
	inline void set_sessions_6(List_1_t1398341365 * value)
	{
		___sessions_6 = value;
		Il2CppCodeGenWriteBarrier(&___sessions_6, value);
	}
};

struct DeleteDataRequest_t4235195678_StaticFields
{
public:
	// System.Action SA.Fitness.DeleteDataRequest::<>f__am$cache0
	Action_t3226471752 * ___U3CU3Ef__amU24cache0_7;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_7() { return static_cast<int32_t>(offsetof(DeleteDataRequest_t4235195678_StaticFields, ___U3CU3Ef__amU24cache0_7)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cache0_7() const { return ___U3CU3Ef__amU24cache0_7; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cache0_7() { return &___U3CU3Ef__amU24cache0_7; }
	inline void set_U3CU3Ef__amU24cache0_7(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cache0_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
