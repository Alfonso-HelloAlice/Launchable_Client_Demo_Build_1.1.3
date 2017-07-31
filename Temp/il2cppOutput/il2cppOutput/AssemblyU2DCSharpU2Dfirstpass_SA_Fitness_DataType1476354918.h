#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// SA.Fitness.DataType
struct DataType_t1476354918;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Fitness.DataType
struct  DataType_t1476354918  : public Il2CppObject
{
public:
	// System.String SA.Fitness.DataType::value
	String_t* ___value_35;

public:
	inline static int32_t get_offset_of_value_35() { return static_cast<int32_t>(offsetof(DataType_t1476354918, ___value_35)); }
	inline String_t* get_value_35() const { return ___value_35; }
	inline String_t** get_address_of_value_35() { return &___value_35; }
	inline void set_value_35(String_t* value)
	{
		___value_35 = value;
		Il2CppCodeGenWriteBarrier(&___value_35, value);
	}
};

struct DataType_t1476354918_StaticFields
{
public:
	// SA.Fitness.DataType SA.Fitness.DataType::AGGREGATE_ACTIVITY_SUMMARY
	DataType_t1476354918 * ___AGGREGATE_ACTIVITY_SUMMARY_0;
	// SA.Fitness.DataType SA.Fitness.DataType::AGGREGATE_BASAL_METABOLIC_RATE_SUMMARY
	DataType_t1476354918 * ___AGGREGATE_BASAL_METABOLIC_RATE_SUMMARY_1;
	// SA.Fitness.DataType SA.Fitness.DataType::AGGREGATE_BODY_FAT_PERCENTAGE_SUMMARY
	DataType_t1476354918 * ___AGGREGATE_BODY_FAT_PERCENTAGE_SUMMARY_2;
	// SA.Fitness.DataType SA.Fitness.DataType::AGGREGATE_CALORIES_EXPENDED
	DataType_t1476354918 * ___AGGREGATE_CALORIES_EXPENDED_3;
	// SA.Fitness.DataType SA.Fitness.DataType::AGGREGATE_DISTANCE_DELTA
	DataType_t1476354918 * ___AGGREGATE_DISTANCE_DELTA_4;
	// SA.Fitness.DataType SA.Fitness.DataType::AGGREGATE_HEART_RATE_SUMMARY
	DataType_t1476354918 * ___AGGREGATE_HEART_RATE_SUMMARY_5;
	// SA.Fitness.DataType SA.Fitness.DataType::AGGREGATE_HYDRATION
	DataType_t1476354918 * ___AGGREGATE_HYDRATION_6;
	// SA.Fitness.DataType SA.Fitness.DataType::AGGREGATE_LOCATION_BOUNDING_BOX
	DataType_t1476354918 * ___AGGREGATE_LOCATION_BOUNDING_BOX_7;
	// SA.Fitness.DataType SA.Fitness.DataType::AGGREGATE_NUTRITION_SUMMARY
	DataType_t1476354918 * ___AGGREGATE_NUTRITION_SUMMARY_8;
	// SA.Fitness.DataType SA.Fitness.DataType::AGGREGATE_POWER_SUMMARY
	DataType_t1476354918 * ___AGGREGATE_POWER_SUMMARY_9;
	// SA.Fitness.DataType SA.Fitness.DataType::AGGREGATE_SPEED_SUMMARY
	DataType_t1476354918 * ___AGGREGATE_SPEED_SUMMARY_10;
	// SA.Fitness.DataType SA.Fitness.DataType::AGGREGATE_STEP_COUNT_DELTA
	DataType_t1476354918 * ___AGGREGATE_STEP_COUNT_DELTA_11;
	// SA.Fitness.DataType SA.Fitness.DataType::AGGREGATE_WEIGHT_SUMMARY
	DataType_t1476354918 * ___AGGREGATE_WEIGHT_SUMMARY_12;
	// SA.Fitness.DataType SA.Fitness.DataType::TYPE_ACTIVITY_SAMPLES
	DataType_t1476354918 * ___TYPE_ACTIVITY_SAMPLES_13;
	// SA.Fitness.DataType SA.Fitness.DataType::TYPE_ACTIVITY_SEGMENT
	DataType_t1476354918 * ___TYPE_ACTIVITY_SEGMENT_14;
	// SA.Fitness.DataType SA.Fitness.DataType::TYPE_BASAL_METABOLIC_RATE
	DataType_t1476354918 * ___TYPE_BASAL_METABOLIC_RATE_15;
	// SA.Fitness.DataType SA.Fitness.DataType::TYPE_BODY_FAT_PERCENTAGE
	DataType_t1476354918 * ___TYPE_BODY_FAT_PERCENTAGE_16;
	// SA.Fitness.DataType SA.Fitness.DataType::TYPE_CALORIES_EXPENDED
	DataType_t1476354918 * ___TYPE_CALORIES_EXPENDED_17;
	// SA.Fitness.DataType SA.Fitness.DataType::TYPE_CYCLING_PEDALING_CADENCE
	DataType_t1476354918 * ___TYPE_CYCLING_PEDALING_CADENCE_18;
	// SA.Fitness.DataType SA.Fitness.DataType::TYPE_CYCLING_PEDALING_CUMULATIVE
	DataType_t1476354918 * ___TYPE_CYCLING_PEDALING_CUMULATIVE_19;
	// SA.Fitness.DataType SA.Fitness.DataType::TYPE_CYCLING_WHEEL_REVOLUTION
	DataType_t1476354918 * ___TYPE_CYCLING_WHEEL_REVOLUTION_20;
	// SA.Fitness.DataType SA.Fitness.DataType::TYPE_CYCLING_WHEEL_RPM
	DataType_t1476354918 * ___TYPE_CYCLING_WHEEL_RPM_21;
	// SA.Fitness.DataType SA.Fitness.DataType::TYPE_DISTANCE_DELTA
	DataType_t1476354918 * ___TYPE_DISTANCE_DELTA_22;
	// SA.Fitness.DataType SA.Fitness.DataType::TYPE_HEART_RATE_BPM
	DataType_t1476354918 * ___TYPE_HEART_RATE_BPM_23;
	// SA.Fitness.DataType SA.Fitness.DataType::TYPE_HEIGHT
	DataType_t1476354918 * ___TYPE_HEIGHT_24;
	// SA.Fitness.DataType SA.Fitness.DataType::TYPE_HYDRATION
	DataType_t1476354918 * ___TYPE_HYDRATION_25;
	// SA.Fitness.DataType SA.Fitness.DataType::TYPE_LOCATION_SAMPLE
	DataType_t1476354918 * ___TYPE_LOCATION_SAMPLE_26;
	// SA.Fitness.DataType SA.Fitness.DataType::TYPE_LOCATION_TRACK
	DataType_t1476354918 * ___TYPE_LOCATION_TRACK_27;
	// SA.Fitness.DataType SA.Fitness.DataType::TYPE_NUTRITION
	DataType_t1476354918 * ___TYPE_NUTRITION_28;
	// SA.Fitness.DataType SA.Fitness.DataType::TYPE_POWER_SAMPLE
	DataType_t1476354918 * ___TYPE_POWER_SAMPLE_29;
	// SA.Fitness.DataType SA.Fitness.DataType::TYPE_SPEED
	DataType_t1476354918 * ___TYPE_SPEED_30;
	// SA.Fitness.DataType SA.Fitness.DataType::TYPE_STEP_COUNT_CADENCE
	DataType_t1476354918 * ___TYPE_STEP_COUNT_CADENCE_31;
	// SA.Fitness.DataType SA.Fitness.DataType::TYPE_STEP_COUNT_DELTA
	DataType_t1476354918 * ___TYPE_STEP_COUNT_DELTA_32;
	// SA.Fitness.DataType SA.Fitness.DataType::TYPE_WEIGHT
	DataType_t1476354918 * ___TYPE_WEIGHT_33;
	// SA.Fitness.DataType SA.Fitness.DataType::TYPE_WORKOUT_EXERCISE
	DataType_t1476354918 * ___TYPE_WORKOUT_EXERCISE_34;

public:
	inline static int32_t get_offset_of_AGGREGATE_ACTIVITY_SUMMARY_0() { return static_cast<int32_t>(offsetof(DataType_t1476354918_StaticFields, ___AGGREGATE_ACTIVITY_SUMMARY_0)); }
	inline DataType_t1476354918 * get_AGGREGATE_ACTIVITY_SUMMARY_0() const { return ___AGGREGATE_ACTIVITY_SUMMARY_0; }
	inline DataType_t1476354918 ** get_address_of_AGGREGATE_ACTIVITY_SUMMARY_0() { return &___AGGREGATE_ACTIVITY_SUMMARY_0; }
	inline void set_AGGREGATE_ACTIVITY_SUMMARY_0(DataType_t1476354918 * value)
	{
		___AGGREGATE_ACTIVITY_SUMMARY_0 = value;
		Il2CppCodeGenWriteBarrier(&___AGGREGATE_ACTIVITY_SUMMARY_0, value);
	}

