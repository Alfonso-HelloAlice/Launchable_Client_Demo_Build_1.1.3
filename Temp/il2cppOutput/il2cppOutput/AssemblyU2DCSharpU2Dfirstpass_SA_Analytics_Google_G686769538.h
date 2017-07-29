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
// System.Collections.Generic.List`1<SA.Analytics.Google.Profile>
struct List_1_t1695048897;
// System.Collections.Generic.List`1<SA.Analytics.Google.PlatfromBound>
struct List_1_t2741362263;
// SA.Analytics.Google.GA_Settings
struct GA_Settings_t686769538;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Analytics.Google.GA_Settings
struct  GA_Settings_t686769538  : public ScriptableObject_t1975622470
{
public:
	// System.Collections.Generic.List`1<SA.Analytics.Google.Profile> SA.Analytics.Google.GA_Settings::accounts
	List_1_t1695048897 * ___accounts_3;
	// System.Collections.Generic.List`1<SA.Analytics.Google.PlatfromBound> SA.Analytics.Google.GA_Settings::platfromBounds
	List_1_t2741362263 * ___platfromBounds_4;
	// System.Boolean SA.Analytics.Google.GA_Settings::showAdditionalParams
	bool ___showAdditionalParams_5;
	// System.Boolean SA.Analytics.Google.GA_Settings::showAdvancedParams
	bool ___showAdvancedParams_6;
	// System.Boolean SA.Analytics.Google.GA_Settings::showCParams
	bool ___showCParams_7;
	// System.Boolean SA.Analytics.Google.GA_Settings::showAccounts
	bool ___showAccounts_8;
	// System.Boolean SA.Analytics.Google.GA_Settings::showPlatfroms
	bool ___showPlatfroms_9;
	// System.Boolean SA.Analytics.Google.GA_Settings::showTestingMode
	bool ___showTestingMode_10;
	// System.String SA.Analytics.Google.GA_Settings::AppName
	String_t* ___AppName_11;
	// System.String SA.Analytics.Google.GA_Settings::AppVersion
	String_t* ___AppVersion_12;
	// System.Boolean SA.Analytics.Google.GA_Settings::UseHTTPS
	bool ___UseHTTPS_13;
	// System.Boolean SA.Analytics.Google.GA_Settings::StringEscaping
	bool ___StringEscaping_14;
	// System.Boolean SA.Analytics.Google.GA_Settings::EditorAnalytics
	bool ___EditorAnalytics_15;
	// System.Boolean SA.Analytics.Google.GA_Settings::IsDisabled
	bool ___IsDisabled_16;
	// System.Boolean SA.Analytics.Google.GA_Settings::IsTestingModeEnabled
	bool ___IsTestingModeEnabled_17;
	// System.Int32 SA.Analytics.Google.GA_Settings::TestingModeAccIndex
	int32_t ___TestingModeAccIndex_18;
	// System.Boolean SA.Analytics.Google.GA_Settings::IsRequetsCachingEnabled
	bool ___IsRequetsCachingEnabled_19;
	// System.Boolean SA.Analytics.Google.GA_Settings::IsQueueTimeEnabled
	bool ___IsQueueTimeEnabled_20;
	// System.Boolean SA.Analytics.Google.GA_Settings::AutoLevelTracking
	bool ___AutoLevelTracking_21;
	// System.String SA.Analytics.Google.GA_Settings::LevelPrefix
	String_t* ___LevelPrefix_22;
	// System.String SA.Analytics.Google.GA_Settings::LevelPostfix
	String_t* ___LevelPostfix_23;
	// System.Boolean SA.Analytics.Google.GA_Settings::AutoAppQuitTracking
	bool ___AutoAppQuitTracking_24;
	// System.Boolean SA.Analytics.Google.GA_Settings::AutoCampaignTracking
	bool ___AutoCampaignTracking_25;
	// System.Boolean SA.Analytics.Google.GA_Settings::AutoExceptionTracking
	bool ___AutoExceptionTracking_26;
	// System.Boolean SA.Analytics.Google.GA_Settings::AutoAppResumeTracking
	bool ___AutoAppResumeTracking_27;
	// System.Boolean SA.Analytics.Google.GA_Settings::SubmitSystemInfoOnFirstLaunch
	bool ___SubmitSystemInfoOnFirstLaunch_28;
	// System.Boolean SA.Analytics.Google.GA_Settings::UsePlayerSettingsForAppInfo
	bool ___UsePlayerSettingsForAppInfo_29;

public:
	inline static int32_t get_offset_of_accounts_3() { return static_cast<int32_t>(offsetof(GA_Settings_t686769538, ___accounts_3)); }
	inline List_1_t1695048897 * get_accounts_3() const { return ___accounts_3; }
	inline List_1_t1695048897 ** get_address_of_accounts_3() { return &___accounts_3; }
	inline void set_accounts_3(List_1_t1695048897 * value)
	{
		___accounts_3 = value;
		Il2CppCodeGenWriteBarrier(&___accounts_3, value);
	}

