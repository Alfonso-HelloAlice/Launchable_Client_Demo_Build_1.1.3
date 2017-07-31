#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Pattern_Si1029587895.h"

// System.Action`1<GP_RTM_Network_Package>
struct Action_1_t1852107251;
// System.Action`1<GP_RTM_Room>
struct Action_1_t653403911;
// System.Action`1<GP_RTM_ReliableMessageSentResult>
struct Action_1_t2545428778;
// System.Action`1<GP_RTM_ReliableMessageDeliveredResult>
struct Action_1_t1495869386;
// System.Action
struct Action_t3226471752;
// System.Action`1<System.String>
struct Action_1_t1831019615;
// System.Action`1<System.String[]>
struct Action_1_t1444185354;
// System.Action`1<GP_GamesStatusCodes>
struct Action_1_t815305555;
// System.Action`1<GP_RTM_Result>
struct Action_1_t275088661;
// System.Action`1<AndroidActivityResult>
struct Action_1_t3559310183;
// System.Action`1<GP_Invite>
struct Action_1_t428728469;
// GP_RTM_Room
struct GP_RTM_Room_t851604529;
// System.Collections.Generic.List`1<GP_Invite>
struct List_1_t4291017515;
// System.Collections.Generic.Dictionary`2<System.Int32,GP_RTM_ReliableMessageListener>
struct Dictionary_2_t351386314;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayRTM
struct  GooglePlayRTM_t547022790  : public Singleton_1_t1029587895
{
public:
	// GP_RTM_Room GooglePlayRTM::_currentRoom
	GP_RTM_Room_t851604529 * ____currentRoom_30;
	// System.Collections.Generic.List`1<GP_Invite> GooglePlayRTM::_invitations
	List_1_t4291017515 * ____invitations_31;
	// System.Collections.Generic.Dictionary`2<System.Int32,GP_RTM_ReliableMessageListener> GooglePlayRTM::_ReliableMassageListeners
	Dictionary_2_t351386314 * ____ReliableMassageListeners_32;

public:
	inline static int32_t get_offset_of__currentRoom_30() { return static_cast<int32_t>(offsetof(GooglePlayRTM_t547022790, ____currentRoom_30)); }
	inline GP_RTM_Room_t851604529 * get__currentRoom_30() const { return ____currentRoom_30; }
	inline GP_RTM_Room_t851604529 ** get_address_of__currentRoom_30() { return &____currentRoom_30; }
	inline void set__currentRoom_30(GP_RTM_Room_t851604529 * value)
	{
		____currentRoom_30 = value;
		Il2CppCodeGenWriteBarrier(&____currentRoom_30, value);
	}

	inline static int32_t get_offset_of__invitations_31() { return static_cast<int32_t>(offsetof(GooglePlayRTM_t547022790, ____invitations_31)); }
	inline List_1_t4291017515 * get__invitations_31() const { return ____invitations_31; }
	inline List_1_t4291017515 ** get_address_of__invitations_31() { return &____invitations_31; }
	inline void set__invitations_31(List_1_t4291017515 * value)
	{
		____invitations_31 = value;
		Il2CppCodeGenWriteBarrier(&____invitations_31, value);
	}

	inline static int32_t get_offset_of__ReliableMassageListeners_32() { return static_cast<int32_t>(offsetof(GooglePlayRTM_t547022790, ____ReliableMassageListeners_32)); }
	inline Dictionary_2_t351386314 * get__ReliableMassageListeners_32() const { return ____ReliableMassageListeners_32; }
	inline Dictionary_2_t351386314 ** get_address_of__ReliableMassageListeners_32() { return &____ReliableMassageListeners_32; }
	inline void set__ReliableMassageListeners_32(Dictionary_2_t351386314 * value)
	{
		____ReliableMassageListeners_32 = value;
		Il2CppCodeGenWriteBarrier(&____ReliableMassageListeners_32, value);
	}
};

