#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_GooglePlayResult3097469636.h"

// System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>
struct Dictionary_2_t3189857243;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GP_TBM_LoadMatchesResult
struct  GP_TBM_LoadMatchesResult_t841773038  : public GooglePlayResult_t3097469636
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match> GP_TBM_LoadMatchesResult::LoadedMatches
	Dictionary_2_t3189857243 * ___LoadedMatches_2;

public:
	inline static int32_t get_offset_of_LoadedMatches_2() { return static_cast<int32_t>(offsetof(GP_TBM_LoadMatchesResult_t841773038, ___LoadedMatches_2)); }
	inline Dictionary_2_t3189857243 * get_LoadedMatches_2() const { return ___LoadedMatches_2; }
	inline Dictionary_2_t3189857243 ** get_address_of_LoadedMatches_2() { return &___LoadedMatches_2; }
	inline void set_LoadedMatches_2(Dictionary_2_t3189857243 * value)
	{
		___LoadedMatches_2 = value;
		Il2CppCodeGenWriteBarrier(&___LoadedMatches_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
