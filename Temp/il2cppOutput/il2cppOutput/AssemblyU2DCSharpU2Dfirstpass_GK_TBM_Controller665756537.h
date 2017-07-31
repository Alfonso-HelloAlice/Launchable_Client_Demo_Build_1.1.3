#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Action`1<UM_TBM_MatchResult>
struct Action_1_t436604657;
// System.Action`1<System.String>
struct Action_1_t1831019615;
// System.Action`1<UM_TBM_MatchesLoadResult>
struct Action_1_t1070960545;
// System.Action`1<System.Collections.Generic.List`1<UM_TBM_Invite>>
struct Action_1_t4084582590;
// System.Action
struct Action_t3226471752;
// System.Collections.Generic.List`1<UM_TBM_Match>
struct List_1_t399209990;
// System.Collections.Generic.List`1<UM_TBM_Invite>
struct List_1_t4282783208;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GK_TBM_Controller
struct  GK_TBM_Controller_t665756537  : public Il2CppObject
{
public:
	// System.Action`1<UM_TBM_MatchResult> GK_TBM_Controller::MatchFoundEvent
	Action_1_t436604657 * ___MatchFoundEvent_0;
	// System.Action`1<UM_TBM_MatchResult> GK_TBM_Controller::MatchLoadedEvent
	Action_1_t436604657 * ___MatchLoadedEvent_1;
	// System.Action`1<UM_TBM_MatchResult> GK_TBM_Controller::InvitationAccepted
	Action_1_t436604657 * ___InvitationAccepted_2;
	// System.Action`1<System.String> GK_TBM_Controller::InvitationDeclined
	Action_1_t1831019615 * ___InvitationDeclined_3;
	// System.Action`1<UM_TBM_MatchResult> GK_TBM_Controller::TurnEndedEvent
	Action_1_t436604657 * ___TurnEndedEvent_4;
	// System.Action`1<UM_TBM_MatchResult> GK_TBM_Controller::MatchUpdatedEvent
	Action_1_t436604657 * ___MatchUpdatedEvent_5;
	// System.Action`1<UM_TBM_MatchesLoadResult> GK_TBM_Controller::MatchesListLoadedEvent
	Action_1_t1070960545 * ___MatchesListLoadedEvent_6;
	// System.Action`1<System.Collections.Generic.List`1<UM_TBM_Invite>> GK_TBM_Controller::InvitationsListLoadedEvent
	Action_1_t4084582590 * ___InvitationsListLoadedEvent_7;
	// System.Action GK_TBM_Controller::MatchesListUpdated
	Action_t3226471752 * ___MatchesListUpdated_8;
	// System.Collections.Generic.List`1<UM_TBM_Match> GK_TBM_Controller::_Matches
	List_1_t399209990 * ____Matches_9;
	// System.Collections.Generic.List`1<UM_TBM_Invite> GK_TBM_Controller::_Invitations
	List_1_t4282783208 * ____Invitations_10;

public:
	inline static int32_t get_offset_of_MatchFoundEvent_0() { return static_cast<int32_t>(offsetof(GK_TBM_Controller_t665756537, ___MatchFoundEvent_0)); }
	inline Action_1_t436604657 * get_MatchFoundEvent_0() const { return ___MatchFoundEvent_0; }
	inline Action_1_t436604657 ** get_address_of_MatchFoundEvent_0() { return &___MatchFoundEvent_0; }
	inline void set_MatchFoundEvent_0(Action_1_t436604657 * value)
	{
		___MatchFoundEvent_0 = value;
		Il2CppCodeGenWriteBarrier(&___MatchFoundEvent_0, value);
	}

	inline static int32_t get_offset_of_MatchLoadedEvent_1() { return static_cast<int32_t>(offsetof(GK_TBM_Controller_t665756537, ___MatchLoadedEvent_1)); }
	inline Action_1_t436604657 * get_MatchLoadedEvent_1() const { return ___MatchLoadedEvent_1; }
	inline Action_1_t436604657 ** get_address_of_MatchLoadedEvent_1() { return &___MatchLoadedEvent_1; }
	inline void set_MatchLoadedEvent_1(Action_1_t436604657 * value)
	{
		___MatchLoadedEvent_1 = value;
		Il2CppCodeGenWriteBarrier(&___MatchLoadedEvent_1, value);
	}

