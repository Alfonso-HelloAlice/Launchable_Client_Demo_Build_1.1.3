#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_GP_RTM_ParticipantSt2642611273.h"

// System.String
struct String_t;
// GP_ParticipantResult
struct GP_ParticipantResult_t2469018720;
// System.Action`1<UnityEngine.Texture2D>
struct Action_1_t3344795111;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GP_Participant
struct  GP_Participant_t2884377673  : public Il2CppObject
{
public:
	// System.String GP_Participant::_id
	String_t* ____id_0;
	// System.String GP_Participant::_playerid
	String_t* ____playerid_1;
	// System.String GP_Participant::_HiResImageUrl
	String_t* ____HiResImageUrl_2;
	// System.String GP_Participant::_IconImageUrl
	String_t* ____IconImageUrl_3;
	// System.String GP_Participant::_DisplayName
	String_t* ____DisplayName_4;
	// GP_ParticipantResult GP_Participant::_result
	GP_ParticipantResult_t2469018720 * ____result_5;
	// GP_RTM_ParticipantStatus GP_Participant::_status
	int32_t ____status_6;
	// System.Action`1<UnityEngine.Texture2D> GP_Participant::BigPhotoLoaded
	Action_1_t3344795111 * ___BigPhotoLoaded_7;
	// System.Action`1<UnityEngine.Texture2D> GP_Participant::SmallPhotoLoaded
	Action_1_t3344795111 * ___SmallPhotoLoaded_8;
	// UnityEngine.Texture2D GP_Participant::_SmallPhoto
	Texture2D_t3542995729 * ____SmallPhoto_9;
	// UnityEngine.Texture2D GP_Participant::_BigPhoto
	Texture2D_t3542995729 * ____BigPhoto_10;

public:
	inline static int32_t get_offset_of__id_0() { return static_cast<int32_t>(offsetof(GP_Participant_t2884377673, ____id_0)); }
	inline String_t* get__id_0() const { return ____id_0; }
	inline String_t** get_address_of__id_0() { return &____id_0; }
	inline void set__id_0(String_t* value)
	{
		____id_0 = value;
		Il2CppCodeGenWriteBarrier(&____id_0, value);
	}

	inline static int32_t get_offset_of__playerid_1() { return static_cast<int32_t>(offsetof(GP_Participant_t2884377673, ____playerid_1)); }
	inline String_t* get__playerid_1() const { return ____playerid_1; }
	inline String_t** get_address_of__playerid_1() { return &____playerid_1; }
	inline void set__playerid_1(String_t* value)
	{
		____playerid_1 = value;
		Il2CppCodeGenWriteBarrier(&____playerid_1, value);
	}

	inline static int32_t get_offset_of__HiResImageUrl_2() { return static_cast<int32_t>(offsetof(GP_Participant_t2884377673, ____HiResImageUrl_2)); }
	inline String_t* get__HiResImageUrl_2() const { return ____HiResImageUrl_2; }
	inline String_t** get_address_of__HiResImageUrl_2() { return &____HiResImageUrl_2; }
	inline void set__HiResImageUrl_2(String_t* value)
	{
		____HiResImageUrl_2 = value;
		Il2CppCodeGenWriteBarrier(&____HiResImageUrl_2, value);
	}

	inline static int32_t get_offset_of__IconImageUrl_3() { return static_cast<int32_t>(offsetof(GP_Participant_t2884377673, ____IconImageUrl_3)); }
	inline String_t* get__IconImageUrl_3() const { return ____IconImageUrl_3; }
	inline String_t** get_address_of__IconImageUrl_3() { return &____IconImageUrl_3; }
	inline void set__IconImageUrl_3(String_t* value)
	{
		____IconImageUrl_3 = value;
		Il2CppCodeGenWriteBarrier(&____IconImageUrl_3, value);
	}

	inline static int32_t get_offset_of__DisplayName_4() { return static_cast<int32_t>(offsetof(GP_Participant_t2884377673, ____DisplayName_4)); }
	inline String_t* get__DisplayName_4() const { return ____DisplayName_4; }
	inline String_t** get_address_of__DisplayName_4() { return &____DisplayName_4; }
	inline void set__DisplayName_4(String_t* value)
	{
		____DisplayName_4 = value;
		Il2CppCodeGenWriteBarrier(&____DisplayName_4, value);
	}

	inline static int32_t get_offset_of__result_5() { return static_cast<int32_t>(offsetof(GP_Participant_t2884377673, ____result_5)); }
	inline GP_ParticipantResult_t2469018720 * get__result_5() const { return ____result_5; }
	inline GP_ParticipantResult_t2469018720 ** get_address_of__result_5() { return &____result_5; }
	inline void set__result_5(GP_ParticipantResult_t2469018720 * value)
	{
		____result_5 = value;
		Il2CppCodeGenWriteBarrier(&____result_5, value);
	}

