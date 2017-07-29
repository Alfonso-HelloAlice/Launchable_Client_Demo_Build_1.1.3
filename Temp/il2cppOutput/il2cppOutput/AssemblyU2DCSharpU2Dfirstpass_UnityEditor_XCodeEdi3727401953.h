#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_UnityEditor_XCodeEdi2624932917.h"

// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<UnityEditor.XCodeEditor.TreeEnum,System.String>
struct Dictionary_2_t1628283177;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEditor.XCodeEditor.PBXFileReference
struct  PBXFileReference_t3727401953  : public PBXObject_t2624932917
{
public:
	// System.String UnityEditor.XCodeEditor.PBXFileReference::compilerFlags
	String_t* ___compilerFlags_9;
	// System.String UnityEditor.XCodeEditor.PBXFileReference::buildPhase
	String_t* ___buildPhase_10;
	// System.Collections.Generic.Dictionary`2<UnityEditor.XCodeEditor.TreeEnum,System.String> UnityEditor.XCodeEditor.PBXFileReference::trees
	Dictionary_2_t1628283177 * ___trees_11;

public:
	inline static int32_t get_offset_of_compilerFlags_9() { return static_cast<int32_t>(offsetof(PBXFileReference_t3727401953, ___compilerFlags_9)); }
	inline String_t* get_compilerFlags_9() const { return ___compilerFlags_9; }
	inline String_t** get_address_of_compilerFlags_9() { return &___compilerFlags_9; }
	inline void set_compilerFlags_9(String_t* value)
	{
		___compilerFlags_9 = value;
		Il2CppCodeGenWriteBarrier(&___compilerFlags_9, value);
	}

	inline static int32_t get_offset_of_buildPhase_10() { return static_cast<int32_t>(offsetof(PBXFileReference_t3727401953, ___buildPhase_10)); }
	inline String_t* get_buildPhase_10() const { return ___buildPhase_10; }
	inline String_t** get_address_of_buildPhase_10() { return &___buildPhase_10; }
	inline void set_buildPhase_10(String_t* value)
	{
		___buildPhase_10 = value;
		Il2CppCodeGenWriteBarrier(&___buildPhase_10, value);
	}

	inline static int32_t get_offset_of_trees_11() { return static_cast<int32_t>(offsetof(PBXFileReference_t3727401953, ___trees_11)); }
	inline Dictionary_2_t1628283177 * get_trees_11() const { return ___trees_11; }
	inline Dictionary_2_t1628283177 ** get_address_of_trees_11() { return &___trees_11; }
	inline void set_trees_11(Dictionary_2_t1628283177 * value)
	{
		___trees_11 = value;
		Il2CppCodeGenWriteBarrier(&___trees_11, value);
	}
};

struct PBXFileReference_t3727401953_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEditor.XCodeEditor.PBXFileReference::typeNames
	Dictionary_2_t3943999495 * ___typeNames_12;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEditor.XCodeEditor.PBXFileReference::typePhases
	Dictionary_2_t3943999495 * ___typePhases_13;

public:
	inline static int32_t get_offset_of_typeNames_12() { return static_cast<int32_t>(offsetof(PBXFileReference_t3727401953_StaticFields, ___typeNames_12)); }
	inline Dictionary_2_t3943999495 * get_typeNames_12() const { return ___typeNames_12; }
	inline Dictionary_2_t3943999495 ** get_address_of_typeNames_12() { return &___typeNames_12; }
	inline void set_typeNames_12(Dictionary_2_t3943999495 * value)
	{
		___typeNames_12 = value;
		Il2CppCodeGenWriteBarrier(&___typeNames_12, value);
	}

	inline static int32_t get_offset_of_typePhases_13() { return static_cast<int32_t>(offsetof(PBXFileReference_t3727401953_StaticFields, ___typePhases_13)); }
	inline Dictionary_2_t3943999495 * get_typePhases_13() const { return ___typePhases_13; }
	inline Dictionary_2_t3943999495 ** get_address_of_typePhases_13() { return &___typePhases_13; }
	inline void set_typePhases_13(Dictionary_2_t3943999495 * value)
	{
		___typePhases_13 = value;
		Il2CppCodeGenWriteBarrier(&___typePhases_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