	inline static int32_t get_offset_of_platfromBounds_4() { return static_cast<int32_t>(offsetof(GA_Settings_t686769538, ___platfromBounds_4)); }
	inline List_1_t2741362263 * get_platfromBounds_4() const { return ___platfromBounds_4; }
	inline List_1_t2741362263 ** get_address_of_platfromBounds_4() { return &___platfromBounds_4; }
	inline void set_platfromBounds_4(List_1_t2741362263 * value)
	{
		___platfromBounds_4 = value;
		Il2CppCodeGenWriteBarrier(&___platfromBounds_4, value);
	}

	inline static int32_t get_offset_of_showAdditionalParams_5() { return static_cast<int32_t>(offsetof(GA_Settings_t686769538, ___showAdditionalParams_5)); }
	inline bool get_showAdditionalParams_5() const { return ___showAdditionalParams_5; }
	inline bool* get_address_of_showAdditionalParams_5() { return &___showAdditionalParams_5; }
	inline void set_showAdditionalParams_5(bool value)
	{
		___showAdditionalParams_5 = value;
	}

	inline static int32_t get_offset_of_showAdvancedParams_6() { return static_cast<int32_t>(offsetof(GA_Settings_t686769538, ___showAdvancedParams_6)); }
	inline bool get_showAdvancedParams_6() const { return ___showAdvancedParams_6; }
	inline bool* get_address_of_showAdvancedParams_6() { return &___showAdvancedParams_6; }
	inline void set_showAdvancedParams_6(bool value)
	{
		___showAdvancedParams_6 = value;
	}

	inline static int32_t get_offset_of_showCParams_7() { return static_cast<int32_t>(offsetof(GA_Settings_t686769538, ___showCParams_7)); }
	inline bool get_showCParams_7() const { return ___showCParams_7; }
	inline bool* get_address_of_showCParams_7() { return &___showCParams_7; }
	inline void set_showCParams_7(bool value)
	{
		___showCParams_7 = value;
	}

	inline static int32_t get_offset_of_showAccounts_8() { return static_cast<int32_t>(offsetof(GA_Settings_t686769538, ___showAccounts_8)); }
	inline bool get_showAccounts_8() const { return ___showAccounts_8; }
	inline bool* get_address_of_showAccounts_8() { return &___showAccounts_8; }
	inline void set_showAccounts_8(bool value)
	{
		___showAccounts_8 = value;
	}

	inline static int32_t get_offset_of_showPlatfroms_9() { return static_cast<int32_t>(offsetof(GA_Settings_t686769538, ___showPlatfroms_9)); }
	inline bool get_showPlatfroms_9() const { return ___showPlatfroms_9; }
	inline bool* get_address_of_showPlatfroms_9() { return &___showPlatfroms_9; }
	inline void set_showPlatfroms_9(bool value)
	{
		___showPlatfroms_9 = value;
	}

