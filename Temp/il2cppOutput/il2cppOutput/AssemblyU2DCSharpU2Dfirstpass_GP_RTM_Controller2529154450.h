#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Action`1<UM_RTM_Invite>
struct Action_1_t2142461970;
// System.Action`1<System.String>
struct Action_1_t1831019615;
// System.Action`1<UM_RTM_RoomCreatedResult>
struct Action_1_t2646680533;
// System.Action
struct Action_t3226471752;
// System.Action`2<System.String,System.Byte[]>
struct Action_2_t1307688409;
// System.Collections.Generic.List`1<UM_RTM_Invite>
struct List_1_t1709783720;
// UM_RTM_Room
struct UM_RTM_Room_t949336258;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GP_RTM_Controller
struct  GP_RTM_Controller_t2529154450  : public Il2CppObject
{
public:
	// System.Action`1<UM_RTM_Invite> GP_RTM_Controller::InvitationReceived
	Action_1_t2142461970 * ___InvitationReceived_0;
	// System.Action`1<UM_RTM_Invite> GP_RTM_Controller::InvitationAccepted
	Action_1_t2142461970 * ___InvitationAccepted_1;
	// System.Action`1<System.String> GP_RTM_Controller::InvitationDeclined
	Action_1_t1831019615 * ___InvitationDeclined_2;
	// System.Action`1<UM_RTM_RoomCreatedResult> GP_RTM_Controller::RoomCreated
	Action_1_t2646680533 * ___RoomCreated_3;
	// System.Action GP_RTM_Controller::RoomUpdated
	Action_t3226471752 * ___RoomUpdated_4;
	// System.Action`2<System.String,System.Byte[]> GP_RTM_Controller::MatchDataReceived
	Action_2_t1307688409 * ___MatchDataReceived_5;
	// System.Collections.Generic.List`1<UM_RTM_Invite> GP_RTM_Controller::_Invitations
	List_1_t1709783720 * ____Invitations_6;
	// UM_RTM_Room GP_RTM_Controller::_CurrentRoom
	UM_RTM_Room_t949336258 * ____CurrentRoom_7;

public:
	inline static int32_t get_offset_of_InvitationReceived_0() { return static_cast<int32_t>(offsetof(GP_RTM_Controller_t2529154450, ___InvitationReceived_0)); }
	inline Action_1_t2142461970 * get_InvitationReceived_0() const { return ___InvitationReceived_0; }
	inline Action_1_t2142461970 ** get_address_of_InvitationReceived_0() { return &___InvitationReceived_0; }
	inline void set_InvitationReceived_0(Action_1_t2142461970 * value)
	{
		___InvitationReceived_0 = value;
		Il2CppCodeGenWriteBarrier(&___InvitationReceived_0, value);
	}

	inline static int32_t get_offset_of_InvitationAccepted_1() { return static_cast<int32_t>(offsetof(GP_RTM_Controller_t2529154450, ___InvitationAccepted_1)); }
	inline Action_1_t2142461970 * get_InvitationAccepted_1() const { return ___InvitationAccepted_1; }
	inline Action_1_t2142461970 ** get_address_of_InvitationAccepted_1() { return &___InvitationAccepted_1; }
	inline void set_InvitationAccepted_1(Action_1_t2142461970 * value)
	{
		___InvitationAccepted_1 = value;
		Il2CppCodeGenWriteBarrier(&___InvitationAccepted_1, value);
	}

	inline static int32_t get_offset_of_InvitationDeclined_2() { return static_cast<int32_t>(offsetof(GP_RTM_Controller_t2529154450, ___InvitationDeclined_2)); }
	inline Action_1_t1831019615 * get_InvitationDeclined_2() const { return ___InvitationDeclined_2; }
	inline Action_1_t1831019615 ** get_address_of_InvitationDeclined_2() { return &___InvitationDeclined_2; }
	inline void set_InvitationDeclined_2(Action_1_t1831019615 * value)
	{
		___InvitationDeclined_2 = value;
		Il2CppCodeGenWriteBarrier(&___InvitationDeclined_2, value);
	}

