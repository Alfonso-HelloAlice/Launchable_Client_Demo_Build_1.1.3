#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Pattern_Si3948020316.h"

// System.String
struct String_t;
// TwitterUserInfo
struct TwitterUserInfo_t87370740;
// System.Action
struct Action_t3226471752;
// System.Action`1<TWResult>
struct Action_1_t1282590442;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AndroidTwitterManager
struct  AndroidTwitterManager_t3465455211  : public Singleton_1_t3948020316
{
public:
	// System.Boolean AndroidTwitterManager::_IsAuthed
	bool ____IsAuthed_4;
	// System.Boolean AndroidTwitterManager::_IsInited
	bool ____IsInited_5;
	// System.String AndroidTwitterManager::_AccessToken
	String_t* ____AccessToken_6;
	// System.String AndroidTwitterManager::_AccessTokenSecret
	String_t* ____AccessTokenSecret_7;
	// TwitterUserInfo AndroidTwitterManager::_userInfo
	TwitterUserInfo_t87370740 * ____userInfo_8;
	// System.Action AndroidTwitterManager::OnTwitterLoginStarted
	Action_t3226471752 * ___OnTwitterLoginStarted_9;
	// System.Action AndroidTwitterManager::OnTwitterLogOut
	Action_t3226471752 * ___OnTwitterLogOut_10;
	// System.Action AndroidTwitterManager::OnTwitterPostStarted
	Action_t3226471752 * ___OnTwitterPostStarted_11;
	// System.Action`1<TWResult> AndroidTwitterManager::OnTwitterInitedAction
	Action_1_t1282590442 * ___OnTwitterInitedAction_12;
	// System.Action`1<TWResult> AndroidTwitterManager::OnAuthCompleteAction
	Action_1_t1282590442 * ___OnAuthCompleteAction_13;
	// System.Action`1<TWResult> AndroidTwitterManager::OnPostingCompleteAction
	Action_1_t1282590442 * ___OnPostingCompleteAction_14;
	// System.Action`1<TWResult> AndroidTwitterManager::OnUserDataRequestCompleteAction
	Action_1_t1282590442 * ___OnUserDataRequestCompleteAction_15;

public:
	inline static int32_t get_offset_of__IsAuthed_4() { return static_cast<int32_t>(offsetof(AndroidTwitterManager_t3465455211, ____IsAuthed_4)); }
	inline bool get__IsAuthed_4() const { return ____IsAuthed_4; }
	inline bool* get_address_of__IsAuthed_4() { return &____IsAuthed_4; }
	inline void set__IsAuthed_4(bool value)
	{
		____IsAuthed_4 = value;
	}

	inline static int32_t get_offset_of__IsInited_5() { return static_cast<int32_t>(offsetof(AndroidTwitterManager_t3465455211, ____IsInited_5)); }
	inline bool get__IsInited_5() const { return ____IsInited_5; }
	inline bool* get_address_of__IsInited_5() { return &____IsInited_5; }
	inline void set__IsInited_5(bool value)
	{
		____IsInited_5 = value;
	}

	inline static int32_t get_offset_of__AccessToken_6() { return static_cast<int32_t>(offsetof(AndroidTwitterManager_t3465455211, ____AccessToken_6)); }
	inline String_t* get__AccessToken_6() const { return ____AccessToken_6; }
	inline String_t** get_address_of__AccessToken_6() { return &____AccessToken_6; }
	inline void set__AccessToken_6(String_t* value)
	{
		____AccessToken_6 = value;
		Il2CppCodeGenWriteBarrier(&____AccessToken_6, value);
	}

	inline static int32_t get_offset_of__AccessTokenSecret_7() { return static_cast<int32_t>(offsetof(AndroidTwitterManager_t3465455211, ____AccessTokenSecret_7)); }
	inline String_t* get__AccessTokenSecret_7() const { return ____AccessTokenSecret_7; }
	inline String_t** get_address_of__AccessTokenSecret_7() { return &____AccessTokenSecret_7; }
	inline void set__AccessTokenSecret_7(String_t* value)
	{
		____AccessTokenSecret_7 = value;
		Il2CppCodeGenWriteBarrier(&____AccessTokenSecret_7, value);
	}

	inline static int32_t get_offset_of__userInfo_8() { return static_cast<int32_t>(offsetof(AndroidTwitterManager_t3465455211, ____userInfo_8)); }
	inline TwitterUserInfo_t87370740 * get__userInfo_8() const { return ____userInfo_8; }
	inline TwitterUserInfo_t87370740 ** get_address_of__userInfo_8() { return &____userInfo_8; }
	inline void set__userInfo_8(TwitterUserInfo_t87370740 * value)
	{
		____userInfo_8 = value;
		Il2CppCodeGenWriteBarrier(&____userInfo_8, value);
	}

