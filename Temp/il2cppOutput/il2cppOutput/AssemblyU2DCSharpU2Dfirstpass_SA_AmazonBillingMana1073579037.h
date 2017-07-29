#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_AMN_Singleton_1_gen2350897235.h"

// System.Action`1<AMN_GetUserDataResponse>
struct Action_1_t3130429649;
// System.Action`1<AMN_PurchaseResponse>
struct Action_1_t167812821;
// System.Action`1<AMN_GetProductDataResponse>
struct Action_1_t2427625819;
// System.Action`1<AMN_GetPurchaseProductsUpdateResponse>
struct Action_1_t3002203752;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,AmazonProductTemplate>
struct Dictionary_2_t1955440373;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.Collections.Generic.List`1<SA_AmazonReceipt>
struct List_1_t2691418265;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA_AmazonBillingManager
struct  SA_AmazonBillingManager_t1073579037  : public AMN_Singleton_1_t2350897235
{
public:
	// System.Action`1<AMN_GetUserDataResponse> SA_AmazonBillingManager::OnGetUserDataReceived
	Action_1_t3130429649 * ___OnGetUserDataReceived_4;
	// System.Action`1<AMN_PurchaseResponse> SA_AmazonBillingManager::OnPurchaseProductReceived
	Action_1_t167812821 * ___OnPurchaseProductReceived_5;
	// System.Action`1<AMN_GetProductDataResponse> SA_AmazonBillingManager::OnGetProductDataReceived
	Action_1_t2427625819 * ___OnGetProductDataReceived_6;
	// System.Action`1<AMN_GetPurchaseProductsUpdateResponse> SA_AmazonBillingManager::OnGetPurchaseProductsUpdatesReceived
	Action_1_t3002203752 * ___OnGetPurchaseProductsUpdatesReceived_7;
	// System.String SA_AmazonBillingManager::currentSKU
	String_t* ___currentSKU_8;
	// System.Boolean SA_AmazonBillingManager::_isInitialized
	bool ____isInitialized_9;
	// System.Collections.Generic.Dictionary`2<System.String,AmazonProductTemplate> SA_AmazonBillingManager::availableItems
	Dictionary_2_t1955440373 * ___availableItems_10;
	// System.Collections.Generic.List`1<System.String> SA_AmazonBillingManager::unavailableSkus
	List_1_t1398341365 * ___unavailableSkus_11;
	// System.Collections.Generic.List`1<SA_AmazonReceipt> SA_AmazonBillingManager::listReceipts
	List_1_t2691418265 * ___listReceipts_12;

