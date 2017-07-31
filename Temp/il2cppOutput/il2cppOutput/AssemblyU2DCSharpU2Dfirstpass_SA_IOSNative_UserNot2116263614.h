#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// SA.IOSNative.UserNotifications.NotificationContent
struct NotificationContent_t711135206;
// SA.IOSNative.UserNotifications.NotificationTrigger
struct NotificationTrigger_t1848546141;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.IOSNative.UserNotifications.NotificationRequest
struct  NotificationRequest_t2116263614  : public Il2CppObject
{
public:
	// System.String SA.IOSNative.UserNotifications.NotificationRequest::_Id
	String_t* ____Id_0;
	// SA.IOSNative.UserNotifications.NotificationContent SA.IOSNative.UserNotifications.NotificationRequest::_Content
	NotificationContent_t711135206 * ____Content_1;
	// SA.IOSNative.UserNotifications.NotificationTrigger SA.IOSNative.UserNotifications.NotificationRequest::_Trigger
	NotificationTrigger_t1848546141 * ____Trigger_2;

public:
	inline static int32_t get_offset_of__Id_0() { return static_cast<int32_t>(offsetof(NotificationRequest_t2116263614, ____Id_0)); }
	inline String_t* get__Id_0() const { return ____Id_0; }
	inline String_t** get_address_of__Id_0() { return &____Id_0; }
	inline void set__Id_0(String_t* value)
	{
		____Id_0 = value;
		Il2CppCodeGenWriteBarrier(&____Id_0, value);
	}

	inline static int32_t get_offset_of__Content_1() { return static_cast<int32_t>(offsetof(NotificationRequest_t2116263614, ____Content_1)); }
	inline NotificationContent_t711135206 * get__Content_1() const { return ____Content_1; }
	inline NotificationContent_t711135206 ** get_address_of__Content_1() { return &____Content_1; }
	inline void set__Content_1(NotificationContent_t711135206 * value)
	{
		____Content_1 = value;
		Il2CppCodeGenWriteBarrier(&____Content_1, value);
	}

	inline static int32_t get_offset_of__Trigger_2() { return static_cast<int32_t>(offsetof(NotificationRequest_t2116263614, ____Trigger_2)); }
	inline NotificationTrigger_t1848546141 * get__Trigger_2() const { return ____Trigger_2; }
	inline NotificationTrigger_t1848546141 ** get_address_of__Trigger_2() { return &____Trigger_2; }
	inline void set__Trigger_2(NotificationTrigger_t1848546141 * value)
	{
		____Trigger_2 = value;
		Il2CppCodeGenWriteBarrier(&____Trigger_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
