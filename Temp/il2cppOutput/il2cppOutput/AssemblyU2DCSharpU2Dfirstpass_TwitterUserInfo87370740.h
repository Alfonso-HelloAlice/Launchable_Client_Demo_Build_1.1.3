#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// System.Action`1<UnityEngine.Texture2D>
struct Action_1_t3344795111;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// TwitterStatus
struct TwitterStatus_t2765035499;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TwitterUserInfo
struct  TwitterUserInfo_t87370740  : public Il2CppObject
{
public:
	// System.Action`1<UnityEngine.Texture2D> TwitterUserInfo::ActionProfileImageLoaded
	Action_1_t3344795111 * ___ActionProfileImageLoaded_0;
	// System.Action`1<UnityEngine.Texture2D> TwitterUserInfo::ActionProfileBackgroundImageLoaded
	Action_1_t3344795111 * ___ActionProfileBackgroundImageLoaded_1;
	// System.String TwitterUserInfo::_id
	String_t* ____id_2;
	// System.String TwitterUserInfo::_description
	String_t* ____description_3;
	// System.String TwitterUserInfo::_name
	String_t* ____name_4;
	// System.String TwitterUserInfo::_screen_name
	String_t* ____screen_name_5;
	// System.String TwitterUserInfo::_location
	String_t* ____location_6;
	// System.String TwitterUserInfo::_lang
	String_t* ____lang_7;
	// System.String TwitterUserInfo::_rawJSON
	String_t* ____rawJSON_8;
	// System.String TwitterUserInfo::_profile_image_url
	String_t* ____profile_image_url_9;
	// System.String TwitterUserInfo::_profile_image_url_https
	String_t* ____profile_image_url_https_10;
	// System.String TwitterUserInfo::_profile_background_image_url
	String_t* ____profile_background_image_url_11;
	// System.String TwitterUserInfo::_profile_background_image_url_https
	String_t* ____profile_background_image_url_https_12;
	// UnityEngine.Texture2D TwitterUserInfo::_profile_image
	Texture2D_t3542995729 * ____profile_image_13;
	// UnityEngine.Texture2D TwitterUserInfo::_profile_background
	Texture2D_t3542995729 * ____profile_background_14;
	// UnityEngine.Color TwitterUserInfo::_profile_background_color
	Color_t2020392075  ____profile_background_color_15;
	// UnityEngine.Color TwitterUserInfo::_profile_text_color
	Color_t2020392075  ____profile_text_color_16;
	// System.Int32 TwitterUserInfo::_friends_count
	int32_t ____friends_count_17;
	// System.Int32 TwitterUserInfo::_statuses_count
	int32_t ____statuses_count_18;
	// TwitterStatus TwitterUserInfo::_status
	TwitterStatus_t2765035499 * ____status_19;

public:
	inline static int32_t get_offset_of_ActionProfileImageLoaded_0() { return static_cast<int32_t>(offsetof(TwitterUserInfo_t87370740, ___ActionProfileImageLoaded_0)); }
	inline Action_1_t3344795111 * get_ActionProfileImageLoaded_0() const { return ___ActionProfileImageLoaded_0; }
	inline Action_1_t3344795111 ** get_address_of_ActionProfileImageLoaded_0() { return &___ActionProfileImageLoaded_0; }
	inline void set_ActionProfileImageLoaded_0(Action_1_t3344795111 * value)
	{
		___ActionProfileImageLoaded_0 = value;
		Il2CppCodeGenWriteBarrier(&___ActionProfileImageLoaded_0, value);
	}

	inline static int32_t get_offset_of_ActionProfileBackgroundImageLoaded_1() { return static_cast<int32_t>(offsetof(TwitterUserInfo_t87370740, ___ActionProfileBackgroundImageLoaded_1)); }
	inline Action_1_t3344795111 * get_ActionProfileBackgroundImageLoaded_1() const { return ___ActionProfileBackgroundImageLoaded_1; }
	inline Action_1_t3344795111 ** get_address_of_ActionProfileBackgroundImageLoaded_1() { return &___ActionProfileBackgroundImageLoaded_1; }
	inline void set_ActionProfileBackgroundImageLoaded_1(Action_1_t3344795111 * value)
	{
		___ActionProfileBackgroundImageLoaded_1 = value;
		Il2CppCodeGenWriteBarrier(&___ActionProfileBackgroundImageLoaded_1, value);
	}

	inline static int32_t get_offset_of__id_2() { return static_cast<int32_t>(offsetof(TwitterUserInfo_t87370740, ____id_2)); }
	inline String_t* get__id_2() const { return ____id_2; }
	inline String_t** get_address_of__id_2() { return &____id_2; }
	inline void set__id_2(String_t* value)
	{
		____id_2 = value;
		Il2CppCodeGenWriteBarrier(&____id_2, value);
	}

	inline static int32_t get_offset_of__description_3() { return static_cast<int32_t>(offsetof(TwitterUserInfo_t87370740, ____description_3)); }
	inline String_t* get__description_3() const { return ____description_3; }
	inline String_t** get_address_of__description_3() { return &____description_3; }
	inline void set__description_3(String_t* value)
	{
		____description_3 = value;
		Il2CppCodeGenWriteBarrier(&____description_3, value);
	}

