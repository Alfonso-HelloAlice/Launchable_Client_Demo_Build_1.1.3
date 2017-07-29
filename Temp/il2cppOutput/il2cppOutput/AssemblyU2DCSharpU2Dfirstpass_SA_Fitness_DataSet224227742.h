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
// System.Collections.Generic.List`1<SA.Fitness.DataPoint>
struct List_1_t1591600644;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Fitness.DataSet
struct  DataSet_t224227742  : public Il2CppObject
{
public:
	// SA.Fitness.DataType SA.Fitness.DataSet::dataType
	DataType_t1476354918 * ___dataType_0;
	// System.Collections.Generic.List`1<SA.Fitness.DataPoint> SA.Fitness.DataSet::dataPoints
	List_1_t1591600644 * ___dataPoints_1;

public:
	inline static int32_t get_offset_of_dataType_0() { return static_cast<int32_t>(offsetof(DataSet_t224227742, ___dataType_0)); }
	inline DataType_t1476354918 * get_dataType_0() const { return ___dataType_0; }
	inline DataType_t1476354918 ** get_address_of_dataType_0() { return &___dataType_0; }
	inline void set_dataType_0(DataType_t1476354918 * value)
	{
		___dataType_0 = value;
		Il2CppCodeGenWriteBarrier(&___dataType_0, value);
	}

	inline static int32_t get_offset_of_dataPoints_1() { return static_cast<int32_t>(offsetof(DataSet_t224227742, ___dataPoints_1)); }
	inline List_1_t1591600644 * get_dataPoints_1() const { return ___dataPoints_1; }
	inline List_1_t1591600644 ** get_address_of_dataPoints_1() { return &___dataPoints_1; }
	inline void set_dataPoints_1(List_1_t1591600644 * value)
	{
		___dataPoints_1 = value;
		Il2CppCodeGenWriteBarrier(&___dataPoints_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
