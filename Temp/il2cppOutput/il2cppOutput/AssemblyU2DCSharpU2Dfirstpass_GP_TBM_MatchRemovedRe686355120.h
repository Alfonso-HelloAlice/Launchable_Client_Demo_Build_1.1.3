#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GP_TBM_MatchRemovedResult
struct  GP_TBM_MatchRemovedResult_t686355120  : public Il2CppObject
{
public:
	// System.String GP_TBM_MatchRemovedResult::_MatchId
	String_t* ____MatchId_0;

public:
	inline static int32_t get_offset_of__MatchId_0() { return static_cast<int32_t>(offsetof(GP_TBM_MatchRemovedResult_t686355120, ____MatchId_0)); }
	inline String_t* get__MatchId_0() const { return ____MatchId_0; }
	inline String_t** get_address_of__MatchId_0() { return &____MatchId_0; }
	inline void set__MatchId_0(String_t* value)
	{
		____MatchId_0 = value;
		Il2CppCodeGenWriteBarrier(&____MatchId_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
