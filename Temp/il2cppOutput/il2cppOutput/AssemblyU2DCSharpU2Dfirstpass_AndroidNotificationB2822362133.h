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
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// AndroidNotificationBuilder/NotificationColor
struct NotificationColor_t1363651954;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AndroidNotificationBuilder
struct  AndroidNotificationBuilder_t2822362133  : public Il2CppObject
{
public:
	// System.Int32 AndroidNotificationBuilder::_id
	int32_t ____id_0;
	// System.String AndroidNotificationBuilder::_title
	String_t* ____title_1;
	// System.String AndroidNotificationBuilder::_message
	String_t* ____message_2;
	// System.Int32 AndroidNotificationBuilder::_time
	int32_t ____time_3;
	// System.String AndroidNotificationBuilder::_sound
	String_t* ____sound_4;
	// System.String AndroidNotificationBuilder::_smallIcon
	String_t* ____smallIcon_5;
	// System.Boolean AndroidNotificationBuilder::_vibration
	bool ____vibration_6;
	// System.Boolean AndroidNotificationBuilder::_showIfAppForeground
	bool ____showIfAppForeground_7;
	// System.Boolean AndroidNotificationBuilder::_repeating
	bool ____repeating_8;
	// System.Int32 AndroidNotificationBuilder::_repeatDelay
	int32_t ____repeatDelay_9;
	// System.String AndroidNotificationBuilder::_largeIcon
	String_t* ____largeIcon_10;
	// UnityEngine.Texture2D AndroidNotificationBuilder::_bigPicture
	Texture2D_t3542995729 * ____bigPicture_11;
	// AndroidNotificationBuilder/NotificationColor AndroidNotificationBuilder::_color
	NotificationColor_t1363651954 * ____color_12;
	// System.Int32 AndroidNotificationBuilder::_wakeLockTime
	int32_t ____wakeLockTime_13;

public:
	inline static int32_t get_offset_of__id_0() { return static_cast<int32_t>(offsetof(AndroidNotificationBuilder_t2822362133, ____id_0)); }
	inline int32_t get__id_0() const { return ____id_0; }
	inline int32_t* get_address_of__id_0() { return &____id_0; }
	inline void set__id_0(int32_t value)
	{
		____id_0 = value;
	}