struct GooglePlayRTM_t547022790_StaticFields
{
public:
	// System.Action`1<GP_RTM_Network_Package> GooglePlayRTM::ActionDataRecieved
	Action_1_t1852107251 * ___ActionDataRecieved_4;
	// System.Action`1<GP_RTM_Room> GooglePlayRTM::ActionRoomUpdated
	Action_1_t653403911 * ___ActionRoomUpdated_5;
	// System.Action`1<GP_RTM_ReliableMessageSentResult> GooglePlayRTM::ActionReliableMessageSent
	Action_1_t2545428778 * ___ActionReliableMessageSent_6;
	// System.Action`1<GP_RTM_ReliableMessageDeliveredResult> GooglePlayRTM::ActionReliableMessageDelivered
	Action_1_t1495869386 * ___ActionReliableMessageDelivered_7;
	// System.Action GooglePlayRTM::ActionConnectedToRoom
	Action_t3226471752 * ___ActionConnectedToRoom_8;
	// System.Action GooglePlayRTM::ActionDisconnectedFromRoom
	Action_t3226471752 * ___ActionDisconnectedFromRoom_9;
	// System.Action`1<System.String> GooglePlayRTM::ActionP2PConnected
	Action_1_t1831019615 * ___ActionP2PConnected_10;
	// System.Action`1<System.String> GooglePlayRTM::ActionP2PDisconnected
	Action_1_t1831019615 * ___ActionP2PDisconnected_11;
	// System.Action`1<System.String[]> GooglePlayRTM::ActionPeerDeclined
	Action_1_t1444185354 * ___ActionPeerDeclined_12;
	// System.Action`1<System.String[]> GooglePlayRTM::ActionPeerInvitedToRoom
	Action_1_t1444185354 * ___ActionPeerInvitedToRoom_13;
	// System.Action`1<System.String[]> GooglePlayRTM::ActionPeerJoined
	Action_1_t1444185354 * ___ActionPeerJoined_14;
	// System.Action`1<System.String[]> GooglePlayRTM::ActionPeerLeft
	Action_1_t1444185354 * ___ActionPeerLeft_15;
	// System.Action`1<System.String[]> GooglePlayRTM::ActionPeersConnected
	Action_1_t1444185354 * ___ActionPeersConnected_16;
	// System.Action`1<System.String[]> GooglePlayRTM::ActionPeersDisconnected
	Action_1_t1444185354 * ___ActionPeersDisconnected_17;
	// System.Action GooglePlayRTM::ActionRoomAutomatching
	Action_t3226471752 * ___ActionRoomAutomatching_18;
	// System.Action GooglePlayRTM::ActionRoomConnecting
	Action_t3226471752 * ___ActionRoomConnecting_19;
	// System.Action`1<GP_GamesStatusCodes> GooglePlayRTM::ActionJoinedRoom
	Action_1_t815305555 * ___ActionJoinedRoom_20;
	// System.Action`1<GP_RTM_Result> GooglePlayRTM::ActionLeftRoom
	Action_1_t275088661 * ___ActionLeftRoom_21;
	// System.Action`1<GP_GamesStatusCodes> GooglePlayRTM::ActionRoomConnected
	Action_1_t815305555 * ___ActionRoomConnected_22;
	// System.Action`1<GP_GamesStatusCodes> GooglePlayRTM::ActionRoomCreated
	Action_1_t815305555 * ___ActionRoomCreated_23;
	// System.Action`1<AndroidActivityResult> GooglePlayRTM::ActionInvitationBoxUIClosed
	Action_1_t3559310183 * ___ActionInvitationBoxUIClosed_24;
	// System.Action`1<AndroidActivityResult> GooglePlayRTM::ActionWatingRoomIntentClosed
	Action_1_t3559310183 * ___ActionWatingRoomIntentClosed_25;
	// System.Action`1<GP_Invite> GooglePlayRTM::ActionInvitationAccepted
	Action_1_t428728469 * ___ActionInvitationAccepted_26;
	// System.Action`1<GP_Invite> GooglePlayRTM::ActionInvitationReceived
	Action_1_t428728469 * ___ActionInvitationReceived_27;
	// System.Action`1<System.String> GooglePlayRTM::ActionInvitationRemoved
	Action_1_t1831019615 * ___ActionInvitationRemoved_28;

public:
	inline static int32_t get_offset_of_ActionDataRecieved_4() { return static_cast<int32_t>(offsetof(GooglePlayRTM_t547022790_StaticFields, ___ActionDataRecieved_4)); }
	inline Action_1_t1852107251 * get_ActionDataRecieved_4() const { return ___ActionDataRecieved_4; }
	inline Action_1_t1852107251 ** get_address_of_ActionDataRecieved_4() { return &___ActionDataRecieved_4; }
	inline void set_ActionDataRecieved_4(Action_1_t1852107251 * value)
	{
		___ActionDataRecieved_4 = value;
		Il2CppCodeGenWriteBarrier(&___ActionDataRecieved_4, value);
	}