	inline static int32_t get_offset_of_AGGREGATE_BASAL_METABOLIC_RATE_SUMMARY_1() { return static_cast<int32_t>(offsetof(DataType_t1476354918_StaticFields, ___AGGREGATE_BASAL_METABOLIC_RATE_SUMMARY_1)); }
	inline DataType_t1476354918 * get_AGGREGATE_BASAL_METABOLIC_RATE_SUMMARY_1() const { return ___AGGREGATE_BASAL_METABOLIC_RATE_SUMMARY_1; }
	inline DataType_t1476354918 ** get_address_of_AGGREGATE_BASAL_METABOLIC_RATE_SUMMARY_1() { return &___AGGREGATE_BASAL_METABOLIC_RATE_SUMMARY_1; }
	inline void set_AGGREGATE_BASAL_METABOLIC_RATE_SUMMARY_1(DataType_t1476354918 * value)
	{
		___AGGREGATE_BASAL_METABOLIC_RATE_SUMMARY_1 = value;
		Il2CppCodeGenWriteBarrier(&___AGGREGATE_BASAL_METABOLIC_RATE_SUMMARY_1, value);
	}

	inline static int32_t get_offset_of_AGGREGATE_BODY_FAT_PERCENTAGE_SUMMARY_2() { return static_cast<int32_t>(offsetof(DataType_t1476354918_StaticFields, ___AGGREGATE_BODY_FAT_PERCENTAGE_SUMMARY_2)); }
	inline DataType_t1476354918 * get_AGGREGATE_BODY_FAT_PERCENTAGE_SUMMARY_2() const { return ___AGGREGATE_BODY_FAT_PERCENTAGE_SUMMARY_2; }
	inline DataType_t1476354918 ** get_address_of_AGGREGATE_BODY_FAT_PERCENTAGE_SUMMARY_2() { return &___AGGREGATE_BODY_FAT_PERCENTAGE_SUMMARY_2; }
	inline void set_AGGREGATE_BODY_FAT_PERCENTAGE_SUMMARY_2(DataType_t1476354918 * value)
	{
		___AGGREGATE_BODY_FAT_PERCENTAGE_SUMMARY_2 = value;
		Il2CppCodeGenWriteBarrier(&___AGGREGATE_BODY_FAT_PERCENTAGE_SUMMARY_2, value);
	}