	inline static int32_t get_offset_of_showTestingMode_10() { return static_cast<int32_t>(offsetof(GA_Settings_t686769538, ___showTestingMode_10)); }
	inline bool get_showTestingMode_10() const { return ___showTestingMode_10; }
	inline bool* get_address_of_showTestingMode_10() { return &___showTestingMode_10; }
	inline void set_showTestingMode_10(bool value)
	{
		___showTestingMode_10 = value;
	}

	inline static int32_t get_offset_of_AppName_11() { return static_cast<int32_t>(offsetof(GA_Settings_t686769538, ___AppName_11)); }
	inline String_t* get_AppName_11() const { return ___AppName_11; }
	inline String_t** get_address_of_AppName_11() { return &___AppName_11; }
	inline void set_AppName_11(String_t* value)
	{
		___AppName_11 = value;
		Il2CppCodeGenWriteBarrier(&___AppName_11, value);
	}

	inline static int32_t get_offset_of_AppVersion_12() { return static_cast<int32_t>(offsetof(GA_Settings_t686769538, ___AppVersion_12)); }
	inline String_t* get_AppVersion_12() const { return ___AppVersion_12; }
	inline String_t** get_address_of_AppVersion_12() { return &___AppVersion_12; }
	inline void set_AppVersion_12(String_t* value)
	{
		___AppVersion_12 = value;
		Il2CppCodeGenWriteBarrier(&___AppVersion_12, value);
	}

	inline static int32_t get_offset_of_UseHTTPS_13() { return static_cast<int32_t>(offsetof(GA_Settings_t686769538, ___UseHTTPS_13)); }
	inline bool get_UseHTTPS_13() const { return ___UseHTTPS_13; }
	inline bool* get_address_of_UseHTTPS_13() { return &___UseHTTPS_13; }
	inline void set_UseHTTPS_13(bool value)
	{
		___UseHTTPS_13 = value;
	}

	inline static int32_t get_offset_of_StringEscaping_14() { return static_cast<int32_t>(offsetof(GA_Settings_t686769538, ___StringEscaping_14)); }
	inline bool get_StringEscaping_14() const { return ___StringEscaping_14; }
	inline bool* get_address_of_StringEscaping_14() { return &___StringEscaping_14; }
	inline void set_StringEscaping_14(bool value)
	{
		___StringEscaping_14 = value;
	}

	inline static int32_t get_offset_of_EditorAnalytics_15() { return static_cast<int32_t>(offsetof(GA_Settings_t686769538, ___EditorAnalytics_15)); }
	inline bool get_EditorAnalytics_15() const { return ___EditorAnalytics_15; }
	inline bool* get_address_of_EditorAnalytics_15() { return &___EditorAnalytics_15; }
	inline void set_EditorAnalytics_15(bool value)
	{
		___EditorAnalytics_15 = value;
	}

	inline static int32_t get_offset_of_IsDisabled_16() { return static_cast<int32_t>(offsetof(GA_Settings_t686769538, ___IsDisabled_16)); }
	inline bool get_IsDisabled_16() const { return ___IsDisabled_16; }
	inline bool* get_address_of_IsDisabled_16() { return &___IsDisabled_16; }
	inline void set_IsDisabled_16(bool value)
	{
		___IsDisabled_16 = value;
	}

	inline static int32_t get_offset_of_IsTestingModeEnabled_17() { return static_cast<int32_t>(offsetof(GA_Settings_t686769538, ___IsTestingModeEnabled_17)); }
	inline bool get_IsTestingModeEnabled_17() const { return ___IsTestingModeEnabled_17; }
	inline bool* get_address_of_IsTestingModeEnabled_17() { return &___IsTestingModeEnabled_17; }
	inline void set_IsTestingModeEnabled_17(bool value)
	{
		___IsTestingModeEnabled_17 = value;
	}

	inline static int32_t get_offset_of_TestingModeAccIndex_18() { return static_cast<int32_t>(offsetof(GA_Settings_t686769538, ___TestingModeAccIndex_18)); }
	inline int32_t get_TestingModeAccIndex_18() const { return ___TestingModeAccIndex_18; }
	inline int32_t* get_address_of_TestingModeAccIndex_18() { return &___TestingModeAccIndex_18; }
	inline void set_TestingModeAccIndex_18(int32_t value)
	{
		___TestingModeAccIndex_18 = value;
	}

