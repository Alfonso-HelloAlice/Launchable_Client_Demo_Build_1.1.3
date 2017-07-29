#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Pattern_Si1957711127.h"

// System.Action
struct Action_t3226471752;
// System.Action`1<GooglePlayResult>
struct Action_1_t2899269018;
// System.Action`1<GP_SpanshotLoadResult>
struct Action_1_t2065103831;
// System.Action`1<GP_SnapshotConflict>
struct Action_1_t3804386152;
// System.Action`1<GP_DeleteSnapshotResult>
struct Action_1_t3108589392;
// System.Collections.Generic.List`1<GP_SnapshotMeta>
struct List_1_t723900571;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlaySavedGamesManager
struct  GooglePlaySavedGamesManager_t1475146022  : public Singleton_1_t1957711127
{
public:
	// System.Collections.Generic.List`1<GP_SnapshotMeta> GooglePlaySavedGamesManager::_AvailableGameSaves
	List_1_t723900571 * ____AvailableGameSaves_11;

public:
	inline static int32_t get_offset_of__AvailableGameSaves_11() { return static_cast<int32_t>(offsetof(GooglePlaySavedGamesManager_t1475146022, ____AvailableGameSaves_11)); }
	inline List_1_t723900571 * get__AvailableGameSaves_11() const { return ____AvailableGameSaves_11; }
	inline List_1_t723900571 ** get_address_of__AvailableGameSaves_11() { return &____AvailableGameSaves_11; }
	inline void set__AvailableGameSaves_11(List_1_t723900571 * value)
	{
		____AvailableGameSaves_11 = value;
		Il2CppCodeGenWriteBarrier(&____AvailableGameSaves_11, value);
	}
};

struct GooglePlaySavedGamesManager_t1475146022_StaticFields
{
public:
	// System.Action GooglePlaySavedGamesManager::ActionGameSaveUIClosed
	Action_t3226471752 * ___ActionGameSaveUIClosed_4;
	// System.Action GooglePlaySavedGamesManager::ActionNewGameSaveRequest
	Action_t3226471752 * ___ActionNewGameSaveRequest_5;
	// System.Action`1<GooglePlayResult> GooglePlaySavedGamesManager::ActionAvailableGameSavesLoaded
	Action_1_t2899269018 * ___ActionAvailableGameSavesLoaded_6;
	// System.Action`1<GP_SpanshotLoadResult> GooglePlaySavedGamesManager::ActionGameSaveLoaded
	Action_1_t2065103831 * ___ActionGameSaveLoaded_7;
	// System.Action`1<GP_SpanshotLoadResult> GooglePlaySavedGamesManager::ActionGameSaveResult
	Action_1_t2065103831 * ___ActionGameSaveResult_8;
	// System.Action`1<GP_SnapshotConflict> GooglePlaySavedGamesManager::ActionConflict
	Action_1_t3804386152 * ___ActionConflict_9;
	// System.Action`1<GP_DeleteSnapshotResult> GooglePlaySavedGamesManager::ActionGameSaveRemoved
	Action_1_t3108589392 * ___ActionGameSaveRemoved_10;

public:
	inline static int32_t get_offset_of_ActionGameSaveUIClosed_4() { return static_cast<int32_t>(offsetof(GooglePlaySavedGamesManager_t1475146022_StaticFields, ___ActionGameSaveUIClosed_4)); }
	inline Action_t3226471752 * get_ActionGameSaveUIClosed_4() const { return ___ActionGameSaveUIClosed_4; }
	inline Action_t3226471752 ** get_address_of_ActionGameSaveUIClosed_4() { return &___ActionGameSaveUIClosed_4; }
	inline void set_ActionGameSaveUIClosed_4(Action_t3226471752 * value)
	{
		___ActionGameSaveUIClosed_4 = value;
		Il2CppCodeGenWriteBarrier(&___ActionGameSaveUIClosed_4, value);
	}