	inline static int32_t get_offset_of_ActionRoomUpdated_5() { return static_cast<int32_t>(offsetof(GooglePlayRTM_t547022790_StaticFields, ___ActionRoomUpdated_5)); }
	inline Action_1_t653403911 * get_ActionRoomUpdated_5() const { return ___ActionRoomUpdated_5; }
	inline Action_1_t653403911 ** get_address_of_ActionRoomUpdated_5() { return &___ActionRoomUpdated_5; }
	inline void set_ActionRoomUpdated_5(Action_1_t653403911 * value)
	{
		___ActionRoomUpdated_5 = value;
		Il2CppCodeGenWriteBarrier(&___ActionRoomUpdated_5, value);
	}

	inline static int32_t get_offset_of_ActionReliableMessageSent_6() { return static_cast<int32_t>(offsetof(GooglePlayRTM_t547022790_StaticFields, ___ActionReliableMessageSent_6)); }
	inline Action_1_t2545428778 * get_ActionReliableMessageSent_6() const { return ___ActionReliableMessageSent_6; }
	inline Action_1_t2545428778 ** get_address_of_ActionReliableMessageSent_6() { return &___ActionReliableMessageSent_6; }
	inline void set_ActionReliableMessageSent_6(Action_1_t2545428778 * value)
	{
		___ActionReliableMessageSent_6 = value;
		Il2CppCodeGenWriteBarrier(&___ActionReliableMessageSent_6, value);
	}

	inline static int32_t get_offset_of_ActionReliableMessageDelivered_7() { return static_cast<int32_t>(offsetof(GooglePlayRTM_t547022790_StaticFields, ___ActionReliableMessageDelivered_7)); }
	inline Action_1_t1495869386 * get_ActionReliableMessageDelivered_7() const { return ___ActionReliableMessageDelivered_7; }
	inline Action_1_t1495869386 ** get_address_of_ActionReliableMessageDelivered_7() { return &___ActionReliableMessageDelivered_7; }
	inline void set_ActionReliableMessageDelivered_7(Action_1_t1495869386 * value)
	{
		___ActionReliableMessageDelivered_7 = value;
		Il2CppCodeGenWriteBarrier(&___ActionReliableMessageDelivered_7, value);
	}

	inline static int32_t get_offset_of_ActionConnectedToRoom_8() { return static_cast<int32_t>(offsetof(GooglePlayRTM_t547022790_StaticFields, ___ActionConnectedToRoom_8)); }
	inline Action_t3226471752 * get_ActionConnectedToRoom_8() const { return ___ActionConnectedToRoom_8; }
	inline Action_t3226471752 ** get_address_of_ActionConnectedToRoom_8() { return &___ActionConnectedToRoom_8; }
	inline void set_ActionConnectedToRoom_8(Action_t3226471752 * value)
	{
		___ActionConnectedToRoom_8 = value;
		Il2CppCodeGenWriteBarrier(&___ActionConnectedToRoom_8, value);
	}

	inline static int32_t get_offset_of_ActionDisconnectedFromRoom_9() { return static_cast<int32_t>(offsetof(GooglePlayRTM_t547022790_StaticFields, ___ActionDisconnectedFromRoom_9)); }
	inline Action_t3226471752 * get_ActionDisconnectedFromRoom_9() const { return ___ActionDisconnectedFromRoom_9; }
	inline Action_t3226471752 ** get_address_of_ActionDisconnectedFromRoom_9() { return &___ActionDisconnectedFromRoom_9; }
	inline void set_ActionDisconnectedFromRoom_9(Action_t3226471752 * value)
	{
		___ActionDisconnectedFromRoom_9 = value;
		Il2CppCodeGenWriteBarrier(&___ActionDisconnectedFromRoom_9, value);
	}

	inline static int32_t get_offset_of_ActionP2PConnected_10() { return static_cast<int32_t>(offsetof(GooglePlayRTM_t547022790_StaticFields, ___ActionP2PConnected_10)); }
	inline Action_1_t1831019615 * get_ActionP2PConnected_10() const { return ___ActionP2PConnected_10; }
	inline Action_1_t1831019615 ** get_address_of_ActionP2PConnected_10() { return &___ActionP2PConnected_10; }
	inline void set_ActionP2PConnected_10(Action_1_t1831019615 * value)
	{
		___ActionP2PConnected_10 = value;
		Il2CppCodeGenWriteBarrier(&___ActionP2PConnected_10, value);
	}

