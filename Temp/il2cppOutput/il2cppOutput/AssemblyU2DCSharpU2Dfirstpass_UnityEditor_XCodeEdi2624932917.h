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
// UnityEditor.XCodeEditor.PBXDictionary
struct PBXDictionary_t1529060216;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEditor.XCodeEditor.PBXObject
struct  PBXObject_t2624932917  : public Il2CppObject
{
public:
	// System.String UnityEditor.XCodeEditor.PBXObject::_guid
	String_t* ____guid_1;
	// UnityEditor.XCodeEditor.PBXDictionary UnityEditor.XCodeEditor.PBXObject::_data
	PBXDictionary_t1529060216 * ____data_2;

public:
	inline static int32_t get_offset_of__guid_1() { return static_cast<int32_t>(offsetof(PBXObject_t2624932917, ____guid_1)); }
	inline String_t* get__guid_1() const { return ____guid_1; }
	inline String_t** get_address_of__guid_1() { return &____guid_1; }
	inline void set__guid_1(String_t* value)
	{
		____guid_1 = value;
		Il2CppCodeGenWriteBarrier(&____guid_1, value);
	}

	inline static int32_t get_offset_of__data_2() { return static_cast<int32_t>(offsetof(PBXObject_t2624932917, ____data_2)); }
	inline PBXDictionary_t1529060216 * get__data_2() const { return ____data_2; }
	inline PBXDictionary_t1529060216 ** get_address_of__data_2() { return &____data_2; }
	inline void set__data_2(PBXDictionary_t1529060216 * value)
	{
		____data_2 = value;
		Il2CppCodeGenWriteBarrier(&____data_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
