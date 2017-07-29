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
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Fitness.DataPoint
struct  DataPoint_t2222479512  : public Il2CppObject
{
public:
	// System.Int64 SA.Fitness.DataPoint::startTime
	int64_t ___startTime_0;
	// System.Int64 SA.Fitness.DataPoint::endTime
	int64_t ___endTime_1;
	// SA.Fitness.DataType SA.Fitness.DataPoint::dataType
	DataType_t1476354918 * ___dataType_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> SA.Fitness.DataPoint::fields
	Dictionary_2_t309261261 * ___fields_3;

public:
	inline static int32_t get_offset_of_startTime_0() { return static_cast<int32_t>(offsetof(DataPoint_t2222479512, ___startTime_0)); }
	inline int64_t get_startTime_0() const { return ___startTime_0; }
	inline int64_t* get_address_of_startTime_0() { return &___startTime_0; }
	inline void set_startTime_0(int64_t value)
	{
		___startTime_0 = value;
	}

	inline static int32_t get_offset_of_endTime_1() { return static_cast<int32_t>(offsetof(DataPoint_t2222479512, ___endTime_1)); }
	inline int64_t get_endTime_1() const { return ___endTime_1; }
	inline int64_t* get_address_of_endTime_1() { return &___endTime_1; }
	inline void set_endTime_1(int64_t value)
	{
		___endTime_1 = value;
	}

	inline static int32_t get_offset_of_dataType_2() { return static_cast<int32_t>(offsetof(DataPoint_t2222479512, ___dataType_2)); }
	inline DataType_t1476354918 * get_dataType_2() const { return ___dataType_2; }
	inline DataType_t1476354918 ** get_address_of_dataType_2() { return &___dataType_2; }
	inline void set_dataType_2(DataType_t1476354918 * value)
	{
		___dataType_2 = value;
		Il2CppCodeGenWriteBarrier(&___dataType_2, value);
	}

	inline static int32_t get_offset_of_fields_3() { return static_cast<int32_t>(offsetof(DataPoint_t2222479512, ___fields_3)); }
	inline Dictionary_2_t309261261 * get_fields_3() const { return ___fields_3; }
	inline Dictionary_2_t309261261 ** get_address_of_fields_3() { return &___fields_3; }
	inline void set_fields_3(Dictionary_2_t309261261 * value)
	{
		___fields_3 = value;
		Il2CppCodeGenWriteBarrier(&___fields_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
