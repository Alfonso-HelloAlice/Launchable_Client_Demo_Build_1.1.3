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
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.Collections.Generic.List`1<GC_Score>
struct List_1_t1709667965;
// System.Collections.Generic.Dictionary`2<System.Int32,GC_Score>
struct Dictionary_2_t1348372468;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GC_Leaderboard
struct  GC_Leaderboard_t4041489962  : public Il2CppObject
{
public:
	// System.Boolean GC_Leaderboard::IsOpen
	bool ___IsOpen_0;
	// System.String GC_Leaderboard::_name
	String_t* ____name_1;
	// System.String GC_Leaderboard::_id
	String_t* ____id_2;
	// System.String GC_Leaderboard::_displayText
	String_t* ____displayText_3;
	// System.String GC_Leaderboard::_scoreFormat
	String_t* ____scoreFormat_4;
	// System.String GC_Leaderboard::_imageUrl
	String_t* ____imageUrl_5;
	// UnityEngine.Texture2D GC_Leaderboard::_Texture
	Texture2D_t3542995729 * ____Texture_6;
	// System.Boolean GC_Leaderboard::_CurrentPlayerScoreLoaded
	bool ____CurrentPlayerScoreLoaded_7;
	// System.Collections.Generic.List`1<GC_Score> GC_Leaderboard::_CurrentPlayerScores
	List_1_t1709667965 * ____CurrentPlayerScores_8;
	// System.Collections.Generic.Dictionary`2<System.Int32,GC_Score> GC_Leaderboard::_AllTimeCollection
	Dictionary_2_t1348372468 * ____AllTimeCollection_9;
	// System.Collections.Generic.Dictionary`2<System.Int32,GC_Score> GC_Leaderboard::_WeekCollection
	Dictionary_2_t1348372468 * ____WeekCollection_10;
	// System.Collections.Generic.Dictionary`2<System.Int32,GC_Score> GC_Leaderboard::_TodayCollection
	Dictionary_2_t1348372468 * ____TodayCollection_11;

public:
	inline static int32_t get_offset_of_IsOpen_0() { return static_cast<int32_t>(offsetof(GC_Leaderboard_t4041489962, ___IsOpen_0)); }
	inline bool get_IsOpen_0() const { return ___IsOpen_0; }
	inline bool* get_address_of_IsOpen_0() { return &___IsOpen_0; }
	inline void set_IsOpen_0(bool value)
	{
		___IsOpen_0 = value;
	}

	inline static int32_t get_offset_of__name_1() { return static_cast<int32_t>(offsetof(GC_Leaderboard_t4041489962, ____name_1)); }
	inline String_t* get__name_1() const { return ____name_1; }
	inline String_t** get_address_of__name_1() { return &____name_1; }
	inline void set__name_1(String_t* value)
	{
		____name_1 = value;
		Il2CppCodeGenWriteBarrier(&____name_1, value);
	}

	inline static int32_t get_offset_of__id_2() { return static_cast<int32_t>(offsetof(GC_Leaderboard_t4041489962, ____id_2)); }
	inline String_t* get__id_2() const { return ____id_2; }
	inline String_t** get_address_of__id_2() { return &____id_2; }
	inline void set__id_2(String_t* value)
	{
		____id_2 = value;
		Il2CppCodeGenWriteBarrier(&____id_2, value);
	}

	inline static int32_t get_offset_of__displayText_3() { return static_cast<int32_t>(offsetof(GC_Leaderboard_t4041489962, ____displayText_3)); }
	inline String_t* get__displayText_3() const { return ____displayText_3; }
	inline String_t** get_address_of__displayText_3() { return &____displayText_3; }
	inline void set__displayText_3(String_t* value)
	{
		____displayText_3 = value;
		Il2CppCodeGenWriteBarrier(&____displayText_3, value);
	}

	inline static int32_t get_offset_of__scoreFormat_4() { return static_cast<int32_t>(offsetof(GC_Leaderboard_t4041489962, ____scoreFormat_4)); }
	inline String_t* get__scoreFormat_4() const { return ____scoreFormat_4; }
	inline String_t** get_address_of__scoreFormat_4() { return &____scoreFormat_4; }
	inline void set__scoreFormat_4(String_t* value)
	{
		____scoreFormat_4 = value;
		Il2CppCodeGenWriteBarrier(&____scoreFormat_4, value);
	}

