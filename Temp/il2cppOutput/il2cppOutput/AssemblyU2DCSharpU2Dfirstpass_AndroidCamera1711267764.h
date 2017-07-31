#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Pattern_Si2193832869.h"

// System.Action`1<AndroidImagePickResult>
struct Action_1_t1593532934;
// System.Action`1<AndroidImagesPickResult>
struct Action_1_t148878883;
// System.Action`1<GallerySaveResult>
struct Action_1_t1445656332;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AndroidCamera
struct  AndroidCamera_t1711267764  : public Singleton_1_t2193832869
{
public:
	// System.Action`1<AndroidImagePickResult> AndroidCamera::OnImagePicked
	Action_1_t1593532934 * ___OnImagePicked_4;
	// System.Action`1<AndroidImagesPickResult> AndroidCamera::OnImagesPicked
	Action_1_t148878883 * ___OnImagesPicked_5;
	// System.Action`1<GallerySaveResult> AndroidCamera::OnImageSaved
	Action_1_t1445656332 * ___OnImageSaved_6;

public:
	inline static int32_t get_offset_of_OnImagePicked_4() { return static_cast<int32_t>(offsetof(AndroidCamera_t1711267764, ___OnImagePicked_4)); }
	inline Action_1_t1593532934 * get_OnImagePicked_4() const { return ___OnImagePicked_4; }
	inline Action_1_t1593532934 ** get_address_of_OnImagePicked_4() { return &___OnImagePicked_4; }
	inline void set_OnImagePicked_4(Action_1_t1593532934 * value)
	{
		___OnImagePicked_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnImagePicked_4, value);
	}

	inline static int32_t get_offset_of_OnImagesPicked_5() { return static_cast<int32_t>(offsetof(AndroidCamera_t1711267764, ___OnImagesPicked_5)); }
	inline Action_1_t148878883 * get_OnImagesPicked_5() const { return ___OnImagesPicked_5; }
	inline Action_1_t148878883 ** get_address_of_OnImagesPicked_5() { return &___OnImagesPicked_5; }
	inline void set_OnImagesPicked_5(Action_1_t148878883 * value)
	{
		___OnImagesPicked_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnImagesPicked_5, value);
	}

	inline static int32_t get_offset_of_OnImageSaved_6() { return static_cast<int32_t>(offsetof(AndroidCamera_t1711267764, ___OnImageSaved_6)); }
	inline Action_1_t1445656332 * get_OnImageSaved_6() const { return ___OnImageSaved_6; }
	inline Action_1_t1445656332 ** get_address_of_OnImageSaved_6() { return &___OnImageSaved_6; }
	inline void set_OnImageSaved_6(Action_1_t1445656332 * value)
	{
		___OnImageSaved_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnImageSaved_6, value);
	}
};

struct AndroidCamera_t1711267764_StaticFields
{
public:
	// System.String AndroidCamera::_lastImageName
	String_t* ____lastImageName_7;
	// System.Action`1<AndroidImagePickResult> AndroidCamera::<>f__am$cache0
	Action_1_t1593532934 * ___U3CU3Ef__amU24cache0_8;
	// System.Action`1<AndroidImagesPickResult> AndroidCamera::<>f__am$cache1
	Action_1_t148878883 * ___U3CU3Ef__amU24cache1_9;
	// System.Action`1<GallerySaveResult> AndroidCamera::<>f__am$cache2
	Action_1_t1445656332 * ___U3CU3Ef__amU24cache2_10;

public:
	inline static int32_t get_offset_of__lastImageName_7() { return static_cast<int32_t>(offsetof(AndroidCamera_t1711267764_StaticFields, ____lastImageName_7)); }
	inline String_t* get__lastImageName_7() const { return ____lastImageName_7; }
	inline String_t** get_address_of__lastImageName_7() { return &____lastImageName_7; }
	inline void set__lastImageName_7(String_t* value)
	{
		____lastImageName_7 = value;
		Il2CppCodeGenWriteBarrier(&____lastImageName_7, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_8() { return static_cast<int32_t>(offsetof(AndroidCamera_t1711267764_StaticFields, ___U3CU3Ef__amU24cache0_8)); }
	inline Action_1_t1593532934 * get_U3CU3Ef__amU24cache0_8() const { return ___U3CU3Ef__amU24cache0_8; }
	inline Action_1_t1593532934 ** get_address_of_U3CU3Ef__amU24cache0_8() { return &___U3CU3Ef__amU24cache0_8; }
	inline void set_U3CU3Ef__amU24cache0_8(Action_1_t1593532934 * value)
	{
		___U3CU3Ef__amU24cache0_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_8, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_9() { return static_cast<int32_t>(offsetof(AndroidCamera_t1711267764_StaticFields, ___U3CU3Ef__amU24cache1_9)); }
	inline Action_1_t148878883 * get_U3CU3Ef__amU24cache1_9() const { return ___U3CU3Ef__amU24cache1_9; }
	inline Action_1_t148878883 ** get_address_of_U3CU3Ef__amU24cache1_9() { return &___U3CU3Ef__amU24cache1_9; }
	inline void set_U3CU3Ef__amU24cache1_9(Action_1_t148878883 * value)
	{
		___U3CU3Ef__amU24cache1_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_9, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_10() { return static_cast<int32_t>(offsetof(AndroidCamera_t1711267764_StaticFields, ___U3CU3Ef__amU24cache2_10)); }
	inline Action_1_t1445656332 * get_U3CU3Ef__amU24cache2_10() const { return ___U3CU3Ef__amU24cache2_10; }
	inline Action_1_t1445656332 ** get_address_of_U3CU3Ef__amU24cache2_10() { return &___U3CU3Ef__amU24cache2_10; }
	inline void set_U3CU3Ef__amU24cache2_10(Action_1_t1445656332 * value)
	{
		___U3CU3Ef__amU24cache2_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