	inline static int32_t get_offset_of_InvitationAccepted_2() { return static_cast<int32_t>(offsetof(GK_TBM_Controller_t665756537, ___InvitationAccepted_2)); }
	inline Action_1_t436604657 * get_InvitationAccepted_2() const { return ___InvitationAccepted_2; }
	inline Action_1_t436604657 ** get_address_of_InvitationAccepted_2() { return &___InvitationAccepted_2; }
	inline void set_InvitationAccepted_2(Action_1_t436604657 * value)
	{
		___InvitationAccepted_2 = value;
		Il2CppCodeGenWriteBarrier(&___InvitationAccepted_2, value);
	}

	inline static int32_t get_offset_of_InvitationDeclined_3() { return static_cast<int32_t>(offsetof(GK_TBM_Controller_t665756537, ___InvitationDeclined_3)); }
	inline Action_1_t1831019615 * get_InvitationDeclined_3() const { return ___InvitationDeclined_3; }
	inline Action_1_t1831019615 ** get_address_of_InvitationDeclined_3() { return &___InvitationDeclined_3; }
	inline void set_InvitationDeclined_3(Action_1_t1831019615 * value)
	{
		___InvitationDeclined_3 = value;
		Il2CppCodeGenWriteBarrier(&___InvitationDeclined_3, value);
	}

	inline static int32_t get_offset_of_TurnEndedEvent_4() { return static_cast<int32_t>(offsetof(GK_TBM_Controller_t665756537, ___TurnEndedEvent_4)); }
	inline Action_1_t436604657 * get_TurnEndedEvent_4() const { return ___TurnEndedEvent_4; }
	inline Action_1_t436604657 ** get_address_of_TurnEndedEvent_4() { return &___TurnEndedEvent_4; }
	inline void set_TurnEndedEvent_4(Action_1_t436604657 * value)
	{
		___TurnEndedEvent_4 = value;
		Il2CppCodeGenWriteBarrier(&___TurnEndedEvent_4, value);
	}

	inline static int32_t get_offset_of_MatchUpdatedEvent_5() { return static_cast<int32_t>(offsetof(GK_TBM_Controller_t665756537, ___MatchUpdatedEvent_5)); }
	inline Action_1_t436604657 * get_MatchUpdatedEvent_5() const { return ___MatchUpdatedEvent_5; }
	inline Action_1_t436604657 ** get_address_of_MatchUpdatedEvent_5() { return &___MatchUpdatedEvent_5; }
	inline void set_MatchUpdatedEvent_5(Action_1_t436604657 * value)
	{
		___MatchUpdatedEvent_5 = value;
		Il2CppCodeGenWriteBarrier(&___MatchUpdatedEvent_5, value);
	}

	inline static int32_t get_offset_of_MatchesListLoadedEvent_6() { return static_cast<int32_t>(offsetof(GK_TBM_Controller_t665756537, ___MatchesListLoadedEvent_6)); }
	inline Action_1_t1070960545 * get_MatchesListLoadedEvent_6() const { return ___MatchesListLoadedEvent_6; }
	inline Action_1_t1070960545 ** get_address_of_MatchesListLoadedEvent_6() { return &___MatchesListLoadedEvent_6; }
	inline void set_MatchesListLoadedEvent_6(Action_1_t1070960545 * value)
	{
		___MatchesListLoadedEvent_6 = value;
		Il2CppCodeGenWriteBarrier(&___MatchesListLoadedEvent_6, value);
	}

	inline static int32_t get_offset_of_InvitationsListLoadedEvent_7() { return static_cast<int32_t>(offsetof(GK_TBM_Controller_t665756537, ___InvitationsListLoadedEvent_7)); }
	inline Action_1_t4084582590 * get_InvitationsListLoadedEvent_7() const { return ___InvitationsListLoadedEvent_7; }
	inline Action_1_t4084582590 ** get_address_of_InvitationsListLoadedEvent_7() { return &___InvitationsListLoadedEvent_7; }
	inline void set_InvitationsListLoadedEvent_7(Action_1_t4084582590 * value)
	{
		___InvitationsListLoadedEvent_7 = value;
		Il2CppCodeGenWriteBarrier(&___InvitationsListLoadedEvent_7, value);
	}