	inline static int32_t get_offset_of_AGGREGATE_CALORIES_EXPENDED_3() { return static_cast<int32_t>(offsetof(DataType_t1476354918_StaticFields, ___AGGREGATE_CALORIES_EXPENDED_3)); }
	inline DataType_t1476354918 * get_AGGREGATE_CALORIES_EXPENDED_3() const { return ___AGGREGATE_CALORIES_EXPENDED_3; }
	inline DataType_t1476354918 ** get_address_of_AGGREGATE_CALORIES_EXPENDED_3() { return &___AGGREGATE_CALORIES_EXPENDED_3; }
	inline void set_AGGREGATE_CALORIES_EXPENDED_3(DataType_t1476354918 * value)
	{
		___AGGREGATE_CALORIES_EXPENDED_3 = value;
		Il2CppCodeGenWriteBarrier(&___AGGREGATE_CALORIES_EXPENDED_3, value);
	}

	inline static int32_t get_offset_of_AGGREGATE_DISTANCE_DELTA_4() { return static_cast<int32_t>(offsetof(DataType_t1476354918_StaticFields, ___AGGREGATE_DISTANCE_DELTA_4)); }
	inline DataType_t1476354918 * get_AGGREGATE_DISTANCE_DELTA_4() const { return ___AGGREGATE_DISTANCE_DELTA_4; }
	inline DataType_t1476354918 ** get_address_of_AGGREGATE_DISTANCE_DELTA_4() { return &___AGGREGATE_DISTANCE_DELTA_4; }
	inline void set_AGGREGATE_DISTANCE_DELTA_4(DataType_t1476354918 * value)
	{
		___AGGREGATE_DISTANCE_DELTA_4 = value;
		Il2CppCodeGenWriteBarrier(&___AGGREGATE_DISTANCE_DELTA_4, value);
	}

	inline static int32_t get_offset_of_AGGREGATE_HEART_RATE_SUMMARY_5() { return static_cast<int32_t>(offsetof(DataType_t1476354918_StaticFields, ___AGGREGATE_HEART_RATE_SUMMARY_5)); }
	inline DataType_t1476354918 * get_AGGREGATE_HEART_RATE_SUMMARY_5() const { return ___AGGREGATE_HEART_RATE_SUMMARY_5; }
	inline DataType_t1476354918 ** get_address_of_AGGREGATE_HEART_RATE_SUMMARY_5() { return &___AGGREGATE_HEART_RATE_SUMMARY_5; }
	inline void set_AGGREGATE_HEART_RATE_SUMMARY_5(DataType_t1476354918 * value)
	{
		___AGGREGATE_HEART_RATE_SUMMARY_5 = value;
		Il2CppCodeGenWriteBarrier(&___AGGREGATE_HEART_RATE_SUMMARY_5, value);
	}

	inline static int32_t get_offset_of_AGGREGATE_HYDRATION_6() { return static_cast<int32_t>(offsetof(DataType_t1476354918_StaticFields, ___AGGREGATE_HYDRATION_6)); }
	inline DataType_t1476354918 * get_AGGREGATE_HYDRATION_6() const { return ___AGGREGATE_HYDRATION_6; }
	inline DataType_t1476354918 ** get_address_of_AGGREGATE_HYDRATION_6() { return &___AGGREGATE_HYDRATION_6; }
	inline void set_AGGREGATE_HYDRATION_6(DataType_t1476354918 * value)
	{
		___AGGREGATE_HYDRATION_6 = value;
		Il2CppCodeGenWriteBarrier(&___AGGREGATE_HYDRATION_6, value);
	}

