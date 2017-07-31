#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_AMN_Result4157453776.h"
#include "AssemblyU2DCSharpU2Dfirstpass_GC_ScoreTimeSpan4235673394.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AMN_LocalPlayerScoreLoadedResult
struct  AMN_LocalPlayerScoreLoadedResult_t2500796447  : public AMN_Result_t4157453776
{
public:
	// System.String AMN_LocalPlayerScoreLoadedResult::_LeaderboardId
	String_t* ____LeaderboardId_1;
	// GC_ScoreTimeSpan AMN_LocalPlayerScoreLoadedResult::_TimeSpan
	int32_t ____TimeSpan_2;
	// System.Int32 AMN_LocalPlayerScoreLoadedResult::_Rank
	int32_t ____Rank_3;
	// System.Int64 AMN_LocalPlayerScoreLoadedResult::_Score
	int64_t ____Score_4;
	// System.String AMN_LocalPlayerScoreLoadedResult::_Error
	String_t* ____Error_5;

public:
	inline static int32_t get_offset_of__LeaderboardId_1() { return static_cast<int32_t>(offsetof(AMN_LocalPlayerScoreLoadedResult_t2500796447, ____LeaderboardId_1)); }
	inline String_t* get__LeaderboardId_1() const { return ____LeaderboardId_1; }
	inline String_t** get_address_of__LeaderboardId_1() { return &____LeaderboardId_1; }
	inline void set__LeaderboardId_1(String_t* value)
	{
		____LeaderboardId_1 = value;
		Il2CppCodeGenWriteBarrier(&____LeaderboardId_1, value);
	}

	inline static int32_t get_offset_of__TimeSpan_2() { return static_cast<int32_t>(offsetof(AMN_LocalPlayerScoreLoadedResult_t2500796447, ____TimeSpan_2)); }
	inline int32_t get__TimeSpan_2() const { return ____TimeSpan_2; }
	inline int32_t* get_address_of__TimeSpan_2() { return &____TimeSpan_2; }
	inline void set__TimeSpan_2(int32_t value)
	{
		____TimeSpan_2 = value;
	}

	inline static int32_t get_offset_of__Rank_3() { return static_cast<int32_t>(offsetof(AMN_LocalPlayerScoreLoadedResult_t2500796447, ____Rank_3)); }
	inline int32_t get__Rank_3() const { return ____Rank_3; }
	inline int32_t* get_address_of__Rank_3() { return &____Rank_3; }
	inline void set__Rank_3(int32_t value)
	{
		____Rank_3 = value;
	}

	inline static int32_t get_offset_of__Score_4() { return static_cast<int32_t>(offsetof(AMN_LocalPlayerScoreLoadedResult_t2500796447, ____Score_4)); }
	inline int64_t get__Score_4() const { return ____Score_4; }
	inline int64_t* get_address_of__Score_4() { return &____Score_4; }
	inline void set__Score_4(int64_t value)
	{
		____Score_4 = value;
	}

	inline static int32_t get_offset_of__Error_5() { return static_cast<int32_t>(offsetof(AMN_LocalPlayerScoreLoadedResult_t2500796447, ____Error_5)); }
	inline String_t* get__Error_5() const { return ____Error_5; }
	inline String_t** get_address_of__Error_5() { return &____Error_5; }
	inline void set__Error_5(String_t* value)
	{
		____Error_5 = value;
		Il2CppCodeGenWriteBarrier(&____Error_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