	inline static int32_t get_offset_of__name_4() { return static_cast<int32_t>(offsetof(TwitterUserInfo_t87370740, ____name_4)); }
	inline String_t* get__name_4() const { return ____name_4; }
	inline String_t** get_address_of__name_4() { return &____name_4; }
	inline void set__name_4(String_t* value)
	{
		____name_4 = value;
		Il2CppCodeGenWriteBarrier(&____name_4, value);
	}

	inline static int32_t get_offset_of__screen_name_5() { return static_cast<int32_t>(offsetof(TwitterUserInfo_t87370740, ____screen_name_5)); }
	inline String_t* get__screen_name_5() const { return ____screen_name_5; }
	inline String_t** get_address_of__screen_name_5() { return &____screen_name_5; }
	inline void set__screen_name_5(String_t* value)
	{
		____screen_name_5 = value;
		Il2CppCodeGenWriteBarrier(&____screen_name_5, value);
	}

	inline static int32_t get_offset_of__location_6() { return static_cast<int32_t>(offsetof(TwitterUserInfo_t87370740, ____location_6)); }
	inline String_t* get__location_6() const { return ____location_6; }
	inline String_t** get_address_of__location_6() { return &____location_6; }
	inline void set__location_6(String_t* value)
	{
		____location_6 = value;
		Il2CppCodeGenWriteBarrier(&____location_6, value);
	}

	inline static int32_t get_offset_of__lang_7() { return static_cast<int32_t>(offsetof(TwitterUserInfo_t87370740, ____lang_7)); }
	inline String_t* get__lang_7() const { return ____lang_7; }
	inline String_t** get_address_of__lang_7() { return &____lang_7; }
	inline void set__lang_7(String_t* value)
	{
		____lang_7 = value;
		Il2CppCodeGenWriteBarrier(&____lang_7, value);
	}

	inline static int32_t get_offset_of__rawJSON_8() { return static_cast<int32_t>(offsetof(TwitterUserInfo_t87370740, ____rawJSON_8)); }
	inline String_t* get__rawJSON_8() const { return ____rawJSON_8; }
	inline String_t** get_address_of__rawJSON_8() { return &____rawJSON_8; }
	inline void set__rawJSON_8(String_t* value)
	{
		____rawJSON_8 = value;
		Il2CppCodeGenWriteBarrier(&____rawJSON_8, value);
	}

	inline static int32_t get_offset_of__profile_image_url_9() { return static_cast<int32_t>(offsetof(TwitterUserInfo_t87370740, ____profile_image_url_9)); }
	inline String_t* get__profile_image_url_9() const { return ____profile_image_url_9; }
	inline String_t** get_address_of__profile_image_url_9() { return &____profile_image_url_9; }
	inline void set__profile_image_url_9(String_t* value)
	{
		____profile_image_url_9 = value;
		Il2CppCodeGenWriteBarrier(&____profile_image_url_9, value);
	}

	inline static int32_t get_offset_of__profile_image_url_https_10() { return static_cast<int32_t>(offsetof(TwitterUserInfo_t87370740, ____profile_image_url_https_10)); }
	inline String_t* get__profile_image_url_https_10() const { return ____profile_image_url_https_10; }
	inline String_t** get_address_of__profile_image_url_https_10() { return &____profile_image_url_https_10; }
	inline void set__profile_image_url_https_10(String_t* value)
	{
		____profile_image_url_https_10 = value;
		Il2CppCodeGenWriteBarrier(&____profile_image_url_https_10, value);
	}

	inline static int32_t get_offset_of__profile_background_image_url_11() { return static_cast<int32_t>(offsetof(TwitterUserInfo_t87370740, ____profile_background_image_url_11)); }
	inline String_t* get__profile_background_image_url_11() const { return ____profile_background_image_url_11; }
	inline String_t** get_address_of__profile_background_image_url_11() { return &____profile_background_image_url_11; }
	inline void set__profile_background_image_url_11(String_t* value)
	{
		____profile_background_image_url_11 = value;
		Il2CppCodeGenWriteBarrier(&____profile_background_image_url_11, value);
	}

	inline static int32_t get_offset_of__profile_background_image_url_https_12() { return static_cast<int32_t>(offsetof(TwitterUserInfo_t87370740, ____profile_background_image_url_https_12)); }
	inline String_t* get__profile_background_image_url_https_12() const { return ____profile_background_image_url_https_12; }
	inline String_t** get_address_of__profile_background_image_url_https_12() { return &____profile_background_image_url_https_12; }
	inline void set__profile_background_image_url_https_12(String_t* value)
	{
		____profile_background_image_url_https_12 = value;
		Il2CppCodeGenWriteBarrier(&____profile_background_image_url_https_12, value);
	}

