#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_DateTime693205669.h"

// System.Action`1<GK_SaveDataLoaded>
struct Action_1_t3486487701;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GK_SavedGame
struct  GK_SavedGame_t3320093620  : public Il2CppObject
{
public:
	// System.Action`1<GK_SaveDataLoaded> GK_SavedGame::ActionDataLoaded
	Action_1_t3486487701 * ___ActionDataLoaded_0;
	// System.String GK_SavedGame::_Id
	String_t* ____Id_1;
	// System.String GK_SavedGame::_Name
	String_t* ____Name_2;
	// System.String GK_SavedGame::_DeviceName
	String_t* ____DeviceName_3;
	// System.DateTime GK_SavedGame::_ModificationDate
	DateTime_t693205669  ____ModificationDate_4;
	// System.Byte[] GK_SavedGame::_Data
	ByteU5BU5D_t3397334013* ____Data_5;
	// System.Boolean GK_SavedGame::_IsDataLoaded
	bool ____IsDataLoaded_6;

public:
	inline static int32_t get_offset_of_ActionDataLoaded_0() { return static_cast<int32_t>(offsetof(GK_SavedGame_t3320093620, ___ActionDataLoaded_0)); }
	inline Action_1_t3486487701 * get_ActionDataLoaded_0() const { return ___ActionDataLoaded_0; }
	inline Action_1_t3486487701 ** get_address_of_ActionDataLoaded_0() { return &___ActionDataLoaded_0; }
	inline void set_ActionDataLoaded_0(Action_1_t3486487701 * value)
	{
		___ActionDataLoaded_0 = value;
		Il2CppCodeGenWriteBarrier(&___ActionDataLoaded_0, value);
	}

	inline static int32_t get_offset_of__Id_1() { return static_cast<int32_t>(offsetof(GK_SavedGame_t3320093620, ____Id_1)); }
	inline String_t* get__Id_1() const { return ____Id_1; }
	inline String_t** get_address_of__Id_1() { return &____Id_1; }
	inline void set__Id_1(String_t* value)
	{
		____Id_1 = value;
		Il2CppCodeGenWriteBarrier(&____Id_1, value);
	}

	inline static int32_t get_offset_of__Name_2() { return static_cast<int32_t>(offsetof(GK_SavedGame_t3320093620, ____Name_2)); }
	inline String_t* get__Name_2() const { return ____Name_2; }
	inline String_t** get_address_of__Name_2() { return &____Name_2; }
	inline void set__Name_2(String_t* value)
	{
		____Name_2 = value;
		Il2CppCodeGenWriteBarrier(&____Name_2, value);
	}

	inline static int32_t get_offset_of__DeviceName_3() { return static_cast<int32_t>(offsetof(GK_SavedGame_t3320093620, ____DeviceName_3)); }
	inline String_t* get__DeviceName_3() const { return ____DeviceName_3; }
	inline String_t** get_address_of__DeviceName_3() { return &____DeviceName_3; }
	inline void set__DeviceName_3(String_t* value)
	{
		____DeviceName_3 = value;
		Il2CppCodeGenWriteBarrier(&____DeviceName_3, value);
	}

	inline static int32_t get_offset_of__ModificationDate_4() { return static_cast<int32_t>(offsetof(GK_SavedGame_t3320093620, ____ModificationDate_4)); }
	inline DateTime_t693205669  get__ModificationDate_4() const { return ____ModificationDate_4; }
	inline DateTime_t693205669 * get_address_of__ModificationDate_4() { return &____ModificationDate_4; }
	inline void set__ModificationDate_4(DateTime_t693205669  value)
	{
		____ModificationDate_4 = value;
	}

	inline static int32_t get_offset_of__Data_5() { return static_cast<int32_t>(offsetof(GK_SavedGame_t3320093620, ____Data_5)); }
	inline ByteU5BU5D_t3397334013* get__Data_5() const { return ____Data_5; }
	inline ByteU5BU5D_t3397334013** get_address_of__Data_5() { return &____Data_5; }
	inline void set__Data_5(ByteU5BU5D_t3397334013* value)
	{
		____Data_5 = value;
		Il2CppCodeGenWriteBarrier(&____Data_5, value);
	}

	inline static int32_t get_offset_of__IsDataLoaded_6() { return static_cast<int32_t>(offsetof(GK_SavedGame_t3320093620, ____IsDataLoaded_6)); }
	inline bool get__IsDataLoaded_6() const { return ____IsDataLoaded_6; }
	inline bool* get_address_of__IsDataLoaded_6() { return &____IsDataLoaded_6; }
	inline void set__IsDataLoaded_6(bool value)
	{
		____IsDataLoaded_6 = value;
	}
};

struct GK_SavedGame_t3320093620_StaticFields
{
public:
	// System.Action`1<GK_SaveDataLoaded> GK_SavedGame::<>f__am$cache0
	Action_1_t3486487701 * ___U3CU3Ef__amU24cache0_7;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_7() { return static_cast<int32_t>(offsetof(GK_SavedGame_t3320093620_StaticFields, ___U3CU3Ef__amU24cache0_7)); }
	inline Action_1_t3486487701 * get_U3CU3Ef__amU24cache0_7() const { return ___U3CU3Ef__amU24cache0_7; }
	inline Action_1_t3486487701 ** get_address_of_U3CU3Ef__amU24cache0_7() { return &___U3CU3Ef__amU24cache0_7; }
	inline void set_U3CU3Ef__amU24cache0_7(Action_1_t3486487701 * value)
	{
		___U3CU3Ef__amU24cache0_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
