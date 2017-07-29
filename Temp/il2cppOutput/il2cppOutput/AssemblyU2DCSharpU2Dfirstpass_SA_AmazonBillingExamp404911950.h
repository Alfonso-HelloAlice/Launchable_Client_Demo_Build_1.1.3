#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// DefaultPreviewButton[]
struct DefaultPreviewButtonU5BU5D_t3800739864;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.Collections.Generic.Dictionary`2<System.String,AmazonProductTemplate>
struct Dictionary_2_t1955440373;
// System.Collections.Generic.List`1<SA_AmazonReceipt>
struct List_1_t2691418265;
// SA_AmazonReceipt
struct SA_AmazonReceipt_t3322297133;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA_AmazonBillingExample
struct  SA_AmazonBillingExample_t404911950  : public MonoBehaviour_t1158329972
{
public:
	// DefaultPreviewButton[] SA_AmazonBillingExample::buttons
	DefaultPreviewButtonU5BU5D_t3800739864* ___buttons_2;
	// System.Collections.Generic.List`1<System.String> SA_AmazonBillingExample::entitlements
	List_1_t1398341365 * ___entitlements_3;
	// System.Collections.Generic.Dictionary`2<System.String,AmazonProductTemplate> SA_AmazonBillingExample::availableItems
	Dictionary_2_t1955440373 * ___availableItems_4;
	// System.Collections.Generic.List`1<System.String> SA_AmazonBillingExample::unavailableSkus
	List_1_t1398341365 * ___unavailableSkus_5;
	// System.Collections.Generic.List`1<SA_AmazonReceipt> SA_AmazonBillingExample::listReceipts
	List_1_t2691418265 * ___listReceipts_6;
	// SA_AmazonReceipt SA_AmazonBillingExample::receipt
	SA_AmazonReceipt_t3322297133 * ___receipt_7;
	// System.Boolean SA_AmazonBillingExample::isInitialized
	bool ___isInitialized_8;
	// System.String SA_AmazonBillingExample::SKU_EXAMPLE
	String_t* ___SKU_EXAMPLE_9;

public:
	inline static int32_t get_offset_of_buttons_2() { return static_cast<int32_t>(offsetof(SA_AmazonBillingExample_t404911950, ___buttons_2)); }
	inline DefaultPreviewButtonU5BU5D_t3800739864* get_buttons_2() const { return ___buttons_2; }
	inline DefaultPreviewButtonU5BU5D_t3800739864** get_address_of_buttons_2() { return &___buttons_2; }
	inline void set_buttons_2(DefaultPreviewButtonU5BU5D_t3800739864* value)
	{
		___buttons_2 = value;
		Il2CppCodeGenWriteBarrier(&___buttons_2, value);
	}

	inline static int32_t get_offset_of_entitlements_3() { return static_cast<int32_t>(offsetof(SA_AmazonBillingExample_t404911950, ___entitlements_3)); }
	inline List_1_t1398341365 * get_entitlements_3() const { return ___entitlements_3; }
	inline List_1_t1398341365 ** get_address_of_entitlements_3() { return &___entitlements_3; }
	inline void set_entitlements_3(List_1_t1398341365 * value)
	{
		___entitlements_3 = value;
		Il2CppCodeGenWriteBarrier(&___entitlements_3, value);
	}

	inline static int32_t get_offset_of_availableItems_4() { return static_cast<int32_t>(offsetof(SA_AmazonBillingExample_t404911950, ___availableItems_4)); }
	inline Dictionary_2_t1955440373 * get_availableItems_4() const { return ___availableItems_4; }
	inline Dictionary_2_t1955440373 ** get_address_of_availableItems_4() { return &___availableItems_4; }
	inline void set_availableItems_4(Dictionary_2_t1955440373 * value)
	{
		___availableItems_4 = value;
		Il2CppCodeGenWriteBarrier(&___availableItems_4, value);
	}

	inline static int32_t get_offset_of_unavailableSkus_5() { return static_cast<int32_t>(offsetof(SA_AmazonBillingExample_t404911950, ___unavailableSkus_5)); }
	inline List_1_t1398341365 * get_unavailableSkus_5() const { return ___unavailableSkus_5; }
	inline List_1_t1398341365 ** get_address_of_unavailableSkus_5() { return &___unavailableSkus_5; }
	inline void set_unavailableSkus_5(List_1_t1398341365 * value)
	{
		___unavailableSkus_5 = value;
		Il2CppCodeGenWriteBarrier(&___unavailableSkus_5, value);
	}

	inline static int32_t get_offset_of_listReceipts_6() { return static_cast<int32_t>(offsetof(SA_AmazonBillingExample_t404911950, ___listReceipts_6)); }
	inline List_1_t2691418265 * get_listReceipts_6() const { return ___listReceipts_6; }
	inline List_1_t2691418265 ** get_address_of_listReceipts_6() { return &___listReceipts_6; }
	inline void set_listReceipts_6(List_1_t2691418265 * value)
	{
		___listReceipts_6 = value;
		Il2CppCodeGenWriteBarrier(&___listReceipts_6, value);
	}

	inline static int32_t get_offset_of_receipt_7() { return static_cast<int32_t>(offsetof(SA_AmazonBillingExample_t404911950, ___receipt_7)); }
	inline SA_AmazonReceipt_t3322297133 * get_receipt_7() const { return ___receipt_7; }
	inline SA_AmazonReceipt_t3322297133 ** get_address_of_receipt_7() { return &___receipt_7; }
	inline void set_receipt_7(SA_AmazonReceipt_t3322297133 * value)
	{
		___receipt_7 = value;
		Il2CppCodeGenWriteBarrier(&___receipt_7, value);
	}

	inline static int32_t get_offset_of_isInitialized_8() { return static_cast<int32_t>(offsetof(SA_AmazonBillingExample_t404911950, ___isInitialized_8)); }
	inline bool get_isInitialized_8() const { return ___isInitialized_8; }
	inline bool* get_address_of_isInitialized_8() { return &___isInitialized_8; }
	inline void set_isInitialized_8(bool value)
	{
		___isInitialized_8 = value;
	}

	inline static int32_t get_offset_of_SKU_EXAMPLE_9() { return static_cast<int32_t>(offsetof(SA_AmazonBillingExample_t404911950, ___SKU_EXAMPLE_9)); }
	inline String_t* get_SKU_EXAMPLE_9() const { return ___SKU_EXAMPLE_9; }
	inline String_t** get_address_of_SKU_EXAMPLE_9() { return &___SKU_EXAMPLE_9; }
	inline void set_SKU_EXAMPLE_9(String_t* value)
	{
		___SKU_EXAMPLE_9 = value;
		Il2CppCodeGenWriteBarrier(&___SKU_EXAMPLE_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
