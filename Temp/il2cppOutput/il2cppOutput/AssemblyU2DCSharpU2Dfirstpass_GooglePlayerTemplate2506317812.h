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
// System.Action`1<UnityEngine.Texture2D>
struct Action_1_t3344795111;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayerTemplate
struct  GooglePlayerTemplate_t2506317812  : public Il2CppObject
{
public:
	// System.String GooglePlayerTemplate::_id
	String_t* ____id_0;
	// System.String GooglePlayerTemplate::_name
	String_t* ____name_1;
	// System.String GooglePlayerTemplate::_iconImageUrl
	String_t* ____iconImageUrl_2;
	// System.String GooglePlayerTemplate::_hiResImageUrl
	String_t* ____hiResImageUrl_3;
	// UnityEngine.Texture2D GooglePlayerTemplate::_icon
	Texture2D_t3542995729 * ____icon_4;
	// UnityEngine.Texture2D GooglePlayerTemplate::_image
	Texture2D_t3542995729 * ____image_5;
	// System.Boolean GooglePlayerTemplate::_hasIconImage
	bool ____hasIconImage_6;
	// System.Boolean GooglePlayerTemplate::_hasHiResImage
	bool ____hasHiResImage_7;
	// System.Action`1<UnityEngine.Texture2D> GooglePlayerTemplate::BigPhotoLoaded
	Action_1_t3344795111 * ___BigPhotoLoaded_8;
	// System.Action`1<UnityEngine.Texture2D> GooglePlayerTemplate::SmallPhotoLoaded
	Action_1_t3344795111 * ___SmallPhotoLoaded_9;

public:
	inline static int32_t get_offset_of__id_0() { return static_cast<int32_t>(offsetof(GooglePlayerTemplate_t2506317812, ____id_0)); }
	inline String_t* get__id_0() const { return ____id_0; }
	inline String_t** get_address_of__id_0() { return &____id_0; }
	inline void set__id_0(String_t* value)
	{
		____id_0 = value;
		Il2CppCodeGenWriteBarrier(&____id_0, value);
	}

	inline static int32_t get_offset_of__name_1() { return static_cast<int32_t>(offsetof(GooglePlayerTemplate_t2506317812, ____name_1)); }
	inline String_t* get__name_1() const { return ____name_1; }
	inline String_t** get_address_of__name_1() { return &____name_1; }
	inline void set__name_1(String_t* value)
	{
		____name_1 = value;
		Il2CppCodeGenWriteBarrier(&____name_1, value);
	}

	inline static int32_t get_offset_of__iconImageUrl_2() { return static_cast<int32_t>(offsetof(GooglePlayerTemplate_t2506317812, ____iconImageUrl_2)); }
	inline String_t* get__iconImageUrl_2() const { return ____iconImageUrl_2; }
	inline String_t** get_address_of__iconImageUrl_2() { return &____iconImageUrl_2; }
	inline void set__iconImageUrl_2(String_t* value)
	{
		____iconImageUrl_2 = value;
		Il2CppCodeGenWriteBarrier(&____iconImageUrl_2, value);
	}

	inline static int32_t get_offset_of__hiResImageUrl_3() { return static_cast<int32_t>(offsetof(GooglePlayerTemplate_t2506317812, ____hiResImageUrl_3)); }
	inline String_t* get__hiResImageUrl_3() const { return ____hiResImageUrl_3; }
	inline String_t** get_address_of__hiResImageUrl_3() { return &____hiResImageUrl_3; }
	inline void set__hiResImageUrl_3(String_t* value)
	{
		____hiResImageUrl_3 = value;
		Il2CppCodeGenWriteBarrier(&____hiResImageUrl_3, value);
	}

	inline static int32_t get_offset_of__icon_4() { return static_cast<int32_t>(offsetof(GooglePlayerTemplate_t2506317812, ____icon_4)); }
	inline Texture2D_t3542995729 * get__icon_4() const { return ____icon_4; }
	inline Texture2D_t3542995729 ** get_address_of__icon_4() { return &____icon_4; }
	inline void set__icon_4(Texture2D_t3542995729 * value)
	{
		____icon_4 = value;
		Il2CppCodeGenWriteBarrier(&____icon_4, value);
	}