	inline static int32_t get_offset_of_ActionP2PDisconnected_11() { return static_cast<int32_t>(offsetof(GooglePlayRTM_t547022790_StaticFields, ___ActionP2PDisconnected_11)); }
	inline Action_1_t1831019615 * get_ActionP2PDisconnected_11() const { return ___ActionP2PDisconnected_11; }
	inline Action_1_t1831019615 ** get_address_of_ActionP2PDisconnected_11() { return &___ActionP2PDisconnected_11; }
	inline void set_ActionP2PDisconnected_11(Action_1_t1831019615 * value)
	{
		___ActionP2PDisconnected_11 = value;
		Il2CppCodeGenWriteBarrier(&___ActionP2PDisconnected_11, value);
	}

	inline static int32_t get_offset_of_ActionPeerDeclined_12() { return static_cast<int32_t>(offsetof(GooglePlayRTM_t547022790_StaticFields, ___ActionPeerDeclined_12)); }
	inline Action_1_t1444185354 * get_ActionPeerDeclined_12() const { return ___ActionPeerDeclined_12; }
	inline Action_1_t1444185354 ** get_address_of_ActionPeerDeclined_12() { return &___ActionPeerDeclined_12; }
	inline void set_ActionPeerDeclined_12(Action_1_t1444185354 * value)
	{
		___ActionPeerDeclined_12 = value;
		Il2CppCodeGenWriteBarrier(&___ActionPeerDeclined_12, value);
	}

	inline static int32_t get_offset_of_ActionPeerInvitedToRoom_13() { return static_cast<int32_t>(offsetof(GooglePlayRTM_t547022790_StaticFields, ___ActionPeerInvitedToRoom_13)); }
	inline Action_1_t1444185354 * get_ActionPeerInvitedToRoom_13() const { return ___ActionPeerInvitedToRoom_13; }
	inline Action_1_t1444185354 ** get_address_of_ActionPeerInvitedToRoom_13() { return &___ActionPeerInvitedToRoom_13; }
	inline void set_ActionPeerInvitedToRoom_13(Action_1_t1444185354 * value)
	{
		___ActionPeerInvitedToRoom_13 = value;
		Il2CppCodeGenWriteBarrier(&___ActionPeerInvitedToRoom_13, value);
	}

	inline static int32_t get_offset_of_ActionPeerJoined_14() { return static_cast<int32_t>(offsetof(GooglePlayRTM_t547022790_StaticFields, ___ActionPeerJoined_14)); }
	inline Action_1_t1444185354 * get_ActionPeerJoined_14() const { return ___ActionPeerJoined_14; }
	inline Action_1_t1444185354 ** get_address_of_ActionPeerJoined_14() { return &___ActionPeerJoined_14; }
	inline void set_ActionPeerJoined_14(Action_1_t1444185354 * value)
	{
		___ActionPeerJoined_14 = value;
		Il2CppCodeGenWriteBarrier(&___ActionPeerJoined_14, value);
	}

	inline static int32_t get_offset_of_ActionPeerLeft_15() { return static_cast<int32_t>(offsetof(GooglePlayRTM_t547022790_StaticFields, ___ActionPeerLeft_15)); }
	inline Action_1_t1444185354 * get_ActionPeerLeft_15() const { return ___ActionPeerLeft_15; }
	inline Action_1_t1444185354 ** get_address_of_ActionPeerLeft_15() { return &___ActionPeerLeft_15; }
	inline void set_ActionPeerLeft_15(Action_1_t1444185354 * value)
	{
		___ActionPeerLeft_15 = value;
		Il2CppCodeGenWriteBarrier(&___ActionPeerLeft_15, value);
	}

	inline static int32_t get_offset_of_ActionPeersConnected_16() { return static_cast<int32_t>(offsetof(GooglePlayRTM_t547022790_StaticFields, ___ActionPeersConnected_16)); }
	inline Action_1_t1444185354 * get_ActionPeersConnected_16() const { return ___ActionPeersConnected_16; }
	inline Action_1_t1444185354 ** get_address_of_ActionPeersConnected_16() { return &___ActionPeersConnected_16; }
	inline void set_ActionPeersConnected_16(Action_1_t1444185354 * value)
	{
		___ActionPeersConnected_16 = value;
		Il2CppCodeGenWriteBarrier(&___ActionPeersConnected_16, value);
	}

