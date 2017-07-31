#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_GPAchievementType785407574.h"
#include "AssemblyU2DCSharpU2Dfirstpass_GPAchievementState819112501.h"

// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GPAchievement
struct  GPAchievement_t4279788054  : public Il2CppObject
{
public:
	// System.Boolean GPAchievement::IsOpen
	bool ___IsOpen_0;
	// System.String GPAchievement::_id
	String_t* ____id_1;
	// System.String GPAchievement::_name
	String_t* ____name_2;
	// System.String GPAchievement::_description
	String_t* ____description_3;
	// UnityEngine.Texture2D GPAchievement::_Texture
	Texture2D_t3542995729 * ____Texture_4;
	// System.Int32 GPAchievement::_currentSteps
	int32_t ____currentSteps_5;
	// System.Int32 GPAchievement::_totalSteps
	int32_t ____totalSteps_6;
	// GPAchievementType GPAchievement::_type
	int32_t ____type_7;
	// GPAchievementState GPAchievement::_state
	int32_t ____state_8;

public:
	inline static int32_t get_offset_of_IsOpen_0() { return static_cast<int32_t>(offsetof(GPAchievement_t4279788054, ___IsOpen_0)); }
	inline bool get_IsOpen_0() const { return ___IsOpen_0; }
	inline bool* get_address_of_IsOpen_0() { return &___IsOpen_0; }
	inline void set_IsOpen_0(bool value)
	{
		___IsOpen_0 = value;
	}

	inline static int32_t get_offset_of__id_1() { return static_cast<int32_t>(offsetof(GPAchievement_t4279788054, ____id_1)); }
	inline String_t* get__id_1() const { return ____id_1; }
	inline String_t** get_address_of__id_1() { return &____id_1; }
	inline void set__id_1(String_t* value)
	{
		____id_1 = value;
		Il2CppCodeGenWriteBarrier(&____id_1, value);
	}

	inline static int32_t get_offset_of__name_2() { return static_cast<int32_t>(offsetof(GPAchievement_t4279788054, ____name_2)); }
	inline String_t* get__name_2() const { return ____name_2; }
	inline String_t** get_address_of__name_2() { return &____name_2; }
	inline void set__name_2(String_t* value)
	{
		____name_2 = value;
		Il2CppCodeGenWriteBarrier(&____name_2, value);
	}

	inline static int32_t get_offset_of__description_3() { return static_cast<int32_t>(offsetof(GPAchievement_t4279788054, ____description_3)); }
	inline String_t* get__description_3() const { return ____description_3; }
	inline String_t** get_address_of__description_3() { return &____description_3; }
	inline void set__description_3(String_t* value)
	{
		____description_3 = value;
		Il2CppCodeGenWriteBarrier(&____description_3, value);
	}

	inline static int32_t get_offset_of__Texture_4() { return static_cast<int32_t>(offsetof(GPAchievement_t4279788054, ____Texture_4)); }
	inline Texture2D_t3542995729 * get__Texture_4() const { return ____Texture_4; }
	inline Texture2D_t3542995729 ** get_address_of__Texture_4() { return &____Texture_4; }
	inline void set__Texture_4(Texture2D_t3542995729 * value)
	{
		____Texture_4 = value;
		Il2CppCodeGenWriteBarrier(&____Texture_4, value);
	}

	inline static int32_t get_offset_of__currentSteps_5() { return static_cast<int32_t>(offsetof(GPAchievement_t4279788054, ____currentSteps_5)); }
	inline int32_t get__currentSteps_5() const { return ____currentSteps_5; }
	inline int32_t* get_address_of__currentSteps_5() { return &____currentSteps_5; }
	inline void set__currentSteps_5(int32_t value)
	{
		____currentSteps_5 = value;
	}

	inline static int32_t get_offset_of__totalSteps_6() { return static_cast<int32_t>(offsetof(GPAchievement_t4279788054, ____totalSteps_6)); }
	inline int32_t get__totalSteps_6() const { return ____totalSteps_6; }
	inline int32_t* get_address_of__totalSteps_6() { return &____totalSteps_6; }
	inline void set__totalSteps_6(int32_t value)
	{
		____totalSteps_6 = value;
	}

	inline static int32_t get_offset_of__type_7() { return static_cast<int32_t>(offsetof(GPAchievement_t4279788054, ____type_7)); }
	inline int32_t get__type_7() const { return ____type_7; }
	inline int32_t* get_address_of__type_7() { return &____type_7; }
	inline void set__type_7(int32_t value)
	{
		____type_7 = value;
	}

	inline static int32_t get_offset_of__state_8() { return static_cast<int32_t>(offsetof(GPAchievement_t4279788054, ____state_8)); }
	inline int32_t get__state_8() const { return ____state_8; }
	inline int32_t* get_address_of__state_8() { return &____state_8; }
	inline void set__state_8(int32_t value)
	{
		____state_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
