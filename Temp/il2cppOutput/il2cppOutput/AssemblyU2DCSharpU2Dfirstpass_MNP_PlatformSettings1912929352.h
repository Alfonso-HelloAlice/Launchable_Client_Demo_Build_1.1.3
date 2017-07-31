#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"
#include "AssemblyU2DCSharpU2Dfirstpass_MNAndroidDialogTheme3877012555.h"

// System.String
struct String_t;
// MNP_PlatformSettings
struct MNP_PlatformSettings_t1912929352;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MNP_PlatformSettings
struct  MNP_PlatformSettings_t1912929352  : public ScriptableObject_t1975622470
{
public:
	// MNAndroidDialogTheme MNP_PlatformSettings::AndroidDialogTheme
	int32_t ___AndroidDialogTheme_5;

public:
	inline static int32_t get_offset_of_AndroidDialogTheme_5() { return static_cast<int32_t>(offsetof(MNP_PlatformSettings_t1912929352, ___AndroidDialogTheme_5)); }
	inline int32_t get_AndroidDialogTheme_5() const { return ___AndroidDialogTheme_5; }
	inline int32_t* get_address_of_AndroidDialogTheme_5() { return &___AndroidDialogTheme_5; }
	inline void set_AndroidDialogTheme_5(int32_t value)
	{
		___AndroidDialogTheme_5 = value;
	}
};

struct MNP_PlatformSettings_t1912929352_StaticFields
{
public:
	// MNP_PlatformSettings MNP_PlatformSettings::instance
	MNP_PlatformSettings_t1912929352 * ___instance_7;

public:
	inline static int32_t get_offset_of_instance_7() { return static_cast<int32_t>(offsetof(MNP_PlatformSettings_t1912929352_StaticFields, ___instance_7)); }
	inline MNP_PlatformSettings_t1912929352 * get_instance_7() const { return ___instance_7; }
	inline MNP_PlatformSettings_t1912929352 ** get_address_of_instance_7() { return &___instance_7; }
	inline void set_instance_7(MNP_PlatformSettings_t1912929352 * value)
	{
		___instance_7 = value;
		Il2CppCodeGenWriteBarrier(&___instance_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