	inline static int32_t get_offset_of_ActionPeersDisconnected_17() { return static_cast<int32_t>(offsetof(GooglePlayRTM_t547022790_StaticFields, ___ActionPeersDisconnected_17)); }
	inline Action_1_t1444185354 * get_ActionPeersDisconnected_17() const { return ___ActionPeersDisconnected_17; }
	inline Action_1_t1444185354 ** get_address_of_ActionPeersDisconnected_17() { return &___ActionPeersDisconnected_17; }
	inline void set_ActionPeersDisconnected_17(Action_1_t1444185354 * value)
	{
		___ActionPeersDisconnected_17 = value;
		Il2CppCodeGenWriteBarrier(&___ActionPeersDisconnected_17, value);
	}

	inline static int32_t get_offset_of_ActionRoomAutomatching_18() { return static_cast<int32_t>(offsetof(GooglePlayRTM_t547022790_StaticFields, ___ActionRoomAutomatching_18)); }
	inline Action_t3226471752 * get_ActionRoomAutomatching_18() const { return ___ActionRoomAutomatching_18; }
	inline Action_t3226471752 ** get_address_of_ActionRoomAutomatching_18() { return &___ActionRoomAutomatching_18; }
	inline void set_ActionRoomAutomatching_18(Action_t3226471752 * value)
	{
		___ActionRoomAutomatching_18 = value;
		Il2CppCodeGenWriteBarrier(&___ActionRoomAutomatching_18, value);
	}

	inline static int32_t get_offset_of_ActionRoomConnecting_19() { return static_cast<int32_t>(offsetof(GooglePlayRTM_t547022790_StaticFields, ___ActionRoomConnecting_19)); }
	inline Action_t3226471752 * get_ActionRoomConnecting_19() const { return ___ActionRoomConnecting_19; }
	inline Action_t3226471752 ** get_address_of_ActionRoomConnecting_19() { return &___ActionRoomConnecting_19; }
	inline void set_ActionRoomConnecting_19(Action_t3226471752 * value)
	{
		___ActionRoomConnecting_19 = value;
		Il2CppCodeGenWriteBarrier(&___ActionRoomConnecting_19, value);
	}

	inline static int32_t get_offset_of_ActionJoinedRoom_20() { return static_cast<int32_t>(offsetof(GooglePlayRTM_t547022790_StaticFields, ___ActionJoinedRoom_20)); }
	inline Action_1_t815305555 * get_ActionJoinedRoom_20() const { return ___ActionJoinedRoom_20; }
	inline Action_1_t815305555 ** get_address_of_ActionJoinedRoom_20() { return &___ActionJoinedRoom_20; }
	inline void set_ActionJoinedRoom_20(Action_1_t815305555 * value)
	{
		___ActionJoinedRoom_20 = value;
		Il2CppCodeGenWriteBarrier(&___ActionJoinedRoom_20, value);
	}

	inline static int32_t get_offset_of_ActionLeftRoom_21() { return static_cast<int32_t>(offsetof(GooglePlayRTM_t547022790_StaticFields, ___ActionLeftRoom_21)); }
	inline Action_1_t275088661 * get_ActionLeftRoom_21() const { return ___ActionLeftRoom_21; }
	inline Action_1_t275088661 ** get_address_of_ActionLeftRoom_21() { return &___ActionLeftRoom_21; }
	inline void set_ActionLeftRoom_21(Action_1_t275088661 * value)
	{
		___ActionLeftRoom_21 = value;
		Il2CppCodeGenWriteBarrier(&___ActionLeftRoom_21, value);
	}

	inline static int32_t get_offset_of_ActionRoomConnected_22() { return static_cast<int32_t>(offsetof(GooglePlayRTM_t547022790_StaticFields, ___ActionRoomConnected_22)); }
	inline Action_1_t815305555 * get_ActionRoomConnected_22() const { return ___ActionRoomConnected_22; }
	inline Action_1_t815305555 ** get_address_of_ActionRoomConnected_22() { return &___ActionRoomConnected_22; }
	inline void set_ActionRoomConnected_22(Action_1_t815305555 * value)
	{
		___ActionRoomConnected_22 = value;
		Il2CppCodeGenWriteBarrier(&___ActionRoomConnected_22, value);
	}

