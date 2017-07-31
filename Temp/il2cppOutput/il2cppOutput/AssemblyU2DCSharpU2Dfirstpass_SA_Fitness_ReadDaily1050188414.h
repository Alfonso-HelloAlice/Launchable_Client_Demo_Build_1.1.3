#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Models_Res4287219743.h"

// SA.Fitness.DataSet
struct DataSet_t224227742;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Fitness.ReadDailyTotalResult
struct  ReadDailyTotalResult_t1050188414  : public Result_t4287219743
{
public:
	// System.Int32 SA.Fitness.ReadDailyTotalResult::id
	int32_t ___id_1;
	// SA.Fitness.DataSet SA.Fitness.ReadDailyTotalResult::dataSet
	DataSet_t224227742 * ___dataSet_2;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(ReadDailyTotalResult_t1050188414, ___id_1)); }
	inline int32_t get_id_1() const { return ___id_1; }
	inline int32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(int32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_dataSet_2() { return static_cast<int32_t>(offsetof(ReadDailyTotalResult_t1050188414, ___dataSet_2)); }
	inline DataSet_t224227742 * get_dataSet_2() const { return ___dataSet_2; }
	inline DataSet_t224227742 ** get_address_of_dataSet_2() { return &___dataSet_2; }
	inline void set_dataSet_2(DataSet_t224227742 * value)
	{
		___dataSet_2 = value;
		Il2CppCodeGenWriteBarrier(&___dataSet_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