	inline static int32_t get_offset_of_IsRequetsCachingEnabled_19() { return static_cast<int32_t>(offsetof(GA_Settings_t686769538, ___IsRequetsCachingEnabled_19)); }
	inline bool get_IsRequetsCachingEnabled_19() const { return ___IsRequetsCachingEnabled_19; }
	inline bool* get_address_of_IsRequetsCachingEnabled_19() { return &___IsRequetsCachingEnabled_19; }
	inline void set_IsRequetsCachingEnabled_19(bool value)
	{
		___IsRequetsCachingEnabled_19 = value;
	}

	inline static int32_t get_offset_of_IsQueueTimeEnabled_20() { return static_cast<int32_t>(offsetof(GA_Settings_t686769538, ___IsQueueTimeEnabled_20)); }
	inline bool get_IsQueueTimeEnabled_20() const { return ___IsQueueTimeEnabled_20; }
	inline bool* get_address_of_IsQueueTimeEnabled_20() { return &___IsQueueTimeEnabled_20; }
	inline void set_IsQueueTimeEnabled_20(bool value)
	{
		___IsQueueTimeEnabled_20 = value;
	}

	inline static int32_t get_offset_of_AutoLevelTracking_21() { return static_cast<int32_t>(offsetof(GA_Settings_t686769538, ___AutoLevelTracking_21)); }
	inline bool get_AutoLevelTracking_21() const { return ___AutoLevelTracking_21; }
	inline bool* get_address_of_AutoLevelTracking_21() { return &___AutoLevelTracking_21; }
	inline void set_AutoLevelTracking_21(bool value)
	{
		___AutoLevelTracking_21 = value;
	}

	inline static int32_t get_offset_of_LevelPrefix_22() { return static_cast<int32_t>(offsetof(GA_Settings_t686769538, ___LevelPrefix_22)); }
	inline String_t* get_LevelPrefix_22() const { return ___LevelPrefix_22; }
	inline String_t** get_address_of_LevelPrefix_22() { return &___LevelPrefix_22; }
	inline void set_LevelPrefix_22(String_t* value)
	{
		___LevelPrefix_22 = value;
		Il2CppCodeGenWriteBarrier(&___LevelPrefix_22, value);
	}

	inline static int32_t get_offset_of_LevelPostfix_23() { return static_cast<int32_t>(offsetof(GA_Settings_t686769538, ___LevelPostfix_23)); }
	inline String_t* get_LevelPostfix_23() const { return ___LevelPostfix_23; }
	inline String_t** get_address_of_LevelPostfix_23() { return &___LevelPostfix_23; }
	inline void set_LevelPostfix_23(String_t* value)
	{
		___LevelPostfix_23 = value;
		Il2CppCodeGenWriteBarrier(&___LevelPostfix_23, value);
	}

	inline static int32_t get_offset_of_AutoAppQuitTracking_24() { return static_cast<int32_t>(offsetof(GA_Settings_t686769538, ___AutoAppQuitTracking_24)); }
	inline bool get_AutoAppQuitTracking_24() const { return ___AutoAppQuitTracking_24; }
	inline bool* get_address_of_AutoAppQuitTracking_24() { return &___AutoAppQuitTracking_24; }
	inline void set_AutoAppQuitTracking_24(bool value)
	{
		___AutoAppQuitTracking_24 = value;
	}

	inline static int32_t get_offset_of_AutoCampaignTracking_25() { return static_cast<int32_t>(offsetof(GA_Settings_t686769538, ___AutoCampaignTracking_25)); }
	inline bool get_AutoCampaignTracking_25() const { return ___AutoCampaignTracking_25; }
	inline bool* get_address_of_AutoCampaignTracking_25() { return &___AutoCampaignTracking_25; }
	inline void set_AutoCampaignTracking_25(bool value)
	{
		___AutoCampaignTracking_25 = value;
	}

