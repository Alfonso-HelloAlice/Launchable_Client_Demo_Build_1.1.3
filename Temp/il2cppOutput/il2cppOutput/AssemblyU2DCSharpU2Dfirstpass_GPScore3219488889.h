#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_GPCollectionType2617299399.h"
#include "AssemblyU2DCSharpU2Dfirstpass_GPBoardTimeSpan42003024.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GPScore
struct  GPScore_t3219488889  : public Il2CppObject
{
public:
	// System.Int32 GPScore::_rank
	int32_t ____rank_0;
	// System.Int64 GPScore::_score
	int64_t ____score_1;
	// System.String GPScore::_playerId
	String_t* ____playerId_2;
	// System.String GPScore::_leaderboardId
	String_t* ____leaderboardId_3;
	// GPCollectionType GPScore::_collection
	int32_t ____collection_4;
	// GPBoardTimeSpan GPScore::_timeSpan
	int32_t ____timeSpan_5;

public:
	inline static int32_t get_offset_of__rank_0() { return static_cast<int32_t>(offsetof(GPScore_t3219488889, ____rank_0)); }
	inline int32_t get__rank_0() const { return ____rank_0; }
	inline int32_t* get_address_of__rank_0() { return &____rank_0; }
	inline void set__rank_0(int32_t value)
	{
		____rank_0 = value;
	}

	inline static int32_t get_offset_of__score_1() { return static_cast<int32_t>(offsetof(GPScore_t3219488889, ____score_1)); }
	inline int64_t get__score_1() const { return ____score_1; }
	inline int64_t* get_address_of__score_1() { return &____score_1; }
	inline void set__score_1(int64_t value)
	{
		____score_1 = value;
	}

	inline static int32_t get_offset_of__playerId_2() { return static_cast<int32_t>(offsetof(GPScore_t3219488889, ____playerId_2)); }
	inline String_t* get__playerId_2() const { return ____playerId_2; }
	inline String_t** get_address_of__playerId_2() { return &____playerId_2; }
	inline void set__playerId_2(String_t* value)
	{
		____playerId_2 = value;
		Il2CppCodeGenWriteBarrier(&____playerId_2, value);
	}

	inline static int32_t get_offset_of__leaderboardId_3() { return static_cast<int32_t>(offsetof(GPScore_t3219488889, ____leaderboardId_3)); }
	inline String_t* get__leaderboardId_3() const { return ____leaderboardId_3; }
	inline String_t** get_address_of__leaderboardId_3() { return &____leaderboardId_3; }
	inline void set__leaderboardId_3(String_t* value)
	{
		____leaderboardId_3 = value;
		Il2CppCodeGenWriteBarrier(&____leaderboardId_3, value);
	}

	inline static int32_t get_offset_of__collection_4() { return static_cast<int32_t>(offsetof(GPScore_t3219488889, ____collection_4)); }
	inline int32_t get__collection_4() const { return ____collection_4; }
	inline int32_t* get_address_of__collection_4() { return &____collection_4; }
	inline void set__collection_4(int32_t value)
	{
		____collection_4 = value;
	}

	inline static int32_t get_offset_of__timeSpan_5() { return static_cast<int32_t>(offsetof(GPScore_t3219488889, ____timeSpan_5)); }
	inline int32_t get__timeSpan_5() const { return ____timeSpan_5; }
	inline int32_t* get_address_of__timeSpan_5() { return &____timeSpan_5; }
	inline void set__timeSpan_5(int32_t value)
	{
		____timeSpan_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
