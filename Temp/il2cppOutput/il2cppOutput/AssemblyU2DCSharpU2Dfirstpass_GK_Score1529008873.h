#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_GK_CollectionType3353981271.h"
#include "AssemblyU2DCSharpU2Dfirstpass_GK_TimeSpan1050271570.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GK_Score
struct  GK_Score_t1529008873  : public Il2CppObject
{
public:
	// System.Int32 GK_Score::_Rank
	int32_t ____Rank_0;
	// System.Int64 GK_Score::_Score
	int64_t ____Score_1;
	// System.Int64 GK_Score::_Context
	int64_t ____Context_2;
	// System.String GK_Score::_PlayerId
	String_t* ____PlayerId_3;
	// System.String GK_Score::_LeaderboardId
	String_t* ____LeaderboardId_4;
	// GK_CollectionType GK_Score::_Collection
	int32_t ____Collection_5;
	// GK_TimeSpan GK_Score::_TimeSpan
	int32_t ____TimeSpan_6;

public:
	inline static int32_t get_offset_of__Rank_0() { return static_cast<int32_t>(offsetof(GK_Score_t1529008873, ____Rank_0)); }
	inline int32_t get__Rank_0() const { return ____Rank_0; }
	inline int32_t* get_address_of__Rank_0() { return &____Rank_0; }
	inline void set__Rank_0(int32_t value)
	{
		____Rank_0 = value;
	}

	inline static int32_t get_offset_of__Score_1() { return static_cast<int32_t>(offsetof(GK_Score_t1529008873, ____Score_1)); }
	inline int64_t get__Score_1() const { return ____Score_1; }
	inline int64_t* get_address_of__Score_1() { return &____Score_1; }
	inline void set__Score_1(int64_t value)
	{
		____Score_1 = value;
	}

	inline static int32_t get_offset_of__Context_2() { return static_cast<int32_t>(offsetof(GK_Score_t1529008873, ____Context_2)); }
	inline int64_t get__Context_2() const { return ____Context_2; }
	inline int64_t* get_address_of__Context_2() { return &____Context_2; }
	inline void set__Context_2(int64_t value)
	{
		____Context_2 = value;
	}

	inline static int32_t get_offset_of__PlayerId_3() { return static_cast<int32_t>(offsetof(GK_Score_t1529008873, ____PlayerId_3)); }
	inline String_t* get__PlayerId_3() const { return ____PlayerId_3; }
	inline String_t** get_address_of__PlayerId_3() { return &____PlayerId_3; }
	inline void set__PlayerId_3(String_t* value)
	{
		____PlayerId_3 = value;
		Il2CppCodeGenWriteBarrier(&____PlayerId_3, value);
	}

	inline static int32_t get_offset_of__LeaderboardId_4() { return static_cast<int32_t>(offsetof(GK_Score_t1529008873, ____LeaderboardId_4)); }
	inline String_t* get__LeaderboardId_4() const { return ____LeaderboardId_4; }
	inline String_t** get_address_of__LeaderboardId_4() { return &____LeaderboardId_4; }
	inline void set__LeaderboardId_4(String_t* value)
	{
		____LeaderboardId_4 = value;
		Il2CppCodeGenWriteBarrier(&____LeaderboardId_4, value);
	}

	inline static int32_t get_offset_of__Collection_5() { return static_cast<int32_t>(offsetof(GK_Score_t1529008873, ____Collection_5)); }
	inline int32_t get__Collection_5() const { return ____Collection_5; }
	inline int32_t* get_address_of__Collection_5() { return &____Collection_5; }
	inline void set__Collection_5(int32_t value)
	{
		____Collection_5 = value;
	}

	inline static int32_t get_offset_of__TimeSpan_6() { return static_cast<int32_t>(offsetof(GK_Score_t1529008873, ____TimeSpan_6)); }
	inline int32_t get__TimeSpan_6() const { return ____TimeSpan_6; }
	inline int32_t* get_address_of__TimeSpan_6() { return &____TimeSpan_6; }
	inline void set__TimeSpan_6(int32_t value)
	{
		____TimeSpan_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