	inline static int32_t get_offset_of_AutoExceptionTracking_26() { return static_cast<int32_t>(offsetof(GA_Settings_t686769538, ___AutoExceptionTracking_26)); }
	inline bool get_AutoExceptionTracking_26() const { return ___AutoExceptionTracking_26; }
	inline bool* get_address_of_AutoExceptionTracking_26() { return &___AutoExceptionTracking_26; }
	inline void set_AutoExceptionTracking_26(bool value)
	{
		___AutoExceptionTracking_26 = value;
	}

	inline static int32_t get_offset_of_AutoAppResumeTracking_27() { return static_cast<int32_t>(offsetof(GA_Settings_t686769538, ___AutoAppResumeTracking_27)); }
	inline bool get_AutoAppResumeTracking_27() const { return ___AutoAppResumeTracking_27; }
	inline bool* get_address_of_AutoAppResumeTracking_27() { return &___AutoAppResumeTracking_27; }
	inline void set_AutoAppResumeTracking_27(bool value)
	{
		___AutoAppResumeTracking_27 = value;
	}

	inline static int32_t get_offset_of_SubmitSystemInfoOnFirstLaunch_28() { return static_cast<int32_t>(offsetof(GA_Settings_t686769538, ___SubmitSystemInfoOnFirstLaunch_28)); }
	inline bool get_SubmitSystemInfoOnFirstLaunch_28() const { return ___SubmitSystemInfoOnFirstLaunch_28; }
	inline bool* get_address_of_SubmitSystemInfoOnFirstLaunch_28() { return &___SubmitSystemInfoOnFirstLaunch_28; }
	inline void set_SubmitSystemInfoOnFirstLaunch_28(bool value)
	{
		___SubmitSystemInfoOnFirstLaunch_28 = value;
	}

	inline static int32_t get_offset_of_UsePlayerSettingsForAppInfo_29() { return static_cast<int32_t>(offsetof(GA_Settings_t686769538, ___UsePlayerSettingsForAppInfo_29)); }
	inline bool get_UsePlayerSettingsForAppInfo_29() const { return ___UsePlayerSettingsForAppInfo_29; }
	inline bool* get_address_of_UsePlayerSettingsForAppInfo_29() { return &___UsePlayerSettingsForAppInfo_29; }
	inline void set_UsePlayerSettingsForAppInfo_29(bool value)
	{
		___UsePlayerSettingsForAppInfo_29 = value;
	}
};

struct GA_Settings_t686769538_StaticFields
{
public:
	// System.String SA.Analytics.Google.GA_Settings::VERSION_NUMBER
	String_t* ___VERSION_NUMBER_2;
	// SA.Analytics.Google.GA_Settings SA.Analytics.Google.GA_Settings::instance
	GA_Settings_t686769538 * ___instance_32;

public:
	inline static int32_t get_offset_of_VERSION_NUMBER_2() { return static_cast<int32_t>(offsetof(GA_Settings_t686769538_StaticFields, ___VERSION_NUMBER_2)); }
	inline String_t* get_VERSION_NUMBER_2() const { return ___VERSION_NUMBER_2; }
	inline String_t** get_address_of_VERSION_NUMBER_2() { return &___VERSION_NUMBER_2; }
	inline void set_VERSION_NUMBER_2(String_t* value)
	{
		___VERSION_NUMBER_2 = value;
		Il2CppCodeGenWriteBarrier(&___VERSION_NUMBER_2, value);
	}

	inline static int32_t get_offset_of_instance_32() { return static_cast<int32_t>(offsetof(GA_Settings_t686769538_StaticFields, ___instance_32)); }
	inline GA_Settings_t686769538 * get_instance_32() const { return ___instance_32; }
	inline GA_Settings_t686769538 ** get_address_of_instance_32() { return &___instance_32; }
	inline void set_instance_32(GA_Settings_t686769538 * value)
	{
		___instance_32 = value;
		Il2CppCodeGenWriteBarrier(&___instance_32, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