	inline static int32_t get_offset_of_RoomCreated_3() { return static_cast<int32_t>(offsetof(GP_RTM_Controller_t2529154450, ___RoomCreated_3)); }
	inline Action_1_t2646680533 * get_RoomCreated_3() const { return ___RoomCreated_3; }
	inline Action_1_t2646680533 ** get_address_of_RoomCreated_3() { return &___RoomCreated_3; }
	inline void set_RoomCreated_3(Action_1_t2646680533 * value)
	{
		___RoomCreated_3 = value;
		Il2CppCodeGenWriteBarrier(&___RoomCreated_3, value);
	}

	inline static int32_t get_offset_of_RoomUpdated_4() { return static_cast<int32_t>(offsetof(GP_RTM_Controller_t2529154450, ___RoomUpdated_4)); }
	inline Action_t3226471752 * get_RoomUpdated_4() const { return ___RoomUpdated_4; }
	inline Action_t3226471752 ** get_address_of_RoomUpdated_4() { return &___RoomUpdated_4; }
	inline void set_RoomUpdated_4(Action_t3226471752 * value)
	{
		___RoomUpdated_4 = value;
		Il2CppCodeGenWriteBarrier(&___RoomUpdated_4, value);
	}

	inline static int32_t get_offset_of_MatchDataReceived_5() { return static_cast<int32_t>(offsetof(GP_RTM_Controller_t2529154450, ___MatchDataReceived_5)); }
	inline Action_2_t1307688409 * get_MatchDataReceived_5() const { return ___MatchDataReceived_5; }
	inline Action_2_t1307688409 ** get_address_of_MatchDataReceived_5() { return &___MatchDataReceived_5; }
	inline void set_MatchDataReceived_5(Action_2_t1307688409 * value)
	{
		___MatchDataReceived_5 = value;
		Il2CppCodeGenWriteBarrier(&___MatchDataReceived_5, value);
	}

	inline static int32_t get_offset_of__Invitations_6() { return static_cast<int32_t>(offsetof(GP_RTM_Controller_t2529154450, ____Invitations_6)); }
	inline List_1_t1709783720 * get__Invitations_6() const { return ____Invitations_6; }
	inline List_1_t1709783720 ** get_address_of__Invitations_6() { return &____Invitations_6; }
	inline void set__Invitations_6(List_1_t1709783720 * value)
	{
		____Invitations_6 = value;
		Il2CppCodeGenWriteBarrier(&____Invitations_6, value);
	}

	inline static int32_t get_offset_of__CurrentRoom_7() { return static_cast<int32_t>(offsetof(GP_RTM_Controller_t2529154450, ____CurrentRoom_7)); }
	inline UM_RTM_Room_t949336258 * get__CurrentRoom_7() const { return ____CurrentRoom_7; }
	inline UM_RTM_Room_t949336258 ** get_address_of__CurrentRoom_7() { return &____CurrentRoom_7; }
	inline void set__CurrentRoom_7(UM_RTM_Room_t949336258 * value)
	{
		____CurrentRoom_7 = value;
		Il2CppCodeGenWriteBarrier(&____CurrentRoom_7, value);
	}
};

