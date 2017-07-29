#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Action`1<BillingResult>
struct Action_1_t3313641232;
// System.String
struct String_t;
// AndroidInventory
struct AndroidInventory_t701010211;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AN_InApp_EditorClient
struct  AN_InApp_EditorClient_t4039085811  : public MonoBehaviour_t1158329972
{
public:
	// System.Action`1<BillingResult> AN_InApp_EditorClient::ActionProductPurchased
	Action_1_t3313641232 * ___ActionProductPurchased_2;
	// System.Action`1<BillingResult> AN_InApp_EditorClient::ActionProductConsumed
	Action_1_t3313641232 * ___ActionProductConsumed_3;
	// System.Action`1<BillingResult> AN_InApp_EditorClient::ActionBillingSetupFinished
	Action_1_t3313641232 * ___ActionBillingSetupFinished_4;
	// System.Action`1<BillingResult> AN_InApp_EditorClient::ActionRetrieveProducsFinished
	Action_1_t3313641232 * ___ActionRetrieveProducsFinished_5;
	// System.String AN_InApp_EditorClient::_processedSKU
	String_t* ____processedSKU_6;
	// AndroidInventory AN_InApp_EditorClient::_inventory
	AndroidInventory_t701010211 * ____inventory_7;
	// System.Boolean AN_InApp_EditorClient::_IsConnectingToServiceInProcess
	bool ____IsConnectingToServiceInProcess_8;
	// System.Boolean AN_InApp_EditorClient::_IsProductRetrievingInProcess
	bool ____IsProductRetrievingInProcess_9;
	// System.Boolean AN_InApp_EditorClient::_IsConnected
	bool ____IsConnected_10;
	// System.Boolean AN_InApp_EditorClient::_IsInventoryLoaded
	bool ____IsInventoryLoaded_11;
	// System.Single AN_InApp_EditorClient::_RequestsSuccessRate
	float ____RequestsSuccessRate_12;
	// System.String AN_InApp_EditorClient::_CurrentSKU
	String_t* ____CurrentSKU_13;

public:
	inline static int32_t get_offset_of_ActionProductPurchased_2() { return static_cast<int32_t>(offsetof(AN_InApp_EditorClient_t4039085811, ___ActionProductPurchased_2)); }
	inline Action_1_t3313641232 * get_ActionProductPurchased_2() const { return ___ActionProductPurchased_2; }
	inline Action_1_t3313641232 ** get_address_of_ActionProductPurchased_2() { return &___ActionProductPurchased_2; }
	inline void set_ActionProductPurchased_2(Action_1_t3313641232 * value)
	{
		___ActionProductPurchased_2 = value;
		Il2CppCodeGenWriteBarrier(&___ActionProductPurchased_2, value);
	}

	inline static int32_t get_offset_of_ActionProductConsumed_3() { return static_cast<int32_t>(offsetof(AN_InApp_EditorClient_t4039085811, ___ActionProductConsumed_3)); }
	inline Action_1_t3313641232 * get_ActionProductConsumed_3() const { return ___ActionProductConsumed_3; }
	inline Action_1_t3313641232 ** get_address_of_ActionProductConsumed_3() { return &___ActionProductConsumed_3; }
	inline void set_ActionProductConsumed_3(Action_1_t3313641232 * value)
	{
		___ActionProductConsumed_3 = value;
		Il2CppCodeGenWriteBarrier(&___ActionProductConsumed_3, value);
	}

	inline static int32_t get_offset_of_ActionBillingSetupFinished_4() { return static_cast<int32_t>(offsetof(AN_InApp_EditorClient_t4039085811, ___ActionBillingSetupFinished_4)); }
	inline Action_1_t3313641232 * get_ActionBillingSetupFinished_4() const { return ___ActionBillingSetupFinished_4; }
	inline Action_1_t3313641232 ** get_address_of_ActionBillingSetupFinished_4() { return &___ActionBillingSetupFinished_4; }
	inline void set_ActionBillingSetupFinished_4(Action_1_t3313641232 * value)
	{
		___ActionBillingSetupFinished_4 = value;
		Il2CppCodeGenWriteBarrier(&___ActionBillingSetupFinished_4, value);
	}

