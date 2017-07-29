#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;
// SA.Analytics.Google.GA_Manager
struct GA_Manager_t2678400868;
// SA.Analytics.Google.Client
struct Client_t2354176969;
// System.Random
struct Random_t1044426839;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t1903595547;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Analytics.Google.GA_Manager
struct  GA_Manager_t2678400868  : public MonoBehaviour_t1158329972
{
public:
	// System.String SA.Analytics.Google.GA_Manager::<CampaignSource>k__BackingField
	String_t* ___U3CCampaignSourceU3Ek__BackingField_10;
	// System.String SA.Analytics.Google.GA_Manager::<CampaignName>k__BackingField
	String_t* ___U3CCampaignNameU3Ek__BackingField_11;
	// System.String SA.Analytics.Google.GA_Manager::<CampaignContent>k__BackingField
	String_t* ___U3CCampaignContentU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_U3CCampaignSourceU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(GA_Manager_t2678400868, ___U3CCampaignSourceU3Ek__BackingField_10)); }
	inline String_t* get_U3CCampaignSourceU3Ek__BackingField_10() const { return ___U3CCampaignSourceU3Ek__BackingField_10; }
	inline String_t** get_address_of_U3CCampaignSourceU3Ek__BackingField_10() { return &___U3CCampaignSourceU3Ek__BackingField_10; }
	inline void set_U3CCampaignSourceU3Ek__BackingField_10(String_t* value)
	{
		___U3CCampaignSourceU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCampaignSourceU3Ek__BackingField_10, value);
	}

	inline static int32_t get_offset_of_U3CCampaignNameU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(GA_Manager_t2678400868, ___U3CCampaignNameU3Ek__BackingField_11)); }
	inline String_t* get_U3CCampaignNameU3Ek__BackingField_11() const { return ___U3CCampaignNameU3Ek__BackingField_11; }
	inline String_t** get_address_of_U3CCampaignNameU3Ek__BackingField_11() { return &___U3CCampaignNameU3Ek__BackingField_11; }
	inline void set_U3CCampaignNameU3Ek__BackingField_11(String_t* value)
	{
		___U3CCampaignNameU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCampaignNameU3Ek__BackingField_11, value);
	}

	inline static int32_t get_offset_of_U3CCampaignContentU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(GA_Manager_t2678400868, ___U3CCampaignContentU3Ek__BackingField_12)); }
	inline String_t* get_U3CCampaignContentU3Ek__BackingField_12() const { return ___U3CCampaignContentU3Ek__BackingField_12; }
	inline String_t** get_address_of_U3CCampaignContentU3Ek__BackingField_12() { return &___U3CCampaignContentU3Ek__BackingField_12; }
	inline void set_U3CCampaignContentU3Ek__BackingField_12(String_t* value)
	{
		___U3CCampaignContentU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCampaignContentU3Ek__BackingField_12, value);
	}
};

struct GA_Manager_t2678400868_StaticFields
{
public:
	// SA.Analytics.Google.GA_Manager SA.Analytics.Google.GA_Manager::Instance
	GA_Manager_t2678400868 * ___Instance_5;
	// System.String SA.Analytics.Google.GA_Manager::_ClientId
	String_t* ____ClientId_6;
	// SA.Analytics.Google.Client SA.Analytics.Google.GA_Manager::cleint
	Client_t2354176969 * ___cleint_7;
	// System.String SA.Analytics.Google.GA_Manager::CurrentLevelName
	String_t* ___CurrentLevelName_8;
	// System.Boolean SA.Analytics.Google.GA_Manager::IsSessionStarted
	bool ___IsSessionStarted_9;
	// System.Random SA.Analytics.Google.GA_Manager::random
	Random_t1044426839 * ___random_13;
	// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode> SA.Analytics.Google.GA_Manager::<>f__am$cache0
	UnityAction_2_t1903595547 * ___U3CU3Ef__amU24cache0_14;

public:
	inline static int32_t get_offset_of_Instance_5() { return static_cast<int32_t>(offsetof(GA_Manager_t2678400868_StaticFields, ___Instance_5)); }
	inline GA_Manager_t2678400868 * get_Instance_5() const { return ___Instance_5; }
	inline GA_Manager_t2678400868 ** get_address_of_Instance_5() { return &___Instance_5; }
	inline void set_Instance_5(GA_Manager_t2678400868 * value)
	{
		___Instance_5 = value;
		Il2CppCodeGenWriteBarrier(&___Instance_5, value);
	}

