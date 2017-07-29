#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Pattern_Si3926960809.h"

// System.Action`1<UM_ImagePickResult>
struct Action_1_t2786451370;
// System.Action`1<UM_ImageSaveResult>
struct Action_1_t4072395078;
// System.Action`1<UM_ImagesPickResult>
struct Action_1_t1575757495;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UM_Camera
struct  UM_Camera_t3444395704  : public Singleton_1_t3926960809
{
public:
	// System.Action`1<UM_ImagePickResult> UM_Camera::OnImagePicked
	Action_1_t2786451370 * ___OnImagePicked_4;
	// System.Action`1<UM_ImageSaveResult> UM_Camera::OnImageSaved
	Action_1_t4072395078 * ___OnImageSaved_5;
	// System.Action`1<UM_ImagesPickResult> UM_Camera::OnImagesPicked
	Action_1_t1575757495 * ___OnImagesPicked_6;

public:
	inline static int32_t get_offset_of_OnImagePicked_4() { return static_cast<int32_t>(offsetof(UM_Camera_t3444395704, ___OnImagePicked_4)); }
	inline Action_1_t2786451370 * get_OnImagePicked_4() const { return ___OnImagePicked_4; }
	inline Action_1_t2786451370 ** get_address_of_OnImagePicked_4() { return &___OnImagePicked_4; }
	inline void set_OnImagePicked_4(Action_1_t2786451370 * value)
	{
		___OnImagePicked_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnImagePicked_4, value);
	}

	inline static int32_t get_offset_of_OnImageSaved_5() { return static_cast<int32_t>(offsetof(UM_Camera_t3444395704, ___OnImageSaved_5)); }
	inline Action_1_t4072395078 * get_OnImageSaved_5() const { return ___OnImageSaved_5; }
	inline Action_1_t4072395078 ** get_address_of_OnImageSaved_5() { return &___OnImageSaved_5; }
	inline void set_OnImageSaved_5(Action_1_t4072395078 * value)
	{
		___OnImageSaved_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnImageSaved_5, value);
	}

	inline static int32_t get_offset_of_OnImagesPicked_6() { return static_cast<int32_t>(offsetof(UM_Camera_t3444395704, ___OnImagesPicked_6)); }
	inline Action_1_t1575757495 * get_OnImagesPicked_6() const { return ___OnImagesPicked_6; }
	inline Action_1_t1575757495 ** get_address_of_OnImagesPicked_6() { return &___OnImagesPicked_6; }
	inline void set_OnImagesPicked_6(Action_1_t1575757495 * value)
	{
		___OnImagesPicked_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnImagesPicked_6, value);
	}
};

struct UM_Camera_t3444395704_StaticFields
{
public:
	// System.Action`1<UM_ImagePickResult> UM_Camera::<>f__am$cache0
	Action_1_t2786451370 * ___U3CU3Ef__amU24cache0_7;
	// System.Action`1<UM_ImageSaveResult> UM_Camera::<>f__am$cache1
	Action_1_t4072395078 * ___U3CU3Ef__amU24cache1_8;
	// System.Action`1<UM_ImagesPickResult> UM_Camera::<>f__am$cache2
	Action_1_t1575757495 * ___U3CU3Ef__amU24cache2_9;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_7() { return static_cast<int32_t>(offsetof(UM_Camera_t3444395704_StaticFields, ___U3CU3Ef__amU24cache0_7)); }
	inline Action_1_t2786451370 * get_U3CU3Ef__amU24cache0_7() const { return ___U3CU3Ef__amU24cache0_7; }
	inline Action_1_t2786451370 ** get_address_of_U3CU3Ef__amU24cache0_7() { return &___U3CU3Ef__amU24cache0_7; }
	inline void set_U3CU3Ef__amU24cache0_7(Action_1_t2786451370 * value)
	{
		___U3CU3Ef__amU24cache0_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_7, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_8() { return static_cast<int32_t>(offsetof(UM_Camera_t3444395704_StaticFields, ___U3CU3Ef__amU24cache1_8)); }
	inline Action_1_t4072395078 * get_U3CU3Ef__amU24cache1_8() const { return ___U3CU3Ef__amU24cache1_8; }
	inline Action_1_t4072395078 ** get_address_of_U3CU3Ef__amU24cache1_8() { return &___U3CU3Ef__amU24cache1_8; }
	inline void set_U3CU3Ef__amU24cache1_8(Action_1_t4072395078 * value)
	{
		___U3CU3Ef__amU24cache1_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_8, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_9() { return static_cast<int32_t>(offsetof(UM_Camera_t3444395704_StaticFields, ___U3CU3Ef__amU24cache2_9)); }
	inline Action_1_t1575757495 * get_U3CU3Ef__amU24cache2_9() const { return ___U3CU3Ef__amU24cache2_9; }
	inline Action_1_t1575757495 ** get_address_of_U3CU3Ef__amU24cache2_9() { return &___U3CU3Ef__amU24cache2_9; }
	inline void set_U3CU3Ef__amU24cache2_9(Action_1_t1575757495 * value)
	{
		___U3CU3Ef__amU24cache2_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
