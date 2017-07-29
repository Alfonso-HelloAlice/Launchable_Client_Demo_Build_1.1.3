#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Models_Res4287219743.h"

// GK_LeaderboardSet
struct GK_LeaderboardSet_t5314098;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ISN_LoadSetLeaderboardsInfoResult
struct  ISN_LoadSetLeaderboardsInfoResult_t3997789804  : public Result_t4287219743
{
public:
	// GK_LeaderboardSet ISN_LoadSetLeaderboardsInfoResult::_LeaderBoardsSet
	GK_LeaderboardSet_t5314098 * ____LeaderBoardsSet_1;

public:
	inline static int32_t get_offset_of__LeaderBoardsSet_1() { return static_cast<int32_t>(offsetof(ISN_LoadSetLeaderboardsInfoResult_t3997789804, ____LeaderBoardsSet_1)); }
	inline GK_LeaderboardSet_t5314098 * get__LeaderBoardsSet_1() const { return ____LeaderBoardsSet_1; }
	inline GK_LeaderboardSet_t5314098 ** get_address_of__LeaderBoardsSet_1() { return &____LeaderBoardsSet_1; }
	inline void set__LeaderBoardsSet_1(GK_LeaderboardSet_t5314098 * value)
	{
		____LeaderBoardsSet_1 = value;
		Il2CppCodeGenWriteBarrier(&____LeaderBoardsSet_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
