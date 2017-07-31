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
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.IOSNative.UserNotifications.NotificationContent
struct  NotificationContent_t711135206  : public Il2CppObject
{
public:
	// System.String SA.IOSNative.UserNotifications.NotificationContent::Title
	String_t* ___Title_0;
	// System.String SA.IOSNative.UserNotifications.NotificationContent::Subtitle
	String_t* ___Subtitle_1;
	// System.String SA.IOSNative.UserNotifications.NotificationContent::Body
	String_t* ___Body_2;
	// System.Int32 SA.IOSNative.UserNotifications.NotificationContent::Badge
	int32_t ___Badge_3;
	// System.String SA.IOSNative.UserNotifications.NotificationContent::LaunchImageName
	String_t* ___LaunchImageName_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> SA.IOSNative.UserNotifications.NotificationContent::UserInfo
	Dictionary_2_t309261261 * ___UserInfo_5;

public:
	inline static int32_t get_offset_of_Title_0() { return static_cast<int32_t>(offsetof(NotificationContent_t711135206, ___Title_0)); }
	inline String_t* get_Title_0() const { return ___Title_0; }
	inline String_t** get_address_of_Title_0() { return &___Title_0; }
	inline void set_Title_0(String_t* value)
	{
		___Title_0 = value;
		Il2CppCodeGenWriteBarrier(&___Title_0, value);
	}

	inline static int32_t get_offset_of_Subtitle_1() { return static_cast<int32_t>(offsetof(NotificationContent_t711135206, ___Subtitle_1)); }
	inline String_t* get_Subtitle_1() const { return ___Subtitle_1; }
	inline String_t** get_address_of_Subtitle_1() { return &___Subtitle_1; }
	inline void set_Subtitle_1(String_t* value)
	{
		___Subtitle_1 = value;
		Il2CppCodeGenWriteBarrier(&___Subtitle_1, value);
	}

	inline static int32_t get_offset_of_Body_2() { return static_cast<int32_t>(offsetof(NotificationContent_t711135206, ___Body_2)); }
	inline String_t* get_Body_2() const { return ___Body_2; }
	inline String_t** get_address_of_Body_2() { return &___Body_2; }
	inline void set_Body_2(String_t* value)
	{
		___Body_2 = value;
		Il2CppCodeGenWriteBarrier(&___Body_2, value);
	}

	inline static int32_t get_offset_of_Badge_3() { return static_cast<int32_t>(offsetof(NotificationContent_t711135206, ___Badge_3)); }
	inline int32_t get_Badge_3() const { return ___Badge_3; }
	inline int32_t* get_address_of_Badge_3() { return &___Badge_3; }
	inline void set_Badge_3(int32_t value)
	{
		___Badge_3 = value;
	}

	inline static int32_t get_offset_of_LaunchImageName_4() { return static_cast<int32_t>(offsetof(NotificationContent_t711135206, ___LaunchImageName_4)); }
	inline String_t* get_LaunchImageName_4() const { return ___LaunchImageName_4; }
	inline String_t** get_address_of_LaunchImageName_4() { return &___LaunchImageName_4; }
	inline void set_LaunchImageName_4(String_t* value)
	{
		___LaunchImageName_4 = value;
		Il2CppCodeGenWriteBarrier(&___LaunchImageName_4, value);
	}

	inline static int32_t get_offset_of_UserInfo_5() { return static_cast<int32_t>(offsetof(NotificationContent_t711135206, ___UserInfo_5)); }
	inline Dictionary_2_t309261261 * get_UserInfo_5() const { return ___UserInfo_5; }
	inline Dictionary_2_t309261261 ** get_address_of_UserInfo_5() { return &___UserInfo_5; }
	inline void set_UserInfo_5(Dictionary_2_t309261261 * value)
	{
		___UserInfo_5 = value;
		Il2CppCodeGenWriteBarrier(&___UserInfo_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
