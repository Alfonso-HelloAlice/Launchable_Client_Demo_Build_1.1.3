#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_DateTime693205669.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LocalNotificationTemplate
struct  LocalNotificationTemplate_t2880890350  : public Il2CppObject
{
public:
	// System.Int32 LocalNotificationTemplate::_id
	int32_t ____id_0;
	// System.String LocalNotificationTemplate::_title
	String_t* ____title_1;
	// System.String LocalNotificationTemplate::_message
	String_t* ____message_2;
	// System.DateTime LocalNotificationTemplate::_fireDate
	DateTime_t693205669  ____fireDate_3;

public:
	inline static int32_t get_offset_of__id_0() { return static_cast<int32_t>(offsetof(LocalNotificationTemplate_t2880890350, ____id_0)); }
	inline int32_t get__id_0() const { return ____id_0; }
	inline int32_t* get_address_of__id_0() { return &____id_0; }
	inline void set__id_0(int32_t value)
	{
		____id_0 = value;
	}

	inline static int32_t get_offset_of__title_1() { return static_cast<int32_t>(offsetof(LocalNotificationTemplate_t2880890350, ____title_1)); }
	inline String_t* get__title_1() const { return ____title_1; }
	inline String_t** get_address_of__title_1() { return &____title_1; }
	inline void set__title_1(String_t* value)
	{
		____title_1 = value;
		Il2CppCodeGenWriteBarrier(&____title_1, value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(LocalNotificationTemplate_t2880890350, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier(&____message_2, value);
	}

	inline static int32_t get_offset_of__fireDate_3() { return static_cast<int32_t>(offsetof(LocalNotificationTemplate_t2880890350, ____fireDate_3)); }
	inline DateTime_t693205669  get__fireDate_3() const { return ____fireDate_3; }
	inline DateTime_t693205669 * get_address_of__fireDate_3() { return &____fireDate_3; }
	inline void set__fireDate_3(DateTime_t693205669  value)
	{
		____fireDate_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