	inline static int32_t get_offset_of_AGGREGATE_LOCATION_BOUNDING_BOX_7() { return static_cast<int32_t>(offsetof(DataType_t1476354918_StaticFields, ___AGGREGATE_LOCATION_BOUNDING_BOX_7)); }
	inline DataType_t1476354918 * get_AGGREGATE_LOCATION_BOUNDING_BOX_7() const { return ___AGGREGATE_LOCATION_BOUNDING_BOX_7; }
	inline DataType_t1476354918 ** get_address_of_AGGREGATE_LOCATION_BOUNDING_BOX_7() { return &___AGGREGATE_LOCATION_BOUNDING_BOX_7; }
	inline void set_AGGREGATE_LOCATION_BOUNDING_BOX_7(DataType_t1476354918 * value)
	{
		___AGGREGATE_LOCATION_BOUNDING_BOX_7 = value;
		Il2CppCodeGenWriteBarrier(&___AGGREGATE_LOCATION_BOUNDING_BOX_7, value);
	}

	inline static int32_t get_offset_of_AGGREGATE_NUTRITION_SUMMARY_8() { return static_cast<int32_t>(offsetof(DataType_t1476354918_StaticFields, ___AGGREGATE_NUTRITION_SUMMARY_8)); }
	inline DataType_t1476354918 * get_AGGREGATE_NUTRITION_SUMMARY_8() const { return ___AGGREGATE_NUTRITION_SUMMARY_8; }
	inline DataType_t1476354918 ** get_address_of_AGGREGATE_NUTRITION_SUMMARY_8() { return &___AGGREGATE_NUTRITION_SUMMARY_8; }
	inline void set_AGGREGATE_NUTRITION_SUMMARY_8(DataType_t1476354918 * value)
	{
		___AGGREGATE_NUTRITION_SUMMARY_8 = value;
		Il2CppCodeGenWriteBarrier(&___AGGREGATE_NUTRITION_SUMMARY_8, value);
	}

	inline static int32_t get_offset_of_AGGREGATE_POWER_SUMMARY_9() { return static_cast<int32_t>(offsetof(DataType_t1476354918_StaticFields, ___AGGREGATE_POWER_SUMMARY_9)); }
	inline DataType_t1476354918 * get_AGGREGATE_POWER_SUMMARY_9() const { return ___AGGREGATE_POWER_SUMMARY_9; }
	inline DataType_t1476354918 ** get_address_of_AGGREGATE_POWER_SUMMARY_9() { return &___AGGREGATE_POWER_SUMMARY_9; }
	inline void set_AGGREGATE_POWER_SUMMARY_9(DataType_t1476354918 * value)
	{
		___AGGREGATE_POWER_SUMMARY_9 = value;
		Il2CppCodeGenWriteBarrier(&___AGGREGATE_POWER_SUMMARY_9, value);
	}

	inline static int32_t get_offset_of_AGGREGATE_SPEED_SUMMARY_10() { return static_cast<int32_t>(offsetof(DataType_t1476354918_StaticFields, ___AGGREGATE_SPEED_SUMMARY_10)); }
	inline DataType_t1476354918 * get_AGGREGATE_SPEED_SUMMARY_10() const { return ___AGGREGATE_SPEED_SUMMARY_10; }
	inline DataType_t1476354918 ** get_address_of_AGGREGATE_SPEED_SUMMARY_10() { return &___AGGREGATE_SPEED_SUMMARY_10; }
	inline void set_AGGREGATE_SPEED_SUMMARY_10(DataType_t1476354918 * value)
	{
		___AGGREGATE_SPEED_SUMMARY_10 = value;
		Il2CppCodeGenWriteBarrier(&___AGGREGATE_SPEED_SUMMARY_10, value);
	}

	inline static int32_t get_offset_of_AGGREGATE_STEP_COUNT_DELTA_11() { return static_cast<int32_t>(offsetof(DataType_t1476354918_StaticFields, ___AGGREGATE_STEP_COUNT_DELTA_11)); }
	inline DataType_t1476354918 * get_AGGREGATE_STEP_COUNT_DELTA_11() const { return ___AGGREGATE_STEP_COUNT_DELTA_11; }
	inline DataType_t1476354918 ** get_address_of_AGGREGATE_STEP_COUNT_DELTA_11() { return &___AGGREGATE_STEP_COUNT_DELTA_11; }
	inline void set_AGGREGATE_STEP_COUNT_DELTA_11(DataType_t1476354918 * value)
	{
		___AGGREGATE_STEP_COUNT_DELTA_11 = value;
		Il2CppCodeGenWriteBarrier(&___AGGREGATE_STEP_COUNT_DELTA_11, value);
	}

