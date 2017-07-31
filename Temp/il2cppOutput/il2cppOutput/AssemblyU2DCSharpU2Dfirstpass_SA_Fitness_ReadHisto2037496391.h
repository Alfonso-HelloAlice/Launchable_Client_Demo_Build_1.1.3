#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Models_Res4287219743.h"

// System.Collections.Generic.List`1<SA.Fitness.Bucket>
struct List_1_t3252416652;
// System.Collections.Generic.List`1<SA.Fitness.DataSet>
struct List_1_t3888316170;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Fitness.ReadHistoryResult
struct  ReadHistoryResult_t2037496391  : public Result_t4287219743
{
public:
	// System.Collections.Generic.List`1<SA.Fitness.Bucket> SA.Fitness.ReadHistoryResult::buckets
	List_1_t3252416652 * ___buckets_1;
	// System.Collections.Generic.List`1<SA.Fitness.DataSet> SA.Fitness.ReadHistoryResult::dataSets
	List_1_t3888316170 * ___dataSets_2;
	// System.Int32 SA.Fitness.ReadHistoryResult::id
	int32_t ___id_3;
	// System.Boolean SA.Fitness.ReadHistoryResult::isAggregated
	bool ___isAggregated_4;

public:
	inline static int32_t get_offset_of_buckets_1() { return static_cast<int32_t>(offsetof(ReadHistoryResult_t2037496391, ___buckets_1)); }
	inline List_1_t3252416652 * get_buckets_1() const { return ___buckets_1; }
	inline List_1_t3252416652 ** get_address_of_buckets_1() { return &___buckets_1; }
	inline void set_buckets_1(List_1_t3252416652 * value)
	{
		___buckets_1 = value;
		Il2CppCodeGenWriteBarrier(&___buckets_1, value);
	}

	inline static int32_t get_offset_of_dataSets_2() { return static_cast<int32_t>(offsetof(ReadHistoryResult_t2037496391, ___dataSets_2)); }
	inline List_1_t3888316170 * get_dataSets_2() const { return ___dataSets_2; }
	inline List_1_t3888316170 ** get_address_of_dataSets_2() { return &___dataSets_2; }
	inline void set_dataSets_2(List_1_t3888316170 * value)
	{
		___dataSets_2 = value;
		Il2CppCodeGenWriteBarrier(&___dataSets_2, value);
	}

	inline static int32_t get_offset_of_id_3() { return static_cast<int32_t>(offsetof(ReadHistoryResult_t2037496391, ___id_3)); }
	inline int32_t get_id_3() const { return ___id_3; }
	inline int32_t* get_address_of_id_3() { return &___id_3; }
	inline void set_id_3(int32_t value)
	{
		___id_3 = value;
	}

	inline static int32_t get_offset_of_isAggregated_4() { return static_cast<int32_t>(offsetof(ReadHistoryResult_t2037496391, ___isAggregated_4)); }
	inline bool get_isAggregated_4() const { return ___isAggregated_4; }
	inline bool* get_address_of_isAggregated_4() { return &___isAggregated_4; }
	inline void set_isAggregated_4(bool value)
	{
		___isAggregated_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
