#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Models_Res4287219743.h"

// GK_TBM_Match
struct GK_TBM_Match_t132033130;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GK_TBM_LoadMatchResult
struct  GK_TBM_LoadMatchResult_t1639249273  : public Result_t4287219743
{
public:
	// GK_TBM_Match GK_TBM_LoadMatchResult::_Match
	GK_TBM_Match_t132033130 * ____Match_1;

public:
	inline static int32_t get_offset_of__Match_1() { return static_cast<int32_t>(offsetof(GK_TBM_LoadMatchResult_t1639249273, ____Match_1)); }
	inline GK_TBM_Match_t132033130 * get__Match_1() const { return ____Match_1; }
	inline GK_TBM_Match_t132033130 ** get_address_of__Match_1() { return &____Match_1; }
	inline void set__Match_1(GK_TBM_Match_t132033130 * value)
	{
		____Match_1 = value;
		Il2CppCodeGenWriteBarrier(&____Match_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
