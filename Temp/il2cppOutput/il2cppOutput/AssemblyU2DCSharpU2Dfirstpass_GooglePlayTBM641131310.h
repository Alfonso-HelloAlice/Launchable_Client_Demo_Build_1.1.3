#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Pattern_Si1123696415.h"

// System.Action`1<GP_TBM_LoadMatchesResult>
struct Action_1_t643572420;
// System.Action`1<GP_TBM_MatchInitiatedResult>
struct Action_1_t3945860229;
// System.Action`1<GP_TBM_CancelMatchResult>
struct Action_1_t3681092534;
// System.Action`1<GP_TBM_LeaveMatchResult>
struct Action_1_t3459603101;
// System.Action`1<GP_TBM_LoadMatchResult>
struct Action_1_t1159218312;
// System.Action`1<GP_TBM_UpdateMatchResult>
struct Action_1_t3744805351;
// System.Action`1<GP_TBM_MatchRemovedResult>
struct Action_1_t488154502;
// System.Action`1<AndroidActivityResult>
struct Action_1_t3559310183;
// System.Action`2<System.String,GP_TBM_MatchInitiatedResult>
struct Action_2_t2054415243;
// System.Action`1<System.String>
struct Action_1_t1831019615;
// System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>
struct Dictionary_2_t3189857243;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayTBM
struct  GooglePlayTBM_t641131310  : public Singleton_1_t1123696415
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match> GooglePlayTBM::_Matches
	Dictionary_2_t3189857243 * ____Matches_16;

public:
	inline static int32_t get_offset_of__Matches_16() { return static_cast<int32_t>(offsetof(GooglePlayTBM_t641131310, ____Matches_16)); }
	inline Dictionary_2_t3189857243 * get__Matches_16() const { return ____Matches_16; }
	inline Dictionary_2_t3189857243 ** get_address_of__Matches_16() { return &____Matches_16; }
	inline void set__Matches_16(Dictionary_2_t3189857243 * value)
	{
		____Matches_16 = value;
		Il2CppCodeGenWriteBarrier(&____Matches_16, value);
	}
};

struct GooglePlayTBM_t641131310_StaticFields
{
public:
	// System.Action`1<GP_TBM_LoadMatchesResult> GooglePlayTBM::ActionMatchesResultLoaded
	Action_1_t643572420 * ___ActionMatchesResultLoaded_4;
	// System.Action`1<GP_TBM_MatchInitiatedResult> GooglePlayTBM::ActionMatchInitiated
	Action_1_t3945860229 * ___ActionMatchInitiated_5;
	// System.Action`1<GP_TBM_CancelMatchResult> GooglePlayTBM::ActionMatchCanceled
	Action_1_t3681092534 * ___ActionMatchCanceled_6;
	// System.Action`1<GP_TBM_LeaveMatchResult> GooglePlayTBM::ActionMatchLeaved
	Action_1_t3459603101 * ___ActionMatchLeaved_7;
	// System.Action`1<GP_TBM_LoadMatchResult> GooglePlayTBM::ActionMatchDataLoaded
	Action_1_t1159218312 * ___ActionMatchDataLoaded_8;
	// System.Action`1<GP_TBM_UpdateMatchResult> GooglePlayTBM::ActionMatchUpdated
	Action_1_t3744805351 * ___ActionMatchUpdated_9;
	// System.Action`1<GP_TBM_UpdateMatchResult> GooglePlayTBM::ActionMatchTurnFinished
	Action_1_t3744805351 * ___ActionMatchTurnFinished_10;
	// System.Action`1<GP_TBM_UpdateMatchResult> GooglePlayTBM::ActionMatchReceived
	Action_1_t3744805351 * ___ActionMatchReceived_11;
	// System.Action`1<GP_TBM_MatchRemovedResult> GooglePlayTBM::ActionMatchRemoved
	Action_1_t488154502 * ___ActionMatchRemoved_12;
	// System.Action`1<AndroidActivityResult> GooglePlayTBM::ActionMatchCreationCanceled
	Action_1_t3559310183 * ___ActionMatchCreationCanceled_13;
	// System.Action`2<System.String,GP_TBM_MatchInitiatedResult> GooglePlayTBM::ActionMatchInvitationAccepted
	Action_2_t2054415243 * ___ActionMatchInvitationAccepted_14;
	// System.Action`1<System.String> GooglePlayTBM::ActionMatchInvitationDeclined
	Action_1_t1831019615 * ___ActionMatchInvitationDeclined_15;

public:
	inline static int32_t get_offset_of_ActionMatchesResultLoaded_4() { return static_cast<int32_t>(offsetof(GooglePlayTBM_t641131310_StaticFields, ___ActionMatchesResultLoaded_4)); }
	inline Action_1_t643572420 * get_ActionMatchesResultLoaded_4() const { return ___ActionMatchesResultLoaded_4; }
	inline Action_1_t643572420 ** get_address_of_ActionMatchesResultLoaded_4() { return &___ActionMatchesResultLoaded_4; }
	inline void set_ActionMatchesResultLoaded_4(Action_1_t643572420 * value)
	{
		___ActionMatchesResultLoaded_4 = value;
		Il2CppCodeGenWriteBarrier(&___ActionMatchesResultLoaded_4, value);
	}

