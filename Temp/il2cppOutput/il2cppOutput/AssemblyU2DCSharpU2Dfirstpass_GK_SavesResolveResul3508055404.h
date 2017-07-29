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

// GK_SavesResolveResult
struct  GK_SavesResolveResult_t3508055404  : public Result_t4287219743
{
public:
	// System.Collections.Generic.List`1<GK_SavedGame> GK_SavesResolveResult::_ResolvedSaves
	List_1_t2689214752 * ____ResolvedSaves_1;

public:
	inline static int32_t get_offset_of__ResolvedSaves_1() { return static_cast<int32_t>(offsetof(GK_SavesResolveResult_t3508055404, ____ResolvedSaves_1)); }
	inline List_1_t2689214752 * get__ResolvedSaves_1() const { return ____ResolvedSaves_1; }
	inline List_1_t2689214752 ** get_address_of__ResolvedSaves_1() { return &____ResolvedSaves_1; }
	inline void set__ResolvedSaves_1(List_1_t2689214752 * value)
	{
		____ResolvedSaves_1 = value;
		Il2CppCodeGenWriteBarrier(&____ResolvedSaves_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
