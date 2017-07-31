#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_UM_Result3448267086.h"

// UM_Leaderboard
struct UM_Leaderboard_t2297645390;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UM_LeaderboardResult
struct  UM_LeaderboardResult_t4045919333  : public UM_Result_t3448267086
{
public:
	// UM_Leaderboard UM_LeaderboardResult::_Leaderboard
	UM_Leaderboard_t2297645390 * ____Leaderboard_2;

public:
	inline static int32_t get_offset_of__Leaderboard_2() { return static_cast<int32_t>(offsetof(UM_LeaderboardResult_t4045919333, ____Leaderboard_2)); }
	inline UM_Leaderboard_t2297645390 * get__Leaderboard_2() const { return ____Leaderboard_2; }
	inline UM_Leaderboard_t2297645390 ** get_address_of__Leaderboard_2() { return &____Leaderboard_2; }
	inline void set__Leaderboard_2(UM_Leaderboard_t2297645390 * value)
	{
		____Leaderboard_2 = value;
		Il2CppCodeGenWriteBarrier(&____Leaderboard_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
