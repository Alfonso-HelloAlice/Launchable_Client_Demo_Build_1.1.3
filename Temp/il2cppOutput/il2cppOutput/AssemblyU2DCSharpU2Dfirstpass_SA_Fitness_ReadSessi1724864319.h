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

// System.Action`1<SA.Fitness.ReadSessionResult>
struct Action_1_t1194410881;
// System.String
struct String_t;
// SA.Fitness.DataType
struct DataType_t1476354918;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Fitness.ReadSessionRequest
struct  ReadSessionRequest_t1724864319  : public Il2CppObject
{
public:
	// System.Action`1<SA.Fitness.ReadSessionResult> SA.Fitness.ReadSessionRequest::OnSessionReadFinished
	Action_1_t1194410881 * ___OnSessionReadFinished_0;
	// System.Int64 SA.Fitness.ReadSessionRequest::startTime
	int64_t ___startTime_1;
	// System.Int64 SA.Fitness.ReadSessionRequest::endTime
	int64_t ___endTime_2;
	// SA.Fitness.TimeUnit SA.Fitness.ReadSessionRequest::timeUnit
	int32_t ___timeUnit_3;
	// System.String SA.Fitness.ReadSessionRequest::sessionId
	String_t* ___sessionId_4;
	// SA.Fitness.DataType SA.Fitness.ReadSessionRequest::dataType
	DataType_t1476354918 * ___dataType_5;
	// System.Int32 SA.Fitness.ReadSessionRequest::id
	int32_t ___id_6;

public:
	inline static int32_t get_offset_of_OnSessionReadFinished_0() { return static_cast<int32_t>(offsetof(ReadSessionRequest_t1724864319, ___OnSessionReadFinished_0)); }
	inline Action_1_t1194410881 * get_OnSessionReadFinished_0() const { return ___OnSessionReadFinished_0; }
	inline Action_1_t1194410881 ** get_address_of_OnSessionReadFinished_0() { return &___OnSessionReadFinished_0; }
	inline void set_OnSessionReadFinished_0(Action_1_t1194410881 * value)
	{
		___OnSessionReadFinished_0 = value;
		Il2CppCodeGenWriteBarrier(&___OnSessionReadFinished_0, value);
	}

	inline static int32_t get_offset_of_startTime_1() { return static_cast<int32_t>(offsetof(ReadSessionRequest_t1724864319, ___startTime_1)); }
	inline int64_t get_startTime_1() const { return ___startTime_1; }
	inline int64_t* get_address_of_startTime_1() { return &___startTime_1; }
	inline void set_startTime_1(int64_t value)
	{
		___startTime_1 = value;
	}

	inline static int32_t get_offset_of_endTime_2() { return static_cast<int32_t>(offsetof(ReadSessionRequest_t1724864319, ___endTime_2)); }
	inline int64_t get_endTime_2() const { return ___endTime_2; }
	inline int64_t* get_address_of_endTime_2() { return &___endTime_2; }
	inline void set_endTime_2(int64_t value)
	{
		___endTime_2 = value;
	}

	inline static int32_t get_offset_of_timeUnit_3() { return static_cast<int32_t>(offsetof(ReadSessionRequest_t1724864319, ___timeUnit_3)); }
	inline int32_t get_timeUnit_3() const { return ___timeUnit_3; }
	inline int32_t* get_address_of_timeUnit_3() { return &___timeUnit_3; }
	inline void set_timeUnit_3(int32_t value)
	{
		___timeUnit_3 = value;
	}

	inline static int32_t get_offset_of_sessionId_4() { return static_cast<int32_t>(offsetof(ReadSessionRequest_t1724864319, ___sessionId_4)); }
	inline String_t* get_sessionId_4() const { return ___sessionId_4; }
	inline String_t** get_address_of_sessionId_4() { return &___sessionId_4; }
	inline void set_sessionId_4(String_t* value)
	{
		___sessionId_4 = value;
		Il2CppCodeGenWriteBarrier(&___sessionId_4, value);
	}

	inline static int32_t get_offset_of_dataType_5() { return static_cast<int32_t>(offsetof(ReadSessionRequest_t1724864319, ___dataType_5)); }
	inline DataType_t1476354918 * get_dataType_5() const { return ___dataType_5; }
	inline DataType_t1476354918 ** get_address_of_dataType_5() { return &___dataType_5; }
	inline void set_dataType_5(DataType_t1476354918 * value)
	{
		___dataType_5 = value;
		Il2CppCodeGenWriteBarrier(&___dataType_5, value);
	}

	inline static int32_t get_offset_of_id_6() { return static_cast<int32_t>(offsetof(ReadSessionRequest_t1724864319, ___id_6)); }
	inline int32_t get_id_6() const { return ___id_6; }
	inline int32_t* get_address_of_id_6() { return &___id_6; }
	inline void set_id_6(int32_t value)
	{
		___id_6 = value;
	}
};

struct ReadSessionRequest_t1724864319_StaticFields
{
public:
	// System.Action`1<SA.Fitness.ReadSessionResult> SA.Fitness.ReadSessionRequest::<>f__am$cache0
	Action_1_t1194410881 * ___U3CU3Ef__amU24cache0_7;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_7() { return static_cast<int32_t>(offsetof(ReadSessionRequest_t1724864319_StaticFields, ___U3CU3Ef__amU24cache0_7)); }
	inline Action_1_t1194410881 * get_U3CU3Ef__amU24cache0_7() const { return ___U3CU3Ef__amU24cache0_7; }
	inline Action_1_t1194410881 ** get_address_of_U3CU3Ef__amU24cache0_7() { return &___U3CU3Ef__amU24cache0_7; }
	inline void set_U3CU3Ef__amU24cache0_7(Action_1_t1194410881 * value)
	{
		___U3CU3Ef__amU24cache0_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