	inline static int32_t get_offset_of_ActionNewGameSaveRequest_5() { return static_cast<int32_t>(offsetof(GooglePlaySavedGamesManager_t1475146022_StaticFields, ___ActionNewGameSaveRequest_5)); }
	inline Action_t3226471752 * get_ActionNewGameSaveRequest_5() const { return ___ActionNewGameSaveRequest_5; }
	inline Action_t3226471752 ** get_address_of_ActionNewGameSaveRequest_5() { return &___ActionNewGameSaveRequest_5; }
	inline void set_ActionNewGameSaveRequest_5(Action_t3226471752 * value)
	{
		___ActionNewGameSaveRequest_5 = value;
		Il2CppCodeGenWriteBarrier(&___ActionNewGameSaveRequest_5, value);
	}

	inline static int32_t get_offset_of_ActionAvailableGameSavesLoaded_6() { return static_cast<int32_t>(offsetof(GooglePlaySavedGamesManager_t1475146022_StaticFields, ___ActionAvailableGameSavesLoaded_6)); }
	inline Action_1_t2899269018 * get_ActionAvailableGameSavesLoaded_6() const { return ___ActionAvailableGameSavesLoaded_6; }
	inline Action_1_t2899269018 ** get_address_of_ActionAvailableGameSavesLoaded_6() { return &___ActionAvailableGameSavesLoaded_6; }
	inline void set_ActionAvailableGameSavesLoaded_6(Action_1_t2899269018 * value)
	{
		___ActionAvailableGameSavesLoaded_6 = value;
		Il2CppCodeGenWriteBarrier(&___ActionAvailableGameSavesLoaded_6, value);
	}

	inline static int32_t get_offset_of_ActionGameSaveLoaded_7() { return static_cast<int32_t>(offsetof(GooglePlaySavedGamesManager_t1475146022_StaticFields, ___ActionGameSaveLoaded_7)); }
	inline Action_1_t2065103831 * get_ActionGameSaveLoaded_7() const { return ___ActionGameSaveLoaded_7; }
	inline Action_1_t2065103831 ** get_address_of_ActionGameSaveLoaded_7() { return &___ActionGameSaveLoaded_7; }
	inline void set_ActionGameSaveLoaded_7(Action_1_t2065103831 * value)
	{
		___ActionGameSaveLoaded_7 = value;
		Il2CppCodeGenWriteBarrier(&___ActionGameSaveLoaded_7, value);
	}

	inline static int32_t get_offset_of_ActionGameSaveResult_8() { return static_cast<int32_t>(offsetof(GooglePlaySavedGamesManager_t1475146022_StaticFields, ___ActionGameSaveResult_8)); }
	inline Action_1_t2065103831 * get_ActionGameSaveResult_8() const { return ___ActionGameSaveResult_8; }
	inline Action_1_t2065103831 ** get_address_of_ActionGameSaveResult_8() { return &___ActionGameSaveResult_8; }
	inline void set_ActionGameSaveResult_8(Action_1_t2065103831 * value)
	{
		___ActionGameSaveResult_8 = value;
		Il2CppCodeGenWriteBarrier(&___ActionGameSaveResult_8, value);
	}

	inline static int32_t get_offset_of_ActionConflict_9() { return static_cast<int32_t>(offsetof(GooglePlaySavedGamesManager_t1475146022_StaticFields, ___ActionConflict_9)); }
	inline Action_1_t3804386152 * get_ActionConflict_9() const { return ___ActionConflict_9; }
	inline Action_1_t3804386152 ** get_address_of_ActionConflict_9() { return &___ActionConflict_9; }
	inline void set_ActionConflict_9(Action_1_t3804386152 * value)
	{
		___ActionConflict_9 = value;
		Il2CppCodeGenWriteBarrier(&___ActionConflict_9, value);
	}

	inline static int32_t get_offset_of_ActionGameSaveRemoved_10() { return static_cast<int32_t>(offsetof(GooglePlaySavedGamesManager_t1475146022_StaticFields, ___ActionGameSaveRemoved_10)); }
	inline Action_1_t3108589392 * get_ActionGameSaveRemoved_10() const { return ___ActionGameSaveRemoved_10; }
	inline Action_1_t3108589392 ** get_address_of_ActionGameSaveRemoved_10() { return &___ActionGameSaveRemoved_10; }
	inline void set_ActionGameSaveRemoved_10(Action_1_t3108589392 * value)
	{
		___ActionGameSaveRemoved_10 = value;
		Il2CppCodeGenWriteBarrier(&___ActionGameSaveRemoved_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
