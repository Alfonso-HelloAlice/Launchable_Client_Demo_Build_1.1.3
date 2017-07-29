#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_GC_ScoreTimeSpan4235673394.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GC_Score
struct  GC_Score_t2340546833  : public Il2CppObject
{
public:
	// System.String GC_Score::_playerId
	String_t* ____playerId_0;
	// System.String GC_Score::_leaderboardId
	String_t* ____leaderboardId_1;
	// System.Int32 GC_Score::_rank
	int32_t ____rank_2;
	// System.Int64 GC_Score::_score
	int64_t ____score_3;
	// GC_ScoreTimeSpan GC_Score::_timeSpan
	int32_t ____timeSpan_4;

public:
	inline static int32_t get_offset_of__playerId_0() { return static_cast<int32_t>(offsetof(GC_Score_t2340546833, ____playerId_0)); }
	inline String_t* get__playerId_0() const { return ____playerId_0; }
	inline String_t** get_address_of__playerId_0() { return &____playerId_0; }
	inline void set__playerId_0(String_t* value)
	{
		____playerId_0 = value;
		Il2CppCodeGenWriteBarrier(&____playerId_0, value);
	}

	inline static int32_t get_offset_of__leaderboardId_1() { return static_cast<int32_t>(offsetof(GC_Score_t2340546833, ____leaderboardId_1)); }
	inline String_t* get__leaderboardId_1() const { return ____leaderboardId_1; }
	inline String_t** get_address_of__leaderboardId_1() { return &____leaderboardId_1; }
	inline void set__leaderboardId_1(String_t* value)
	{
		____leaderboardId_1 = value;
		Il2CppCodeGenWriteBarrier(&____leaderboardId_1, value);
	}

	inline static int32_t get_offset_of__rank_2() { return static_cast<int32_t>(offsetof(GC_Score_t2340546833, ____rank_2)); }
	inline int32_t get__rank_2() const { return ____rank_2; }
	inline int32_t* get_address_of__rank_2() { return &____rank_2; }
	inline void set__rank_2(int32_t value)
	{
		____rank_2 = value;
	}

	inline static int32_t get_offset_of__score_3() { return static_cast<int32_t>(offsetof(GC_Score_t2340546833, ____score_3)); }
	inline int64_t get__score_3() const { return ____score_3; }
	inline int64_t* get_address_of__score_3() { return &____score_3; }
	inline void set__score_3(int64_t value)
	{
		____score_3 = value;
	}

	inline static int32_t get_offset_of__timeSpan_4() { return static_cast<int32_t>(offsetof(GC_Score_t2340546833, ____timeSpan_4)); }
	inline int32_t get__timeSpan_4() const { return ____timeSpan_4; }
	inline int32_t* get_address_of__timeSpan_4() { return &____timeSpan_4; }
	inline void set__timeSpan_4(int32_t value)
	{
		____timeSpan_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
