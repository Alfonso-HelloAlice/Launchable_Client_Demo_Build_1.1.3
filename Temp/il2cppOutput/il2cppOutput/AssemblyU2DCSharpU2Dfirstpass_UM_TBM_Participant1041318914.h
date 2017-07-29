#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UM_TBM_Outcome103888435.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UM_TBM_ParticipantSta273419056.h"

// System.String
struct String_t;
// System.Action`1<UnityEngine.Texture2D>
struct Action_1_t3344795111;
// GK_TBM_Participant
struct GK_TBM_Participant_t3803955090;
// GP_Participant
struct GP_Participant_t2884377673;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UM_TBM_Participant
struct  UM_TBM_Participant_t1041318914  : public Il2CppObject
{
public:
	// System.String UM_TBM_Participant::_Id
	String_t* ____Id_0;
	// System.String UM_TBM_Participant::_Playerid
	String_t* ____Playerid_1;
	// System.String UM_TBM_Participant::_DisplayName
	String_t* ____DisplayName_2;
	// UM_TBM_Outcome UM_TBM_Participant::_Outcome
	int32_t ____Outcome_3;
	// UM_TBM_ParticipantStatus UM_TBM_Participant::_Status
	int32_t ____Status_4;
	// System.Action`1<UnityEngine.Texture2D> UM_TBM_Participant::BigPhotoLoaded
	Action_1_t3344795111 * ___BigPhotoLoaded_5;
	// System.Action`1<UnityEngine.Texture2D> UM_TBM_Participant::SmallPhotoLoaded
	Action_1_t3344795111 * ___SmallPhotoLoaded_6;
	// GK_TBM_Participant UM_TBM_Participant::_GK_Participan
	GK_TBM_Participant_t3803955090 * ____GK_Participan_7;
	// GP_Participant UM_TBM_Participant::_GP_Participant
	GP_Participant_t2884377673 * ____GP_Participant_8;

public:
	inline static int32_t get_offset_of__Id_0() { return static_cast<int32_t>(offsetof(UM_TBM_Participant_t1041318914, ____Id_0)); }
	inline String_t* get__Id_0() const { return ____Id_0; }
	inline String_t** get_address_of__Id_0() { return &____Id_0; }
	inline void set__Id_0(String_t* value)
	{
		____Id_0 = value;
		Il2CppCodeGenWriteBarrier(&____Id_0, value);
	}

	inline static int32_t get_offset_of__Playerid_1() { return static_cast<int32_t>(offsetof(UM_TBM_Participant_t1041318914, ____Playerid_1)); }
	inline String_t* get__Playerid_1() const { return ____Playerid_1; }
	inline String_t** get_address_of__Playerid_1() { return &____Playerid_1; }
	inline void set__Playerid_1(String_t* value)
	{
		____Playerid_1 = value;
		Il2CppCodeGenWriteBarrier(&____Playerid_1, value);
	}

	inline static int32_t get_offset_of__DisplayName_2() { return static_cast<int32_t>(offsetof(UM_TBM_Participant_t1041318914, ____DisplayName_2)); }
	inline String_t* get__DisplayName_2() const { return ____DisplayName_2; }
	inline String_t** get_address_of__DisplayName_2() { return &____DisplayName_2; }
	inline void set__DisplayName_2(String_t* value)
	{
		____DisplayName_2 = value;
		Il2CppCodeGenWriteBarrier(&____DisplayName_2, value);
	}

	inline static int32_t get_offset_of__Outcome_3() { return static_cast<int32_t>(offsetof(UM_TBM_Participant_t1041318914, ____Outcome_3)); }
	inline int32_t get__Outcome_3() const { return ____Outcome_3; }
	inline int32_t* get_address_of__Outcome_3() { return &____Outcome_3; }
	inline void set__Outcome_3(int32_t value)
	{
		____Outcome_3 = value;
	}

	inline static int32_t get_offset_of__Status_4() { return static_cast<int32_t>(offsetof(UM_TBM_Participant_t1041318914, ____Status_4)); }
	inline int32_t get__Status_4() const { return ____Status_4; }
	inline int32_t* get_address_of__Status_4() { return &____Status_4; }
	inline void set__Status_4(int32_t value)
	{
		____Status_4 = value;
	}

