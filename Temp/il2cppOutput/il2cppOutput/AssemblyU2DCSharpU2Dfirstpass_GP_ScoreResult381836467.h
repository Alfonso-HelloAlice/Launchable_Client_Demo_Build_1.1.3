#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_GooglePlayResult3097469636.h"

// GPScore
struct GPScore_t3219488889;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GP_ScoreResult
struct  GP_ScoreResult_t381836467  : public GooglePlayResult_t3097469636
{
public:
	// GPScore GP_ScoreResult::score
	GPScore_t3219488889 * ___score_2;

public:
	inline static int32_t get_offset_of_score_2() { return static_cast<int32_t>(offsetof(GP_ScoreResult_t381836467, ___score_2)); }
	inline GPScore_t3219488889 * get_score_2() const { return ___score_2; }
	inline GPScore_t3219488889 ** get_address_of_score_2() { return &___score_2; }
	inline void set_score_2(GPScore_t3219488889 * value)
	{
		___score_2 = value;
		Il2CppCodeGenWriteBarrier(&___score_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
