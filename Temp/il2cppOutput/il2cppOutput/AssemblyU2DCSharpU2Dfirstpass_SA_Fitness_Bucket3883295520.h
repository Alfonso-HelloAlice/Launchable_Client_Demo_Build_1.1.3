#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SA_Fitness_Bucket_Ty3333165833.h"

// System.Collections.Generic.List`1<SA.Fitness.DataSet>
struct List_1_t3888316170;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Fitness.Bucket
struct  Bucket_t3883295520  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<SA.Fitness.DataSet> SA.Fitness.Bucket::dataSets
	List_1_t3888316170 * ___dataSets_0;
	// SA.Fitness.Bucket/Type SA.Fitness.Bucket::type
	int32_t ___type_1;
	// System.Int64 SA.Fitness.Bucket::startTime
	int64_t ___startTime_2;
	// System.Int64 SA.Fitness.Bucket::endTime
	int64_t ___endTime_3;

public:
	inline static int32_t get_offset_of_dataSets_0() { return static_cast<int32_t>(offsetof(Bucket_t3883295520, ___dataSets_0)); }
	inline List_1_t3888316170 * get_dataSets_0() const { return ___dataSets_0; }
	inline List_1_t3888316170 ** get_address_of_dataSets_0() { return &___dataSets_0; }
	inline void set_dataSets_0(List_1_t3888316170 * value)
	{
		___dataSets_0 = value;
		Il2CppCodeGenWriteBarrier(&___dataSets_0, value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(Bucket_t3883295520, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_startTime_2() { return static_cast<int32_t>(offsetof(Bucket_t3883295520, ___startTime_2)); }
	inline int64_t get_startTime_2() const { return ___startTime_2; }
	inline int64_t* get_address_of_startTime_2() { return &___startTime_2; }
	inline void set_startTime_2(int64_t value)
	{
		___startTime_2 = value;
	}

	inline static int32_t get_offset_of_endTime_3() { return static_cast<int32_t>(offsetof(Bucket_t3883295520, ___endTime_3)); }
	inline int64_t get_endTime_3() const { return ___endTime_3; }
	inline int64_t* get_address_of_endTime_3() { return &___endTime_3; }
	inline void set_endTime_3(int64_t value)
	{
		___endTime_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
