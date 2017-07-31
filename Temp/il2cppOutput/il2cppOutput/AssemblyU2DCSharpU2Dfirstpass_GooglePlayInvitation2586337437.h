#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Pattern_Si3068902542.h"

// System.Action`1<GP_Invite>
struct Action_1_t428728469;
// System.Action`1<System.Collections.Generic.List`1<GP_Invite>>
struct Action_1_t4092816897;
// System.Action`1<AN_InvitationInboxCloseResult>
struct Action_1_t1085927992;
// System.Action`1<System.String>
struct Action_1_t1831019615;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayInvitationManager
struct  GooglePlayInvitationManager_t2586337437  : public Singleton_1_t3068902542
{
public:

public:
};

struct GooglePlayInvitationManager_t2586337437_StaticFields
{
public:
	// System.Action`1<GP_Invite> GooglePlayInvitationManager::ActionInvitationReceived
	Action_1_t428728469 * ___ActionInvitationReceived_4;
	// System.Action`1<GP_Invite> GooglePlayInvitationManager::ActionInvitationAccepted
	Action_1_t428728469 * ___ActionInvitationAccepted_5;
	// System.Action`1<System.Collections.Generic.List`1<GP_Invite>> GooglePlayInvitationManager::ActionInvitationsListLoaded
	Action_1_t4092816897 * ___ActionInvitationsListLoaded_6;
	// System.Action`1<AN_InvitationInboxCloseResult> GooglePlayInvitationManager::ActionInvitationInboxClosed
	Action_1_t1085927992 * ___ActionInvitationInboxClosed_7;
	// System.Action`1<System.String> GooglePlayInvitationManager::ActionInvitationRemoved
	Action_1_t1831019615 * ___ActionInvitationRemoved_8;

public:
	inline static int32_t get_offset_of_ActionInvitationReceived_4() { return static_cast<int32_t>(offsetof(GooglePlayInvitationManager_t2586337437_StaticFields, ___ActionInvitationReceived_4)); }
	inline Action_1_t428728469 * get_ActionInvitationReceived_4() const { return ___ActionInvitationReceived_4; }
	inline Action_1_t428728469 ** get_address_of_ActionInvitationReceived_4() { return &___ActionInvitationReceived_4; }
	inline void set_ActionInvitationReceived_4(Action_1_t428728469 * value)
	{
		___ActionInvitationReceived_4 = value;
		Il2CppCodeGenWriteBarrier(&___ActionInvitationReceived_4, value);
	}

	inline static int32_t get_offset_of_ActionInvitationAccepted_5() { return static_cast<int32_t>(offsetof(GooglePlayInvitationManager_t2586337437_StaticFields, ___ActionInvitationAccepted_5)); }
	inline Action_1_t428728469 * get_ActionInvitationAccepted_5() const { return ___ActionInvitationAccepted_5; }
	inline Action_1_t428728469 ** get_address_of_ActionInvitationAccepted_5() { return &___ActionInvitationAccepted_5; }
	inline void set_ActionInvitationAccepted_5(Action_1_t428728469 * value)
	{
		___ActionInvitationAccepted_5 = value;
		Il2CppCodeGenWriteBarrier(&___ActionInvitationAccepted_5, value);
	}

	inline static int32_t get_offset_of_ActionInvitationsListLoaded_6() { return static_cast<int32_t>(offsetof(GooglePlayInvitationManager_t2586337437_StaticFields, ___ActionInvitationsListLoaded_6)); }
	inline Action_1_t4092816897 * get_ActionInvitationsListLoaded_6() const { return ___ActionInvitationsListLoaded_6; }
	inline Action_1_t4092816897 ** get_address_of_ActionInvitationsListLoaded_6() { return &___ActionInvitationsListLoaded_6; }
	inline void set_ActionInvitationsListLoaded_6(Action_1_t4092816897 * value)
	{
		___ActionInvitationsListLoaded_6 = value;
		Il2CppCodeGenWriteBarrier(&___ActionInvitationsListLoaded_6, value);
	}

	inline static int32_t get_offset_of_ActionInvitationInboxClosed_7() { return static_cast<int32_t>(offsetof(GooglePlayInvitationManager_t2586337437_StaticFields, ___ActionInvitationInboxClosed_7)); }
	inline Action_1_t1085927992 * get_ActionInvitationInboxClosed_7() const { return ___ActionInvitationInboxClosed_7; }
	inline Action_1_t1085927992 ** get_address_of_ActionInvitationInboxClosed_7() { return &___ActionInvitationInboxClosed_7; }
	inline void set_ActionInvitationInboxClosed_7(Action_1_t1085927992 * value)
	{
		___ActionInvitationInboxClosed_7 = value;
		Il2CppCodeGenWriteBarrier(&___ActionInvitationInboxClosed_7, value);
	}

	inline static int32_t get_offset_of_ActionInvitationRemoved_8() { return static_cast<int32_t>(offsetof(GooglePlayInvitationManager_t2586337437_StaticFields, ___ActionInvitationRemoved_8)); }
	inline Action_1_t1831019615 * get_ActionInvitationRemoved_8() const { return ___ActionInvitationRemoved_8; }
	inline Action_1_t1831019615 ** get_address_of_ActionInvitationRemoved_8() { return &___ActionInvitationRemoved_8; }
	inline void set_ActionInvitationRemoved_8(Action_1_t1831019615 * value)
	{
		___ActionInvitationRemoved_8 = value;
		Il2CppCodeGenWriteBarrier(&___ActionInvitationRemoved_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