	inline static int32_t get_offset_of__image_5() { return static_cast<int32_t>(offsetof(GooglePlayerTemplate_t2506317812, ____image_5)); }
	inline Texture2D_t3542995729 * get__image_5() const { return ____image_5; }
	inline Texture2D_t3542995729 ** get_address_of__image_5() { return &____image_5; }
	inline void set__image_5(Texture2D_t3542995729 * value)
	{
		____image_5 = value;
		Il2CppCodeGenWriteBarrier(&____image_5, value);
	}

	inline static int32_t get_offset_of__hasIconImage_6() { return static_cast<int32_t>(offsetof(GooglePlayerTemplate_t2506317812, ____hasIconImage_6)); }
	inline bool get__hasIconImage_6() const { return ____hasIconImage_6; }
	inline bool* get_address_of__hasIconImage_6() { return &____hasIconImage_6; }
	inline void set__hasIconImage_6(bool value)
	{
		____hasIconImage_6 = value;
	}

	inline static int32_t get_offset_of__hasHiResImage_7() { return static_cast<int32_t>(offsetof(GooglePlayerTemplate_t2506317812, ____hasHiResImage_7)); }
	inline bool get__hasHiResImage_7() const { return ____hasHiResImage_7; }
	inline bool* get_address_of__hasHiResImage_7() { return &____hasHiResImage_7; }
	inline void set__hasHiResImage_7(bool value)
	{
		____hasHiResImage_7 = value;
	}

	inline static int32_t get_offset_of_BigPhotoLoaded_8() { return static_cast<int32_t>(offsetof(GooglePlayerTemplate_t2506317812, ___BigPhotoLoaded_8)); }
	inline Action_1_t3344795111 * get_BigPhotoLoaded_8() const { return ___BigPhotoLoaded_8; }
	inline Action_1_t3344795111 ** get_address_of_BigPhotoLoaded_8() { return &___BigPhotoLoaded_8; }
	inline void set_BigPhotoLoaded_8(Action_1_t3344795111 * value)
	{
		___BigPhotoLoaded_8 = value;
		Il2CppCodeGenWriteBarrier(&___BigPhotoLoaded_8, value);
	}

	inline static int32_t get_offset_of_SmallPhotoLoaded_9() { return static_cast<int32_t>(offsetof(GooglePlayerTemplate_t2506317812, ___SmallPhotoLoaded_9)); }
	inline Action_1_t3344795111 * get_SmallPhotoLoaded_9() const { return ___SmallPhotoLoaded_9; }
	inline Action_1_t3344795111 ** get_address_of_SmallPhotoLoaded_9() { return &___SmallPhotoLoaded_9; }
	inline void set_SmallPhotoLoaded_9(Action_1_t3344795111 * value)
	{
		___SmallPhotoLoaded_9 = value;
		Il2CppCodeGenWriteBarrier(&___SmallPhotoLoaded_9, value);
	}
};

struct GooglePlayerTemplate_t2506317812_StaticFields
{
public:
	// System.Action`1<UnityEngine.Texture2D> GooglePlayerTemplate::<>f__am$cache0
	Action_1_t3344795111 * ___U3CU3Ef__amU24cache0_10;
	// System.Action`1<UnityEngine.Texture2D> GooglePlayerTemplate::<>f__am$cache1
	Action_1_t3344795111 * ___U3CU3Ef__amU24cache1_11;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_10() { return static_cast<int32_t>(offsetof(GooglePlayerTemplate_t2506317812_StaticFields, ___U3CU3Ef__amU24cache0_10)); }
	inline Action_1_t3344795111 * get_U3CU3Ef__amU24cache0_10() const { return ___U3CU3Ef__amU24cache0_10; }
	inline Action_1_t3344795111 ** get_address_of_U3CU3Ef__amU24cache0_10() { return &___U3CU3Ef__amU24cache0_10; }
	inline void set_U3CU3Ef__amU24cache0_10(Action_1_t3344795111 * value)
	{
		___U3CU3Ef__amU24cache0_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_10, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_11() { return static_cast<int32_t>(offsetof(GooglePlayerTemplate_t2506317812_StaticFields, ___U3CU3Ef__amU24cache1_11)); }
	inline Action_1_t3344795111 * get_U3CU3Ef__amU24cache1_11() const { return ___U3CU3Ef__amU24cache1_11; }
	inline Action_1_t3344795111 ** get_address_of_U3CU3Ef__amU24cache1_11() { return &___U3CU3Ef__amU24cache1_11; }
	inline void set_U3CU3Ef__amU24cache1_11(Action_1_t3344795111 * value)
	{
		___U3CU3Ef__amU24cache1_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