	inline static int32_t get_offset_of_OnTwitterLoginStarted_9() { return static_cast<int32_t>(offsetof(AndroidTwitterManager_t3465455211, ___OnTwitterLoginStarted_9)); }
	inline Action_t3226471752 * get_OnTwitterLoginStarted_9() const { return ___OnTwitterLoginStarted_9; }
	inline Action_t3226471752 ** get_address_of_OnTwitterLoginStarted_9() { return &___OnTwitterLoginStarted_9; }
	inline void set_OnTwitterLoginStarted_9(Action_t3226471752 * value)
	{
		___OnTwitterLoginStarted_9 = value;
		Il2CppCodeGenWriteBarrier(&___OnTwitterLoginStarted_9, value);
	}

	inline static int32_t get_offset_of_OnTwitterLogOut_10() { return static_cast<int32_t>(offsetof(AndroidTwitterManager_t3465455211, ___OnTwitterLogOut_10)); }
	inline Action_t3226471752 * get_OnTwitterLogOut_10() const { return ___OnTwitterLogOut_10; }
	inline Action_t3226471752 ** get_address_of_OnTwitterLogOut_10() { return &___OnTwitterLogOut_10; }
	inline void set_OnTwitterLogOut_10(Action_t3226471752 * value)
	{
		___OnTwitterLogOut_10 = value;
		Il2CppCodeGenWriteBarrier(&___OnTwitterLogOut_10, value);
	}

	inline static int32_t get_offset_of_OnTwitterPostStarted_11() { return static_cast<int32_t>(offsetof(AndroidTwitterManager_t3465455211, ___OnTwitterPostStarted_11)); }
	inline Action_t3226471752 * get_OnTwitterPostStarted_11() const { return ___OnTwitterPostStarted_11; }
	inline Action_t3226471752 ** get_address_of_OnTwitterPostStarted_11() { return &___OnTwitterPostStarted_11; }
	inline void set_OnTwitterPostStarted_11(Action_t3226471752 * value)
	{
		___OnTwitterPostStarted_11 = value;
		Il2CppCodeGenWriteBarrier(&___OnTwitterPostStarted_11, value);
	}

	inline static int32_t get_offset_of_OnTwitterInitedAction_12() { return static_cast<int32_t>(offsetof(AndroidTwitterManager_t3465455211, ___OnTwitterInitedAction_12)); }
	inline Action_1_t1282590442 * get_OnTwitterInitedAction_12() const { return ___OnTwitterInitedAction_12; }
	inline Action_1_t1282590442 ** get_address_of_OnTwitterInitedAction_12() { return &___OnTwitterInitedAction_12; }
	inline void set_OnTwitterInitedAction_12(Action_1_t1282590442 * value)
	{
		___OnTwitterInitedAction_12 = value;
		Il2CppCodeGenWriteBarrier(&___OnTwitterInitedAction_12, value);
	}

	inline static int32_t get_offset_of_OnAuthCompleteAction_13() { return static_cast<int32_t>(offsetof(AndroidTwitterManager_t3465455211, ___OnAuthCompleteAction_13)); }
	inline Action_1_t1282590442 * get_OnAuthCompleteAction_13() const { return ___OnAuthCompleteAction_13; }
	inline Action_1_t1282590442 ** get_address_of_OnAuthCompleteAction_13() { return &___OnAuthCompleteAction_13; }
	inline void set_OnAuthCompleteAction_13(Action_1_t1282590442 * value)
	{
		___OnAuthCompleteAction_13 = value;
		Il2CppCodeGenWriteBarrier(&___OnAuthCompleteAction_13, value);
	}

	inline static int32_t get_offset_of_OnPostingCompleteAction_14() { return static_cast<int32_t>(offsetof(AndroidTwitterManager_t3465455211, ___OnPostingCompleteAction_14)); }
	inline Action_1_t1282590442 * get_OnPostingCompleteAction_14() const { return ___OnPostingCompleteAction_14; }
	inline Action_1_t1282590442 ** get_address_of_OnPostingCompleteAction_14() { return &___OnPostingCompleteAction_14; }
	inline void set_OnPostingCompleteAction_14(Action_1_t1282590442 * value)
	{
		___OnPostingCompleteAction_14 = value;
		Il2CppCodeGenWriteBarrier(&___OnPostingCompleteAction_14, value);
	}

	inline static int32_t get_offset_of_OnUserDataRequestCompleteAction_15() { return static_cast<int32_t>(offsetof(AndroidTwitterManager_t3465455211, ___OnUserDataRequestCompleteAction_15)); }
	inline Action_1_t1282590442 * get_OnUserDataRequestCompleteAction_15() const { return ___OnUserDataRequestCompleteAction_15; }
	inline Action_1_t1282590442 ** get_address_of_OnUserDataRequestCompleteAction_15() { return &___OnUserDataRequestCompleteAction_15; }
	inline void set_OnUserDataRequestCompleteAction_15(Action_1_t1282590442 * value)
	{
		___OnUserDataRequestCompleteAction_15 = value;
		Il2CppCodeGenWriteBarrier(&___OnUserDataRequestCompleteAction_15, value);
	}
};

