#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Models_Res4287219743.h"

// System.Collections.Generic.List`1<GK_SavedGame>
struct List_1_t2689214752;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GK_FetchResult
struct  GK_FetchResult_t1611512656  : public Result_t4287219743
{
public:
	// System.Collections.Generic.List`1<GK_SavedGame> GK_FetchResult::_SavedGames
	List_1_t2689214752 * ____SavedGames_1;

public:
	inline static int32_t get_offset_of__SavedGames_1() { return static_cast<int32_t>(offsetof(GK_FetchResult_t1611512656, ____SavedGames_1)); }
	inline List_1_t2689214752 * get__SavedGames_1() const { return ____SavedGames_1; }
	inline List_1_t2689214752 ** get_address_of__SavedGames_1() { return &____SavedGames_1; }
	inline void set__SavedGames_1(List_1_t2689214752 * value)
	{
		____SavedGames_1 = value;
		Il2CppCodeGenWriteBarrier(&____SavedGames_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
