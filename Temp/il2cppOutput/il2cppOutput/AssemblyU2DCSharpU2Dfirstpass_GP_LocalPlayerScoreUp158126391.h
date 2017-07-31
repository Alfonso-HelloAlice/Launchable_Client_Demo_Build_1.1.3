#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// System.Collections.Generic.List`1<GPScore>
struct List_1_t2588610021;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GP_LocalPlayerScoreUpdateListener
struct  GP_LocalPlayerScoreUpdateListener_t158126391  : public Il2CppObject
{
public:
	// System.Int32 GP_LocalPlayerScoreUpdateListener::_RequestId
	int32_t ____RequestId_0;
	// System.String GP_LocalPlayerScoreUpdateListener::_leaderboardId
	String_t* ____leaderboardId_1;
	// System.String GP_LocalPlayerScoreUpdateListener::_ErrorData
	String_t* ____ErrorData_2;
	// System.Collections.Generic.List`1<GPScore> GP_LocalPlayerScoreUpdateListener::Scores
	List_1_t2588610021 * ___Scores_3;

public:
	inline static int32_t get_offset_of__RequestId_0() { return static_cast<int32_t>(offsetof(GP_LocalPlayerScoreUpdateListener_t158126391, ____RequestId_0)); }
	inline int32_t get__RequestId_0() const { return ____RequestId_0; }
	inline int32_t* get_address_of__RequestId_0() { return &____RequestId_0; }
	inline void set__RequestId_0(int32_t value)
	{
		____RequestId_0 = value;
	}

	inline static int32_t get_offset_of__leaderboardId_1() { return static_cast<int32_t>(offsetof(GP_LocalPlayerScoreUpdateListener_t158126391, ____leaderboardId_1)); }
	inline String_t* get__leaderboardId_1() const { return ____leaderboardId_1; }
	inline String_t** get_address_of__leaderboardId_1() { return &____leaderboardId_1; }
	inline void set__leaderboardId_1(String_t* value)
	{
		____leaderboardId_1 = value;
		Il2CppCodeGenWriteBarrier(&____leaderboardId_1, value);
	}

	inline static int32_t get_offset_of__ErrorData_2() { return static_cast<int32_t>(offsetof(GP_LocalPlayerScoreUpdateListener_t158126391, ____ErrorData_2)); }
	inline String_t* get__ErrorData_2() const { return ____ErrorData_2; }
	inline String_t** get_address_of__ErrorData_2() { return &____ErrorData_2; }
	inline void set__ErrorData_2(String_t* value)
	{
		____ErrorData_2 = value;
		Il2CppCodeGenWriteBarrier(&____ErrorData_2, value);
	}

	inline static int32_t get_offset_of_Scores_3() { return static_cast<int32_t>(offsetof(GP_LocalPlayerScoreUpdateListener_t158126391, ___Scores_3)); }
	inline List_1_t2588610021 * get_Scores_3() const { return ___Scores_3; }
	inline List_1_t2588610021 ** get_address_of_Scores_3() { return &___Scores_3; }
	inline void set_Scores_3(List_1_t2588610021 * value)
	{
		___Scores_3 = value;
		Il2CppCodeGenWriteBarrier(&___Scores_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