	inline static int32_t get_offset_of__ClientId_6() { return static_cast<int32_t>(offsetof(GA_Manager_t2678400868_StaticFields, ____ClientId_6)); }
	inline String_t* get__ClientId_6() const { return ____ClientId_6; }
	inline String_t** get_address_of__ClientId_6() { return &____ClientId_6; }
	inline void set__ClientId_6(String_t* value)
	{
		____ClientId_6 = value;
		Il2CppCodeGenWriteBarrier(&____ClientId_6, value);
	}

	inline static int32_t get_offset_of_cleint_7() { return static_cast<int32_t>(offsetof(GA_Manager_t2678400868_StaticFields, ___cleint_7)); }
	inline Client_t2354176969 * get_cleint_7() const { return ___cleint_7; }
	inline Client_t2354176969 ** get_address_of_cleint_7() { return &___cleint_7; }
	inline void set_cleint_7(Client_t2354176969 * value)
	{
		___cleint_7 = value;
		Il2CppCodeGenWriteBarrier(&___cleint_7, value);
	}

	inline static int32_t get_offset_of_CurrentLevelName_8() { return static_cast<int32_t>(offsetof(GA_Manager_t2678400868_StaticFields, ___CurrentLevelName_8)); }
	inline String_t* get_CurrentLevelName_8() const { return ___CurrentLevelName_8; }
	inline String_t** get_address_of_CurrentLevelName_8() { return &___CurrentLevelName_8; }
	inline void set_CurrentLevelName_8(String_t* value)
	{
		___CurrentLevelName_8 = value;
		Il2CppCodeGenWriteBarrier(&___CurrentLevelName_8, value);
	}

	inline static int32_t get_offset_of_IsSessionStarted_9() { return static_cast<int32_t>(offsetof(GA_Manager_t2678400868_StaticFields, ___IsSessionStarted_9)); }
	inline bool get_IsSessionStarted_9() const { return ___IsSessionStarted_9; }
	inline bool* get_address_of_IsSessionStarted_9() { return &___IsSessionStarted_9; }
	inline void set_IsSessionStarted_9(bool value)
	{
		___IsSessionStarted_9 = value;
	}

	inline static int32_t get_offset_of_random_13() { return static_cast<int32_t>(offsetof(GA_Manager_t2678400868_StaticFields, ___random_13)); }
	inline Random_t1044426839 * get_random_13() const { return ___random_13; }
	inline Random_t1044426839 ** get_address_of_random_13() { return &___random_13; }
	inline void set_random_13(Random_t1044426839 * value)
	{
		___random_13 = value;
		Il2CppCodeGenWriteBarrier(&___random_13, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_14() { return static_cast<int32_t>(offsetof(GA_Manager_t2678400868_StaticFields, ___U3CU3Ef__amU24cache0_14)); }
	inline UnityAction_2_t1903595547 * get_U3CU3Ef__amU24cache0_14() const { return ___U3CU3Ef__amU24cache0_14; }
	inline UnityAction_2_t1903595547 ** get_address_of_U3CU3Ef__amU24cache0_14() { return &___U3CU3Ef__amU24cache0_14; }
	inline void set_U3CU3Ef__amU24cache0_14(UnityAction_2_t1903595547 * value)
	{
		___U3CU3Ef__amU24cache0_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
