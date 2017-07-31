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
// GPScoreCollection
struct GPScoreCollection_t2240243855;
// System.Collections.Generic.List`1<GPScore>
struct List_1_t2588610021;
// System.Collections.Generic.Dictionary`2<System.Int32,GP_LocalPlayerScoreUpdateListener>
struct Dictionary_2_t3460919322;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GPLeaderBoard
struct  GPLeaderBoard_t3649577886  : public Il2CppObject
{
public:
	// System.Boolean GPLeaderBoard::IsOpen
	bool ___IsOpen_0;
	// System.String GPLeaderBoard::_id
	String_t* ____id_1;
	// System.String GPLeaderBoard::_name
	String_t* ____name_2;
	// System.String GPLeaderBoard::_description
	String_t* ____description_3;
	// UnityEngine.Texture2D GPLeaderBoard::_Texture
	Texture2D_t3542995729 * ____Texture_4;
	// System.Boolean GPLeaderBoard::_CurrentPlayerScoreLoaded
	bool ____CurrentPlayerScoreLoaded_5;
	// GPScoreCollection GPLeaderBoard::SocsialCollection
	GPScoreCollection_t2240243855 * ___SocsialCollection_6;
	// GPScoreCollection GPLeaderBoard::GlobalCollection
	GPScoreCollection_t2240243855 * ___GlobalCollection_7;
	// System.Collections.Generic.List`1<GPScore> GPLeaderBoard::CurrentPlayerScore
	List_1_t2588610021 * ___CurrentPlayerScore_8;
	// System.Collections.Generic.Dictionary`2<System.Int32,GP_LocalPlayerScoreUpdateListener> GPLeaderBoard::_ScoreUpdateListners
	Dictionary_2_t3460919322 * ____ScoreUpdateListners_9;

public:
	inline static int32_t get_offset_of_IsOpen_0() { return static_cast<int32_t>(offsetof(GPLeaderBoard_t3649577886, ___IsOpen_0)); }
	inline bool get_IsOpen_0() const { return ___IsOpen_0; }
	inline bool* get_address_of_IsOpen_0() { return &___IsOpen_0; }
	inline void set_IsOpen_0(bool value)
	{
		___IsOpen_0 = value;
	}

	inline static int32_t get_offset_of__id_1() { return static_cast<int32_t>(offsetof(GPLeaderBoard_t3649577886, ____id_1)); }
	inline String_t* get__id_1() const { return ____id_1; }
	inline String_t** get_address_of__id_1() { return &____id_1; }
	inline void set__id_1(String_t* value)
	{
		____id_1 = value;
		Il2CppCodeGenWriteBarrier(&____id_1, value);
	}

	inline static int32_t get_offset_of__name_2() { return static_cast<int32_t>(offsetof(GPLeaderBoard_t3649577886, ____name_2)); }
	inline String_t* get__name_2() const { return ____name_2; }
	inline String_t** get_address_of__name_2() { return &____name_2; }
	inline void set__name_2(String_t* value)
	{
		____name_2 = value;
		Il2CppCodeGenWriteBarrier(&____name_2, value);
	}

	inline static int32_t get_offset_of__description_3() { return static_cast<int32_t>(offsetof(GPLeaderBoard_t3649577886, ____description_3)); }
	inline String_t* get__description_3() const { return ____description_3; }
	inline String_t** get_address_of__description_3() { return &____description_3; }
	inline void set__description_3(String_t* value)
	{
		____description_3 = value;
		Il2CppCodeGenWriteBarrier(&____description_3, value);
	}

	inline static int32_t get_offset_of__Texture_4() { return static_cast<int32_t>(offsetof(GPLeaderBoard_t3649577886, ____Texture_4)); }
	inline Texture2D_t3542995729 * get__Texture_4() const { return ____Texture_4; }
	inline Texture2D_t3542995729 ** get_address_of__Texture_4() { return &____Texture_4; }
	inline void set__Texture_4(Texture2D_t3542995729 * value)
	{
		____Texture_4 = value;
		Il2CppCodeGenWriteBarrier(&____Texture_4, value);
	}

	inline static int32_t get_offset_of__CurrentPlayerScoreLoaded_5() { return static_cast<int32_t>(offsetof(GPLeaderBoard_t3649577886, ____CurrentPlayerScoreLoaded_5)); }
	inline bool get__CurrentPlayerScoreLoaded_5() const { return ____CurrentPlayerScoreLoaded_5; }
	inline bool* get_address_of__CurrentPlayerScoreLoaded_5() { return &____CurrentPlayerScoreLoaded_5; }
	inline void set__CurrentPlayerScoreLoaded_5(bool value)
	{
		____CurrentPlayerScoreLoaded_5 = value;
	}

	inline static int32_t get_offset_of_SocsialCollection_6() { return static_cast<int32_t>(offsetof(GPLeaderBoard_t3649577886, ___SocsialCollection_6)); }
	inline GPScoreCollection_t2240243855 * get_SocsialCollection_6() const { return ___SocsialCollection_6; }
	inline GPScoreCollection_t2240243855 ** get_address_of_SocsialCollection_6() { return &___SocsialCollection_6; }
	inline void set_SocsialCollection_6(GPScoreCollection_t2240243855 * value)
	{
		___SocsialCollection_6 = value;
		Il2CppCodeGenWriteBarrier(&___SocsialCollection_6, value);
	}

	inline static int32_t get_offset_of_GlobalCollection_7() { return static_cast<int32_t>(offsetof(GPLeaderBoard_t3649577886, ___GlobalCollection_7)); }
	inline GPScoreCollection_t2240243855 * get_GlobalCollection_7() const { return ___GlobalCollection_7; }
	inline GPScoreCollection_t2240243855 ** get_address_of_GlobalCollection_7() { return &___GlobalCollection_7; }
	inline void set_GlobalCollection_7(GPScoreCollection_t2240243855 * value)
	{
		___GlobalCollection_7 = value;
		Il2CppCodeGenWriteBarrier(&___GlobalCollection_7, value);
	}

	inline static int32_t get_offset_of_CurrentPlayerScore_8() { return static_cast<int32_t>(offsetof(GPLeaderBoard_t3649577886, ___CurrentPlayerScore_8)); }
	inline List_1_t2588610021 * get_CurrentPlayerScore_8() const { return ___CurrentPlayerScore_8; }
	inline List_1_t2588610021 ** get_address_of_CurrentPlayerScore_8() { return &___CurrentPlayerScore_8; }
	inline void set_CurrentPlayerScore_8(List_1_t2588610021 * value)
	{
		___CurrentPlayerScore_8 = value;
		Il2CppCodeGenWriteBarrier(&___CurrentPlayerScore_8, value);
	}

	inline static int32_t get_offset_of__ScoreUpdateListners_9() { return static_cast<int32_t>(offsetof(GPLeaderBoard_t3649577886, ____ScoreUpdateListners_9)); }
	inline Dictionary_2_t3460919322 * get__ScoreUpdateListners_9() const { return ____ScoreUpdateListners_9; }
	inline Dictionary_2_t3460919322 ** get_address_of__ScoreUpdateListners_9() { return &____ScoreUpdateListners_9; }
	inline void set__ScoreUpdateListners_9(Dictionary_2_t3460919322 * value)
	{
		____ScoreUpdateListners_9 = value;
		Il2CppCodeGenWriteBarrier(&____ScoreUpdateListners_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
