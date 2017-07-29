#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<SA.Common.Models.Result>>
struct Dictionary_2_t1708831091;
// System.Action`1<System.Collections.Generic.List`1<SA.IOSNative.UserNotifications.NotificationRequest>>
struct Action_1_t1287184128;
// System.Action`1<SA.Common.Models.Result>
struct Action_1_t4089019125;
// SA.IOSNative.UserNotifications.NotificationRequest
struct NotificationRequest_t2116263614;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.IOSNative.UserNotifications.NotificationCenter
struct  NotificationCenter_t2404264268  : public Il2CppObject
{
public:

public:
};

struct NotificationCenter_t2404264268_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<SA.Common.Models.Result>> SA.IOSNative.UserNotifications.NotificationCenter::OnCallbackDictionary
	Dictionary_2_t1708831091 * ___OnCallbackDictionary_0;
	// System.Action`1<System.Collections.Generic.List`1<SA.IOSNative.UserNotifications.NotificationRequest>> SA.IOSNative.UserNotifications.NotificationCenter::OnPendingNotificationsCallback
	Action_1_t1287184128 * ___OnPendingNotificationsCallback_1;
	// System.Action`1<SA.Common.Models.Result> SA.IOSNative.UserNotifications.NotificationCenter::RequestPermissionsCallback
	Action_1_t4089019125 * ___RequestPermissionsCallback_2;
	// SA.IOSNative.UserNotifications.NotificationRequest SA.IOSNative.UserNotifications.NotificationCenter::launchNotificationRequest
	NotificationRequest_t2116263614 * ___launchNotificationRequest_3;

public:
	inline static int32_t get_offset_of_OnCallbackDictionary_0() { return static_cast<int32_t>(offsetof(NotificationCenter_t2404264268_StaticFields, ___OnCallbackDictionary_0)); }
	inline Dictionary_2_t1708831091 * get_OnCallbackDictionary_0() const { return ___OnCallbackDictionary_0; }
	inline Dictionary_2_t1708831091 ** get_address_of_OnCallbackDictionary_0() { return &___OnCallbackDictionary_0; }
	inline void set_OnCallbackDictionary_0(Dictionary_2_t1708831091 * value)
	{
		___OnCallbackDictionary_0 = value;
		Il2CppCodeGenWriteBarrier(&___OnCallbackDictionary_0, value);
	}

	inline static int32_t get_offset_of_OnPendingNotificationsCallback_1() { return static_cast<int32_t>(offsetof(NotificationCenter_t2404264268_StaticFields, ___OnPendingNotificationsCallback_1)); }
	inline Action_1_t1287184128 * get_OnPendingNotificationsCallback_1() const { return ___OnPendingNotificationsCallback_1; }
	inline Action_1_t1287184128 ** get_address_of_OnPendingNotificationsCallback_1() { return &___OnPendingNotificationsCallback_1; }
	inline void set_OnPendingNotificationsCallback_1(Action_1_t1287184128 * value)
	{
		___OnPendingNotificationsCallback_1 = value;
		Il2CppCodeGenWriteBarrier(&___OnPendingNotificationsCallback_1, value);
	}

	inline static int32_t get_offset_of_RequestPermissionsCallback_2() { return static_cast<int32_t>(offsetof(NotificationCenter_t2404264268_StaticFields, ___RequestPermissionsCallback_2)); }
	inline Action_1_t4089019125 * get_RequestPermissionsCallback_2() const { return ___RequestPermissionsCallback_2; }
	inline Action_1_t4089019125 ** get_address_of_RequestPermissionsCallback_2() { return &___RequestPermissionsCallback_2; }
	inline void set_RequestPermissionsCallback_2(Action_1_t4089019125 * value)
	{
		___RequestPermissionsCallback_2 = value;
		Il2CppCodeGenWriteBarrier(&___RequestPermissionsCallback_2, value);
	}

	inline static int32_t get_offset_of_launchNotificationRequest_3() { return static_cast<int32_t>(offsetof(NotificationCenter_t2404264268_StaticFields, ___launchNotificationRequest_3)); }
	inline NotificationRequest_t2116263614 * get_launchNotificationRequest_3() const { return ___launchNotificationRequest_3; }
	inline NotificationRequest_t2116263614 ** get_address_of_launchNotificationRequest_3() { return &___launchNotificationRequest_3; }
	inline void set_launchNotificationRequest_3(NotificationRequest_t2116263614 * value)
	{
		___launchNotificationRequest_3 = value;
		Il2CppCodeGenWriteBarrier(&___launchNotificationRequest_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
