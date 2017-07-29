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
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.IOSNative.Models.UrlType
struct  UrlType_t4142507437  : public Il2CppObject
{
public:
	// System.String SA.IOSNative.Models.UrlType::Identifier
	String_t* ___Identifier_0;
	// System.Collections.Generic.List`1<System.String> SA.IOSNative.Models.UrlType::Schemes
	List_1_t1398341365 * ___Schemes_1;
	// System.Boolean SA.IOSNative.Models.UrlType::IsOpen
	bool ___IsOpen_2;

public:
	inline static int32_t get_offset_of_Identifier_0() { return static_cast<int32_t>(offsetof(UrlType_t4142507437, ___Identifier_0)); }
	inline String_t* get_Identifier_0() const { return ___Identifier_0; }
	inline String_t** get_address_of_Identifier_0() { return &___Identifier_0; }
	inline void set_Identifier_0(String_t* value)
	{
		___Identifier_0 = value;
		Il2CppCodeGenWriteBarrier(&___Identifier_0, value);
	}

	inline static int32_t get_offset_of_Schemes_1() { return static_cast<int32_t>(offsetof(UrlType_t4142507437, ___Schemes_1)); }
	inline List_1_t1398341365 * get_Schemes_1() const { return ___Schemes_1; }
	inline List_1_t1398341365 ** get_address_of_Schemes_1() { return &___Schemes_1; }
	inline void set_Schemes_1(List_1_t1398341365 * value)
	{
		___Schemes_1 = value;
		Il2CppCodeGenWriteBarrier(&___Schemes_1, value);
	}

	inline static int32_t get_offset_of_IsOpen_2() { return static_cast<int32_t>(offsetof(UrlType_t4142507437, ___IsOpen_2)); }
	inline bool get_IsOpen_2() const { return ___IsOpen_2; }
	inline bool* get_address_of_IsOpen_2() { return &___IsOpen_2; }
	inline void set_IsOpen_2(bool value)
	{
		___IsOpen_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