	inline static int32_t get_offset_of_ActionMatchInitiated_5() { return static_cast<int32_t>(offsetof(GooglePlayTBM_t641131310_StaticFields, ___ActionMatchInitiated_5)); }
	inline Action_1_t3945860229 * get_ActionMatchInitiated_5() const { return ___ActionMatchInitiated_5; }
	inline Action_1_t3945860229 ** get_address_of_ActionMatchInitiated_5() { return &___ActionMatchInitiated_5; }
	inline void set_ActionMatchInitiated_5(Action_1_t3945860229 * value)
	{
		___ActionMatchInitiated_5 = value;
		Il2CppCodeGenWriteBarrier(&___ActionMatchInitiated_5, value);
	}

	inline static int32_t get_offset_of_ActionMatchCanceled_6() { return static_cast<int32_t>(offsetof(GooglePlayTBM_t641131310_StaticFields, ___ActionMatchCanceled_6)); }
	inline Action_1_t3681092534 * get_ActionMatchCanceled_6() const { return ___ActionMatchCanceled_6; }
	inline Action_1_t3681092534 ** get_address_of_ActionMatchCanceled_6() { return &___ActionMatchCanceled_6; }
	inline void set_ActionMatchCanceled_6(Action_1_t3681092534 * value)
	{
		___ActionMatchCanceled_6 = value;
		Il2CppCodeGenWriteBarrier(&___ActionMatchCanceled_6, value);
	}

	inline static int32_t get_offset_of_ActionMatchLeaved_7() { return static_cast<int32_t>(offsetof(GooglePlayTBM_t641131310_StaticFields, ___ActionMatchLeaved_7)); }
	inline Action_1_t3459603101 * get_ActionMatchLeaved_7() const { return ___ActionMatchLeaved_7; }
	inline Action_1_t3459603101 ** get_address_of_ActionMatchLeaved_7() { return &___ActionMatchLeaved_7; }
	inline void set_ActionMatchLeaved_7(Action_1_t3459603101 * value)
	{
		___ActionMatchLeaved_7 = value;
		Il2CppCodeGenWriteBarrier(&___ActionMatchLeaved_7, value);
	}

	inline static int32_t get_offset_of_ActionMatchDataLoaded_8() { return static_cast<int32_t>(offsetof(GooglePlayTBM_t641131310_StaticFields, ___ActionMatchDataLoaded_8)); }
	inline Action_1_t1159218312 * get_ActionMatchDataLoaded_8() const { return ___ActionMatchDataLoaded_8; }
	inline Action_1_t1159218312 ** get_address_of_ActionMatchDataLoaded_8() { return &___ActionMatchDataLoaded_8; }
	inline void set_ActionMatchDataLoaded_8(Action_1_t1159218312 * value)
	{
		___ActionMatchDataLoaded_8 = value;
		Il2CppCodeGenWriteBarrier(&___ActionMatchDataLoaded_8, value);
	}

	inline static int32_t get_offset_of_ActionMatchUpdated_9() { return static_cast<int32_t>(offsetof(GooglePlayTBM_t641131310_StaticFields, ___ActionMatchUpdated_9)); }
	inline Action_1_t3744805351 * get_ActionMatchUpdated_9() const { return ___ActionMatchUpdated_9; }
	inline Action_1_t3744805351 ** get_address_of_ActionMatchUpdated_9() { return &___ActionMatchUpdated_9; }
	inline void set_ActionMatchUpdated_9(Action_1_t3744805351 * value)
	{
		___ActionMatchUpdated_9 = value;
		Il2CppCodeGenWriteBarrier(&___ActionMatchUpdated_9, value);
	}

