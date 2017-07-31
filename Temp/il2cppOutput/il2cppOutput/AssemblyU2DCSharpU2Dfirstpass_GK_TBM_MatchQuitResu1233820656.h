#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Models_Res4287219743.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GK_TBM_MatchQuitResult
struct  GK_TBM_MatchQuitResult_t1233820656  : public Result_t4287219743
{
public:
	// System.String GK_TBM_MatchQuitResult::_MatchId
	String_t* ____MatchId_1;

public:
	inline static int32_t get_offset_of__MatchId_1() { return static_cast<int32_t>(offsetof(GK_TBM_MatchQuitResult_t1233820656, ____MatchId_1)); }
	inline String_t* get__MatchId_1() const { return ____MatchId_1; }
	inline String_t** get_address_of__MatchId_1() { return &____MatchId_1; }
	inline void set__MatchId_1(String_t* value)
	{
		____MatchId_1 = value;
		Il2CppCodeGenWriteBarrier(&____MatchId_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
