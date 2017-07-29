#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEditor.XCodeEditor.PBXDictionary
struct PBXDictionary_t1529060216;
// System.String
struct String_t;
// UnityEditor.XCodeEditor.PBXResolver/PBXResolverReverseIndex
struct PBXResolverReverseIndex_t2032398825;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEditor.XCodeEditor.PBXResolver
struct  PBXResolver_t2315891534  : public Il2CppObject
{
public:
	// UnityEditor.XCodeEditor.PBXDictionary UnityEditor.XCodeEditor.PBXResolver::objects
	PBXDictionary_t1529060216 * ___objects_0;
	// System.String UnityEditor.XCodeEditor.PBXResolver::rootObject
	String_t* ___rootObject_1;
	// UnityEditor.XCodeEditor.PBXResolver/PBXResolverReverseIndex UnityEditor.XCodeEditor.PBXResolver::index
	PBXResolverReverseIndex_t2032398825 * ___index_2;

public:
	inline static int32_t get_offset_of_objects_0() { return static_cast<int32_t>(offsetof(PBXResolver_t2315891534, ___objects_0)); }
	inline PBXDictionary_t1529060216 * get_objects_0() const { return ___objects_0; }
	inline PBXDictionary_t1529060216 ** get_address_of_objects_0() { return &___objects_0; }
	inline void set_objects_0(PBXDictionary_t1529060216 * value)
	{
		___objects_0 = value;
		Il2CppCodeGenWriteBarrier(&___objects_0, value);
	}

	inline static int32_t get_offset_of_rootObject_1() { return static_cast<int32_t>(offsetof(PBXResolver_t2315891534, ___rootObject_1)); }
	inline String_t* get_rootObject_1() const { return ___rootObject_1; }
	inline String_t** get_address_of_rootObject_1() { return &___rootObject_1; }
	inline void set_rootObject_1(String_t* value)
	{
		___rootObject_1 = value;
		Il2CppCodeGenWriteBarrier(&___rootObject_1, value);
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(PBXResolver_t2315891534, ___index_2)); }
	inline PBXResolverReverseIndex_t2032398825 * get_index_2() const { return ___index_2; }
	inline PBXResolverReverseIndex_t2032398825 ** get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(PBXResolverReverseIndex_t2032398825 * value)
	{
		___index_2 = value;
		Il2CppCodeGenWriteBarrier(&___index_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