struct GP_RTM_Controller_t2529154450_StaticFields
{
public:
	// System.Action`1<UM_RTM_Invite> GP_RTM_Controller::<>f__am$cache0
	Action_1_t2142461970 * ___U3CU3Ef__amU24cache0_8;
	// System.Action`1<UM_RTM_Invite> GP_RTM_Controller::<>f__am$cache1
	Action_1_t2142461970 * ___U3CU3Ef__amU24cache1_9;
	// System.Action`1<System.String> GP_RTM_Controller::<>f__am$cache2
	Action_1_t1831019615 * ___U3CU3Ef__amU24cache2_10;
	// System.Action`1<UM_RTM_RoomCreatedResult> GP_RTM_Controller::<>f__am$cache3
	Action_1_t2646680533 * ___U3CU3Ef__amU24cache3_11;
	// System.Action GP_RTM_Controller::<>f__am$cache4
	Action_t3226471752 * ___U3CU3Ef__amU24cache4_12;
	// System.Action`2<System.String,System.Byte[]> GP_RTM_Controller::<>f__am$cache5
	Action_2_t1307688409 * ___U3CU3Ef__amU24cache5_13;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_8() { return static_cast<int32_t>(offsetof(GP_RTM_Controller_t2529154450_StaticFields, ___U3CU3Ef__amU24cache0_8)); }
	inline Action_1_t2142461970 * get_U3CU3Ef__amU24cache0_8() const { return ___U3CU3Ef__amU24cache0_8; }
	inline Action_1_t2142461970 ** get_address_of_U3CU3Ef__amU24cache0_8() { return &___U3CU3Ef__amU24cache0_8; }
	inline void set_U3CU3Ef__amU24cache0_8(Action_1_t2142461970 * value)
	{
		___U3CU3Ef__amU24cache0_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_8, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_9() { return static_cast<int32_t>(offsetof(GP_RTM_Controller_t2529154450_StaticFields, ___U3CU3Ef__amU24cache1_9)); }
	inline Action_1_t2142461970 * get_U3CU3Ef__amU24cache1_9() const { return ___U3CU3Ef__amU24cache1_9; }
	inline Action_1_t2142461970 ** get_address_of_U3CU3Ef__amU24cache1_9() { return &___U3CU3Ef__amU24cache1_9; }
	inline void set_U3CU3Ef__amU24cache1_9(Action_1_t2142461970 * value)
	{
		___U3CU3Ef__amU24cache1_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_9, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_10() { return static_cast<int32_t>(offsetof(GP_RTM_Controller_t2529154450_StaticFields, ___U3CU3Ef__amU24cache2_10)); }
	inline Action_1_t1831019615 * get_U3CU3Ef__amU24cache2_10() const { return ___U3CU3Ef__amU24cache2_10; }
	inline Action_1_t1831019615 ** get_address_of_U3CU3Ef__amU24cache2_10() { return &___U3CU3Ef__amU24cache2_10; }
	inline void set_U3CU3Ef__amU24cache2_10(Action_1_t1831019615 * value)
	{
		___U3CU3Ef__amU24cache2_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_10, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_11() { return static_cast<int32_t>(offsetof(GP_RTM_Controller_t2529154450_StaticFields, ___U3CU3Ef__amU24cache3_11)); }
	inline Action_1_t2646680533 * get_U3CU3Ef__amU24cache3_11() const { return ___U3CU3Ef__amU24cache3_11; }
	inline Action_1_t2646680533 ** get_address_of_U3CU3Ef__amU24cache3_11() { return &___U3CU3Ef__amU24cache3_11; }
	inline void set_U3CU3Ef__amU24cache3_11(Action_1_t2646680533 * value)
	{
		___U3CU3Ef__amU24cache3_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache3_11, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_12() { return static_cast<int32_t>(offsetof(GP_RTM_Controller_t2529154450_StaticFields, ___U3CU3Ef__amU24cache4_12)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cache4_12() const { return ___U3CU3Ef__amU24cache4_12; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cache4_12() { return &___U3CU3Ef__amU24cache4_12; }
	inline void set_U3CU3Ef__amU24cache4_12(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cache4_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache4_12, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache5_13() { return static_cast<int32_t>(offsetof(GP_RTM_Controller_t2529154450_StaticFields, ___U3CU3Ef__amU24cache5_13)); }
	inline Action_2_t1307688409 * get_U3CU3Ef__amU24cache5_13() const { return ___U3CU3Ef__amU24cache5_13; }
	inline Action_2_t1307688409 ** get_address_of_U3CU3Ef__amU24cache5_13() { return &___U3CU3Ef__amU24cache5_13; }
	inline void set_U3CU3Ef__amU24cache5_13(Action_2_t1307688409 * value)
	{
		___U3CU3Ef__amU24cache5_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache5_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
