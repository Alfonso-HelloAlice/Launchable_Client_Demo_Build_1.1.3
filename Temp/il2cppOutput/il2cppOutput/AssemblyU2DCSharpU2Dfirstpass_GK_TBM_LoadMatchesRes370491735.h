#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Models_Res4287219743.h"

// System.Collections.Generic.Dictionary`2<System.String,GK_TBM_Match>
struct Dictionary_2_t2046812392;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GK_TBM_LoadMatchesResult
struct  GK_TBM_LoadMatchesResult_t370491735  : public Result_t4287219743
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,GK_TBM_Match> GK_TBM_LoadMatchesResult::LoadedMatches
	Dictionary_2_t2046812392 * ___LoadedMatches_1;

public:
	inline static int32_t get_offset_of_LoadedMatches_1() { return static_cast<int32_t>(offsetof(GK_TBM_LoadMatchesResult_t370491735, ___LoadedMatches_1)); }
	inline Dictionary_2_t2046812392 * get_LoadedMatches_1() const { return ___LoadedMatches_1; }
	inline Dictionary_2_t2046812392 ** get_address_of_LoadedMatches_1() { return &___LoadedMatches_1; }
	inline void set_LoadedMatches_1(Dictionary_2_t2046812392 * value)
	{
		___LoadedMatches_1 = value;
		Il2CppCodeGenWriteBarrier(&___LoadedMatches_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