	inline static int32_t get_offset_of_ActionRetrieveProducsFinished_5() { return static_cast<int32_t>(offsetof(AN_InApp_EditorClient_t4039085811, ___ActionRetrieveProducsFinished_5)); }
	inline Action_1_t3313641232 * get_ActionRetrieveProducsFinished_5() const { return ___ActionRetrieveProducsFinished_5; }
	inline Action_1_t3313641232 ** get_address_of_ActionRetrieveProducsFinished_5() { return &___ActionRetrieveProducsFinished_5; }
	inline void set_ActionRetrieveProducsFinished_5(Action_1_t3313641232 * value)
	{
		___ActionRetrieveProducsFinished_5 = value;
		Il2CppCodeGenWriteBarrier(&___ActionRetrieveProducsFinished_5, value);
	}

	inline static int32_t get_offset_of__processedSKU_6() { return static_cast<int32_t>(offsetof(AN_InApp_EditorClient_t4039085811, ____processedSKU_6)); }
	inline String_t* get__processedSKU_6() const { return ____processedSKU_6; }
	inline String_t** get_address_of__processedSKU_6() { return &____processedSKU_6; }
	inline void set__processedSKU_6(String_t* value)
	{
		____processedSKU_6 = value;
		Il2CppCodeGenWriteBarrier(&____processedSKU_6, value);
	}

	inline static int32_t get_offset_of__inventory_7() { return static_cast<int32_t>(offsetof(AN_InApp_EditorClient_t4039085811, ____inventory_7)); }
	inline AndroidInventory_t701010211 * get__inventory_7() const { return ____inventory_7; }
	inline AndroidInventory_t701010211 ** get_address_of__inventory_7() { return &____inventory_7; }
	inline void set__inventory_7(AndroidInventory_t701010211 * value)
	{
		____inventory_7 = value;
		Il2CppCodeGenWriteBarrier(&____inventory_7, value);
	}

	inline static int32_t get_offset_of__IsConnectingToServiceInProcess_8() { return static_cast<int32_t>(offsetof(AN_InApp_EditorClient_t4039085811, ____IsConnectingToServiceInProcess_8)); }
	inline bool get__IsConnectingToServiceInProcess_8() const { return ____IsConnectingToServiceInProcess_8; }
	inline bool* get_address_of__IsConnectingToServiceInProcess_8() { return &____IsConnectingToServiceInProcess_8; }
	inline void set__IsConnectingToServiceInProcess_8(bool value)
	{
		____IsConnectingToServiceInProcess_8 = value;
	}

	inline static int32_t get_offset_of__IsProductRetrievingInProcess_9() { return static_cast<int32_t>(offsetof(AN_InApp_EditorClient_t4039085811, ____IsProductRetrievingInProcess_9)); }
	inline bool get__IsProductRetrievingInProcess_9() const { return ____IsProductRetrievingInProcess_9; }
	inline bool* get_address_of__IsProductRetrievingInProcess_9() { return &____IsProductRetrievingInProcess_9; }
	inline void set__IsProductRetrievingInProcess_9(bool value)
	{
		____IsProductRetrievingInProcess_9 = value;
	}

	inline static int32_t get_offset_of__IsConnected_10() { return static_cast<int32_t>(offsetof(AN_InApp_EditorClient_t4039085811, ____IsConnected_10)); }
	inline bool get__IsConnected_10() const { return ____IsConnected_10; }
	inline bool* get_address_of__IsConnected_10() { return &____IsConnected_10; }
	inline void set__IsConnected_10(bool value)
	{
		____IsConnected_10 = value;
	}

	inline static int32_t get_offset_of__IsInventoryLoaded_11() { return static_cast<int32_t>(offsetof(AN_InApp_EditorClient_t4039085811, ____IsInventoryLoaded_11)); }
	inline bool get__IsInventoryLoaded_11() const { return ____IsInventoryLoaded_11; }
	inline bool* get_address_of__IsInventoryLoaded_11() { return &____IsInventoryLoaded_11; }
	inline void set__IsInventoryLoaded_11(bool value)
	{
		____IsInventoryLoaded_11 = value;
	}

