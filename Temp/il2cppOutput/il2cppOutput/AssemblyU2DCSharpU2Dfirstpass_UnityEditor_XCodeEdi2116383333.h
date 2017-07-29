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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEditor.XCodeEditor.PBXProject
struct  PBXProject_t2116383333  : public PBXObject_t2624932917
{
public:
	// System.String UnityEditor.XCodeEditor.PBXProject::MAINGROUP_KEY
	String_t* ___MAINGROUP_KEY_3;
	// System.String UnityEditor.XCodeEditor.PBXProject::KNOWN_REGIONS_KEY
	String_t* ___KNOWN_REGIONS_KEY_4;
	// System.Boolean UnityEditor.XCodeEditor.PBXProject::_clearedLoc
	bool ____clearedLoc_5;

public:
	inline static int32_t get_offset_of_MAINGROUP_KEY_3() { return static_cast<int32_t>(offsetof(PBXProject_t2116383333, ___MAINGROUP_KEY_3)); }
	inline String_t* get_MAINGROUP_KEY_3() const { return ___MAINGROUP_KEY_3; }
	inline String_t** get_address_of_MAINGROUP_KEY_3() { return &___MAINGROUP_KEY_3; }
	inline void set_MAINGROUP_KEY_3(String_t* value)
	{
		___MAINGROUP_KEY_3 = value;
		Il2CppCodeGenWriteBarrier(&___MAINGROUP_KEY_3, value);
	}

	inline static int32_t get_offset_of_KNOWN_REGIONS_KEY_4() { return static_cast<int32_t>(offsetof(PBXProject_t2116383333, ___KNOWN_REGIONS_KEY_4)); }
	inline String_t* get_KNOWN_REGIONS_KEY_4() const { return ___KNOWN_REGIONS_KEY_4; }
	inline String_t** get_address_of_KNOWN_REGIONS_KEY_4() { return &___KNOWN_REGIONS_KEY_4; }
	inline void set_KNOWN_REGIONS_KEY_4(String_t* value)
	{
		___KNOWN_REGIONS_KEY_4 = value;
		Il2CppCodeGenWriteBarrier(&___KNOWN_REGIONS_KEY_4, value);
	}

	inline static int32_t get_offset_of__clearedLoc_5() { return static_cast<int32_t>(offsetof(PBXProject_t2116383333, ____clearedLoc_5)); }
	inline bool get__clearedLoc_5() const { return ____clearedLoc_5; }
	inline bool* get_address_of__clearedLoc_5() { return &____clearedLoc_5; }
	inline void set__clearedLoc_5(bool value)
	{
		____clearedLoc_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
