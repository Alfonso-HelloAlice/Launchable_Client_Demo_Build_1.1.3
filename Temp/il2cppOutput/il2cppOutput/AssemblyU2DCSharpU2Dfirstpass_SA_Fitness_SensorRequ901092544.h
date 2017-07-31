#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Models_Res4287219743.h"

// System.Collections.Generic.List`1<SA.Fitness.DataSource>
struct List_1_t2875072051;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Fitness.SensorRequestResult
struct  SensorRequestResult_t901092544  : public Result_t4287219743
{
public:
	// System.Int32 SA.Fitness.SensorRequestResult::id
	int32_t ___id_1;
	// System.Collections.Generic.List`1<SA.Fitness.DataSource> SA.Fitness.SensorRequestResult::dataSources
	List_1_t2875072051 * ___dataSources_2;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(SensorRequestResult_t901092544, ___id_1)); }
	inline int32_t get_id_1() const { return ___id_1; }
	inline int32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(int32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_dataSources_2() { return static_cast<int32_t>(offsetof(SensorRequestResult_t901092544, ___dataSources_2)); }
	inline List_1_t2875072051 * get_dataSources_2() const { return ___dataSources_2; }
	inline List_1_t2875072051 ** get_address_of_dataSources_2() { return &___dataSources_2; }
	inline void set_dataSources_2(List_1_t2875072051 * value)
	{
		___dataSources_2 = value;
		Il2CppCodeGenWriteBarrier(&___dataSources_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
