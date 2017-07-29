#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_UM_Result3448267086.h"

// System.Collections.Generic.List`1<UM_TBM_Match>
struct List_1_t399209990;
// System.Collections.Generic.List`1<UM_TBM_Invite>
struct List_1_t4282783208;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UM_TBM_MatchesLoadResult
struct  UM_TBM_MatchesLoadResult_t1269161163  : public UM_Result_t3448267086
{
public:
	// System.Collections.Generic.List`1<UM_TBM_Match> UM_TBM_MatchesLoadResult::_Matches
	List_1_t399209990 * ____Matches_2;
	// System.Collections.Generic.List`1<UM_TBM_Invite> UM_TBM_MatchesLoadResult::_Invitations
	List_1_t4282783208 * ____Invitations_3;

public:
	inline static int32_t get_offset_of__Matches_2() { return static_cast<int32_t>(offsetof(UM_TBM_MatchesLoadResult_t1269161163, ____Matches_2)); }
	inline List_1_t399209990 * get__Matches_2() const { return ____Matches_2; }
	inline List_1_t399209990 ** get_address_of__Matches_2() { return &____Matches_2; }
	inline void set__Matches_2(List_1_t399209990 * value)
	{
		____Matches_2 = value;
		Il2CppCodeGenWriteBarrier(&____Matches_2, value);
	}

	inline static int32_t get_offset_of__Invitations_3() { return static_cast<int32_t>(offsetof(UM_TBM_MatchesLoadResult_t1269161163, ____Invitations_3)); }
	inline List_1_t4282783208 * get__Invitations_3() const { return ____Invitations_3; }
	inline List_1_t4282783208 ** get_address_of__Invitations_3() { return &____Invitations_3; }
	inline void set__Invitations_3(List_1_t4282783208 * value)
	{
		____Invitations_3 = value;
		Il2CppCodeGenWriteBarrier(&____Invitations_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
