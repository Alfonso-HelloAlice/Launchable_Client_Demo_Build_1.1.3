#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_GP_QuestState1072114879.h"

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GP_Quest
struct  GP_Quest_t1641883470  : public Il2CppObject
{
public:
	// System.String GP_Quest::Id
	String_t* ___Id_0;
	// System.String GP_Quest::Name
	String_t* ___Name_1;
	// System.String GP_Quest::Description
	String_t* ___Description_2;
	// System.String GP_Quest::IconImageUrl
	String_t* ___IconImageUrl_3;
	// System.String GP_Quest::BannerImageUrl
	String_t* ___BannerImageUrl_4;
	// GP_QuestState GP_Quest::state
	int32_t ___state_5;
	// System.Int64 GP_Quest::LastUpdatedTimestamp
	int64_t ___LastUpdatedTimestamp_6;
	// System.Int64 GP_Quest::AcceptedTimestamp
	int64_t ___AcceptedTimestamp_7;
	// System.Int64 GP_Quest::EndTimestamp
	int64_t ___EndTimestamp_8;
	// System.Byte[] GP_Quest::RewardData
	ByteU5BU5D_t3397334013* ___RewardData_9;
	// System.Int64 GP_Quest::CurrentProgress
	int64_t ___CurrentProgress_10;
	// System.Int64 GP_Quest::TargetProgress
	int64_t ___TargetProgress_11;
	// UnityEngine.Texture2D GP_Quest::_icon
	Texture2D_t3542995729 * ____icon_12;
	// UnityEngine.Texture2D GP_Quest::_banner
	Texture2D_t3542995729 * ____banner_13;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(GP_Quest_t1641883470, ___Id_0)); }
	inline String_t* get_Id_0() const { return ___Id_0; }
	inline String_t** get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(String_t* value)
	{
		___Id_0 = value;
		Il2CppCodeGenWriteBarrier(&___Id_0, value);
	}

	inline static int32_t get_offset_of_Name_1() { return static_cast<int32_t>(offsetof(GP_Quest_t1641883470, ___Name_1)); }
	inline String_t* get_Name_1() const { return ___Name_1; }
	inline String_t** get_address_of_Name_1() { return &___Name_1; }
	inline void set_Name_1(String_t* value)
	{
		___Name_1 = value;
		Il2CppCodeGenWriteBarrier(&___Name_1, value);
	}

	inline static int32_t get_offset_of_Description_2() { return static_cast<int32_t>(offsetof(GP_Quest_t1641883470, ___Description_2)); }
	inline String_t* get_Description_2() const { return ___Description_2; }
	inline String_t** get_address_of_Description_2() { return &___Description_2; }
	inline void set_Description_2(String_t* value)
	{
		___Description_2 = value;
		Il2CppCodeGenWriteBarrier(&___Description_2, value);
	}

	inline static int32_t get_offset_of_IconImageUrl_3() { return static_cast<int32_t>(offsetof(GP_Quest_t1641883470, ___IconImageUrl_3)); }
	inline String_t* get_IconImageUrl_3() const { return ___IconImageUrl_3; }
	inline String_t** get_address_of_IconImageUrl_3() { return &___IconImageUrl_3; }
	inline void set_IconImageUrl_3(String_t* value)
	{
		___IconImageUrl_3 = value;
		Il2CppCodeGenWriteBarrier(&___IconImageUrl_3, value);
	}

	inline static int32_t get_offset_of_BannerImageUrl_4() { return static_cast<int32_t>(offsetof(GP_Quest_t1641883470, ___BannerImageUrl_4)); }
	inline String_t* get_BannerImageUrl_4() const { return ___BannerImageUrl_4; }
	inline String_t** get_address_of_BannerImageUrl_4() { return &___BannerImageUrl_4; }
	inline void set_BannerImageUrl_4(String_t* value)
	{
		___BannerImageUrl_4 = value;
		Il2CppCodeGenWriteBarrier(&___BannerImageUrl_4, value);
	}

	inline static int32_t get_offset_of_state_5() { return static_cast<int32_t>(offsetof(GP_Quest_t1641883470, ___state_5)); }
	inline int32_t get_state_5() const { return ___state_5; }
	inline int32_t* get_address_of_state_5() { return &___state_5; }
	inline void set_state_5(int32_t value)
	{
		___state_5 = value;
	}

	inline static int32_t get_offset_of_LastUpdatedTimestamp_6() { return static_cast<int32_t>(offsetof(GP_Quest_t1641883470, ___LastUpdatedTimestamp_6)); }
	inline int64_t get_LastUpdatedTimestamp_6() const { return ___LastUpdatedTimestamp_6; }
	inline int64_t* get_address_of_LastUpdatedTimestamp_6() { return &___LastUpdatedTimestamp_6; }
	inline void set_LastUpdatedTimestamp_6(int64_t value)
	{
		___LastUpdatedTimestamp_6 = value;
	}

	inline static int32_t get_offset_of_AcceptedTimestamp_7() { return static_cast<int32_t>(offsetof(GP_Quest_t1641883470, ___AcceptedTimestamp_7)); }
	inline int64_t get_AcceptedTimestamp_7() const { return ___AcceptedTimestamp_7; }
	inline int64_t* get_address_of_AcceptedTimestamp_7() { return &___AcceptedTimestamp_7; }
	inline void set_AcceptedTimestamp_7(int64_t value)
	{
		___AcceptedTimestamp_7 = value;
	}

	inline static int32_t get_offset_of_EndTimestamp_8() { return static_cast<int32_t>(offsetof(GP_Quest_t1641883470, ___EndTimestamp_8)); }
	inline int64_t get_EndTimestamp_8() const { return ___EndTimestamp_8; }
	inline int64_t* get_address_of_EndTimestamp_8() { return &___EndTimestamp_8; }
	inline void set_EndTimestamp_8(int64_t value)
	{
		___EndTimestamp_8 = value;
	}

	inline static int32_t get_offset_of_RewardData_9() { return static_cast<int32_t>(offsetof(GP_Quest_t1641883470, ___RewardData_9)); }
	inline ByteU5BU5D_t3397334013* get_RewardData_9() const { return ___RewardData_9; }
	inline ByteU5BU5D_t3397334013** get_address_of_RewardData_9() { return &___RewardData_9; }
	inline void set_RewardData_9(ByteU5BU5D_t3397334013* value)
	{
		___RewardData_9 = value;
		Il2CppCodeGenWriteBarrier(&___RewardData_9, value);
	}

	inline static int32_t get_offset_of_CurrentProgress_10() { return static_cast<int32_t>(offsetof(GP_Quest_t1641883470, ___CurrentProgress_10)); }
	inline int64_t get_CurrentProgress_10() const { return ___CurrentProgress_10; }
	inline int64_t* get_address_of_CurrentProgress_10() { return &___CurrentProgress_10; }
	inline void set_CurrentProgress_10(int64_t value)
	{
		___CurrentProgress_10 = value;
	}

	inline static int32_t get_offset_of_TargetProgress_11() { return static_cast<int32_t>(offsetof(GP_Quest_t1641883470, ___TargetProgress_11)); }
	inline int64_t get_TargetProgress_11() const { return ___TargetProgress_11; }
	inline int64_t* get_address_of_TargetProgress_11() { return &___TargetProgress_11; }
	inline void set_TargetProgress_11(int64_t value)
	{
		___TargetProgress_11 = value;
	}

	inline static int32_t get_offset_of__icon_12() { return static_cast<int32_t>(offsetof(GP_Quest_t1641883470, ____icon_12)); }
	inline Texture2D_t3542995729 * get__icon_12() const { return ____icon_12; }
	inline Texture2D_t3542995729 ** get_address_of__icon_12() { return &____icon_12; }
	inline void set__icon_12(Texture2D_t3542995729 * value)
	{
		____icon_12 = value;
		Il2CppCodeGenWriteBarrier(&____icon_12, value);
	}

	inline static int32_t get_offset_of__banner_13() { return static_cast<int32_t>(offsetof(GP_Quest_t1641883470, ____banner_13)); }
	inline Texture2D_t3542995729 * get__banner_13() const { return ____banner_13; }
	inline Texture2D_t3542995729 ** get_address_of__banner_13() { return &____banner_13; }
	inline void set__banner_13(Texture2D_t3542995729 * value)
	{
		____banner_13 = value;
		Il2CppCodeGenWriteBarrier(&____banner_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
