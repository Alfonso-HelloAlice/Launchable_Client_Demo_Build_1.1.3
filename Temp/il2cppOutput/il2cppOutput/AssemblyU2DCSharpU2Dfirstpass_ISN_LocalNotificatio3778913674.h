#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Pattern_Si4261478779.h"

// System.String
struct String_t;
// ISN_LocalNotification
struct ISN_LocalNotification_t273186689;
// System.Action`1<SA.Common.Models.Result>
struct Action_1_t4089019125;
// System.Action`1<ISN_LocalNotification>
struct Action_1_t74986071;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ISN_LocalNotificationsController
struct  ISN_LocalNotificationsController_t3778913674  : public Singleton_1_t4261478779
{
public:
	// ISN_LocalNotification ISN_LocalNotificationsController::_LaunchNotification
	ISN_LocalNotification_t273186689 * ____LaunchNotification_6;

public:
	inline static int32_t get_offset_of__LaunchNotification_6() { return static_cast<int32_t>(offsetof(ISN_LocalNotificationsController_t3778913674, ____LaunchNotification_6)); }
	inline ISN_LocalNotification_t273186689 * get__LaunchNotification_6() const { return ____LaunchNotification_6; }
	inline ISN_LocalNotification_t273186689 ** get_address_of__LaunchNotification_6() { return &____LaunchNotification_6; }
	inline void set__LaunchNotification_6(ISN_LocalNotification_t273186689 * value)
	{
		____LaunchNotification_6 = value;
		Il2CppCodeGenWriteBarrier(&____LaunchNotification_6, value);
	}
};

struct ISN_LocalNotificationsController_t3778913674_StaticFields
{
public:
	// System.Action`1<SA.Common.Models.Result> ISN_LocalNotificationsController::OnNotificationScheduleResult
	Action_1_t4089019125 * ___OnNotificationScheduleResult_7;
	// System.Action`1<ISN_LocalNotification> ISN_LocalNotificationsController::OnLocalNotificationReceived
	Action_1_t74986071 * ___OnLocalNotificationReceived_8;

public:
	inline static int32_t get_offset_of_OnNotificationScheduleResult_7() { return static_cast<int32_t>(offsetof(ISN_LocalNotificationsController_t3778913674_StaticFields, ___OnNotificationScheduleResult_7)); }
	inline Action_1_t4089019125 * get_OnNotificationScheduleResult_7() const { return ___OnNotificationScheduleResult_7; }
	inline Action_1_t4089019125 ** get_address_of_OnNotificationScheduleResult_7() { return &___OnNotificationScheduleResult_7; }
	inline void set_OnNotificationScheduleResult_7(Action_1_t4089019125 * value)
	{
		___OnNotificationScheduleResult_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnNotificationScheduleResult_7, value);
	}

	inline static int32_t get_offset_of_OnLocalNotificationReceived_8() { return static_cast<int32_t>(offsetof(ISN_LocalNotificationsController_t3778913674_StaticFields, ___OnLocalNotificationReceived_8)); }
	inline Action_1_t74986071 * get_OnLocalNotificationReceived_8() const { return ___OnLocalNotificationReceived_8; }
	inline Action_1_t74986071 ** get_address_of_OnLocalNotificationReceived_8() { return &___OnLocalNotificationReceived_8; }
	inline void set_OnLocalNotificationReceived_8(Action_1_t74986071 * value)
	{
		___OnLocalNotificationReceived_8 = value;
		Il2CppCodeGenWriteBarrier(&___OnLocalNotificationReceived_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
