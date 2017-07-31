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

// System.Action`1<System.Int32>
struct Action_1_t1873676830;
// System.Action`2<System.Int32,SA.Fitness.DataPoint>
struct Action_2_t1520847577;
// SA.Fitness.DataType
struct DataType_t1476354918;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Fitness.SensorListener
struct  SensorListener_t2222594412  : public Il2CppObject
{
public:
	// System.Action`1<System.Int32> SA.Fitness.SensorListener::OnRegisterSuccess
	Action_1_t1873676830 * ___OnRegisterSuccess_0;
	// System.Action`1<System.Int32> SA.Fitness.SensorListener::OnRegisterFail
	Action_1_t1873676830 * ___OnRegisterFail_1;
	// System.Action`2<System.Int32,SA.Fitness.DataPoint> SA.Fitness.SensorListener::OnDataPointReceived
	Action_2_t1520847577 * ___OnDataPointReceived_2;
	// System.Int32 SA.Fitness.SensorListener::id
	int32_t ___id_3;
	// SA.Fitness.DataType SA.Fitness.SensorListener::dataType
	DataType_t1476354918 * ___dataType_4;
	// System.Int64 SA.Fitness.SensorListener::rateAmount
	int64_t ___rateAmount_5;
	// SA.Fitness.TimeUnit SA.Fitness.SensorListener::rateTimeUnit
	int32_t ___rateTimeUnit_6;

public:
	inline static int32_t get_offset_of_OnRegisterSuccess_0() { return static_cast<int32_t>(offsetof(SensorListener_t2222594412, ___OnRegisterSuccess_0)); }
	inline Action_1_t1873676830 * get_OnRegisterSuccess_0() const { return ___OnRegisterSuccess_0; }
	inline Action_1_t1873676830 ** get_address_of_OnRegisterSuccess_0() { return &___OnRegisterSuccess_0; }
	inline void set_OnRegisterSuccess_0(Action_1_t1873676830 * value)
	{
		___OnRegisterSuccess_0 = value;
		Il2CppCodeGenWriteBarrier(&___OnRegisterSuccess_0, value);
	}

	inline static int32_t get_offset_of_OnRegisterFail_1() { return static_cast<int32_t>(offsetof(SensorListener_t2222594412, ___OnRegisterFail_1)); }
	inline Action_1_t1873676830 * get_OnRegisterFail_1() const { return ___OnRegisterFail_1; }
	inline Action_1_t1873676830 ** get_address_of_OnRegisterFail_1() { return &___OnRegisterFail_1; }
	inline void set_OnRegisterFail_1(Action_1_t1873676830 * value)
	{
		___OnRegisterFail_1 = value;
		Il2CppCodeGenWriteBarrier(&___OnRegisterFail_1, value);
	}

	inline static int32_t get_offset_of_OnDataPointReceived_2() { return static_cast<int32_t>(offsetof(SensorListener_t2222594412, ___OnDataPointReceived_2)); }
	inline Action_2_t1520847577 * get_OnDataPointReceived_2() const { return ___OnDataPointReceived_2; }
	inline Action_2_t1520847577 ** get_address_of_OnDataPointReceived_2() { return &___OnDataPointReceived_2; }
	inline void set_OnDataPointReceived_2(Action_2_t1520847577 * value)
	{
		___OnDataPointReceived_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnDataPointReceived_2, value);
	}

	inline static int32_t get_offset_of_id_3() { return static_cast<int32_t>(offsetof(SensorListener_t2222594412, ___id_3)); }
	inline int32_t get_id_3() const { return ___id_3; }
	inline int32_t* get_address_of_id_3() { return &___id_3; }
	inline void set_id_3(int32_t value)
	{
		___id_3 = value;
	}

	inline static int32_t get_offset_of_dataType_4() { return static_cast<int32_t>(offsetof(SensorListener_t2222594412, ___dataType_4)); }
	inline DataType_t1476354918 * get_dataType_4() const { return ___dataType_4; }
	inline DataType_t1476354918 ** get_address_of_dataType_4() { return &___dataType_4; }
	inline void set_dataType_4(DataType_t1476354918 * value)
	{
		___dataType_4 = value;
		Il2CppCodeGenWriteBarrier(&___dataType_4, value);
	}

	inline static int32_t get_offset_of_rateAmount_5() { return static_cast<int32_t>(offsetof(SensorListener_t2222594412, ___rateAmount_5)); }
	inline int64_t get_rateAmount_5() const { return ___rateAmount_5; }
	inline int64_t* get_address_of_rateAmount_5() { return &___rateAmount_5; }
	inline void set_rateAmount_5(int64_t value)
	{
		___rateAmount_5 = value;
	}

	inline static int32_t get_offset_of_rateTimeUnit_6() { return static_cast<int32_t>(offsetof(SensorListener_t2222594412, ___rateTimeUnit_6)); }
	inline int32_t get_rateTimeUnit_6() const { return ___rateTimeUnit_6; }
	inline int32_t* get_address_of_rateTimeUnit_6() { return &___rateTimeUnit_6; }
	inline void set_rateTimeUnit_6(int32_t value)
	{
		___rateTimeUnit_6 = value;
	}
};

struct SensorListener_t2222594412_StaticFields
{
public:
	// System.Action`1<System.Int32> SA.Fitness.SensorListener::<>f__am$cache0
	Action_1_t1873676830 * ___U3CU3Ef__amU24cache0_7;
	// System.Action`1<System.Int32> SA.Fitness.SensorListener::<>f__am$cache1
	Action_1_t1873676830 * ___U3CU3Ef__amU24cache1_8;
	// System.Action`2<System.Int32,SA.Fitness.DataPoint> SA.Fitness.SensorListener::<>f__am$cache2
	Action_2_t1520847577 * ___U3CU3Ef__amU24cache2_9;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_7() { return static_cast<int32_t>(offsetof(SensorListener_t2222594412_StaticFields, ___U3CU3Ef__amU24cache0_7)); }
	inline Action_1_t1873676830 * get_U3CU3Ef__amU24cache0_7() const { return ___U3CU3Ef__amU24cache0_7; }
	inline Action_1_t1873676830 ** get_address_of_U3CU3Ef__amU24cache0_7() { return &___U3CU3Ef__amU24cache0_7; }
	inline void set_U3CU3Ef__amU24cache0_7(Action_1_t1873676830 * value)
	{
		___U3CU3Ef__amU24cache0_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_7, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_8() { return static_cast<int32_t>(offsetof(SensorListener_t2222594412_StaticFields, ___U3CU3Ef__amU24cache1_8)); }
	inline Action_1_t1873676830 * get_U3CU3Ef__amU24cache1_8() const { return ___U3CU3Ef__amU24cache1_8; }
	inline Action_1_t1873676830 ** get_address_of_U3CU3Ef__amU24cache1_8() { return &___U3CU3Ef__amU24cache1_8; }
	inline void set_U3CU3Ef__amU24cache1_8(Action_1_t1873676830 * value)
	{
		___U3CU3Ef__amU24cache1_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_8, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_9() { return static_cast<int32_t>(offsetof(SensorListener_t2222594412_StaticFields, ___U3CU3Ef__amU24cache2_9)); }
	inline Action_2_t1520847577 * get_U3CU3Ef__amU24cache2_9() const { return ___U3CU3Ef__amU24cache2_9; }
	inline Action_2_t1520847577 ** get_address_of_U3CU3Ef__amU24cache2_9() { return &___U3CU3Ef__amU24cache2_9; }
	inline void set_U3CU3Ef__amU24cache2_9(Action_2_t1520847577 * value)
	{
		___U3CU3Ef__amU24cache2_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