	inline static int32_t get_offset_of_MatchesListUpdated_8() { return static_cast<int32_t>(offsetof(GK_TBM_Controller_t665756537, ___MatchesListUpdated_8)); }
	inline Action_t3226471752 * get_MatchesListUpdated_8() const { return ___MatchesListUpdated_8; }
	inline Action_t3226471752 ** get_address_of_MatchesListUpdated_8() { return &___MatchesListUpdated_8; }
	inline void set_MatchesListUpdated_8(Action_t3226471752 * value)
	{
		___MatchesListUpdated_8 = value;
		Il2CppCodeGenWriteBarrier(&___MatchesListUpdated_8, value);
	}

	inline static int32_t get_offset_of__Matches_9() { return static_cast<int32_t>(offsetof(GK_TBM_Controller_t665756537, ____Matches_9)); }
	inline List_1_t399209990 * get__Matches_9() const { return ____Matches_9; }
	inline List_1_t399209990 ** get_address_of__Matches_9() { return &____Matches_9; }
	inline void set__Matches_9(List_1_t399209990 * value)
	{
		____Matches_9 = value;
		Il2CppCodeGenWriteBarrier(&____Matches_9, value);
	}

	inline static int32_t get_offset_of__Invitations_10() { return static_cast<int32_t>(offsetof(GK_TBM_Controller_t665756537, ____Invitations_10)); }
	inline List_1_t4282783208 * get__Invitations_10() const { return ____Invitations_10; }
	inline List_1_t4282783208 ** get_address_of__Invitations_10() { return &____Invitations_10; }
	inline void set__Invitations_10(List_1_t4282783208 * value)
	{
		____Invitations_10 = value;
		Il2CppCodeGenWriteBarrier(&____Invitations_10, value);
	}
};

