#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_UM_Result3448267086.h"

// UM_TBM_Match
struct UM_TBM_Match_t1030088858;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UM_TBM_MatchResult
struct  UM_TBM_MatchResult_t634805275  : public UM_Result_t3448267086
{
public:
	// UM_TBM_Match UM_TBM_MatchResult::_Match
	UM_TBM_Match_t1030088858 * ____Match_2;

public:
	inline static int32_t get_offset_of__Match_2() { return static_cast<int32_t>(offsetof(UM_TBM_MatchResult_t634805275, ____Match_2)); }
	inline UM_TBM_Match_t1030088858 * get__Match_2() const { return ____Match_2; }
	inline UM_TBM_Match_t1030088858 ** get_address_of__Match_2() { return &____Match_2; }
	inline void set__Match_2(UM_TBM_Match_t1030088858 * value)
	{
		____Match_2 = value;
		Il2CppCodeGenWriteBarrier(&____Match_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
