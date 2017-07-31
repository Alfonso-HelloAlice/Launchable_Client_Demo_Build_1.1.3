#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Pattern_Si2718821926.h"

// System.Action`1<GK_SaveRemoveResult>
struct Action_1_t341109949;
// System.Action`1<GK_SaveResult>
struct Action_1_t3748375835;
// System.Action`1<GK_FetchResult>
struct Action_1_t1413312038;
// System.Action`1<GK_SavesResolveResult>
struct Action_1_t3309854786;
// System.Collections.Generic.Dictionary`2<System.String,GK_SavedGame>
struct Dictionary_2_t939905586;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ISN_GameSaves
struct  ISN_GameSaves_t2236256821  : public Singleton_1_t2718821926
{
public:

public:
};

struct ISN_GameSaves_t2236256821_StaticFields
{
public:
	// System.Action`1<GK_SaveRemoveResult> ISN_GameSaves::ActionSaveRemoved
	Action_1_t341109949 * ___ActionSaveRemoved_4;
	// System.Action`1<GK_SaveResult> ISN_GameSaves::ActionGameSaved
	Action_1_t3748375835 * ___ActionGameSaved_5;
	// System.Action`1<GK_FetchResult> ISN_GameSaves::ActionSavesFetched
	Action_1_t1413312038 * ___ActionSavesFetched_6;
	// System.Action`1<GK_SavesResolveResult> ISN_GameSaves::ActionSavesResolved
	Action_1_t3309854786 * ___ActionSavesResolved_7;
	// System.Collections.Generic.Dictionary`2<System.String,GK_SavedGame> ISN_GameSaves::_CachedGameSaves
	Dictionary_2_t939905586 * ____CachedGameSaves_8;

public:
	inline static int32_t get_offset_of_ActionSaveRemoved_4() { return static_cast<int32_t>(offsetof(ISN_GameSaves_t2236256821_StaticFields, ___ActionSaveRemoved_4)); }
	inline Action_1_t341109949 * get_ActionSaveRemoved_4() const { return ___ActionSaveRemoved_4; }
	inline Action_1_t341109949 ** get_address_of_ActionSaveRemoved_4() { return &___ActionSaveRemoved_4; }
	inline void set_ActionSaveRemoved_4(Action_1_t341109949 * value)
	{
		___ActionSaveRemoved_4 = value;
		Il2CppCodeGenWriteBarrier(&___ActionSaveRemoved_4, value);
	}

	inline static int32_t get_offset_of_ActionGameSaved_5() { return static_cast<int32_t>(offsetof(ISN_GameSaves_t2236256821_StaticFields, ___ActionGameSaved_5)); }
	inline Action_1_t3748375835 * get_ActionGameSaved_5() const { return ___ActionGameSaved_5; }
	inline Action_1_t3748375835 ** get_address_of_ActionGameSaved_5() { return &___ActionGameSaved_5; }
	inline void set_ActionGameSaved_5(Action_1_t3748375835 * value)
	{
		___ActionGameSaved_5 = value;
		Il2CppCodeGenWriteBarrier(&___ActionGameSaved_5, value);
	}

	inline static int32_t get_offset_of_ActionSavesFetched_6() { return static_cast<int32_t>(offsetof(ISN_GameSaves_t2236256821_StaticFields, ___ActionSavesFetched_6)); }
	inline Action_1_t1413312038 * get_ActionSavesFetched_6() const { return ___ActionSavesFetched_6; }
	inline Action_1_t1413312038 ** get_address_of_ActionSavesFetched_6() { return &___ActionSavesFetched_6; }
	inline void set_ActionSavesFetched_6(Action_1_t1413312038 * value)
	{
		___ActionSavesFetched_6 = value;
		Il2CppCodeGenWriteBarrier(&___ActionSavesFetched_6, value);
	}

	inline static int32_t get_offset_of_ActionSavesResolved_7() { return static_cast<int32_t>(offsetof(ISN_GameSaves_t2236256821_StaticFields, ___ActionSavesResolved_7)); }
	inline Action_1_t3309854786 * get_ActionSavesResolved_7() const { return ___ActionSavesResolved_7; }
	inline Action_1_t3309854786 ** get_address_of_ActionSavesResolved_7() { return &___ActionSavesResolved_7; }
	inline void set_ActionSavesResolved_7(Action_1_t3309854786 * value)
	{
		___ActionSavesResolved_7 = value;
		Il2CppCodeGenWriteBarrier(&___ActionSavesResolved_7, value);
	}

	inline static int32_t get_offset_of__CachedGameSaves_8() { return static_cast<int32_t>(offsetof(ISN_GameSaves_t2236256821_StaticFields, ____CachedGameSaves_8)); }
	inline Dictionary_2_t939905586 * get__CachedGameSaves_8() const { return ____CachedGameSaves_8; }
	inline Dictionary_2_t939905586 ** get_address_of__CachedGameSaves_8() { return &____CachedGameSaves_8; }
	inline void set__CachedGameSaves_8(Dictionary_2_t939905586 * value)
	{
		____CachedGameSaves_8 = value;
		Il2CppCodeGenWriteBarrier(&____CachedGameSaves_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
