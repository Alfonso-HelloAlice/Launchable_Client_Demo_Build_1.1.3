#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_AMN_Result4157453776.h"

// System.String
struct String_t;
// GC_Leaderboard
struct GC_Leaderboard_t4041489962;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AMN_ScoresLoadedResult
struct  AMN_ScoresLoadedResult_t3606497814  : public AMN_Result_t4157453776
{
public:
	// System.String AMN_ScoresLoadedResult::_LeaderboardId
	String_t* ____LeaderboardId_1;
	// GC_Leaderboard AMN_ScoresLoadedResult::_Leaderboard
	GC_Leaderboard_t4041489962 * ____Leaderboard_2;

public:
	inline static int32_t get_offset_of__LeaderboardId_1() { return static_cast<int32_t>(offsetof(AMN_ScoresLoadedResult_t3606497814, ____LeaderboardId_1)); }
	inline String_t* get__LeaderboardId_1() const { return ____LeaderboardId_1; }
	inline String_t** get_address_of__LeaderboardId_1() { return &____LeaderboardId_1; }
	inline void set__LeaderboardId_1(String_t* value)
	{
		____LeaderboardId_1 = value;
		Il2CppCodeGenWriteBarrier(&____LeaderboardId_1, value);
	}

	inline static int32_t get_offset_of__Leaderboard_2() { return static_cast<int32_t>(offsetof(AMN_ScoresLoadedResult_t3606497814, ____Leaderboard_2)); }
	inline GC_Leaderboard_t4041489962 * get__Leaderboard_2() const { return ____Leaderboard_2; }
	inline GC_Leaderboard_t4041489962 ** get_address_of__Leaderboard_2() { return &____Leaderboard_2; }
	inline void set__Leaderboard_2(GC_Leaderboard_t4041489962 * value)
	{
		____Leaderboard_2 = value;
		Il2CppCodeGenWriteBarrier(&____Leaderboard_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
