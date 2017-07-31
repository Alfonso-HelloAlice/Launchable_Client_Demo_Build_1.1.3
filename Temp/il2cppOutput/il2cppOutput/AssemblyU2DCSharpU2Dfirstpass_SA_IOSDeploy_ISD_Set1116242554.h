#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"

// System.String
struct String_t;
// System.Collections.Generic.List`1<SA.IOSDeploy.Framework>
struct List_1_t3392069394;
// System.Collections.Generic.List`1<SA.IOSDeploy.Lib>
struct List_1_t4024472637;
// System.Collections.Generic.List`1<SA.IOSDeploy.Flag>
struct List_1_t2961258216;
// System.Collections.Generic.List`1<SA.IOSDeploy.Variable>
struct List_1_t526886178;
// System.Collections.Generic.List`1<SA.IOSDeploy.VariableId>
struct List_1_t591972481;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// SA.IOSDeploy.ISD_Settings
struct ISD_Settings_t1116242554;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.IOSDeploy.ISD_Settings
struct  ISD_Settings_t1116242554  : public ScriptableObject_t1975622470
{
public:
	// System.Boolean SA.IOSDeploy.ISD_Settings::IsfwSettingOpen
	bool ___IsfwSettingOpen_3;
	// System.Boolean SA.IOSDeploy.ISD_Settings::IsLibSettingOpen
	bool ___IsLibSettingOpen_4;
	// System.Boolean SA.IOSDeploy.ISD_Settings::IslinkerSettingOpne
	bool ___IslinkerSettingOpne_5;
	// System.Boolean SA.IOSDeploy.ISD_Settings::IscompilerSettingsOpen
	bool ___IscompilerSettingsOpen_6;
	// System.Boolean SA.IOSDeploy.ISD_Settings::IsPlistSettingsOpen
	bool ___IsPlistSettingsOpen_7;
	// System.Boolean SA.IOSDeploy.ISD_Settings::IsLanguageSettingOpen
	bool ___IsLanguageSettingOpen_8;
	// System.Boolean SA.IOSDeploy.ISD_Settings::IsDefFrameworksOpen
	bool ___IsDefFrameworksOpen_9;
	// System.Boolean SA.IOSDeploy.ISD_Settings::IsDefLibrariesOpen
	bool ___IsDefLibrariesOpen_10;
	// System.Boolean SA.IOSDeploy.ISD_Settings::IsBuildSettingsOpen
	bool ___IsBuildSettingsOpen_11;
	// System.Int32 SA.IOSDeploy.ISD_Settings::ToolbarIndex
	int32_t ___ToolbarIndex_12;
	// System.Boolean SA.IOSDeploy.ISD_Settings::enableBitCode
	bool ___enableBitCode_13;
	// System.Boolean SA.IOSDeploy.ISD_Settings::enableTestability
	bool ___enableTestability_14;
	// System.Boolean SA.IOSDeploy.ISD_Settings::generateProfilingCode
	bool ___generateProfilingCode_15;
	// System.Collections.Generic.List`1<SA.IOSDeploy.Framework> SA.IOSDeploy.ISD_Settings::Frameworks
	List_1_t3392069394 * ___Frameworks_16;
	// System.Collections.Generic.List`1<SA.IOSDeploy.Lib> SA.IOSDeploy.ISD_Settings::Libraries
	List_1_t4024472637 * ___Libraries_17;
	// System.Collections.Generic.List`1<SA.IOSDeploy.Flag> SA.IOSDeploy.ISD_Settings::Flags
	List_1_t2961258216 * ___Flags_18;
	// System.Collections.Generic.List`1<SA.IOSDeploy.Variable> SA.IOSDeploy.ISD_Settings::PlistVariables
	List_1_t526886178 * ___PlistVariables_19;
	// System.Collections.Generic.List`1<SA.IOSDeploy.VariableId> SA.IOSDeploy.ISD_Settings::VariableDictionary
	List_1_t591972481 * ___VariableDictionary_20;
	// System.Collections.Generic.List`1<System.String> SA.IOSDeploy.ISD_Settings::langFolders
	List_1_t1398341365 * ___langFolders_21;

public:
	inline static int32_t get_offset_of_IsfwSettingOpen_3() { return static_cast<int32_t>(offsetof(ISD_Settings_t1116242554, ___IsfwSettingOpen_3)); }
	inline bool get_IsfwSettingOpen_3() const { return ___IsfwSettingOpen_3; }
	inline bool* get_address_of_IsfwSettingOpen_3() { return &___IsfwSettingOpen_3; }
	inline void set_IsfwSettingOpen_3(bool value)
	{
		___IsfwSettingOpen_3 = value;
	}

	inline static int32_t get_offset_of_IsLibSettingOpen_4() { return static_cast<int32_t>(offsetof(ISD_Settings_t1116242554, ___IsLibSettingOpen_4)); }
	inline bool get_IsLibSettingOpen_4() const { return ___IsLibSettingOpen_4; }
	inline bool* get_address_of_IsLibSettingOpen_4() { return &___IsLibSettingOpen_4; }
	inline void set_IsLibSettingOpen_4(bool value)
	{
		___IsLibSettingOpen_4 = value;
	}

