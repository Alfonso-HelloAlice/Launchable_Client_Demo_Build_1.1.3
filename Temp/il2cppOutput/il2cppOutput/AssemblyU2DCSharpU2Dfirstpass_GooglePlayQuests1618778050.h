#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Pattern_Si2101343155.h"

// System.Action`1<GP_QuestResult>
struct Action_1_t3192739819;
// GP_QuestsSelect[]
struct GP_QuestsSelectU5BU5D_t3003656674;
// System.Collections.Generic.Dictionary`2<System.String,GP_Quest>
struct Dictionary_2_t3556662732;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayQuests
struct  GooglePlayQuests_t1618778050  : public Singleton_1_t2101343155
{
public:
	// System.Action`1<GP_QuestResult> GooglePlayQuests::OnQuestsLoaded
	Action_1_t3192739819 * ___OnQuestsLoaded_4;
	// System.Action`1<GP_QuestResult> GooglePlayQuests::OnQuestsAccepted
	Action_1_t3192739819 * ___OnQuestsAccepted_5;
	// System.Action`1<GP_QuestResult> GooglePlayQuests::OnQuestsCompleted
	Action_1_t3192739819 * ___OnQuestsCompleted_6;
	// System.Collections.Generic.Dictionary`2<System.String,GP_Quest> GooglePlayQuests::_Quests
	Dictionary_2_t3556662732 * ____Quests_8;

public:
	inline static int32_t get_offset_of_OnQuestsLoaded_4() { return static_cast<int32_t>(offsetof(GooglePlayQuests_t1618778050, ___OnQuestsLoaded_4)); }
	inline Action_1_t3192739819 * get_OnQuestsLoaded_4() const { return ___OnQuestsLoaded_4; }
	inline Action_1_t3192739819 ** get_address_of_OnQuestsLoaded_4() { return &___OnQuestsLoaded_4; }
	inline void set_OnQuestsLoaded_4(Action_1_t3192739819 * value)
	{
		___OnQuestsLoaded_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnQuestsLoaded_4, value);
	}

	inline static int32_t get_offset_of_OnQuestsAccepted_5() { return static_cast<int32_t>(offsetof(GooglePlayQuests_t1618778050, ___OnQuestsAccepted_5)); }
	inline Action_1_t3192739819 * get_OnQuestsAccepted_5() const { return ___OnQuestsAccepted_5; }
	inline Action_1_t3192739819 ** get_address_of_OnQuestsAccepted_5() { return &___OnQuestsAccepted_5; }
	inline void set_OnQuestsAccepted_5(Action_1_t3192739819 * value)
	{
		___OnQuestsAccepted_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnQuestsAccepted_5, value);
	}

	inline static int32_t get_offset_of_OnQuestsCompleted_6() { return static_cast<int32_t>(offsetof(GooglePlayQuests_t1618778050, ___OnQuestsCompleted_6)); }
	inline Action_1_t3192739819 * get_OnQuestsCompleted_6() const { return ___OnQuestsCompleted_6; }
	inline Action_1_t3192739819 ** get_address_of_OnQuestsCompleted_6() { return &___OnQuestsCompleted_6; }
	inline void set_OnQuestsCompleted_6(Action_1_t3192739819 * value)
	{
		___OnQuestsCompleted_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnQuestsCompleted_6, value);
	}

	inline static int32_t get_offset_of__Quests_8() { return static_cast<int32_t>(offsetof(GooglePlayQuests_t1618778050, ____Quests_8)); }
	inline Dictionary_2_t3556662732 * get__Quests_8() const { return ____Quests_8; }
	inline Dictionary_2_t3556662732 ** get_address_of__Quests_8() { return &____Quests_8; }
	inline void set__Quests_8(Dictionary_2_t3556662732 * value)
	{
		____Quests_8 = value;
		Il2CppCodeGenWriteBarrier(&____Quests_8, value);
	}
};

struct GooglePlayQuests_t1618778050_StaticFields
{
public:
	// GP_QuestsSelect[] GooglePlayQuests::SELECT_ALL_QUESTS
	GP_QuestsSelectU5BU5D_t3003656674* ___SELECT_ALL_QUESTS_7;
	// System.Action`1<GP_QuestResult> GooglePlayQuests::<>f__am$cache0
	Action_1_t3192739819 * ___U3CU3Ef__amU24cache0_9;
	// System.Action`1<GP_QuestResult> GooglePlayQuests::<>f__am$cache1
	Action_1_t3192739819 * ___U3CU3Ef__amU24cache1_10;
	// System.Action`1<GP_QuestResult> GooglePlayQuests::<>f__am$cache2
	Action_1_t3192739819 * ___U3CU3Ef__amU24cache2_11;

public:
	inline static int32_t get_offset_of_SELECT_ALL_QUESTS_7() { return static_cast<int32_t>(offsetof(GooglePlayQuests_t1618778050_StaticFields, ___SELECT_ALL_QUESTS_7)); }
	inline GP_QuestsSelectU5BU5D_t3003656674* get_SELECT_ALL_QUESTS_7() const { return ___SELECT_ALL_QUESTS_7; }
	inline GP_QuestsSelectU5BU5D_t3003656674** get_address_of_SELECT_ALL_QUESTS_7() { return &___SELECT_ALL_QUESTS_7; }
	inline void set_SELECT_ALL_QUESTS_7(GP_QuestsSelectU5BU5D_t3003656674* value)
	{
		___SELECT_ALL_QUESTS_7 = value;
		Il2CppCodeGenWriteBarrier(&___SELECT_ALL_QUESTS_7, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_9() { return static_cast<int32_t>(offsetof(GooglePlayQuests_t1618778050_StaticFields, ___U3CU3Ef__amU24cache0_9)); }
	inline Action_1_t3192739819 * get_U3CU3Ef__amU24cache0_9() const { return ___U3CU3Ef__amU24cache0_9; }
	inline Action_1_t3192739819 ** get_address_of_U3CU3Ef__amU24cache0_9() { return &___U3CU3Ef__amU24cache0_9; }
	inline void set_U3CU3Ef__amU24cache0_9(Action_1_t3192739819 * value)
	{
		___U3CU3Ef__amU24cache0_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_9, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_10() { return static_cast<int32_t>(offsetof(GooglePlayQuests_t1618778050_StaticFields, ___U3CU3Ef__amU24cache1_10)); }
	inline Action_1_t3192739819 * get_U3CU3Ef__amU24cache1_10() const { return ___U3CU3Ef__amU24cache1_10; }
	inline Action_1_t3192739819 ** get_address_of_U3CU3Ef__amU24cache1_10() { return &___U3CU3Ef__amU24cache1_10; }
	inline void set_U3CU3Ef__amU24cache1_10(Action_1_t3192739819 * value)
	{
		___U3CU3Ef__amU24cache1_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_10, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_11() { return static_cast<int32_t>(offsetof(GooglePlayQuests_t1618778050_StaticFields, ___U3CU3Ef__amU24cache2_11)); }
	inline Action_1_t3192739819 * get_U3CU3Ef__amU24cache2_11() const { return ___U3CU3Ef__amU24cache2_11; }
	inline Action_1_t3192739819 ** get_address_of_U3CU3Ef__amU24cache2_11() { return &___U3CU3Ef__amU24cache2_11; }
	inline void set_U3CU3Ef__amU24cache2_11(Action_1_t3192739819 * value)
	{
		___U3CU3Ef__amU24cache2_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