	inline static int32_t get_offset_of__title_1() { return static_cast<int32_t>(offsetof(AndroidNotificationBuilder_t2822362133, ____title_1)); }
	inline String_t* get__title_1() const { return ____title_1; }
	inline String_t** get_address_of__title_1() { return &____title_1; }
	inline void set__title_1(String_t* value)
	{
		____title_1 = value;
		Il2CppCodeGenWriteBarrier(&____title_1, value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(AndroidNotificationBuilder_t2822362133, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier(&____message_2, value);
	}

	inline static int32_t get_offset_of__time_3() { return static_cast<int32_t>(offsetof(AndroidNotificationBuilder_t2822362133, ____time_3)); }
	inline int32_t get__time_3() const { return ____time_3; }
	inline int32_t* get_address_of__time_3() { return &____time_3; }
	inline void set__time_3(int32_t value)
	{
		____time_3 = value;
	}

	inline static int32_t get_offset_of__sound_4() { return static_cast<int32_t>(offsetof(AndroidNotificationBuilder_t2822362133, ____sound_4)); }
	inline String_t* get__sound_4() const { return ____sound_4; }
	inline String_t** get_address_of__sound_4() { return &____sound_4; }
	inline void set__sound_4(String_t* value)
	{
		____sound_4 = value;
		Il2CppCodeGenWriteBarrier(&____sound_4, value);
	}

	inline static int32_t get_offset_of__smallIcon_5() { return static_cast<int32_t>(offsetof(AndroidNotificationBuilder_t2822362133, ____smallIcon_5)); }
	inline String_t* get__smallIcon_5() const { return ____smallIcon_5; }
	inline String_t** get_address_of__smallIcon_5() { return &____smallIcon_5; }
	inline void set__smallIcon_5(String_t* value)
	{
		____smallIcon_5 = value;
		Il2CppCodeGenWriteBarrier(&____smallIcon_5, value);
	}

	inline static int32_t get_offset_of__vibration_6() { return static_cast<int32_t>(offsetof(AndroidNotificationBuilder_t2822362133, ____vibration_6)); }
	inline bool get__vibration_6() const { return ____vibration_6; }
	inline bool* get_address_of__vibration_6() { return &____vibration_6; }
	inline void set__vibration_6(bool value)
	{
		____vibration_6 = value;
	}

	inline static int32_t get_offset_of__showIfAppForeground_7() { return static_cast<int32_t>(offsetof(AndroidNotificationBuilder_t2822362133, ____showIfAppForeground_7)); }
	inline bool get__showIfAppForeground_7() const { return ____showIfAppForeground_7; }
	inline bool* get_address_of__showIfAppForeground_7() { return &____showIfAppForeground_7; }
	inline void set__showIfAppForeground_7(bool value)
	{
		____showIfAppForeground_7 = value;
	}

	inline static int32_t get_offset_of__repeating_8() { return static_cast<int32_t>(offsetof(AndroidNotificationBuilder_t2822362133, ____repeating_8)); }
	inline bool get__repeating_8() const { return ____repeating_8; }
	inline bool* get_address_of__repeating_8() { return &____repeating_8; }
	inline void set__repeating_8(bool value)
	{
		____repeating_8 = value;
	}

	inline static int32_t get_offset_of__repeatDelay_9() { return static_cast<int32_t>(offsetof(AndroidNotificationBuilder_t2822362133, ____repeatDelay_9)); }
	inline int32_t get__repeatDelay_9() const { return ____repeatDelay_9; }
	inline int32_t* get_address_of__repeatDelay_9() { return &____repeatDelay_9; }
	inline void set__repeatDelay_9(int32_t value)
	{
		____repeatDelay_9 = value;
	}

	inline static int32_t get_offset_of__largeIcon_10() { return static_cast<int32_t>(offsetof(AndroidNotificationBuilder_t2822362133, ____largeIcon_10)); }
	inline String_t* get__largeIcon_10() const { return ____largeIcon_10; }
	inline String_t** get_address_of__largeIcon_10() { return &____largeIcon_10; }
	inline void set__largeIcon_10(String_t* value)
	{
		____largeIcon_10 = value;
		Il2CppCodeGenWriteBarrier(&____largeIcon_10, value);
	}

	inline static int32_t get_offset_of__bigPicture_11() { return static_cast<int32_t>(offsetof(AndroidNotificationBuilder_t2822362133, ____bigPicture_11)); }
	inline Texture2D_t3542995729 * get__bigPicture_11() const { return ____bigPicture_11; }
	inline Texture2D_t3542995729 ** get_address_of__bigPicture_11() { return &____bigPicture_11; }
	inline void set__bigPicture_11(Texture2D_t3542995729 * value)
	{
		____bigPicture_11 = value;
		Il2CppCodeGenWriteBarrier(&____bigPicture_11, value);
	}

	inline static int32_t get_offset_of__color_12() { return static_cast<int32_t>(offsetof(AndroidNotificationBuilder_t2822362133, ____color_12)); }
	inline NotificationColor_t1363651954 * get__color_12() const { return ____color_12; }
	inline NotificationColor_t1363651954 ** get_address_of__color_12() { return &____color_12; }
	inline void set__color_12(NotificationColor_t1363651954 * value)
	{
		____color_12 = value;
		Il2CppCodeGenWriteBarrier(&____color_12, value);
	}

	inline static int32_t get_offset_of__wakeLockTime_13() { return static_cast<int32_t>(offsetof(AndroidNotificationBuilder_t2822362133, ____wakeLockTime_13)); }
	inline int32_t get__wakeLockTime_13() const { return ____wakeLockTime_13; }
	inline int32_t* get_address_of__wakeLockTime_13() { return &____wakeLockTime_13; }
	inline void set__wakeLockTime_13(int32_t value)
	{
		____wakeLockTime_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