	inline static int32_t get_offset_of_IslinkerSettingOpne_5() { return static_cast<int32_t>(offsetof(ISD_Settings_t1116242554, ___IslinkerSettingOpne_5)); }
	inline bool get_IslinkerSettingOpne_5() const { return ___IslinkerSettingOpne_5; }
	inline bool* get_address_of_IslinkerSettingOpne_5() { return &___IslinkerSettingOpne_5; }
	inline void set_IslinkerSettingOpne_5(bool value)
	{
		___IslinkerSettingOpne_5 = value;
	}

	inline static int32_t get_offset_of_IscompilerSettingsOpen_6() { return static_cast<int32_t>(offsetof(ISD_Settings_t1116242554, ___IscompilerSettingsOpen_6)); }
	inline bool get_IscompilerSettingsOpen_6() const { return ___IscompilerSettingsOpen_6; }
	inline bool* get_address_of_IscompilerSettingsOpen_6() { return &___IscompilerSettingsOpen_6; }
	inline void set_IscompilerSettingsOpen_6(bool value)
	{
		___IscompilerSettingsOpen_6 = value;
	}

	inline static int32_t get_offset_of_IsPlistSettingsOpen_7() { return static_cast<int32_t>(offsetof(ISD_Settings_t1116242554, ___IsPlistSettingsOpen_7)); }
	inline bool get_IsPlistSettingsOpen_7() const { return ___IsPlistSettingsOpen_7; }
	inline bool* get_address_of_IsPlistSettingsOpen_7() { return &___IsPlistSettingsOpen_7; }
	inline void set_IsPlistSettingsOpen_7(bool value)
	{
		___IsPlistSettingsOpen_7 = value;
	}

	inline static int32_t get_offset_of_IsLanguageSettingOpen_8() { return static_cast<int32_t>(offsetof(ISD_Settings_t1116242554, ___IsLanguageSettingOpen_8)); }
	inline bool get_IsLanguageSettingOpen_8() const { return ___IsLanguageSettingOpen_8; }
	inline bool* get_address_of_IsLanguageSettingOpen_8() { return &___IsLanguageSettingOpen_8; }
	inline void set_IsLanguageSettingOpen_8(bool value)
	{
		___IsLanguageSettingOpen_8 = value;
	}

	inline static int32_t get_offset_of_IsDefFrameworksOpen_9() { return static_cast<int32_t>(offsetof(ISD_Settings_t1116242554, ___IsDefFrameworksOpen_9)); }
	inline bool get_IsDefFrameworksOpen_9() const { return ___IsDefFrameworksOpen_9; }
	inline bool* get_address_of_IsDefFrameworksOpen_9() { return &___IsDefFrameworksOpen_9; }
	inline void set_IsDefFrameworksOpen_9(bool value)
	{
		___IsDefFrameworksOpen_9 = value;
	}

	inline static int32_t get_offset_of_IsDefLibrariesOpen_10() { return static_cast<int32_t>(offsetof(ISD_Settings_t1116242554, ___IsDefLibrariesOpen_10)); }
	inline bool get_IsDefLibrariesOpen_10() const { return ___IsDefLibrariesOpen_10; }
	inline bool* get_address_of_IsDefLibrariesOpen_10() { return &___IsDefLibrariesOpen_10; }
	inline void set_IsDefLibrariesOpen_10(bool value)
	{
		___IsDefLibrariesOpen_10 = value;
	}

	inline static int32_t get_offset_of_IsBuildSettingsOpen_11() { return static_cast<int32_t>(offsetof(ISD_Settings_t1116242554, ___IsBuildSettingsOpen_11)); }
	inline bool get_IsBuildSettingsOpen_11() const { return ___IsBuildSettingsOpen_11; }
	inline bool* get_address_of_IsBuildSettingsOpen_11() { return &___IsBuildSettingsOpen_11; }
	inline void set_IsBuildSettingsOpen_11(bool value)
	{
		___IsBuildSettingsOpen_11 = value;
	}

	inline static int32_t get_offset_of_ToolbarIndex_12() { return static_cast<int32_t>(offsetof(ISD_Settings_t1116242554, ___ToolbarIndex_12)); }
	inline int32_t get_ToolbarIndex_12() const { return ___ToolbarIndex_12; }
	inline int32_t* get_address_of_ToolbarIndex_12() { return &___ToolbarIndex_12; }
	inline void set_ToolbarIndex_12(int32_t value)
	{
		___ToolbarIndex_12 = value;
	}

	inline static int32_t get_offset_of_enableBitCode_13() { return static_cast<int32_t>(offsetof(ISD_Settings_t1116242554, ___enableBitCode_13)); }
	inline bool get_enableBitCode_13() const { return ___enableBitCode_13; }
	inline bool* get_address_of_enableBitCode_13() { return &___enableBitCode_13; }
	inline void set_enableBitCode_13(bool value)
	{
		___enableBitCode_13 = value;
	}