struct GK_TBM_Controller_t665756537_StaticFields
{
public:
	// System.Action`1<UM_TBM_MatchResult> GK_TBM_Controller::<>f__am$cache0
	Action_1_t436604657 * ___U3CU3Ef__amU24cache0_11;
	// System.Action`1<UM_TBM_MatchResult> GK_TBM_Controller::<>f__am$cache1
	Action_1_t436604657 * ___U3CU3Ef__amU24cache1_12;
	// System.Action`1<UM_TBM_MatchResult> GK_TBM_Controller::<>f__am$cache2
	Action_1_t436604657 * ___U3CU3Ef__amU24cache2_13;
	// System.Action`1<System.String> GK_TBM_Controller::<>f__am$cache3
	Action_1_t1831019615 * ___U3CU3Ef__amU24cache3_14;
	// System.Action`1<UM_TBM_MatchResult> GK_TBM_Controller::<>f__am$cache4
	Action_1_t436604657 * ___U3CU3Ef__amU24cache4_15;
	// System.Action`1<UM_TBM_MatchResult> GK_TBM_Controller::<>f__am$cache5
	Action_1_t436604657 * ___U3CU3Ef__amU24cache5_16;
	// System.Action`1<UM_TBM_MatchesLoadResult> GK_TBM_Controller::<>f__am$cache6
	Action_1_t1070960545 * ___U3CU3Ef__amU24cache6_17;
	// System.Action`1<System.Collections.Generic.List`1<UM_TBM_Invite>> GK_TBM_Controller::<>f__am$cache7
	Action_1_t4084582590 * ___U3CU3Ef__amU24cache7_18;
	// System.Action GK_TBM_Controller::<>f__am$cache8
	Action_t3226471752 * ___U3CU3Ef__amU24cache8_19;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_11() { return static_cast<int32_t>(offsetof(GK_TBM_Controller_t665756537_StaticFields, ___U3CU3Ef__amU24cache0_11)); }
	inline Action_1_t436604657 * get_U3CU3Ef__amU24cache0_11() const { return ___U3CU3Ef__amU24cache0_11; }
	inline Action_1_t436604657 ** get_address_of_U3CU3Ef__amU24cache0_11() { return &___U3CU3Ef__amU24cache0_11; }
	inline void set_U3CU3Ef__amU24cache0_11(Action_1_t436604657 * value)
	{
		___U3CU3Ef__amU24cache0_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_11, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_12() { return static_cast<int32_t>(offsetof(GK_TBM_Controller_t665756537_StaticFields, ___U3CU3Ef__amU24cache1_12)); }
	inline Action_1_t436604657 * get_U3CU3Ef__amU24cache1_12() const { return ___U3CU3Ef__amU24cache1_12; }
	inline Action_1_t436604657 ** get_address_of_U3CU3Ef__amU24cache1_12() { return &___U3CU3Ef__amU24cache1_12; }
	inline void set_U3CU3Ef__amU24cache1_12(Action_1_t436604657 * value)
	{
		___U3CU3Ef__amU24cache1_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_12, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_13() { return static_cast<int32_t>(offsetof(GK_TBM_Controller_t665756537_StaticFields, ___U3CU3Ef__amU24cache2_13)); }
	inline Action_1_t436604657 * get_U3CU3Ef__amU24cache2_13() const { return ___U3CU3Ef__amU24cache2_13; }
	inline Action_1_t436604657 ** get_address_of_U3CU3Ef__amU24cache2_13() { return &___U3CU3Ef__amU24cache2_13; }
	inline void set_U3CU3Ef__amU24cache2_13(Action_1_t436604657 * value)
	{
		___U3CU3Ef__amU24cache2_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_13, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_14() { return static_cast<int32_t>(offsetof(GK_TBM_Controller_t665756537_StaticFields, ___U3CU3Ef__amU24cache3_14)); }
	inline Action_1_t1831019615 * get_U3CU3Ef__amU24cache3_14() const { return ___U3CU3Ef__amU24cache3_14; }
	inline Action_1_t1831019615 ** get_address_of_U3CU3Ef__amU24cache3_14() { return &___U3CU3Ef__amU24cache3_14; }
	inline void set_U3CU3Ef__amU24cache3_14(Action_1_t1831019615 * value)
	{
		___U3CU3Ef__amU24cache3_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache3_14, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_15() { return static_cast<int32_t>(offsetof(GK_TBM_Controller_t665756537_StaticFields, ___U3CU3Ef__amU24cache4_15)); }
	inline Action_1_t436604657 * get_U3CU3Ef__amU24cache4_15() const { return ___U3CU3Ef__amU24cache4_15; }
	inline Action_1_t436604657 ** get_address_of_U3CU3Ef__amU24cache4_15() { return &___U3CU3Ef__amU24cache4_15; }
	inline void set_U3CU3Ef__amU24cache4_15(Action_1_t436604657 * value)
	{
		___U3CU3Ef__amU24cache4_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache4_15, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache5_16() { return static_cast<int32_t>(offsetof(GK_TBM_Controller_t665756537_StaticFields, ___U3CU3Ef__amU24cache5_16)); }
	inline Action_1_t436604657 * get_U3CU3Ef__amU24cache5_16() const { return ___U3CU3Ef__amU24cache5_16; }
	inline Action_1_t436604657 ** get_address_of_U3CU3Ef__amU24cache5_16() { return &___U3CU3Ef__amU24cache5_16; }
	inline void set_U3CU3Ef__amU24cache5_16(Action_1_t436604657 * value)
	{
		___U3CU3Ef__amU24cache5_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache5_16, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache6_17() { return static_cast<int32_t>(offsetof(GK_TBM_Controller_t665756537_StaticFields, ___U3CU3Ef__amU24cache6_17)); }
	inline Action_1_t1070960545 * get_U3CU3Ef__amU24cache6_17() const { return ___U3CU3Ef__amU24cache6_17; }
	inline Action_1_t1070960545 ** get_address_of_U3CU3Ef__amU24cache6_17() { return &___U3CU3Ef__amU24cache6_17; }
	inline void set_U3CU3Ef__amU24cache6_17(Action_1_t1070960545 * value)
	{
		___U3CU3Ef__amU24cache6_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache6_17, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache7_18() { return static_cast<int32_t>(offsetof(GK_TBM_Controller_t665756537_StaticFields, ___U3CU3Ef__amU24cache7_18)); }
	inline Action_1_t4084582590 * get_U3CU3Ef__amU24cache7_18() const { return ___U3CU3Ef__amU24cache7_18; }
	inline Action_1_t4084582590 ** get_address_of_U3CU3Ef__amU24cache7_18() { return &___U3CU3Ef__amU24cache7_18; }
	inline void set_U3CU3Ef__amU24cache7_18(Action_1_t4084582590 * value)
	{
		___U3CU3Ef__amU24cache7_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache7_18, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache8_19() { return static_cast<int32_t>(offsetof(GK_TBM_Controller_t665756537_StaticFields, ___U3CU3Ef__amU24cache8_19)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cache8_19() const { return ___U3CU3Ef__amU24cache8_19; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cache8_19() { return &___U3CU3Ef__amU24cache8_19; }
	inline void set_U3CU3Ef__amU24cache8_19(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cache8_19 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache8_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