struct AndroidTwitterManager_t3465455211_StaticFields
{
public:
	// System.Action AndroidTwitterManager::<>f__am$cache0
	Action_t3226471752 * ___U3CU3Ef__amU24cache0_16;
	// System.Action AndroidTwitterManager::<>f__am$cache1
	Action_t3226471752 * ___U3CU3Ef__amU24cache1_17;
	// System.Action AndroidTwitterManager::<>f__am$cache2
	Action_t3226471752 * ___U3CU3Ef__amU24cache2_18;
	// System.Action`1<TWResult> AndroidTwitterManager::<>f__am$cache3
	Action_1_t1282590442 * ___U3CU3Ef__amU24cache3_19;
	// System.Action`1<TWResult> AndroidTwitterManager::<>f__am$cache4
	Action_1_t1282590442 * ___U3CU3Ef__amU24cache4_20;
	// System.Action`1<TWResult> AndroidTwitterManager::<>f__am$cache5
	Action_1_t1282590442 * ___U3CU3Ef__amU24cache5_21;
	// System.Action`1<TWResult> AndroidTwitterManager::<>f__am$cache6
	Action_1_t1282590442 * ___U3CU3Ef__amU24cache6_22;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_16() { return static_cast<int32_t>(offsetof(AndroidTwitterManager_t3465455211_StaticFields, ___U3CU3Ef__amU24cache0_16)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cache0_16() const { return ___U3CU3Ef__amU24cache0_16; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cache0_16() { return &___U3CU3Ef__amU24cache0_16; }
	inline void set_U3CU3Ef__amU24cache0_16(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cache0_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_16, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_17() { return static_cast<int32_t>(offsetof(AndroidTwitterManager_t3465455211_StaticFields, ___U3CU3Ef__amU24cache1_17)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cache1_17() const { return ___U3CU3Ef__amU24cache1_17; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cache1_17() { return &___U3CU3Ef__amU24cache1_17; }
	inline void set_U3CU3Ef__amU24cache1_17(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cache1_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_17, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_18() { return static_cast<int32_t>(offsetof(AndroidTwitterManager_t3465455211_StaticFields, ___U3CU3Ef__amU24cache2_18)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cache2_18() const { return ___U3CU3Ef__amU24cache2_18; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cache2_18() { return &___U3CU3Ef__amU24cache2_18; }
	inline void set_U3CU3Ef__amU24cache2_18(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cache2_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_18, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_19() { return static_cast<int32_t>(offsetof(AndroidTwitterManager_t3465455211_StaticFields, ___U3CU3Ef__amU24cache3_19)); }
	inline Action_1_t1282590442 * get_U3CU3Ef__amU24cache3_19() const { return ___U3CU3Ef__amU24cache3_19; }
	inline Action_1_t1282590442 ** get_address_of_U3CU3Ef__amU24cache3_19() { return &___U3CU3Ef__amU24cache3_19; }
	inline void set_U3CU3Ef__amU24cache3_19(Action_1_t1282590442 * value)
	{
		___U3CU3Ef__amU24cache3_19 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache3_19, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_20() { return static_cast<int32_t>(offsetof(AndroidTwitterManager_t3465455211_StaticFields, ___U3CU3Ef__amU24cache4_20)); }
	inline Action_1_t1282590442 * get_U3CU3Ef__amU24cache4_20() const { return ___U3CU3Ef__amU24cache4_20; }
	inline Action_1_t1282590442 ** get_address_of_U3CU3Ef__amU24cache4_20() { return &___U3CU3Ef__amU24cache4_20; }
	inline void set_U3CU3Ef__amU24cache4_20(Action_1_t1282590442 * value)
	{
		___U3CU3Ef__amU24cache4_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache4_20, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache5_21() { return static_cast<int32_t>(offsetof(AndroidTwitterManager_t3465455211_StaticFields, ___U3CU3Ef__amU24cache5_21)); }
	inline Action_1_t1282590442 * get_U3CU3Ef__amU24cache5_21() const { return ___U3CU3Ef__amU24cache5_21; }
	inline Action_1_t1282590442 ** get_address_of_U3CU3Ef__amU24cache5_21() { return &___U3CU3Ef__amU24cache5_21; }
	inline void set_U3CU3Ef__amU24cache5_21(Action_1_t1282590442 * value)
	{
		___U3CU3Ef__amU24cache5_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache5_21, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache6_22() { return static_cast<int32_t>(offsetof(AndroidTwitterManager_t3465455211_StaticFields, ___U3CU3Ef__amU24cache6_22)); }
	inline Action_1_t1282590442 * get_U3CU3Ef__amU24cache6_22() const { return ___U3CU3Ef__amU24cache6_22; }
	inline Action_1_t1282590442 ** get_address_of_U3CU3Ef__amU24cache6_22() { return &___U3CU3Ef__amU24cache6_22; }
	inline void set_U3CU3Ef__amU24cache6_22(Action_1_t1282590442 * value)
	{
		___U3CU3Ef__amU24cache6_22 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache6_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