public:
	inline static int32_t get_offset_of_OnGetUserDataReceived_4() { return static_cast<int32_t>(offsetof(SA_AmazonBillingManager_t1073579037, ___OnGetUserDataReceived_4)); }
	inline Action_1_t3130429649 * get_OnGetUserDataReceived_4() const { return ___OnGetUserDataReceived_4; }
	inline Action_1_t3130429649 ** get_address_of_OnGetUserDataReceived_4() { return &___OnGetUserDataReceived_4; }
	inline void set_OnGetUserDataReceived_4(Action_1_t3130429649 * value)
	{
		___OnGetUserDataReceived_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnGetUserDataReceived_4, value);
	}

	inline static int32_t get_offset_of_OnPurchaseProductReceived_5() { return static_cast<int32_t>(offsetof(SA_AmazonBillingManager_t1073579037, ___OnPurchaseProductReceived_5)); }
	inline Action_1_t167812821 * get_OnPurchaseProductReceived_5() const { return ___OnPurchaseProductReceived_5; }
	inline Action_1_t167812821 ** get_address_of_OnPurchaseProductReceived_5() { return &___OnPurchaseProductReceived_5; }
	inline void set_OnPurchaseProductReceived_5(Action_1_t167812821 * value)
	{
		___OnPurchaseProductReceived_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnPurchaseProductReceived_5, value);
	}

	inline static int32_t get_offset_of_OnGetProductDataReceived_6() { return static_cast<int32_t>(offsetof(SA_AmazonBillingManager_t1073579037, ___OnGetProductDataReceived_6)); }
	inline Action_1_t2427625819 * get_OnGetProductDataReceived_6() const { return ___OnGetProductDataReceived_6; }
	inline Action_1_t2427625819 ** get_address_of_OnGetProductDataReceived_6() { return &___OnGetProductDataReceived_6; }
	inline void set_OnGetProductDataReceived_6(Action_1_t2427625819 * value)
	{
		___OnGetProductDataReceived_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnGetProductDataReceived_6, value);
	}

	inline static int32_t get_offset_of_OnGetPurchaseProductsUpdatesReceived_7() { return static_cast<int32_t>(offsetof(SA_AmazonBillingManager_t1073579037, ___OnGetPurchaseProductsUpdatesReceived_7)); }
	inline Action_1_t3002203752 * get_OnGetPurchaseProductsUpdatesReceived_7() const { return ___OnGetPurchaseProductsUpdatesReceived_7; }
	inline Action_1_t3002203752 ** get_address_of_OnGetPurchaseProductsUpdatesReceived_7() { return &___OnGetPurchaseProductsUpdatesReceived_7; }
	inline void set_OnGetPurchaseProductsUpdatesReceived_7(Action_1_t3002203752 * value)
	{
		___OnGetPurchaseProductsUpdatesReceived_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnGetPurchaseProductsUpdatesReceived_7, value);
	}

	inline static int32_t get_offset_of_currentSKU_8() { return static_cast<int32_t>(offsetof(SA_AmazonBillingManager_t1073579037, ___currentSKU_8)); }
	inline String_t* get_currentSKU_8() const { return ___currentSKU_8; }
	inline String_t** get_address_of_currentSKU_8() { return &___currentSKU_8; }
	inline void set_currentSKU_8(String_t* value)
	{
		___currentSKU_8 = value;
		Il2CppCodeGenWriteBarrier(&___currentSKU_8, value);
	}

	inline static int32_t get_offset_of__isInitialized_9() { return static_cast<int32_t>(offsetof(SA_AmazonBillingManager_t1073579037, ____isInitialized_9)); }
	inline bool get__isInitialized_9() const { return ____isInitialized_9; }
	inline bool* get_address_of__isInitialized_9() { return &____isInitialized_9; }
	inline void set__isInitialized_9(bool value)
	{
		____isInitialized_9 = value;
	}

	inline static int32_t get_offset_of_availableItems_10() { return static_cast<int32_t>(offsetof(SA_AmazonBillingManager_t1073579037, ___availableItems_10)); }
	inline Dictionary_2_t1955440373 * get_availableItems_10() const { return ___availableItems_10; }
	inline Dictionary_2_t1955440373 ** get_address_of_availableItems_10() { return &___availableItems_10; }
	inline void set_availableItems_10(Dictionary_2_t1955440373 * value)
	{
		___availableItems_10 = value;
		Il2CppCodeGenWriteBarrier(&___availableItems_10, value);
	}

	inline static int32_t get_offset_of_unavailableSkus_11() { return static_cast<int32_t>(offsetof(SA_AmazonBillingManager_t1073579037, ___unavailableSkus_11)); }
	inline List_1_t1398341365 * get_unavailableSkus_11() const { return ___unavailableSkus_11; }
	inline List_1_t1398341365 ** get_address_of_unavailableSkus_11() { return &___unavailableSkus_11; }
	inline void set_unavailableSkus_11(List_1_t1398341365 * value)
	{
		___unavailableSkus_11 = value;
		Il2CppCodeGenWriteBarrier(&___unavailableSkus_11, value);
	}

	inline static int32_t get_offset_of_listReceipts_12() { return static_cast<int32_t>(offsetof(SA_AmazonBillingManager_t1073579037, ___listReceipts_12)); }
	inline List_1_t2691418265 * get_listReceipts_12() const { return ___listReceipts_12; }
	inline List_1_t2691418265 ** get_address_of_listReceipts_12() { return &___listReceipts_12; }
	inline void set_listReceipts_12(List_1_t2691418265 * value)
	{
		___listReceipts_12 = value;
		Il2CppCodeGenWriteBarrier(&___listReceipts_12, value);
	}
};

