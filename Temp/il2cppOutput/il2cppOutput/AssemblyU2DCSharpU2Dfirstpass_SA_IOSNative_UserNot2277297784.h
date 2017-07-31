#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_IOSNative_UserNot1848546141.h"

// SA.IOSNative.UserNotifications.DateComponents
struct DateComponents_t180751194;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.IOSNative.UserNotifications.CalendarTrigger
struct  CalendarTrigger_t2277297784  : public NotificationTrigger_t1848546141
{
public:
	// SA.IOSNative.UserNotifications.DateComponents SA.IOSNative.UserNotifications.CalendarTrigger::ComponentsOfDateToFire
	DateComponents_t180751194 * ___ComponentsOfDateToFire_1;

public:
	inline static int32_t get_offset_of_ComponentsOfDateToFire_1() { return static_cast<int32_t>(offsetof(CalendarTrigger_t2277297784, ___ComponentsOfDateToFire_1)); }
	inline DateComponents_t180751194 * get_ComponentsOfDateToFire_1() const { return ___ComponentsOfDateToFire_1; }
	inline DateComponents_t180751194 ** get_address_of_ComponentsOfDateToFire_1() { return &___ComponentsOfDateToFire_1; }
	inline void set_ComponentsOfDateToFire_1(DateComponents_t180751194 * value)
	{
		___ComponentsOfDateToFire_1 = value;
		Il2CppCodeGenWriteBarrier(&___ComponentsOfDateToFire_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
