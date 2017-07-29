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

// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FB_Object
struct  FB_Object_t1438399806  : public Il2CppObject
{
public:
	// System.String FB_Object::Id
	String_t* ___Id_0;
	// System.Collections.Generic.List`1<System.String> FB_Object::ImageUrls
	List_1_t1398341365 * ___ImageUrls_1;
	// System.String FB_Object::Title
	String_t* ___Title_2;
	// System.String FB_Object::Type
	String_t* ___Type_3;
	// System.DateTime FB_Object::CreatedTime
	DateTime_t693205669  ___CreatedTime_4;
	// System.String FB_Object::CreatedTimeString
	String_t* ___CreatedTimeString_5;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(FB_Object_t1438399806, ___Id_0)); }
	inline String_t* get_Id_0() const { return ___Id_0; }
	inline String_t** get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(String_t* value)
	{
		___Id_0 = value;
		Il2CppCodeGenWriteBarrier(&___Id_0, value);
	}

	inline static int32_t get_offset_of_ImageUrls_1() { return static_cast<int32_t>(offsetof(FB_Object_t1438399806, ___ImageUrls_1)); }
	inline List_1_t1398341365 * get_ImageUrls_1() const { return ___ImageUrls_1; }
	inline List_1_t1398341365 ** get_address_of_ImageUrls_1() { return &___ImageUrls_1; }
	inline void set_ImageUrls_1(List_1_t1398341365 * value)
	{
		___ImageUrls_1 = value;
		Il2CppCodeGenWriteBarrier(&___ImageUrls_1, value);
	}

	inline static int32_t get_offset_of_Title_2() { return static_cast<int32_t>(offsetof(FB_Object_t1438399806, ___Title_2)); }
	inline String_t* get_Title_2() const { return ___Title_2; }
	inline String_t** get_address_of_Title_2() { return &___Title_2; }
	inline void set_Title_2(String_t* value)
	{
		___Title_2 = value;
		Il2CppCodeGenWriteBarrier(&___Title_2, value);
	}

	inline static int32_t get_offset_of_Type_3() { return static_cast<int32_t>(offsetof(FB_Object_t1438399806, ___Type_3)); }
	inline String_t* get_Type_3() const { return ___Type_3; }
	inline String_t** get_address_of_Type_3() { return &___Type_3; }
	inline void set_Type_3(String_t* value)
	{
		___Type_3 = value;
		Il2CppCodeGenWriteBarrier(&___Type_3, value);
	}

	inline static int32_t get_offset_of_CreatedTime_4() { return static_cast<int32_t>(offsetof(FB_Object_t1438399806, ___CreatedTime_4)); }
	inline DateTime_t693205669  get_CreatedTime_4() const { return ___CreatedTime_4; }
	inline DateTime_t693205669 * get_address_of_CreatedTime_4() { return &___CreatedTime_4; }
	inline void set_CreatedTime_4(DateTime_t693205669  value)
	{
		___CreatedTime_4 = value;
	}

	inline static int32_t get_offset_of_CreatedTimeString_5() { return static_cast<int32_t>(offsetof(FB_Object_t1438399806, ___CreatedTimeString_5)); }
	inline String_t* get_CreatedTimeString_5() const { return ___CreatedTimeString_5; }
	inline String_t** get_address_of_CreatedTimeString_5() { return &___CreatedTimeString_5; }
	inline void set_CreatedTimeString_5(String_t* value)
	{
		___CreatedTimeString_5 = value;
		Il2CppCodeGenWriteBarrier(&___CreatedTimeString_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
