#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Action`1<SA.Fitness.SensorRequestResult>
struct Action_1_t702891926;
// System.Collections.Generic.List`1<SA.Fitness.DataType>
struct List_1_t845476050;
// System.Collections.Generic.List`1<SA.Fitness.DataSourceType>
struct List_1_t3486860683;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Fitness.SensorRequest
struct  SensorRequest_t1943460265  : public Il2CppObject
{
public:
	// System.Action`1<SA.Fitness.SensorRequestResult> SA.Fitness.SensorRequest::OnRequestFinished
	Action_1_t702891926 * ___OnRequestFinished_0;
	// System.Int32 SA.Fitness.SensorRequest::id
	int32_t ___id_1;
	// System.Collections.Generic.List`1<SA.Fitness.DataType> SA.Fitness.SensorRequest::dataTypes
	List_1_t845476050 * ___dataTypes_2;
	// System.Collections.Generic.List`1<SA.Fitness.DataSourceType> SA.Fitness.SensorRequest::dataSourceTypes
	List_1_t3486860683 * ___dataSourceTypes_3;

public:
	inline static int32_t get_offset_of_OnRequestFinished_0() { return static_cast<int32_t>(offsetof(SensorRequest_t1943460265, ___OnRequestFinished_0)); }
	inline Action_1_t702891926 * get_OnRequestFinished_0() const { return ___OnRequestFinished_0; }
	inline Action_1_t702891926 ** get_address_of_OnRequestFinished_0() { return &___OnRequestFinished_0; }
	inline void set_OnRequestFinished_0(Action_1_t702891926 * value)
	{
		___OnRequestFinished_0 = value;
		Il2CppCodeGenWriteBarrier(&___OnRequestFinished_0, value);
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(SensorRequest_t1943460265, ___id_1)); }
	inline int32_t get_id_1() const { return ___id_1; }
	inline int32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(int32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_dataTypes_2() { return static_cast<int32_t>(offsetof(SensorRequest_t1943460265, ___dataTypes_2)); }
	inline List_1_t845476050 * get_dataTypes_2() const { return ___dataTypes_2; }
	inline List_1_t845476050 ** get_address_of_dataTypes_2() { return &___dataTypes_2; }
	inline void set_dataTypes_2(List_1_t845476050 * value)
	{
		___dataTypes_2 = value;
		Il2CppCodeGenWriteBarrier(&___dataTypes_2, value);
	}

	inline static int32_t get_offset_of_dataSourceTypes_3() { return static_cast<int32_t>(offsetof(SensorRequest_t1943460265, ___dataSourceTypes_3)); }
	inline List_1_t3486860683 * get_dataSourceTypes_3() const { return ___dataSourceTypes_3; }
	inline List_1_t3486860683 ** get_address_of_dataSourceTypes_3() { return &___dataSourceTypes_3; }
	inline void set_dataSourceTypes_3(List_1_t3486860683 * value)
	{
		___dataSourceTypes_3 = value;
		Il2CppCodeGenWriteBarrier(&___dataSourceTypes_3, value);
	}
};

struct SensorRequest_t1943460265_StaticFields
{
public:
	// System.Action`1<SA.Fitness.SensorRequestResult> SA.Fitness.SensorRequest::<>f__am$cache0
	Action_1_t702891926 * ___U3CU3Ef__amU24cache0_4;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_4() { return static_cast<int32_t>(offsetof(SensorRequest_t1943460265_StaticFields, ___U3CU3Ef__amU24cache0_4)); }
	inline Action_1_t702891926 * get_U3CU3Ef__amU24cache0_4() const { return ___U3CU3Ef__amU24cache0_4; }
	inline Action_1_t702891926 ** get_address_of_U3CU3Ef__amU24cache0_4() { return &___U3CU3Ef__amU24cache0_4; }
	inline void set_U3CU3Ef__amU24cache0_4(Action_1_t702891926 * value)
	{
		___U3CU3Ef__amU24cache0_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
