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

// GP_Event
struct  GP_Event_t323143668  : public Il2CppObject
{
public:
	// System.String GP_Event::Id
	String_t* ___Id_0;
	// System.String GP_Event::Description
	String_t* ___Description_1;
	// System.String GP_Event::IconImageUrl
	String_t* ___IconImageUrl_2;
	// System.String GP_Event::FormattedValue
	String_t* ___FormattedValue_3;
	// System.Int64 GP_Event::Value
	int64_t ___Value_4;
	// UnityEngine.Texture2D GP_Event::_icon
	Texture2D_t3542995729 * ____icon_5;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(GP_Event_t323143668, ___Id_0)); }
	inline String_t* get_Id_0() const { return ___Id_0; }
	inline String_t** get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(String_t* value)
	{
		___Id_0 = value;
		Il2CppCodeGenWriteBarrier(&___Id_0, value);
	}

	inline static int32_t get_offset_of_Description_1() { return static_cast<int32_t>(offsetof(GP_Event_t323143668, ___Description_1)); }
	inline String_t* get_Description_1() const { return ___Description_1; }
	inline String_t** get_address_of_Description_1() { return &___Description_1; }
	inline void set_Description_1(String_t* value)
	{
		___Description_1 = value;
		Il2CppCodeGenWriteBarrier(&___Description_1, value);
	}

	inline static int32_t get_offset_of_IconImageUrl_2() { return static_cast<int32_t>(offsetof(GP_Event_t323143668, ___IconImageUrl_2)); }
	inline String_t* get_IconImageUrl_2() const { return ___IconImageUrl_2; }
	inline String_t** get_address_of_IconImageUrl_2() { return &___IconImageUrl_2; }
	inline void set_IconImageUrl_2(String_t* value)
	{
		___IconImageUrl_2 = value;
		Il2CppCodeGenWriteBarrier(&___IconImageUrl_2, value);
	}

	inline static int32_t get_offset_of_FormattedValue_3() { return static_cast<int32_t>(offsetof(GP_Event_t323143668, ___FormattedValue_3)); }
	inline String_t* get_FormattedValue_3() const { return ___FormattedValue_3; }
	inline String_t** get_address_of_FormattedValue_3() { return &___FormattedValue_3; }
	inline void set_FormattedValue_3(String_t* value)
	{
		___FormattedValue_3 = value;
		Il2CppCodeGenWriteBarrier(&___FormattedValue_3, value);
	}

	inline static int32_t get_offset_of_Value_4() { return static_cast<int32_t>(offsetof(GP_Event_t323143668, ___Value_4)); }
	inline int64_t get_Value_4() const { return ___Value_4; }
	inline int64_t* get_address_of_Value_4() { return &___Value_4; }
	inline void set_Value_4(int64_t value)
	{
		___Value_4 = value;
	}

	inline static int32_t get_offset_of__icon_5() { return static_cast<int32_t>(offsetof(GP_Event_t323143668, ____icon_5)); }
	inline Texture2D_t3542995729 * get__icon_5() const { return ____icon_5; }
	inline Texture2D_t3542995729 ** get_address_of__icon_5() { return &____icon_5; }
	inline void set__icon_5(Texture2D_t3542995729 * value)
	{
		____icon_5 = value;
		Il2CppCodeGenWriteBarrier(&____icon_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
