#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Models_Res4287219743.h"

// System.Collections.Generic.List`1<SA.Fitness.Session>
struct List_1_t3871993166;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Fitness.ReadSessionResult
struct  ReadSessionResult_t1392611499  : public Result_t4287219743
{
public:
	// System.Collections.Generic.List`1<SA.Fitness.Session> SA.Fitness.ReadSessionResult::sessions
	List_1_t3871993166 * ___sessions_1;
	// System.Int32 SA.Fitness.ReadSessionResult::id
	int32_t ___id_2;

public:
	inline static int32_t get_offset_of_sessions_1() { return static_cast<int32_t>(offsetof(ReadSessionResult_t1392611499, ___sessions_1)); }
	inline List_1_t3871993166 * get_sessions_1() const { return ___sessions_1; }
	inline List_1_t3871993166 ** get_address_of_sessions_1() { return &___sessions_1; }
	inline void set_sessions_1(List_1_t3871993166 * value)
	{
		___sessions_1 = value;
		Il2CppCodeGenWriteBarrier(&___sessions_1, value);
	}

	inline static int32_t get_offset_of_id_2() { return static_cast<int32_t>(offsetof(ReadSessionResult_t1392611499, ___id_2)); }
	inline int32_t get_id_2() const { return ___id_2; }
	inline int32_t* get_address_of_id_2() { return &___id_2; }
	inline void set_id_2(int32_t value)
	{
		___id_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
