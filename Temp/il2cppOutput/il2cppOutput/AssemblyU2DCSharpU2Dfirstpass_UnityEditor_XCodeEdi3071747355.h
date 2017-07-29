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

// UnityEditor.XCodeEditor.XCPlist
struct  XCPlist_t3071747355  : public Il2CppObject
{
public:
	// System.String UnityEditor.XCodeEditor.XCPlist::plistPath
	String_t* ___plistPath_0;
	// System.Boolean UnityEditor.XCodeEditor.XCPlist::plistModified
	bool ___plistModified_1;

public:
	inline static int32_t get_offset_of_plistPath_0() { return static_cast<int32_t>(offsetof(XCPlist_t3071747355, ___plistPath_0)); }
	inline String_t* get_plistPath_0() const { return ___plistPath_0; }
	inline String_t** get_address_of_plistPath_0() { return &___plistPath_0; }
	inline void set_plistPath_0(String_t* value)
	{
		___plistPath_0 = value;
		Il2CppCodeGenWriteBarrier(&___plistPath_0, value);
	}

	inline static int32_t get_offset_of_plistModified_1() { return static_cast<int32_t>(offsetof(XCPlist_t3071747355, ___plistModified_1)); }
	inline bool get_plistModified_1() const { return ___plistModified_1; }
	inline bool* get_address_of_plistModified_1() { return &___plistModified_1; }
	inline void set_plistModified_1(bool value)
	{
		___plistModified_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
