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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UM_Achievement
struct  UM_Achievement_t3015670890  : public Il2CppObject
{
public:
	// System.Boolean UM_Achievement::IsOpen
	bool ___IsOpen_0;
	// System.String UM_Achievement::id
	String_t* ___id_1;
	// System.Int32 UM_Achievement::_Steps
	int32_t ____Steps_2;
	// System.String UM_Achievement::_Description
	String_t* ____Description_3;
	// UnityEngine.Texture2D UM_Achievement::_Texture
	Texture2D_t3542995729 * ____Texture_4;
	// System.Boolean UM_Achievement::IsIncremental
	bool ___IsIncremental_5;
	// System.String UM_Achievement::IOSId
	String_t* ___IOSId_6;
	// System.String UM_Achievement::AndroidId
	String_t* ___AndroidId_7;
	// System.String UM_Achievement::AmazonId
	String_t* ___AmazonId_8;

public:
	inline static int32_t get_offset_of_IsOpen_0() { return static_cast<int32_t>(offsetof(UM_Achievement_t3015670890, ___IsOpen_0)); }
	inline bool get_IsOpen_0() const { return ___IsOpen_0; }
	inline bool* get_address_of_IsOpen_0() { return &___IsOpen_0; }
	inline void set_IsOpen_0(bool value)
	{
		___IsOpen_0 = value;
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(UM_Achievement_t3015670890, ___id_1)); }
	inline String_t* get_id_1() const { return ___id_1; }
	inline String_t** get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(String_t* value)
	{
		___id_1 = value;
		Il2CppCodeGenWriteBarrier(&___id_1, value);
	}

	inline static int32_t get_offset_of__Steps_2() { return static_cast<int32_t>(offsetof(UM_Achievement_t3015670890, ____Steps_2)); }
	inline int32_t get__Steps_2() const { return ____Steps_2; }
	inline int32_t* get_address_of__Steps_2() { return &____Steps_2; }
	inline void set__Steps_2(int32_t value)
	{
		____Steps_2 = value;
	}

	inline static int32_t get_offset_of__Description_3() { return static_cast<int32_t>(offsetof(UM_Achievement_t3015670890, ____Description_3)); }
	inline String_t* get__Description_3() const { return ____Description_3; }
	inline String_t** get_address_of__Description_3() { return &____Description_3; }
	inline void set__Description_3(String_t* value)
	{
		____Description_3 = value;
		Il2CppCodeGenWriteBarrier(&____Description_3, value);
	}

	inline static int32_t get_offset_of__Texture_4() { return static_cast<int32_t>(offsetof(UM_Achievement_t3015670890, ____Texture_4)); }
	inline Texture2D_t3542995729 * get__Texture_4() const { return ____Texture_4; }
	inline Texture2D_t3542995729 ** get_address_of__Texture_4() { return &____Texture_4; }
	inline void set__Texture_4(Texture2D_t3542995729 * value)
	{
		____Texture_4 = value;
		Il2CppCodeGenWriteBarrier(&____Texture_4, value);
	}

	inline static int32_t get_offset_of_IsIncremental_5() { return static_cast<int32_t>(offsetof(UM_Achievement_t3015670890, ___IsIncremental_5)); }
	inline bool get_IsIncremental_5() const { return ___IsIncremental_5; }
	inline bool* get_address_of_IsIncremental_5() { return &___IsIncremental_5; }
	inline void set_IsIncremental_5(bool value)
	{
		___IsIncremental_5 = value;
	}

	inline static int32_t get_offset_of_IOSId_6() { return static_cast<int32_t>(offsetof(UM_Achievement_t3015670890, ___IOSId_6)); }
	inline String_t* get_IOSId_6() const { return ___IOSId_6; }
	inline String_t** get_address_of_IOSId_6() { return &___IOSId_6; }
	inline void set_IOSId_6(String_t* value)
	{
		___IOSId_6 = value;
		Il2CppCodeGenWriteBarrier(&___IOSId_6, value);
	}

	inline static int32_t get_offset_of_AndroidId_7() { return static_cast<int32_t>(offsetof(UM_Achievement_t3015670890, ___AndroidId_7)); }
	inline String_t* get_AndroidId_7() const { return ___AndroidId_7; }
	inline String_t** get_address_of_AndroidId_7() { return &___AndroidId_7; }
	inline void set_AndroidId_7(String_t* value)
	{
		___AndroidId_7 = value;
		Il2CppCodeGenWriteBarrier(&___AndroidId_7, value);
	}

	inline static int32_t get_offset_of_AmazonId_8() { return static_cast<int32_t>(offsetof(UM_Achievement_t3015670890, ___AmazonId_8)); }
	inline String_t* get_AmazonId_8() const { return ___AmazonId_8; }
	inline String_t** get_address_of_AmazonId_8() { return &___AmazonId_8; }
	inline void set_AmazonId_8(String_t* value)
	{
		___AmazonId_8 = value;
		Il2CppCodeGenWriteBarrier(&___AmazonId_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
