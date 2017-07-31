#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Pattern_Si2392571180.h"

// System.Action`1<ISN_RemoteNotificationsRegistrationResult>
struct Action_1_t3137674533;
// ISN_RemoteNotification
struct ISN_RemoteNotification_t1449597314;
// System.Action`1<ISN_RemoteNotification>
struct Action_1_t1251396696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ISN_RemoteNotificationsController
struct  ISN_RemoteNotificationsController_t1910006075  : public Singleton_1_t2392571180
{
public:
	// ISN_RemoteNotification ISN_RemoteNotificationsController::_LaunchNotification
	ISN_RemoteNotification_t1449597314 * ____LaunchNotification_5;

public:
	inline static int32_t get_offset_of__LaunchNotification_5() { return static_cast<int32_t>(offsetof(ISN_RemoteNotificationsController_t1910006075, ____LaunchNotification_5)); }
	inline ISN_RemoteNotification_t1449597314 * get__LaunchNotification_5() const { return ____LaunchNotification_5; }
	inline ISN_RemoteNotification_t1449597314 ** get_address_of__LaunchNotification_5() { return &____LaunchNotification_5; }
	inline void set__LaunchNotification_5(ISN_RemoteNotification_t1449597314 * value)
	{
		____LaunchNotification_5 = value;
		Il2CppCodeGenWriteBarrier(&____LaunchNotification_5, value);
	}
};

struct ISN_RemoteNotificationsController_t1910006075_StaticFields
{
public:
	// System.Action`1<ISN_RemoteNotificationsRegistrationResult> ISN_RemoteNotificationsController::_RegistrationCallback
	Action_1_t3137674533 * ____RegistrationCallback_4;
	// System.Action`1<ISN_RemoteNotification> ISN_RemoteNotificationsController::OnRemoteNotificationReceived
	Action_1_t1251396696 * ___OnRemoteNotificationReceived_6;

public:
	inline static int32_t get_offset_of__RegistrationCallback_4() { return static_cast<int32_t>(offsetof(ISN_RemoteNotificationsController_t1910006075_StaticFields, ____RegistrationCallback_4)); }
	inline Action_1_t3137674533 * get__RegistrationCallback_4() const { return ____RegistrationCallback_4; }
	inline Action_1_t3137674533 ** get_address_of__RegistrationCallback_4() { return &____RegistrationCallback_4; }
	inline void set__RegistrationCallback_4(Action_1_t3137674533 * value)
	{
		____RegistrationCallback_4 = value;
		Il2CppCodeGenWriteBarrier(&____RegistrationCallback_4, value);
	}

	inline static int32_t get_offset_of_OnRemoteNotificationReceived_6() { return static_cast<int32_t>(offsetof(ISN_RemoteNotificationsController_t1910006075_StaticFields, ___OnRemoteNotificationReceived_6)); }
	inline Action_1_t1251396696 * get_OnRemoteNotificationReceived_6() const { return ___OnRemoteNotificationReceived_6; }
	inline Action_1_t1251396696 ** get_address_of_OnRemoteNotificationReceived_6() { return &___OnRemoteNotificationReceived_6; }
	inline void set_OnRemoteNotificationReceived_6(Action_1_t1251396696 * value)
	{
		___OnRemoteNotificationReceived_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnRemoteNotificationReceived_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
