#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_GooglePlayResult3097469636.h"

// GP_TBM_Match
struct GP_TBM_Match_t1275077981;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GP_TBM_MatchInitiatedResult
struct  GP_TBM_MatchInitiatedResult_t4144060847  : public GooglePlayResult_t3097469636
{
public:
	// GP_TBM_Match GP_TBM_MatchInitiatedResult::Match
	GP_TBM_Match_t1275077981 * ___Match_2;

public:
	inline static int32_t get_offset_of_Match_2() { return static_cast<int32_t>(offsetof(GP_TBM_MatchInitiatedResult_t4144060847, ___Match_2)); }
	inline GP_TBM_Match_t1275077981 * get_Match_2() const { return ___Match_2; }
	inline GP_TBM_Match_t1275077981 ** get_address_of_Match_2() { return &___Match_2; }
	inline void set_Match_2(GP_TBM_Match_t1275077981 * value)
	{
		___Match_2 = value;
		Il2CppCodeGenWriteBarrier(&___Match_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
