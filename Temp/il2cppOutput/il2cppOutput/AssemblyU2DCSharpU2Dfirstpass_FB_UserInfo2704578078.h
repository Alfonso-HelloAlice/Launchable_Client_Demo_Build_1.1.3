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
#include "AssemblyU2DCSharpU2Dfirstpass_FB_Gender2517284304.h"

// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<FB_ProfileImageSize,UnityEngine.Texture2D>
struct Dictionary_2_t3631115410;
// System.Action`1<FB_UserInfo>
struct Action_1_t2506377460;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FB_UserInfo
struct  FB_UserInfo_t2704578078  : public Il2CppObject
{
public:
	// System.String FB_UserInfo::_id
	String_t* ____id_0;
	// System.String FB_UserInfo::_name
	String_t* ____name_1;
	// System.String FB_UserInfo::_first_name
	String_t* ____first_name_2;
	// System.String FB_UserInfo::_last_name
	String_t* ____last_name_3;
	// System.String FB_UserInfo::_username
	String_t* ____username_4;
	// System.String FB_UserInfo::_profile_url
	String_t* ____profile_url_5;
	// System.String FB_UserInfo::_email
	String_t* ____email_6;
	// System.String FB_UserInfo::_location
	String_t* ____location_7;
	// System.String FB_UserInfo::_locale
	String_t* ____locale_8;
	// System.String FB_UserInfo::_rawJSON
	String_t* ____rawJSON_9;
	// System.DateTime FB_UserInfo::_Birthday
	DateTime_t693205669  ____Birthday_10;
	// FB_Gender FB_UserInfo::_gender
	int32_t ____gender_11;
	// System.String FB_UserInfo::_ageRange
	String_t* ____ageRange_12;
	// System.String FB_UserInfo::_picUrl
	String_t* ____picUrl_13;
	// System.Collections.Generic.Dictionary`2<FB_ProfileImageSize,UnityEngine.Texture2D> FB_UserInfo::profileImages
	Dictionary_2_t3631115410 * ___profileImages_14;
	// System.Action`1<FB_UserInfo> FB_UserInfo::OnProfileImageLoaded
	Action_1_t2506377460 * ___OnProfileImageLoaded_15;

public:
	inline static int32_t get_offset_of__id_0() { return static_cast<int32_t>(offsetof(FB_UserInfo_t2704578078, ____id_0)); }
	inline String_t* get__id_0() const { return ____id_0; }
	inline String_t** get_address_of__id_0() { return &____id_0; }
	inline void set__id_0(String_t* value)
	{
		____id_0 = value;
		Il2CppCodeGenWriteBarrier(&____id_0, value);
	}

	inline static int32_t get_offset_of__name_1() { return static_cast<int32_t>(offsetof(FB_UserInfo_t2704578078, ____name_1)); }
	inline String_t* get__name_1() const { return ____name_1; }
	inline String_t** get_address_of__name_1() { return &____name_1; }
	inline void set__name_1(String_t* value)
	{
		____name_1 = value;
		Il2CppCodeGenWriteBarrier(&____name_1, value);
	}

	inline static int32_t get_offset_of__first_name_2() { return static_cast<int32_t>(offsetof(FB_UserInfo_t2704578078, ____first_name_2)); }
	inline String_t* get__first_name_2() const { return ____first_name_2; }
	inline String_t** get_address_of__first_name_2() { return &____first_name_2; }
	inline void set__first_name_2(String_t* value)
	{
		____first_name_2 = value;
		Il2CppCodeGenWriteBarrier(&____first_name_2, value);
	}

	inline static int32_t get_offset_of__last_name_3() { return static_cast<int32_t>(offsetof(FB_UserInfo_t2704578078, ____last_name_3)); }
	inline String_t* get__last_name_3() const { return ____last_name_3; }
	inline String_t** get_address_of__last_name_3() { return &____last_name_3; }
	inline void set__last_name_3(String_t* value)
	{
		____last_name_3 = value;
		Il2CppCodeGenWriteBarrier(&____last_name_3, value);
	}

	inline static int32_t get_offset_of__username_4() { return static_cast<int32_t>(offsetof(FB_UserInfo_t2704578078, ____username_4)); }
	inline String_t* get__username_4() const { return ____username_4; }
	inline String_t** get_address_of__username_4() { return &____username_4; }
	inline void set__username_4(String_t* value)
	{
		____username_4 = value;
		Il2CppCodeGenWriteBarrier(&____username_4, value);
	}

	inline static int32_t get_offset_of__profile_url_5() { return static_cast<int32_t>(offsetof(FB_UserInfo_t2704578078, ____profile_url_5)); }
	inline String_t* get__profile_url_5() const { return ____profile_url_5; }
	inline String_t** get_address_of__profile_url_5() { return &____profile_url_5; }
	inline void set__profile_url_5(String_t* value)
	{
		____profile_url_5 = value;
		Il2CppCodeGenWriteBarrier(&____profile_url_5, value);
	}

	inline static int32_t get_offset_of__email_6() { return static_cast<int32_t>(offsetof(FB_UserInfo_t2704578078, ____email_6)); }
	inline String_t* get__email_6() const { return ____email_6; }
	inline String_t** get_address_of__email_6() { return &____email_6; }
	inline void set__email_6(String_t* value)
	{
		____email_6 = value;
		Il2CppCodeGenWriteBarrier(&____email_6, value);
	}