	inline static int32_t get_offset_of__profile_image_13() { return static_cast<int32_t>(offsetof(TwitterUserInfo_t87370740, ____profile_image_13)); }
	inline Texture2D_t3542995729 * get__profile_image_13() const { return ____profile_image_13; }
	inline Texture2D_t3542995729 ** get_address_of__profile_image_13() { return &____profile_image_13; }
	inline void set__profile_image_13(Texture2D_t3542995729 * value)
	{
		____profile_image_13 = value;
		Il2CppCodeGenWriteBarrier(&____profile_image_13, value);
	}

	inline static int32_t get_offset_of__profile_background_14() { return static_cast<int32_t>(offsetof(TwitterUserInfo_t87370740, ____profile_background_14)); }
	inline Texture2D_t3542995729 * get__profile_background_14() const { return ____profile_background_14; }
	inline Texture2D_t3542995729 ** get_address_of__profile_background_14() { return &____profile_background_14; }
	inline void set__profile_background_14(Texture2D_t3542995729 * value)
	{
		____profile_background_14 = value;
		Il2CppCodeGenWriteBarrier(&____profile_background_14, value);
	}

	inline static int32_t get_offset_of__profile_background_color_15() { return static_cast<int32_t>(offsetof(TwitterUserInfo_t87370740, ____profile_background_color_15)); }
	inline Color_t2020392075  get__profile_background_color_15() const { return ____profile_background_color_15; }
	inline Color_t2020392075 * get_address_of__profile_background_color_15() { return &____profile_background_color_15; }
	inline void set__profile_background_color_15(Color_t2020392075  value)
	{
		____profile_background_color_15 = value;
	}

	inline static int32_t get_offset_of__profile_text_color_16() { return static_cast<int32_t>(offsetof(TwitterUserInfo_t87370740, ____profile_text_color_16)); }
	inline Color_t2020392075  get__profile_text_color_16() const { return ____profile_text_color_16; }
	inline Color_t2020392075 * get_address_of__profile_text_color_16() { return &____profile_text_color_16; }
	inline void set__profile_text_color_16(Color_t2020392075  value)
	{
		____profile_text_color_16 = value;
	}

	inline static int32_t get_offset_of__friends_count_17() { return static_cast<int32_t>(offsetof(TwitterUserInfo_t87370740, ____friends_count_17)); }
	inline int32_t get__friends_count_17() const { return ____friends_count_17; }
	inline int32_t* get_address_of__friends_count_17() { return &____friends_count_17; }
	inline void set__friends_count_17(int32_t value)
	{
		____friends_count_17 = value;
	}

	inline static int32_t get_offset_of__statuses_count_18() { return static_cast<int32_t>(offsetof(TwitterUserInfo_t87370740, ____statuses_count_18)); }
	inline int32_t get__statuses_count_18() const { return ____statuses_count_18; }
	inline int32_t* get_address_of__statuses_count_18() { return &____statuses_count_18; }
	inline void set__statuses_count_18(int32_t value)
	{
		____statuses_count_18 = value;
	}

	inline static int32_t get_offset_of__status_19() { return static_cast<int32_t>(offsetof(TwitterUserInfo_t87370740, ____status_19)); }
	inline TwitterStatus_t2765035499 * get__status_19() const { return ____status_19; }
	inline TwitterStatus_t2765035499 ** get_address_of__status_19() { return &____status_19; }
	inline void set__status_19(TwitterStatus_t2765035499 * value)
	{
		____status_19 = value;
		Il2CppCodeGenWriteBarrier(&____status_19, value);
	}
};

struct TwitterUserInfo_t87370740_StaticFields
{
public:
	// System.Action`1<UnityEngine.Texture2D> TwitterUserInfo::<>f__am$cache0
	Action_1_t3344795111 * ___U3CU3Ef__amU24cache0_20;
	// System.Action`1<UnityEngine.Texture2D> TwitterUserInfo::<>f__am$cache1
	Action_1_t3344795111 * ___U3CU3Ef__amU24cache1_21;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_20() { return static_cast<int32_t>(offsetof(TwitterUserInfo_t87370740_StaticFields, ___U3CU3Ef__amU24cache0_20)); }
	inline Action_1_t3344795111 * get_U3CU3Ef__amU24cache0_20() const { return ___U3CU3Ef__amU24cache0_20; }
	inline Action_1_t3344795111 ** get_address_of_U3CU3Ef__amU24cache0_20() { return &___U3CU3Ef__amU24cache0_20; }
	inline void set_U3CU3Ef__amU24cache0_20(Action_1_t3344795111 * value)
	{
		___U3CU3Ef__amU24cache0_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_20, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_21() { return static_cast<int32_t>(offsetof(TwitterUserInfo_t87370740_StaticFields, ___U3CU3Ef__amU24cache1_21)); }
	inline Action_1_t3344795111 * get_U3CU3Ef__amU24cache1_21() const { return ___U3CU3Ef__amU24cache1_21; }
	inline Action_1_t3344795111 ** get_address_of_U3CU3Ef__amU24cache1_21() { return &___U3CU3Ef__amU24cache1_21; }
	inline void set_U3CU3Ef__amU24cache1_21(Action_1_t3344795111 * value)
	{
		___U3CU3Ef__amU24cache1_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