	inline static int32_t get_offset_of_AGGREGATE_WEIGHT_SUMMARY_12() { return static_cast<int32_t>(offsetof(DataType_t1476354918_StaticFields, ___AGGREGATE_WEIGHT_SUMMARY_12)); }
	inline DataType_t1476354918 * get_AGGREGATE_WEIGHT_SUMMARY_12() const { return ___AGGREGATE_WEIGHT_SUMMARY_12; }
	inline DataType_t1476354918 ** get_address_of_AGGREGATE_WEIGHT_SUMMARY_12() { return &___AGGREGATE_WEIGHT_SUMMARY_12; }
	inline void set_AGGREGATE_WEIGHT_SUMMARY_12(DataType_t1476354918 * value)
	{
		___AGGREGATE_WEIGHT_SUMMARY_12 = value;
		Il2CppCodeGenWriteBarrier(&___AGGREGATE_WEIGHT_SUMMARY_12, value);
	}

	inline static int32_t get_offset_of_TYPE_ACTIVITY_SAMPLES_13() { return static_cast<int32_t>(offsetof(DataType_t1476354918_StaticFields, ___TYPE_ACTIVITY_SAMPLES_13)); }
	inline DataType_t1476354918 * get_TYPE_ACTIVITY_SAMPLES_13() const { return ___TYPE_ACTIVITY_SAMPLES_13; }
	inline DataType_t1476354918 ** get_address_of_TYPE_ACTIVITY_SAMPLES_13() { return &___TYPE_ACTIVITY_SAMPLES_13; }
	inline void set_TYPE_ACTIVITY_SAMPLES_13(DataType_t1476354918 * value)
	{
		___TYPE_ACTIVITY_SAMPLES_13 = value;
		Il2CppCodeGenWriteBarrier(&___TYPE_ACTIVITY_SAMPLES_13, value);
	}

	inline static int32_t get_offset_of_TYPE_ACTIVITY_SEGMENT_14() { return static_cast<int32_t>(offsetof(DataType_t1476354918_StaticFields, ___TYPE_ACTIVITY_SEGMENT_14)); }
	inline DataType_t1476354918 * get_TYPE_ACTIVITY_SEGMENT_14() const { return ___TYPE_ACTIVITY_SEGMENT_14; }
	inline DataType_t1476354918 ** get_address_of_TYPE_ACTIVITY_SEGMENT_14() { return &___TYPE_ACTIVITY_SEGMENT_14; }
	inline void set_TYPE_ACTIVITY_SEGMENT_14(DataType_t1476354918 * value)
	{
		___TYPE_ACTIVITY_SEGMENT_14 = value;
		Il2CppCodeGenWriteBarrier(&___TYPE_ACTIVITY_SEGMENT_14, value);
	}

	inline static int32_t get_offset_of_TYPE_BASAL_METABOLIC_RATE_15() { return static_cast<int32_t>(offsetof(DataType_t1476354918_StaticFields, ___TYPE_BASAL_METABOLIC_RATE_15)); }
	inline DataType_t1476354918 * get_TYPE_BASAL_METABOLIC_RATE_15() const { return ___TYPE_BASAL_METABOLIC_RATE_15; }
	inline DataType_t1476354918 ** get_address_of_TYPE_BASAL_METABOLIC_RATE_15() { return &___TYPE_BASAL_METABOLIC_RATE_15; }
	inline void set_TYPE_BASAL_METABOLIC_RATE_15(DataType_t1476354918 * value)
	{
		___TYPE_BASAL_METABOLIC_RATE_15 = value;
		Il2CppCodeGenWriteBarrier(&___TYPE_BASAL_METABOLIC_RATE_15, value);
	}

	inline static int32_t get_offset_of_TYPE_BODY_FAT_PERCENTAGE_16() { return static_cast<int32_t>(offsetof(DataType_t1476354918_StaticFields, ___TYPE_BODY_FAT_PERCENTAGE_16)); }
	inline DataType_t1476354918 * get_TYPE_BODY_FAT_PERCENTAGE_16() const { return ___TYPE_BODY_FAT_PERCENTAGE_16; }
	inline DataType_t1476354918 ** get_address_of_TYPE_BODY_FAT_PERCENTAGE_16() { return &___TYPE_BODY_FAT_PERCENTAGE_16; }
	inline void set_TYPE_BODY_FAT_PERCENTAGE_16(DataType_t1476354918 * value)
	{
		___TYPE_BODY_FAT_PERCENTAGE_16 = value;
		Il2CppCodeGenWriteBarrier(&___TYPE_BODY_FAT_PERCENTAGE_16, value);
	}