	inline static int32_t get_offset_of_ActionRoomCreated_23() { return static_cast<int32_t>(offsetof(GooglePlayRTM_t547022790_StaticFields, ___ActionRoomCreated_23)); }
	inline Action_1_t815305555 * get_ActionRoomCreated_23() const { return ___ActionRoomCreated_23; }
	inline Action_1_t815305555 ** get_address_of_ActionRoomCreated_23() { return &___ActionRoomCreated_23; }
	inline void set_ActionRoomCreated_23(Action_1_t815305555 * value)
	{
		___ActionRoomCreated_23 = value;
		Il2CppCodeGenWriteBarrier(&___ActionRoomCreated_23, value);
	}

	inline static int32_t get_offset_of_ActionInvitationBoxUIClosed_24() { return static_cast<int32_t>(offsetof(GooglePlayRTM_t547022790_StaticFields, ___ActionInvitationBoxUIClosed_24)); }
	inline Action_1_t3559310183 * get_ActionInvitationBoxUIClosed_24() const { return ___ActionInvitationBoxUIClosed_24; }
	inline Action_1_t3559310183 ** get_address_of_ActionInvitationBoxUIClosed_24() { return &___ActionInvitationBoxUIClosed_24; }
	inline void set_ActionInvitationBoxUIClosed_24(Action_1_t3559310183 * value)
	{
		___ActionInvitationBoxUIClosed_24 = value;
		Il2CppCodeGenWriteBarrier(&___ActionInvitationBoxUIClosed_24, value);
	}

	inline static int32_t get_offset_of_ActionWatingRoomIntentClosed_25() { return static_cast<int32_t>(offsetof(GooglePlayRTM_t547022790_StaticFields, ___ActionWatingRoomIntentClosed_25)); }
	inline Action_1_t3559310183 * get_ActionWatingRoomIntentClosed_25() const { return ___ActionWatingRoomIntentClosed_25; }
	inline Action_1_t3559310183 ** get_address_of_ActionWatingRoomIntentClosed_25() { return &___ActionWatingRoomIntentClosed_25; }
	inline void set_ActionWatingRoomIntentClosed_25(Action_1_t3559310183 * value)
	{
		___ActionWatingRoomIntentClosed_25 = value;
		Il2CppCodeGenWriteBarrier(&___ActionWatingRoomIntentClosed_25, value);
	}

	inline static int32_t get_offset_of_ActionInvitationAccepted_26() { return static_cast<int32_t>(offsetof(GooglePlayRTM_t547022790_StaticFields, ___ActionInvitationAccepted_26)); }
	inline Action_1_t428728469 * get_ActionInvitationAccepted_26() const { return ___ActionInvitationAccepted_26; }
	inline Action_1_t428728469 ** get_address_of_ActionInvitationAccepted_26() { return &___ActionInvitationAccepted_26; }
	inline void set_ActionInvitationAccepted_26(Action_1_t428728469 * value)
	{
		___ActionInvitationAccepted_26 = value;
		Il2CppCodeGenWriteBarrier(&___ActionInvitationAccepted_26, value);
	}

	inline static int32_t get_offset_of_ActionInvitationReceived_27() { return static_cast<int32_t>(offsetof(GooglePlayRTM_t547022790_StaticFields, ___ActionInvitationReceived_27)); }
	inline Action_1_t428728469 * get_ActionInvitationReceived_27() const { return ___ActionInvitationReceived_27; }
	inline Action_1_t428728469 ** get_address_of_ActionInvitationReceived_27() { return &___ActionInvitationReceived_27; }
	inline void set_ActionInvitationReceived_27(Action_1_t428728469 * value)
	{
		___ActionInvitationReceived_27 = value;
		Il2CppCodeGenWriteBarrier(&___ActionInvitationReceived_27, value);
	}

	inline static int32_t get_offset_of_ActionInvitationRemoved_28() { return static_cast<int32_t>(offsetof(GooglePlayRTM_t547022790_StaticFields, ___ActionInvitationRemoved_28)); }
	inline Action_1_t1831019615 * get_ActionInvitationRemoved_28() const { return ___ActionInvitationRemoved_28; }
	inline Action_1_t1831019615 ** get_address_of_ActionInvitationRemoved_28() { return &___ActionInvitationRemoved_28; }
	inline void set_ActionInvitationRemoved_28(Action_1_t1831019615 * value)
	{
		___ActionInvitationRemoved_28 = value;
		Il2CppCodeGenWriteBarrier(&___ActionInvitationRemoved_28, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