struct SA_AmazonBillingManager_t1073579037_StaticFields
{
public:
	// System.Action`1<AMN_GetUserDataResponse> SA_AmazonBillingManager::<>f__am$cache0
	Action_1_t3130429649 * ___U3CU3Ef__amU24cache0_13;
	// System.Action`1<AMN_PurchaseResponse> SA_AmazonBillingManager::<>f__am$cache1
	Action_1_t167812821 * ___U3CU3Ef__amU24cache1_14;
	// System.Action`1<AMN_GetProductDataResponse> SA_AmazonBillingManager::<>f__am$cache2
	Action_1_t2427625819 * ___U3CU3Ef__amU24cache2_15;
	// System.Action`1<AMN_GetPurchaseProductsUpdateResponse> SA_AmazonBillingManager::<>f__am$cache3
	Action_1_t3002203752 * ___U3CU3Ef__amU24cache3_16;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_13() { return static_cast<int32_t>(offsetof(SA_AmazonBillingManager_t1073579037_StaticFields, ___U3CU3Ef__amU24cache0_13)); }
	inline Action_1_t3130429649 * get_U3CU3Ef__amU24cache0_13() const { return ___U3CU3Ef__amU24cache0_13; }
	inline Action_1_t3130429649 ** get_address_of_U3CU3Ef__amU24cache0_13() { return &___U3CU3Ef__amU24cache0_13; }
	inline void set_U3CU3Ef__amU24cache0_13(Action_1_t3130429649 * value)
	{
		___U3CU3Ef__amU24cache0_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_13, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_14() { return static_cast<int32_t>(offsetof(SA_AmazonBillingManager_t1073579037_StaticFields, ___U3CU3Ef__amU24cache1_14)); }
	inline Action_1_t167812821 * get_U3CU3Ef__amU24cache1_14() const { return ___U3CU3Ef__amU24cache1_14; }
	inline Action_1_t167812821 ** get_address_of_U3CU3Ef__amU24cache1_14() { return &___U3CU3Ef__amU24cache1_14; }
	inline void set_U3CU3Ef__amU24cache1_14(Action_1_t167812821 * value)
	{
		___U3CU3Ef__amU24cache1_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_14, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_15() { return static_cast<int32_t>(offsetof(SA_AmazonBillingManager_t1073579037_StaticFields, ___U3CU3Ef__amU24cache2_15)); }
	inline Action_1_t2427625819 * get_U3CU3Ef__amU24cache2_15() const { return ___U3CU3Ef__amU24cache2_15; }
	inline Action_1_t2427625819 ** get_address_of_U3CU3Ef__amU24cache2_15() { return &___U3CU3Ef__amU24cache2_15; }
	inline void set_U3CU3Ef__amU24cache2_15(Action_1_t2427625819 * value)
	{
		___U3CU3Ef__amU24cache2_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_15, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_16() { return static_cast<int32_t>(offsetof(SA_AmazonBillingManager_t1073579037_StaticFields, ___U3CU3Ef__amU24cache3_16)); }
	inline Action_1_t3002203752 * get_U3CU3Ef__amU24cache3_16() const { return ___U3CU3Ef__amU24cache3_16; }
	inline Action_1_t3002203752 ** get_address_of_U3CU3Ef__amU24cache3_16() { return &___U3CU3Ef__amU24cache3_16; }
	inline void set_U3CU3Ef__amU24cache3_16(Action_1_t3002203752 * value)
	{
		___U3CU3Ef__amU24cache3_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache3_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