	inline static int32_t get_offset_of__location_7() { return static_cast<int32_t>(offsetof(FB_UserInfo_t2704578078, ____location_7)); }
	inline String_t* get__location_7() const { return ____location_7; }
	inline String_t** get_address_of__location_7() { return &____location_7; }
	inline void set__location_7(String_t* value)
	{
		____location_7 = value;
		Il2CppCodeGenWriteBarrier(&____location_7, value);
	}

	inline static int32_t get_offset_of__locale_8() { return static_cast<int32_t>(offsetof(FB_UserInfo_t2704578078, ____locale_8)); }
	inline String_t* get__locale_8() const { return ____locale_8; }
	inline String_t** get_address_of__locale_8() { return &____locale_8; }
	inline void set__locale_8(String_t* value)
	{
		____locale_8 = value;
		Il2CppCodeGenWriteBarrier(&____locale_8, value);
	}

	inline static int32_t get_offset_of__rawJSON_9() { return static_cast<int32_t>(offsetof(FB_UserInfo_t2704578078, ____rawJSON_9)); }
	inline String_t* get__rawJSON_9() const { return ____rawJSON_9; }
	inline String_t** get_address_of__rawJSON_9() { return &____rawJSON_9; }
	inline void set__rawJSON_9(String_t* value)
	{
		____rawJSON_9 = value;
		Il2CppCodeGenWriteBarrier(&____rawJSON_9, value);
	}

	inline static int32_t get_offset_of__Birthday_10() { return static_cast<int32_t>(offsetof(FB_UserInfo_t2704578078, ____Birthday_10)); }
	inline DateTime_t693205669  get__Birthday_10() const { return ____Birthday_10; }
	inline DateTime_t693205669 * get_address_of__Birthday_10() { return &____Birthday_10; }
	inline void set__Birthday_10(DateTime_t693205669  value)
	{
		____Birthday_10 = value;
	}

	inline static int32_t get_offset_of__gender_11() { return static_cast<int32_t>(offsetof(FB_UserInfo_t2704578078, ____gender_11)); }
	inline int32_t get__gender_11() const { return ____gender_11; }
	inline int32_t* get_address_of__gender_11() { return &____gender_11; }
	inline void set__gender_11(int32_t value)
	{
		____gender_11 = value;
	}

	inline static int32_t get_offset_of__ageRange_12() { return static_cast<int32_t>(offsetof(FB_UserInfo_t2704578078, ____ageRange_12)); }
	inline String_t* get__ageRange_12() const { return ____ageRange_12; }
	inline String_t** get_address_of__ageRange_12() { return &____ageRange_12; }
	inline void set__ageRange_12(String_t* value)
	{
		____ageRange_12 = value;
		Il2CppCodeGenWriteBarrier(&____ageRange_12, value);
	}

	inline static int32_t get_offset_of__picUrl_13() { return static_cast<int32_t>(offsetof(FB_UserInfo_t2704578078, ____picUrl_13)); }
	inline String_t* get__picUrl_13() const { return ____picUrl_13; }
	inline String_t** get_address_of__picUrl_13() { return &____picUrl_13; }
	inline void set__picUrl_13(String_t* value)
	{
		____picUrl_13 = value;
		Il2CppCodeGenWriteBarrier(&____picUrl_13, value);
	}

	inline static int32_t get_offset_of_profileImages_14() { return static_cast<int32_t>(offsetof(FB_UserInfo_t2704578078, ___profileImages_14)); }
	inline Dictionary_2_t3631115410 * get_profileImages_14() const { return ___profileImages_14; }
	inline Dictionary_2_t3631115410 ** get_address_of_profileImages_14() { return &___profileImages_14; }
	inline void set_profileImages_14(Dictionary_2_t3631115410 * value)
	{
		___profileImages_14 = value;
		Il2CppCodeGenWriteBarrier(&___profileImages_14, value);
	}

	inline static int32_t get_offset_of_OnProfileImageLoaded_15() { return static_cast<int32_t>(offsetof(FB_UserInfo_t2704578078, ___OnProfileImageLoaded_15)); }
	inline Action_1_t2506377460 * get_OnProfileImageLoaded_15() const { return ___OnProfileImageLoaded_15; }
	inline Action_1_t2506377460 ** get_address_of_OnProfileImageLoaded_15() { return &___OnProfileImageLoaded_15; }
	inline void set_OnProfileImageLoaded_15(Action_1_t2506377460 * value)
	{
		___OnProfileImageLoaded_15 = value;
		Il2CppCodeGenWriteBarrier(&___OnProfileImageLoaded_15, value);
	}
};

struct FB_UserInfo_t2704578078_StaticFields
{
public:
	// System.Action`1<FB_UserInfo> FB_UserInfo::<>f__am$cache0
	Action_1_t2506377460 * ___U3CU3Ef__amU24cache0_16;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_16() { return static_cast<int32_t>(offsetof(FB_UserInfo_t2704578078_StaticFields, ___U3CU3Ef__amU24cache0_16)); }
	inline Action_1_t2506377460 * get_U3CU3Ef__amU24cache0_16() const { return ___U3CU3Ef__amU24cache0_16; }
	inline Action_1_t2506377460 ** get_address_of_U3CU3Ef__amU24cache0_16() { return &___U3CU3Ef__amU24cache0_16; }
	inline void set_U3CU3Ef__amU24cache0_16(Action_1_t2506377460 * value)
	{
		___U3CU3Ef__amU24cache0_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