	inline static int32_t get_offset_of__status_6() { return static_cast<int32_t>(offsetof(GP_Participant_t2884377673, ____status_6)); }
	inline int32_t get__status_6() const { return ____status_6; }
	inline int32_t* get_address_of__status_6() { return &____status_6; }
	inline void set__status_6(int32_t value)
	{
		____status_6 = value;
	}

	inline static int32_t get_offset_of_BigPhotoLoaded_7() { return static_cast<int32_t>(offsetof(GP_Participant_t2884377673, ___BigPhotoLoaded_7)); }
	inline Action_1_t3344795111 * get_BigPhotoLoaded_7() const { return ___BigPhotoLoaded_7; }
	inline Action_1_t3344795111 ** get_address_of_BigPhotoLoaded_7() { return &___BigPhotoLoaded_7; }
	inline void set_BigPhotoLoaded_7(Action_1_t3344795111 * value)
	{
		___BigPhotoLoaded_7 = value;
		Il2CppCodeGenWriteBarrier(&___BigPhotoLoaded_7, value);
	}

	inline static int32_t get_offset_of_SmallPhotoLoaded_8() { return static_cast<int32_t>(offsetof(GP_Participant_t2884377673, ___SmallPhotoLoaded_8)); }
	inline Action_1_t3344795111 * get_SmallPhotoLoaded_8() const { return ___SmallPhotoLoaded_8; }
	inline Action_1_t3344795111 ** get_address_of_SmallPhotoLoaded_8() { return &___SmallPhotoLoaded_8; }
	inline void set_SmallPhotoLoaded_8(Action_1_t3344795111 * value)
	{
		___SmallPhotoLoaded_8 = value;
		Il2CppCodeGenWriteBarrier(&___SmallPhotoLoaded_8, value);
	}

	inline static int32_t get_offset_of__SmallPhoto_9() { return static_cast<int32_t>(offsetof(GP_Participant_t2884377673, ____SmallPhoto_9)); }
	inline Texture2D_t3542995729 * get__SmallPhoto_9() const { return ____SmallPhoto_9; }
	inline Texture2D_t3542995729 ** get_address_of__SmallPhoto_9() { return &____SmallPhoto_9; }
	inline void set__SmallPhoto_9(Texture2D_t3542995729 * value)
	{
		____SmallPhoto_9 = value;
		Il2CppCodeGenWriteBarrier(&____SmallPhoto_9, value);
	}

	inline static int32_t get_offset_of__BigPhoto_10() { return static_cast<int32_t>(offsetof(GP_Participant_t2884377673, ____BigPhoto_10)); }
	inline Texture2D_t3542995729 * get__BigPhoto_10() const { return ____BigPhoto_10; }
	inline Texture2D_t3542995729 ** get_address_of__BigPhoto_10() { return &____BigPhoto_10; }
	inline void set__BigPhoto_10(Texture2D_t3542995729 * value)
	{
		____BigPhoto_10 = value;
		Il2CppCodeGenWriteBarrier(&____BigPhoto_10, value);
	}
};

struct GP_Participant_t2884377673_StaticFields
{
public:
	// System.Action`1<UnityEngine.Texture2D> GP_Participant::<>f__am$cache0
	Action_1_t3344795111 * ___U3CU3Ef__amU24cache0_11;
	// System.Action`1<UnityEngine.Texture2D> GP_Participant::<>f__am$cache1
	Action_1_t3344795111 * ___U3CU3Ef__amU24cache1_12;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_11() { return static_cast<int32_t>(offsetof(GP_Participant_t2884377673_StaticFields, ___U3CU3Ef__amU24cache0_11)); }
	inline Action_1_t3344795111 * get_U3CU3Ef__amU24cache0_11() const { return ___U3CU3Ef__amU24cache0_11; }
	inline Action_1_t3344795111 ** get_address_of_U3CU3Ef__amU24cache0_11() { return &___U3CU3Ef__amU24cache0_11; }
	inline void set_U3CU3Ef__amU24cache0_11(Action_1_t3344795111 * value)
	{
		___U3CU3Ef__amU24cache0_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_11, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_12() { return static_cast<int32_t>(offsetof(GP_Participant_t2884377673_StaticFields, ___U3CU3Ef__amU24cache1_12)); }
	inline Action_1_t3344795111 * get_U3CU3Ef__amU24cache1_12() const { return ___U3CU3Ef__amU24cache1_12; }
	inline Action_1_t3344795111 ** get_address_of_U3CU3Ef__amU24cache1_12() { return &___U3CU3Ef__amU24cache1_12; }
	inline void set_U3CU3Ef__amU24cache1_12(Action_1_t3344795111 * value)
	{
		___U3CU3Ef__amU24cache1_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
