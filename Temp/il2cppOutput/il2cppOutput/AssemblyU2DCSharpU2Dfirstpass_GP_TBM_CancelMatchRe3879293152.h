#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_GooglePlayResult3097469636.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GP_TBM_CancelMatchResult
struct  GP_TBM_CancelMatchResult_t3879293152  : public GooglePlayResult_t3097469636
{
public:
	// System.String GP_TBM_CancelMatchResult::MatchId
	String_t* ___MatchId_2;

public:
	inline static int32_t get_offset_of_MatchId_2() { return static_cast<int32_t>(offsetof(GP_TBM_CancelMatchResult_t3879293152, ___MatchId_2)); }
	inline String_t* get_MatchId_2() const { return ___MatchId_2; }
	inline String_t** get_address_of_MatchId_2() { return &___MatchId_2; }
	inline void set_MatchId_2(String_t* value)
	{
		___MatchId_2 = value;
		Il2CppCodeGenWriteBarrier(&___MatchId_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