	inline static int32_t get_offset_of_BigPhotoLoaded_5() { return static_cast<int32_t>(offsetof(UM_TBM_Participant_t1041318914, ___BigPhotoLoaded_5)); }
	inline Action_1_t3344795111 * get_BigPhotoLoaded_5() const { return ___BigPhotoLoaded_5; }
	inline Action_1_t3344795111 ** get_address_of_BigPhotoLoaded_5() { return &___BigPhotoLoaded_5; }
	inline void set_BigPhotoLoaded_5(Action_1_t3344795111 * value)
	{
		___BigPhotoLoaded_5 = value;
		Il2CppCodeGenWriteBarrier(&___BigPhotoLoaded_5, value);
	}

	inline static int32_t get_offset_of_SmallPhotoLoaded_6() { return static_cast<int32_t>(offsetof(UM_TBM_Participant_t1041318914, ___SmallPhotoLoaded_6)); }
	inline Action_1_t3344795111 * get_SmallPhotoLoaded_6() const { return ___SmallPhotoLoaded_6; }
	inline Action_1_t3344795111 ** get_address_of_SmallPhotoLoaded_6() { return &___SmallPhotoLoaded_6; }
	inline void set_SmallPhotoLoaded_6(Action_1_t3344795111 * value)
	{
		___SmallPhotoLoaded_6 = value;
		Il2CppCodeGenWriteBarrier(&___SmallPhotoLoaded_6, value);
	}

	inline static int32_t get_offset_of__GK_Participan_7() { return static_cast<int32_t>(offsetof(UM_TBM_Participant_t1041318914, ____GK_Participan_7)); }
	inline GK_TBM_Participant_t3803955090 * get__GK_Participan_7() const { return ____GK_Participan_7; }
	inline GK_TBM_Participant_t3803955090 ** get_address_of__GK_Participan_7() { return &____GK_Participan_7; }
	inline void set__GK_Participan_7(GK_TBM_Participant_t3803955090 * value)
	{
		____GK_Participan_7 = value;
		Il2CppCodeGenWriteBarrier(&____GK_Participan_7, value);
	}

	inline static int32_t get_offset_of__GP_Participant_8() { return static_cast<int32_t>(offsetof(UM_TBM_Participant_t1041318914, ____GP_Participant_8)); }
	inline GP_Participant_t2884377673 * get__GP_Participant_8() const { return ____GP_Participant_8; }
	inline GP_Participant_t2884377673 ** get_address_of__GP_Participant_8() { return &____GP_Participant_8; }
	inline void set__GP_Participant_8(GP_Participant_t2884377673 * value)
	{
		____GP_Participant_8 = value;
		Il2CppCodeGenWriteBarrier(&____GP_Participant_8, value);
	}
};

struct UM_TBM_Participant_t1041318914_StaticFields
{
public:
	// System.Action`1<UnityEngine.Texture2D> UM_TBM_Participant::<>f__am$cache0
	Action_1_t3344795111 * ___U3CU3Ef__amU24cache0_9;
	// System.Action`1<UnityEngine.Texture2D> UM_TBM_Participant::<>f__am$cache1
	Action_1_t3344795111 * ___U3CU3Ef__amU24cache1_10;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_9() { return static_cast<int32_t>(offsetof(UM_TBM_Participant_t1041318914_StaticFields, ___U3CU3Ef__amU24cache0_9)); }
	inline Action_1_t3344795111 * get_U3CU3Ef__amU24cache0_9() const { return ___U3CU3Ef__amU24cache0_9; }
	inline Action_1_t3344795111 ** get_address_of_U3CU3Ef__amU24cache0_9() { return &___U3CU3Ef__amU24cache0_9; }
	inline void set_U3CU3Ef__amU24cache0_9(Action_1_t3344795111 * value)
	{
		___U3CU3Ef__amU24cache0_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_9, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_10() { return static_cast<int32_t>(offsetof(UM_TBM_Participant_t1041318914_StaticFields, ___U3CU3Ef__amU24cache1_10)); }
	inline Action_1_t3344795111 * get_U3CU3Ef__amU24cache1_10() const { return ___U3CU3Ef__amU24cache1_10; }
	inline Action_1_t3344795111 ** get_address_of_U3CU3Ef__amU24cache1_10() { return &___U3CU3Ef__amU24cache1_10; }
	inline void set_U3CU3Ef__amU24cache1_10(Action_1_t3344795111 * value)
	{
		___U3CU3Ef__amU24cache1_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
