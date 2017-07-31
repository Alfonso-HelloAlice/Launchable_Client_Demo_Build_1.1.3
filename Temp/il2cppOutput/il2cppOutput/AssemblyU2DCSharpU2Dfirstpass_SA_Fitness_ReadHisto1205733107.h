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
#include "AssemblyU2DCSharpU2Dfirstpass_SA_Fitness_Bucket_Ty3333165833.h"

// System.Action`1<SA.Fitness.ReadHistoryResult>
struct Action_1_t1839295773;
// SA.Fitness.DataType
struct DataType_t1476354918;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Fitness.ReadHistoryRequest
struct  ReadHistoryRequest_t1205733107  : public Il2CppObject
{
public:
	// System.Action`1<SA.Fitness.ReadHistoryResult> SA.Fitness.ReadHistoryRequest::OnReadFinished
	Action_1_t1839295773 * ___OnReadFinished_0;
	// System.Int32 SA.Fitness.ReadHistoryRequest::id
	int32_t ___id_1;
	// System.Int64 SA.Fitness.ReadHistoryRequest::startTime
	int64_t ___startTime_2;
	// System.Int64 SA.Fitness.ReadHistoryRequest::endTime
	int64_t ___endTime_3;
	// SA.Fitness.TimeUnit SA.Fitness.ReadHistoryRequest::timeUnit
	int32_t ___timeUnit_4;
	// SA.Fitness.DataType SA.Fitness.ReadHistoryRequest::dataType
	DataType_t1476354918 * ___dataType_5;
	// SA.Fitness.DataType SA.Fitness.ReadHistoryRequest::aggregateType
	DataType_t1476354918 * ___aggregateType_6;
	// System.Int32 SA.Fitness.ReadHistoryRequest::limit
	int32_t ___limit_7;
	// System.Boolean SA.Fitness.ReadHistoryRequest::isAggregated
	bool ___isAggregated_8;
	// System.Int32 SA.Fitness.ReadHistoryRequest::minDuration
	int32_t ___minDuration_9;
	// SA.Fitness.TimeUnit SA.Fitness.ReadHistoryRequest::bucketUnit
	int32_t ___bucketUnit_10;
	// SA.Fitness.Bucket/Type SA.Fitness.ReadHistoryRequest::bucketingType
	int32_t ___bucketingType_11;

public:
	inline static int32_t get_offset_of_OnReadFinished_0() { return static_cast<int32_t>(offsetof(ReadHistoryRequest_t1205733107, ___OnReadFinished_0)); }
	inline Action_1_t1839295773 * get_OnReadFinished_0() const { return ___OnReadFinished_0; }
	inline Action_1_t1839295773 ** get_address_of_OnReadFinished_0() { return &___OnReadFinished_0; }
	inline void set_OnReadFinished_0(Action_1_t1839295773 * value)
	{
		___OnReadFinished_0 = value;
		Il2CppCodeGenWriteBarrier(&___OnReadFinished_0, value);
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(ReadHistoryRequest_t1205733107, ___id_1)); }
	inline int32_t get_id_1() const { return ___id_1; }
	inline int32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(int32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_startTime_2() { return static_cast<int32_t>(offsetof(ReadHistoryRequest_t1205733107, ___startTime_2)); }
	inline int64_t get_startTime_2() const { return ___startTime_2; }
	inline int64_t* get_address_of_startTime_2() { return &___startTime_2; }
	inline void set_startTime_2(int64_t value)
	{
		___startTime_2 = value;
	}

	inline static int32_t get_offset_of_endTime_3() { return static_cast<int32_t>(offsetof(ReadHistoryRequest_t1205733107, ___endTime_3)); }
	inline int64_t get_endTime_3() const { return ___endTime_3; }
	inline int64_t* get_address_of_endTime_3() { return &___endTime_3; }
	inline void set_endTime_3(int64_t value)
	{
		___endTime_3 = value;
	}

	inline static int32_t get_offset_of_timeUnit_4() { return static_cast<int32_t>(offsetof(ReadHistoryRequest_t1205733107, ___timeUnit_4)); }
	inline int32_t get_timeUnit_4() const { return ___timeUnit_4; }
	inline int32_t* get_address_of_timeUnit_4() { return &___timeUnit_4; }
	inline void set_timeUnit_4(int32_t value)
	{
		___timeUnit_4 = value;
	}

	inline static int32_t get_offset_of_dataType_5() { return static_cast<int32_t>(offsetof(ReadHistoryRequest_t1205733107, ___dataType_5)); }
	inline DataType_t1476354918 * get_dataType_5() const { return ___dataType_5; }
	inline DataType_t1476354918 ** get_address_of_dataType_5() { return &___dataType_5; }
	inline void set_dataType_5(DataType_t1476354918 * value)
	{
		___dataType_5 = value;
		Il2CppCodeGenWriteBarrier(&___dataType_5, value);
	}

	inline static int32_t get_offset_of_aggregateType_6() { return static_cast<int32_t>(offsetof(ReadHistoryRequest_t1205733107, ___aggregateType_6)); }
	inline DataType_t1476354918 * get_aggregateType_6() const { return ___aggregateType_6; }
	inline DataType_t1476354918 ** get_address_of_aggregateType_6() { return &___aggregateType_6; }
	inline void set_aggregateType_6(DataType_t1476354918 * value)
	{
		___aggregateType_6 = value;
		Il2CppCodeGenWriteBarrier(&___aggregateType_6, value);
	}

	inline static int32_t get_offset_of_limit_7() { return static_cast<int32_t>(offsetof(ReadHistoryRequest_t1205733107, ___limit_7)); }
	inline int32_t get_limit_7() const { return ___limit_7; }
	inline int32_t* get_address_of_limit_7() { return &___limit_7; }
	inline void set_limit_7(int32_t value)
	{
		___limit_7 = value;
	}

	inline static int32_t get_offset_of_isAggregated_8() { return static_cast<int32_t>(offsetof(ReadHistoryRequest_t1205733107, ___isAggregated_8)); }
	inline bool get_isAggregated_8() const { return ___isAggregated_8; }
	inline bool* get_address_of_isAggregated_8() { return &___isAggregated_8; }
	inline void set_isAggregated_8(bool value)
	{
		___isAggregated_8 = value;
	}

	inline static int32_t get_offset_of_minDuration_9() { return static_cast<int32_t>(offsetof(ReadHistoryRequest_t1205733107, ___minDuration_9)); }
	inline int32_t get_minDuration_9() const { return ___minDuration_9; }
	inline int32_t* get_address_of_minDuration_9() { return &___minDuration_9; }
	inline void set_minDuration_9(int32_t value)
	{
		___minDuration_9 = value;
	}

	inline static int32_t get_offset_of_bucketUnit_10() { return static_cast<int32_t>(offsetof(ReadHistoryRequest_t1205733107, ___bucketUnit_10)); }
	inline int32_t get_bucketUnit_10() const { return ___bucketUnit_10; }
	inline int32_t* get_address_of_bucketUnit_10() { return &___bucketUnit_10; }
	inline void set_bucketUnit_10(int32_t value)
	{
		___bucketUnit_10 = value;
	}

	inline static int32_t get_offset_of_bucketingType_11() { return static_cast<int32_t>(offsetof(ReadHistoryRequest_t1205733107, ___bucketingType_11)); }
	inline int32_t get_bucketingType_11() const { return ___bucketingType_11; }
	inline int32_t* get_address_of_bucketingType_11() { return &___bucketingType_11; }
	inline void set_bucketingType_11(int32_t value)
	{
		___bucketingType_11 = value;
	}
};

struct ReadHistoryRequest_t1205733107_StaticFields
{
public:
	// System.Action`1<SA.Fitness.ReadHistoryResult> SA.Fitness.ReadHistoryRequest::<>f__am$cache0
	Action_1_t1839295773 * ___U3CU3Ef__amU24cache0_12;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_12() { return static_cast<int32_t>(offsetof(ReadHistoryRequest_t1205733107_StaticFields, ___U3CU3Ef__amU24cache0_12)); }
	inline Action_1_t1839295773 * get_U3CU3Ef__amU24cache0_12() const { return ___U3CU3Ef__amU24cache0_12; }
	inline Action_1_t1839295773 ** get_address_of_U3CU3Ef__amU24cache0_12() { return &___U3CU3Ef__amU24cache0_12; }
	inline void set_U3CU3Ef__amU24cache0_12(Action_1_t1839295773 * value)
	{
		___U3CU3Ef__amU24cache0_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
