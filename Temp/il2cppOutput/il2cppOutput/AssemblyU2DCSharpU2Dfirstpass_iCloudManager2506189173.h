#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Pattern_Si2988754278.h"

// System.Action`1<SA.Common.Models.Result>
struct Action_1_t4089019125;
// System.Action`1<iCloudData>
struct Action_1_t2882436870;
// System.Action`1<System.Collections.Generic.List`1<iCloudData>>
struct Action_1_t2251558002;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// iCloudManager
struct  iCloudManager_t2506189173  : public Singleton_1_t2988754278
{
public:

public:
};

struct iCloudManager_t2506189173_StaticFields
{
public:
	// System.Action`1<SA.Common.Models.Result> iCloudManager::OnCloudInitAction
	Action_1_t4089019125 * ___OnCloudInitAction_4;
	// System.Action`1<iCloudData> iCloudManager::OnCloudDataReceivedAction
	Action_1_t2882436870 * ___OnCloudDataReceivedAction_5;
	// System.Action`1<System.Collections.Generic.List`1<iCloudData>> iCloudManager::OnStoreDidChangeExternally
	Action_1_t2251558002 * ___OnStoreDidChangeExternally_6;

public:
	inline static int32_t get_offset_of_OnCloudInitAction_4() { return static_cast<int32_t>(offsetof(iCloudManager_t2506189173_StaticFields, ___OnCloudInitAction_4)); }
	inline Action_1_t4089019125 * get_OnCloudInitAction_4() const { return ___OnCloudInitAction_4; }
	inline Action_1_t4089019125 ** get_address_of_OnCloudInitAction_4() { return &___OnCloudInitAction_4; }
	inline void set_OnCloudInitAction_4(Action_1_t4089019125 * value)
	{
		___OnCloudInitAction_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnCloudInitAction_4, value);
	}

	inline static int32_t get_offset_of_OnCloudDataReceivedAction_5() { return static_cast<int32_t>(offsetof(iCloudManager_t2506189173_StaticFields, ___OnCloudDataReceivedAction_5)); }
	inline Action_1_t2882436870 * get_OnCloudDataReceivedAction_5() const { return ___OnCloudDataReceivedAction_5; }
	inline Action_1_t2882436870 ** get_address_of_OnCloudDataReceivedAction_5() { return &___OnCloudDataReceivedAction_5; }
	inline void set_OnCloudDataReceivedAction_5(Action_1_t2882436870 * value)
	{
		___OnCloudDataReceivedAction_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnCloudDataReceivedAction_5, value);
	}

	inline static int32_t get_offset_of_OnStoreDidChangeExternally_6() { return static_cast<int32_t>(offsetof(iCloudManager_t2506189173_StaticFields, ___OnStoreDidChangeExternally_6)); }
	inline Action_1_t2251558002 * get_OnStoreDidChangeExternally_6() const { return ___OnStoreDidChangeExternally_6; }
	inline Action_1_t2251558002 ** get_address_of_OnStoreDidChangeExternally_6() { return &___OnStoreDidChangeExternally_6; }
	inline void set_OnStoreDidChangeExternally_6(Action_1_t2251558002 * value)
	{
		___OnStoreDidChangeExternally_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnStoreDidChangeExternally_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
