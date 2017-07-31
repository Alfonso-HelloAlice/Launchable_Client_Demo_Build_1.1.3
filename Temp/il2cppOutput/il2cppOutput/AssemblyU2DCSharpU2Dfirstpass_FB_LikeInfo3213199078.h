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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FB_LikeInfo
struct  FB_LikeInfo_t3213199078  : public Il2CppObject
{
public:
	// System.String FB_LikeInfo::Id
	String_t* ___Id_0;
	// System.String FB_LikeInfo::Name
	String_t* ___Name_1;
	// System.String FB_LikeInfo::CreatedTime
	String_t* ___CreatedTime_2;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(FB_LikeInfo_t3213199078, ___Id_0)); }
	inline String_t* get_Id_0() const { return ___Id_0; }
	inline String_t** get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(String_t* value)
	{
		___Id_0 = value;
		Il2CppCodeGenWriteBarrier(&___Id_0, value);
	}

	inline static int32_t get_offset_of_Name_1() { return static_cast<int32_t>(offsetof(FB_LikeInfo_t3213199078, ___Name_1)); }
	inline String_t* get_Name_1() const { return ___Name_1; }
	inline String_t** get_address_of_Name_1() { return &___Name_1; }
	inline void set_Name_1(String_t* value)
	{
		___Name_1 = value;
		Il2CppCodeGenWriteBarrier(&___Name_1, value);
	}

	inline static int32_t get_offset_of_CreatedTime_2() { return static_cast<int32_t>(offsetof(FB_LikeInfo_t3213199078, ___CreatedTime_2)); }
	inline String_t* get_CreatedTime_2() const { return ___CreatedTime_2; }
	inline String_t** get_address_of_CreatedTime_2() { return &___CreatedTime_2; }
	inline void set_CreatedTime_2(String_t* value)
	{
		___CreatedTime_2 = value;
		Il2CppCodeGenWriteBarrier(&___CreatedTime_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