	inline static int32_t get_offset_of__imageUrl_5() { return static_cast<int32_t>(offsetof(GC_Leaderboard_t4041489962, ____imageUrl_5)); }
	inline String_t* get__imageUrl_5() const { return ____imageUrl_5; }
	inline String_t** get_address_of__imageUrl_5() { return &____imageUrl_5; }
	inline void set__imageUrl_5(String_t* value)
	{
		____imageUrl_5 = value;
		Il2CppCodeGenWriteBarrier(&____imageUrl_5, value);
	}

	inline static int32_t get_offset_of__Texture_6() { return static_cast<int32_t>(offsetof(GC_Leaderboard_t4041489962, ____Texture_6)); }
	inline Texture2D_t3542995729 * get__Texture_6() const { return ____Texture_6; }
	inline Texture2D_t3542995729 ** get_address_of__Texture_6() { return &____Texture_6; }
	inline void set__Texture_6(Texture2D_t3542995729 * value)
	{
		____Texture_6 = value;
		Il2CppCodeGenWriteBarrier(&____Texture_6, value);
	}

	inline static int32_t get_offset_of__CurrentPlayerScoreLoaded_7() { return static_cast<int32_t>(offsetof(GC_Leaderboard_t4041489962, ____CurrentPlayerScoreLoaded_7)); }
	inline bool get__CurrentPlayerScoreLoaded_7() const { return ____CurrentPlayerScoreLoaded_7; }
	inline bool* get_address_of__CurrentPlayerScoreLoaded_7() { return &____CurrentPlayerScoreLoaded_7; }
	inline void set__CurrentPlayerScoreLoaded_7(bool value)
	{
		____CurrentPlayerScoreLoaded_7 = value;
	}

	inline static int32_t get_offset_of__CurrentPlayerScores_8() { return static_cast<int32_t>(offsetof(GC_Leaderboard_t4041489962, ____CurrentPlayerScores_8)); }
	inline List_1_t1709667965 * get__CurrentPlayerScores_8() const { return ____CurrentPlayerScores_8; }
	inline List_1_t1709667965 ** get_address_of__CurrentPlayerScores_8() { return &____CurrentPlayerScores_8; }
	inline void set__CurrentPlayerScores_8(List_1_t1709667965 * value)
	{
		____CurrentPlayerScores_8 = value;
		Il2CppCodeGenWriteBarrier(&____CurrentPlayerScores_8, value);
	}

	inline static int32_t get_offset_of__AllTimeCollection_9() { return static_cast<int32_t>(offsetof(GC_Leaderboard_t4041489962, ____AllTimeCollection_9)); }
	inline Dictionary_2_t1348372468 * get__AllTimeCollection_9() const { return ____AllTimeCollection_9; }
	inline Dictionary_2_t1348372468 ** get_address_of__AllTimeCollection_9() { return &____AllTimeCollection_9; }
	inline void set__AllTimeCollection_9(Dictionary_2_t1348372468 * value)
	{
		____AllTimeCollection_9 = value;
		Il2CppCodeGenWriteBarrier(&____AllTimeCollection_9, value);
	}

	inline static int32_t get_offset_of__WeekCollection_10() { return static_cast<int32_t>(offsetof(GC_Leaderboard_t4041489962, ____WeekCollection_10)); }
	inline Dictionary_2_t1348372468 * get__WeekCollection_10() const { return ____WeekCollection_10; }
	inline Dictionary_2_t1348372468 ** get_address_of__WeekCollection_10() { return &____WeekCollection_10; }
	inline void set__WeekCollection_10(Dictionary_2_t1348372468 * value)
	{
		____WeekCollection_10 = value;
		Il2CppCodeGenWriteBarrier(&____WeekCollection_10, value);
	}

	inline static int32_t get_offset_of__TodayCollection_11() { return static_cast<int32_t>(offsetof(GC_Leaderboard_t4041489962, ____TodayCollection_11)); }
	inline Dictionary_2_t1348372468 * get__TodayCollection_11() const { return ____TodayCollection_11; }
	inline Dictionary_2_t1348372468 ** get_address_of__TodayCollection_11() { return &____TodayCollection_11; }
	inline void set__TodayCollection_11(Dictionary_2_t1348372468 * value)
	{
		____TodayCollection_11 = value;
		Il2CppCodeGenWriteBarrier(&____TodayCollection_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
