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
// System.Char[]
struct CharU5BU5D_t1328083999;
// UnityEditor.XCodeEditor.PBXResolver
struct PBXResolver_t2315891534;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEditor.XCodeEditor.PBXParser
struct  PBXParser_t2686502955  : public Il2CppObject
{
public:
	// System.Char[] UnityEditor.XCodeEditor.PBXParser::data
	CharU5BU5D_t1328083999* ___data_20;
	// System.Int32 UnityEditor.XCodeEditor.PBXParser::index
	int32_t ___index_21;
	// UnityEditor.XCodeEditor.PBXResolver UnityEditor.XCodeEditor.PBXParser::resolver
	PBXResolver_t2315891534 * ___resolver_22;
	// System.String UnityEditor.XCodeEditor.PBXParser::marker
	String_t* ___marker_23;

public:
	inline static int32_t get_offset_of_data_20() { return static_cast<int32_t>(offsetof(PBXParser_t2686502955, ___data_20)); }
	inline CharU5BU5D_t1328083999* get_data_20() const { return ___data_20; }
	inline CharU5BU5D_t1328083999** get_address_of_data_20() { return &___data_20; }
	inline void set_data_20(CharU5BU5D_t1328083999* value)
	{
		___data_20 = value;
		Il2CppCodeGenWriteBarrier(&___data_20, value);
	}

	inline static int32_t get_offset_of_index_21() { return static_cast<int32_t>(offsetof(PBXParser_t2686502955, ___index_21)); }
	inline int32_t get_index_21() const { return ___index_21; }
	inline int32_t* get_address_of_index_21() { return &___index_21; }
	inline void set_index_21(int32_t value)
	{
		___index_21 = value;
	}

	inline static int32_t get_offset_of_resolver_22() { return static_cast<int32_t>(offsetof(PBXParser_t2686502955, ___resolver_22)); }
	inline PBXResolver_t2315891534 * get_resolver_22() const { return ___resolver_22; }
	inline PBXResolver_t2315891534 ** get_address_of_resolver_22() { return &___resolver_22; }
	inline void set_resolver_22(PBXResolver_t2315891534 * value)
	{
		___resolver_22 = value;
		Il2CppCodeGenWriteBarrier(&___resolver_22, value);
	}

	inline static int32_t get_offset_of_marker_23() { return static_cast<int32_t>(offsetof(PBXParser_t2686502955, ___marker_23)); }
	inline String_t* get_marker_23() const { return ___marker_23; }
	inline String_t** get_address_of_marker_23() { return &___marker_23; }
	inline void set_marker_23(String_t* value)
	{
		___marker_23 = value;
		Il2CppCodeGenWriteBarrier(&___marker_23, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