	inline static int32_t get_offset_of_TYPE_CALORIES_EXPENDED_17() { return static_cast<int32_t>(offsetof(DataType_t1476354918_StaticFields, ___TYPE_CALORIES_EXPENDED_17)); }
	inline DataType_t1476354918 * get_TYPE_CALORIES_EXPENDED_17() const { return ___TYPE_CALORIES_EXPENDED_17; }
	inline DataType_t1476354918 ** get_address_of_TYPE_CALORIES_EXPENDED_17() { return &___TYPE_CALORIES_EXPENDED_17; }
	inline void set_TYPE_CALORIES_EXPENDED_17(DataType_t1476354918 * value)
	{
		___TYPE_CALORIES_EXPENDED_17 = value;
		Il2CppCodeGenWriteBarrier(&___TYPE_CALORIES_EXPENDED_17, value);
	}

	inline static int32_t get_offset_of_TYPE_CYCLING_PEDALING_CADENCE_18() { return static_cast<int32_t>(offsetof(DataType_t1476354918_StaticFields, ___TYPE_CYCLING_PEDALING_CADENCE_18)); }
	inline DataType_t1476354918 * get_TYPE_CYCLING_PEDALING_CADENCE_18() const { return ___TYPE_CYCLING_PEDALING_CADENCE_18; }
	inline DataType_t1476354918 ** get_address_of_TYPE_CYCLING_PEDALING_CADENCE_18() { return &___TYPE_CYCLING_PEDALING_CADENCE_18; }
	inline void set_TYPE_CYCLING_PEDALING_CADENCE_18(DataType_t1476354918 * value)
	{
		___TYPE_CYCLING_PEDALING_CADENCE_18 = value;
		Il2CppCodeGenWriteBarrier(&___TYPE_CYCLING_PEDALING_CADENCE_18, value);
	}

	inline static int32_t get_offset_of_TYPE_CYCLING_PEDALING_CUMULATIVE_19() { return static_cast<int32_t>(offsetof(DataType_t1476354918_StaticFields, ___TYPE_CYCLING_PEDALING_CUMULATIVE_19)); }
	inline DataType_t1476354918 * get_TYPE_CYCLING_PEDALING_CUMULATIVE_19() const { return ___TYPE_CYCLING_PEDALING_CUMULATIVE_19; }
	inline DataType_t1476354918 ** get_address_of_TYPE_CYCLING_PEDALING_CUMULATIVE_19() { return &___TYPE_CYCLING_PEDALING_CUMULATIVE_19; }
	inline void set_TYPE_CYCLING_PEDALING_CUMULATIVE_19(DataType_t1476354918 * value)
	{
		___TYPE_CYCLING_PEDALING_CUMULATIVE_19 = value;
		Il2CppCodeGenWriteBarrier(&___TYPE_CYCLING_PEDALING_CUMULATIVE_19, value);
	}

	inline static int32_t get_offset_of_TYPE_CYCLING_WHEEL_REVOLUTION_20() { return static_cast<int32_t>(offsetof(DataType_t1476354918_StaticFields, ___TYPE_CYCLING_WHEEL_REVOLUTION_20)); }
	inline DataType_t1476354918 * get_TYPE_CYCLING_WHEEL_REVOLUTION_20() const { return ___TYPE_CYCLING_WHEEL_REVOLUTION_20; }
	inline DataType_t1476354918 ** get_address_of_TYPE_CYCLING_WHEEL_REVOLUTION_20() { return &___TYPE_CYCLING_WHEEL_REVOLUTION_20; }
	inline void set_TYPE_CYCLING_WHEEL_REVOLUTION_20(DataType_t1476354918 * value)
	{
		___TYPE_CYCLING_WHEEL_REVOLUTION_20 = value;
		Il2CppCodeGenWriteBarrier(&___TYPE_CYCLING_WHEEL_REVOLUTION_20, value);
	}

	inline static int32_t get_offset_of_TYPE_CYCLING_WHEEL_RPM_21() { return static_cast<int32_t>(offsetof(DataType_t1476354918_StaticFields, ___TYPE_CYCLING_WHEEL_RPM_21)); }
	inline DataType_t1476354918 * get_TYPE_CYCLING_WHEEL_RPM_21() const { return ___TYPE_CYCLING_WHEEL_RPM_21; }
	inline DataType_t1476354918 ** get_address_of_TYPE_CYCLING_WHEEL_RPM_21() { return &___TYPE_CYCLING_WHEEL_RPM_21; }
	inline void set_TYPE_CYCLING_WHEEL_RPM_21(DataType_t1476354918 * value)
	{
		___TYPE_CYCLING_WHEEL_RPM_21 = value;
		Il2CppCodeGenWriteBarrier(&___TYPE_CYCLING_WHEEL_RPM_21, value);
	}

	inline static int32_t get_offset_of_TYPE_DISTANCE_DELTA_22() { return static_cast<int32_t>(offsetof(DataType_t1476354918_StaticFields, ___TYPE_DISTANCE_DELTA_22)); }
	inline DataType_t1476354918 * get_TYPE_DISTANCE_DELTA_22() const { return ___TYPE_DISTANCE_DELTA_22; }
	inline DataType_t1476354918 ** get_address_of_TYPE_DISTANCE_DELTA_22() { return &___TYPE_DISTANCE_DELTA_22; }
	inline void set_TYPE_DISTANCE_DELTA_22(DataType_t1476354918 * value)
	{
		___TYPE_DISTANCE_DELTA_22 = value;
		Il2CppCodeGenWriteBarrier(&___TYPE_DISTANCE_DELTA_22, value);
	}

