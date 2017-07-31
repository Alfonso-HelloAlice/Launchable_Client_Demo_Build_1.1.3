#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_GooglePlayResult3097469636.h"

// GPLeaderBoard
struct GPLeaderBoard_t3649577886;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GP_LeaderboardResult
struct  GP_LeaderboardResult_t2034215294  : public GooglePlayResult_t3097469636
{
public:
	// GPLeaderBoard GP_LeaderboardResult::_Leaderboard
	GPLeaderBoard_t3649577886 * ____Leaderboard_2;

public:
	inline static int32_t get_offset_of__Leaderboard_2() { return static_cast<int32_t>(offsetof(GP_LeaderboardResult_t2034215294, ____Leaderboard_2)); }
	inline GPLeaderBoard_t3649577886 * get__Leaderboard_2() const { return ____Leaderboard_2; }
	inline GPLeaderBoard_t3649577886 ** get_address_of__Leaderboard_2() { return &____Leaderboard_2; }
	inline void set__Leaderboard_2(GPLeaderBoard_t3649577886 * value)
	{
		____Leaderboard_2 = value;
		Il2CppCodeGenWriteBarrier(&____Leaderboard_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