	inline static int32_t get_offset_of_ActionMatchTurnFinished_10() { return static_cast<int32_t>(offsetof(GooglePlayTBM_t641131310_StaticFields, ___ActionMatchTurnFinished_10)); }
	inline Action_1_t3744805351 * get_ActionMatchTurnFinished_10() const { return ___ActionMatchTurnFinished_10; }
	inline Action_1_t3744805351 ** get_address_of_ActionMatchTurnFinished_10() { return &___ActionMatchTurnFinished_10; }
	inline void set_ActionMatchTurnFinished_10(Action_1_t3744805351 * value)
	{
		___ActionMatchTurnFinished_10 = value;
		Il2CppCodeGenWriteBarrier(&___ActionMatchTurnFinished_10, value);
	}

	inline static int32_t get_offset_of_ActionMatchReceived_11() { return static_cast<int32_t>(offsetof(GooglePlayTBM_t641131310_StaticFields, ___ActionMatchReceived_11)); }
	inline Action_1_t3744805351 * get_ActionMatchReceived_11() const { return ___ActionMatchReceived_11; }
	inline Action_1_t3744805351 ** get_address_of_ActionMatchReceived_11() { return &___ActionMatchReceived_11; }
	inline void set_ActionMatchReceived_11(Action_1_t3744805351 * value)
	{
		___ActionMatchReceived_11 = value;
		Il2CppCodeGenWriteBarrier(&___ActionMatchReceived_11, value);
	}

	inline static int32_t get_offset_of_ActionMatchRemoved_12() { return static_cast<int32_t>(offsetof(GooglePlayTBM_t641131310_StaticFields, ___ActionMatchRemoved_12)); }
	inline Action_1_t488154502 * get_ActionMatchRemoved_12() const { return ___ActionMatchRemoved_12; }
	inline Action_1_t488154502 ** get_address_of_ActionMatchRemoved_12() { return &___ActionMatchRemoved_12; }
	inline void set_ActionMatchRemoved_12(Action_1_t488154502 * value)
	{
		___ActionMatchRemoved_12 = value;
		Il2CppCodeGenWriteBarrier(&___ActionMatchRemoved_12, value);
	}

	inline static int32_t get_offset_of_ActionMatchCreationCanceled_13() { return static_cast<int32_t>(offsetof(GooglePlayTBM_t641131310_StaticFields, ___ActionMatchCreationCanceled_13)); }
	inline Action_1_t3559310183 * get_ActionMatchCreationCanceled_13() const { return ___ActionMatchCreationCanceled_13; }
	inline Action_1_t3559310183 ** get_address_of_ActionMatchCreationCanceled_13() { return &___ActionMatchCreationCanceled_13; }
	inline void set_ActionMatchCreationCanceled_13(Action_1_t3559310183 * value)
	{
		___ActionMatchCreationCanceled_13 = value;
		Il2CppCodeGenWriteBarrier(&___ActionMatchCreationCanceled_13, value);
	}

	inline static int32_t get_offset_of_ActionMatchInvitationAccepted_14() { return static_cast<int32_t>(offsetof(GooglePlayTBM_t641131310_StaticFields, ___ActionMatchInvitationAccepted_14)); }
	inline Action_2_t2054415243 * get_ActionMatchInvitationAccepted_14() const { return ___ActionMatchInvitationAccepted_14; }
	inline Action_2_t2054415243 ** get_address_of_ActionMatchInvitationAccepted_14() { return &___ActionMatchInvitationAccepted_14; }
	inline void set_ActionMatchInvitationAccepted_14(Action_2_t2054415243 * value)
	{
		___ActionMatchInvitationAccepted_14 = value;
		Il2CppCodeGenWriteBarrier(&___ActionMatchInvitationAccepted_14, value);
	}

	inline static int32_t get_offset_of_ActionMatchInvitationDeclined_15() { return static_cast<int32_t>(offsetof(GooglePlayTBM_t641131310_StaticFields, ___ActionMatchInvitationDeclined_15)); }
	inline Action_1_t1831019615 * get_ActionMatchInvitationDeclined_15() const { return ___ActionMatchInvitationDeclined_15; }
	inline Action_1_t1831019615 ** get_address_of_ActionMatchInvitationDeclined_15() { return &___ActionMatchInvitationDeclined_15; }
	inline void set_ActionMatchInvitationDeclined_15(Action_1_t1831019615 * value)
	{
		___ActionMatchInvitationDeclined_15 = value;
		Il2CppCodeGenWriteBarrier(&___ActionMatchInvitationDeclined_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