	inline static int32_t get_offset_of_TYPE_HEART_RATE_BPM_23() { return static_cast<int32_t>(offsetof(DataType_t1476354918_StaticFields, ___TYPE_HEART_RATE_BPM_23)); }
	inline DataType_t1476354918 * get_TYPE_HEART_RATE_BPM_23() const { return ___TYPE_HEART_RATE_BPM_23; }
	inline DataType_t1476354918 ** get_address_of_TYPE_HEART_RATE_BPM_23() { return &___TYPE_HEART_RATE_BPM_23; }
	inline void set_TYPE_HEART_RATE_BPM_23(DataType_t1476354918 * value)
	{
		___TYPE_HEART_RATE_BPM_23 = value;
		Il2CppCodeGenWriteBarrier(&___TYPE_HEART_RATE_BPM_23, value);
	}

	inline static int32_t get_offset_of_TYPE_HEIGHT_24() { return static_cast<int32_t>(offsetof(DataType_t1476354918_StaticFields, ___TYPE_HEIGHT_24)); }
	inline DataType_t1476354918 * get_TYPE_HEIGHT_24() const { return ___TYPE_HEIGHT_24; }
	inline DataType_t1476354918 ** get_address_of_TYPE_HEIGHT_24() { return &___TYPE_HEIGHT_24; }
	inline void set_TYPE_HEIGHT_24(DataType_t1476354918 * value)
	{
		___TYPE_HEIGHT_24 = value;
		Il2CppCodeGenWriteBarrier(&___TYPE_HEIGHT_24, value);
	}

	inline static int32_t get_offset_of_TYPE_HYDRATION_25() { return static_cast<int32_t>(offsetof(DataType_t1476354918_StaticFields, ___TYPE_HYDRATION_25)); }
	inline DataType_t1476354918 * get_TYPE_HYDRATION_25() const { return ___TYPE_HYDRATION_25; }
	inline DataType_t1476354918 ** get_address_of_TYPE_HYDRATION_25() { return &___TYPE_HYDRATION_25; }
	inline void set_TYPE_HYDRATION_25(DataType_t1476354918 * value)
	{
		___TYPE_HYDRATION_25 = value;
		Il2CppCodeGenWriteBarrier(&___TYPE_HYDRATION_25, value);
	}

	inline static int32_t get_offset_of_TYPE_LOCATION_SAMPLE_26() { return static_cast<int32_t>(offsetof(DataType_t1476354918_StaticFields, ___TYPE_LOCATION_SAMPLE_26)); }
	inline DataType_t1476354918 * get_TYPE_LOCATION_SAMPLE_26() const { return ___TYPE_LOCATION_SAMPLE_26; }
	inline DataType_t1476354918 ** get_address_of_TYPE_LOCATION_SAMPLE_26() { return &___TYPE_LOCATION_SAMPLE_26; }
	inline void set_TYPE_LOCATION_SAMPLE_26(DataType_t1476354918 * value)
	{
		___TYPE_LOCATION_SAMPLE_26 = value;
		Il2CppCodeGenWriteBarrier(&___TYPE_LOCATION_SAMPLE_26, value);
	}

	inline static int32_t get_offset_of_TYPE_LOCATION_TRACK_27() { return static_cast<int32_t>(offsetof(DataType_t1476354918_StaticFields, ___TYPE_LOCATION_TRACK_27)); }
	inline DataType_t1476354918 * get_TYPE_LOCATION_TRACK_27() const { return ___TYPE_LOCATION_TRACK_27; }
	inline DataType_t1476354918 ** get_address_of_TYPE_LOCATION_TRACK_27() { return &___TYPE_LOCATION_TRACK_27; }
	inline void set_TYPE_LOCATION_TRACK_27(DataType_t1476354918 * value)
	{
		___TYPE_LOCATION_TRACK_27 = value;
		Il2CppCodeGenWriteBarrier(&___TYPE_LOCATION_TRACK_27, value);
	}

	inline static int32_t get_offset_of_TYPE_NUTRITION_28() { return static_cast<int32_t>(offsetof(DataType_t1476354918_StaticFields, ___TYPE_NUTRITION_28)); }
	inline DataType_t1476354918 * get_TYPE_NUTRITION_28() const { return ___TYPE_NUTRITION_28; }
	inline DataType_t1476354918 ** get_address_of_TYPE_NUTRITION_28() { return &___TYPE_NUTRITION_28; }
	inline void set_TYPE_NUTRITION_28(DataType_t1476354918 * value)
	{
		___TYPE_NUTRITION_28 = value;
		Il2CppCodeGenWriteBarrier(&___TYPE_NUTRITION_28, value);
	}