	inline static int32_t get_offset_of__RequestsSuccessRate_12() { return static_cast<int32_t>(offsetof(AN_InApp_EditorClient_t4039085811, ____RequestsSuccessRate_12)); }
	inline float get__RequestsSuccessRate_12() const { return ____RequestsSuccessRate_12; }
	inline float* get_address_of__RequestsSuccessRate_12() { return &____RequestsSuccessRate_12; }
	inline void set__RequestsSuccessRate_12(float value)
	{
		____RequestsSuccessRate_12 = value;
	}

	inline static int32_t get_offset_of__CurrentSKU_13() { return static_cast<int32_t>(offsetof(AN_InApp_EditorClient_t4039085811, ____CurrentSKU_13)); }
	inline String_t* get__CurrentSKU_13() const { return ____CurrentSKU_13; }
	inline String_t** get_address_of__CurrentSKU_13() { return &____CurrentSKU_13; }
	inline void set__CurrentSKU_13(String_t* value)
	{
		____CurrentSKU_13 = value;
		Il2CppCodeGenWriteBarrier(&____CurrentSKU_13, value);
	}
};

struct AN_InApp_EditorClient_t4039085811_StaticFields
{
public:
	// System.Action`1<BillingResult> AN_InApp_EditorClient::<>f__am$cache0
	Action_1_t3313641232 * ___U3CU3Ef__amU24cache0_14;
	// System.Action`1<BillingResult> AN_InApp_EditorClient::<>f__am$cache1
	Action_1_t3313641232 * ___U3CU3Ef__amU24cache1_15;
	// System.Action`1<BillingResult> AN_InApp_EditorClient::<>f__am$cache2
	Action_1_t3313641232 * ___U3CU3Ef__amU24cache2_16;
	// System.Action`1<BillingResult> AN_InApp_EditorClient::<>f__am$cache3
	Action_1_t3313641232 * ___U3CU3Ef__amU24cache3_17;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_14() { return static_cast<int32_t>(offsetof(AN_InApp_EditorClient_t4039085811_StaticFields, ___U3CU3Ef__amU24cache0_14)); }
	inline Action_1_t3313641232 * get_U3CU3Ef__amU24cache0_14() const { return ___U3CU3Ef__amU24cache0_14; }
	inline Action_1_t3313641232 ** get_address_of_U3CU3Ef__amU24cache0_14() { return &___U3CU3Ef__amU24cache0_14; }
	inline void set_U3CU3Ef__amU24cache0_14(Action_1_t3313641232 * value)
	{
		___U3CU3Ef__amU24cache0_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_14, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_15() { return static_cast<int32_t>(offsetof(AN_InApp_EditorClient_t4039085811_StaticFields, ___U3CU3Ef__amU24cache1_15)); }
	inline Action_1_t3313641232 * get_U3CU3Ef__amU24cache1_15() const { return ___U3CU3Ef__amU24cache1_15; }
	inline Action_1_t3313641232 ** get_address_of_U3CU3Ef__amU24cache1_15() { return &___U3CU3Ef__amU24cache1_15; }
	inline void set_U3CU3Ef__amU24cache1_15(Action_1_t3313641232 * value)
	{
		___U3CU3Ef__amU24cache1_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_15, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_16() { return static_cast<int32_t>(offsetof(AN_InApp_EditorClient_t4039085811_StaticFields, ___U3CU3Ef__amU24cache2_16)); }
	inline Action_1_t3313641232 * get_U3CU3Ef__amU24cache2_16() const { return ___U3CU3Ef__amU24cache2_16; }
	inline Action_1_t3313641232 ** get_address_of_U3CU3Ef__amU24cache2_16() { return &___U3CU3Ef__amU24cache2_16; }
	inline void set_U3CU3Ef__amU24cache2_16(Action_1_t3313641232 * value)
	{
		___U3CU3Ef__amU24cache2_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_16, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_17() { return static_cast<int32_t>(offsetof(AN_InApp_EditorClient_t4039085811_StaticFields, ___U3CU3Ef__amU24cache3_17)); }
	inline Action_1_t3313641232 * get_U3CU3Ef__amU24cache3_17() const { return ___U3CU3Ef__amU24cache3_17; }
	inline Action_1_t3313641232 ** get_address_of_U3CU3Ef__amU24cache3_17() { return &___U3CU3Ef__amU24cache3_17; }
	inline void set_U3CU3Ef__amU24cache3_17(Action_1_t3313641232 * value)
	{
		___U3CU3Ef__amU24cache3_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache3_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
