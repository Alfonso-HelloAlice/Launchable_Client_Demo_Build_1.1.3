#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEditor.XCodeEditor.XCMod
struct  XCMod_t1184725831  : public Il2CppObject
{
public:
	// System.Collections.Hashtable UnityEditor.XCodeEditor.XCMod::_datastore
	Hashtable_t909839986 * ____datastore_0;
	// System.Collections.ArrayList UnityEditor.XCodeEditor.XCMod::_libs
	ArrayList_t4252133567 * ____libs_1;
	// System.String UnityEditor.XCodeEditor.XCMod::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_2;
	// System.String UnityEditor.XCodeEditor.XCMod::<path>k__BackingField
	String_t* ___U3CpathU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of__datastore_0() { return static_cast<int32_t>(offsetof(XCMod_t1184725831, ____datastore_0)); }
	inline Hashtable_t909839986 * get__datastore_0() const { return ____datastore_0; }
	inline Hashtable_t909839986 ** get_address_of__datastore_0() { return &____datastore_0; }
	inline void set__datastore_0(Hashtable_t909839986 * value)
	{
		____datastore_0 = value;
		Il2CppCodeGenWriteBarrier(&____datastore_0, value);
	}

	inline static int32_t get_offset_of__libs_1() { return static_cast<int32_t>(offsetof(XCMod_t1184725831, ____libs_1)); }
	inline ArrayList_t4252133567 * get__libs_1() const { return ____libs_1; }
	inline ArrayList_t4252133567 ** get_address_of__libs_1() { return &____libs_1; }
	inline void set__libs_1(ArrayList_t4252133567 * value)
	{
		____libs_1 = value;
		Il2CppCodeGenWriteBarrier(&____libs_1, value);
	}

	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(XCMod_t1184725831, ___U3CnameU3Ek__BackingField_2)); }
	inline String_t* get_U3CnameU3Ek__BackingField_2() const { return ___U3CnameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_2() { return &___U3CnameU3Ek__BackingField_2; }
	inline void set_U3CnameU3Ek__BackingField_2(String_t* value)
	{
		___U3CnameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CnameU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3CpathU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(XCMod_t1184725831, ___U3CpathU3Ek__BackingField_3)); }
	inline String_t* get_U3CpathU3Ek__BackingField_3() const { return ___U3CpathU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CpathU3Ek__BackingField_3() { return &___U3CpathU3Ek__BackingField_3; }
	inline void set_U3CpathU3Ek__BackingField_3(String_t* value)
	{
		___U3CpathU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CpathU3Ek__BackingField_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