	inline static int32_t get_offset_of_enableTestability_14() { return static_cast<int32_t>(offsetof(ISD_Settings_t1116242554, ___enableTestability_14)); }
	inline bool get_enableTestability_14() const { return ___enableTestability_14; }
	inline bool* get_address_of_enableTestability_14() { return &___enableTestability_14; }
	inline void set_enableTestability_14(bool value)
	{
		___enableTestability_14 = value;
	}

	inline static int32_t get_offset_of_generateProfilingCode_15() { return static_cast<int32_t>(offsetof(ISD_Settings_t1116242554, ___generateProfilingCode_15)); }
	inline bool get_generateProfilingCode_15() const { return ___generateProfilingCode_15; }
	inline bool* get_address_of_generateProfilingCode_15() { return &___generateProfilingCode_15; }
	inline void set_generateProfilingCode_15(bool value)
	{
		___generateProfilingCode_15 = value;
	}

	inline static int32_t get_offset_of_Frameworks_16() { return static_cast<int32_t>(offsetof(ISD_Settings_t1116242554, ___Frameworks_16)); }
	inline List_1_t3392069394 * get_Frameworks_16() const { return ___Frameworks_16; }
	inline List_1_t3392069394 ** get_address_of_Frameworks_16() { return &___Frameworks_16; }
	inline void set_Frameworks_16(List_1_t3392069394 * value)
	{
		___Frameworks_16 = value;
		Il2CppCodeGenWriteBarrier(&___Frameworks_16, value);
	}

	inline static int32_t get_offset_of_Libraries_17() { return static_cast<int32_t>(offsetof(ISD_Settings_t1116242554, ___Libraries_17)); }
	inline List_1_t4024472637 * get_Libraries_17() const { return ___Libraries_17; }
	inline List_1_t4024472637 ** get_address_of_Libraries_17() { return &___Libraries_17; }
	inline void set_Libraries_17(List_1_t4024472637 * value)
	{
		___Libraries_17 = value;
		Il2CppCodeGenWriteBarrier(&___Libraries_17, value);
	}

	inline static int32_t get_offset_of_Flags_18() { return static_cast<int32_t>(offsetof(ISD_Settings_t1116242554, ___Flags_18)); }
	inline List_1_t2961258216 * get_Flags_18() const { return ___Flags_18; }
	inline List_1_t2961258216 ** get_address_of_Flags_18() { return &___Flags_18; }
	inline void set_Flags_18(List_1_t2961258216 * value)
	{
		___Flags_18 = value;
		Il2CppCodeGenWriteBarrier(&___Flags_18, value);
	}

	inline static int32_t get_offset_of_PlistVariables_19() { return static_cast<int32_t>(offsetof(ISD_Settings_t1116242554, ___PlistVariables_19)); }
	inline List_1_t526886178 * get_PlistVariables_19() const { return ___PlistVariables_19; }
	inline List_1_t526886178 ** get_address_of_PlistVariables_19() { return &___PlistVariables_19; }
	inline void set_PlistVariables_19(List_1_t526886178 * value)
	{
		___PlistVariables_19 = value;
		Il2CppCodeGenWriteBarrier(&___PlistVariables_19, value);
	}

	inline static int32_t get_offset_of_VariableDictionary_20() { return static_cast<int32_t>(offsetof(ISD_Settings_t1116242554, ___VariableDictionary_20)); }
	inline List_1_t591972481 * get_VariableDictionary_20() const { return ___VariableDictionary_20; }
	inline List_1_t591972481 ** get_address_of_VariableDictionary_20() { return &___VariableDictionary_20; }
	inline void set_VariableDictionary_20(List_1_t591972481 * value)
	{
		___VariableDictionary_20 = value;
		Il2CppCodeGenWriteBarrier(&___VariableDictionary_20, value);
	}

	inline static int32_t get_offset_of_langFolders_21() { return static_cast<int32_t>(offsetof(ISD_Settings_t1116242554, ___langFolders_21)); }
	inline List_1_t1398341365 * get_langFolders_21() const { return ___langFolders_21; }
	inline List_1_t1398341365 ** get_address_of_langFolders_21() { return &___langFolders_21; }
	inline void set_langFolders_21(List_1_t1398341365 * value)
	{
		___langFolders_21 = value;
		Il2CppCodeGenWriteBarrier(&___langFolders_21, value);
	}
};

struct ISD_Settings_t1116242554_StaticFields
{
public:
	// SA.IOSDeploy.ISD_Settings SA.IOSDeploy.ISD_Settings::instance
	ISD_Settings_t1116242554 * ___instance_24;

public:
	inline static int32_t get_offset_of_instance_24() { return static_cast<int32_t>(offsetof(ISD_Settings_t1116242554_StaticFields, ___instance_24)); }
	inline ISD_Settings_t1116242554 * get_instance_24() const { return ___instance_24; }
	inline ISD_Settings_t1116242554 ** get_address_of_instance_24() { return &___instance_24; }
	inline void set_instance_24(ISD_Settings_t1116242554 * value)
	{
		___instance_24 = value;
		Il2CppCodeGenWriteBarrier(&___instance_24, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