	inline static int32_t get_offset_of_TYPE_POWER_SAMPLE_29() { return static_cast<int32_t>(offsetof(DataType_t1476354918_StaticFields, ___TYPE_POWER_SAMPLE_29)); }
	inline DataType_t1476354918 * get_TYPE_POWER_SAMPLE_29() const { return ___TYPE_POWER_SAMPLE_29; }
	inline DataType_t1476354918 ** get_address_of_TYPE_POWER_SAMPLE_29() { return &___TYPE_POWER_SAMPLE_29; }
	inline void set_TYPE_POWER_SAMPLE_29(DataType_t1476354918 * value)
	{
		___TYPE_POWER_SAMPLE_29 = value;
		Il2CppCodeGenWriteBarrier(&___TYPE_POWER_SAMPLE_29, value);
	}

	inline static int32_t get_offset_of_TYPE_SPEED_30() { return static_cast<int32_t>(offsetof(DataType_t1476354918_StaticFields, ___TYPE_SPEED_30)); }
	inline DataType_t1476354918 * get_TYPE_SPEED_30() const { return ___TYPE_SPEED_30; }
	inline DataType_t1476354918 ** get_address_of_TYPE_SPEED_30() { return &___TYPE_SPEED_30; }
	inline void set_TYPE_SPEED_30(DataType_t1476354918 * value)
	{
		___TYPE_SPEED_30 = value;
		Il2CppCodeGenWriteBarrier(&___TYPE_SPEED_30, value);
	}

	inline static int32_t get_offset_of_TYPE_STEP_COUNT_CADENCE_31() { return static_cast<int32_t>(offsetof(DataType_t1476354918_StaticFields, ___TYPE_STEP_COUNT_CADENCE_31)); }
	inline DataType_t1476354918 * get_TYPE_STEP_COUNT_CADENCE_31() const { return ___TYPE_STEP_COUNT_CADENCE_31; }
	inline DataType_t1476354918 ** get_address_of_TYPE_STEP_COUNT_CADENCE_31() { return &___TYPE_STEP_COUNT_CADENCE_31; }
	inline void set_TYPE_STEP_COUNT_CADENCE_31(DataType_t1476354918 * value)
	{
		___TYPE_STEP_COUNT_CADENCE_31 = value;
		Il2CppCodeGenWriteBarrier(&___TYPE_STEP_COUNT_CADENCE_31, value);
	}

	inline static int32_t get_offset_of_TYPE_STEP_COUNT_DELTA_32() { return static_cast<int32_t>(offsetof(DataType_t1476354918_StaticFields, ___TYPE_STEP_COUNT_DELTA_32)); }
	inline DataType_t1476354918 * get_TYPE_STEP_COUNT_DELTA_32() const { return ___TYPE_STEP_COUNT_DELTA_32; }
	inline DataType_t1476354918 ** get_address_of_TYPE_STEP_COUNT_DELTA_32() { return &___TYPE_STEP_COUNT_DELTA_32; }
	inline void set_TYPE_STEP_COUNT_DELTA_32(DataType_t1476354918 * value)
	{
		___TYPE_STEP_COUNT_DELTA_32 = value;
		Il2CppCodeGenWriteBarrier(&___TYPE_STEP_COUNT_DELTA_32, value);
	}

	inline static int32_t get_offset_of_TYPE_WEIGHT_33() { return static_cast<int32_t>(offsetof(DataType_t1476354918_StaticFields, ___TYPE_WEIGHT_33)); }
	inline DataType_t1476354918 * get_TYPE_WEIGHT_33() const { return ___TYPE_WEIGHT_33; }
	inline DataType_t1476354918 ** get_address_of_TYPE_WEIGHT_33() { return &___TYPE_WEIGHT_33; }
	inline void set_TYPE_WEIGHT_33(DataType_t1476354918 * value)
	{
		___TYPE_WEIGHT_33 = value;
		Il2CppCodeGenWriteBarrier(&___TYPE_WEIGHT_33, value);
	}

	inline static int32_t get_offset_of_TYPE_WORKOUT_EXERCISE_34() { return static_cast<int32_t>(offsetof(DataType_t1476354918_StaticFields, ___TYPE_WORKOUT_EXERCISE_34)); }
	inline DataType_t1476354918 * get_TYPE_WORKOUT_EXERCISE_34() const { return ___TYPE_WORKOUT_EXERCISE_34; }
	inline DataType_t1476354918 ** get_address_of_TYPE_WORKOUT_EXERCISE_34() { return &___TYPE_WORKOUT_EXERCISE_34; }
	inline void set_TYPE_WORKOUT_EXERCISE_34(DataType_t1476354918 * value)
	{
		___TYPE_WORKOUT_EXERCISE_34 = value;
		Il2CppCodeGenWriteBarrier(&___TYPE_WORKOUT_EXERCISE_34, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
