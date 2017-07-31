#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Models_Res4287219743.h"

// GK_Leaderboard
struct GK_Leaderboard_t156446466;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GK_LeaderboardResult
struct  GK_LeaderboardResult_t866080833  : public Result_t4287219743
{
public:
	// GK_Leaderboard GK_LeaderboardResult::_Leaderboard
	GK_Leaderboard_t156446466 * ____Leaderboard_1;

public:
	inline static int32_t get_offset_of__Leaderboard_1() { return static_cast<int32_t>(offsetof(GK_LeaderboardResult_t866080833, ____Leaderboard_1)); }
	inline GK_Leaderboard_t156446466 * get__Leaderboard_1() const { return ____Leaderboard_1; }
	inline GK_Leaderboard_t156446466 ** get_address_of__Leaderboard_1() { return &____Leaderboard_1; }
	inline void set__Leaderboard_1(GK_Leaderboard_t156446466 * value)
	{
		____Leaderboard_1 = value;
		Il2CppCodeGenWriteBarrier(&____Leaderboard_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
