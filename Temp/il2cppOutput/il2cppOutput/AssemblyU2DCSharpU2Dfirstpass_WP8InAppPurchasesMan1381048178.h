#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// WP8InAppPurchasesManager
struct WP8InAppPurchasesManager_t1381048178;
// System.Action`1<WP8_InAppsInitResult>
struct Action_1_t2374621372;
// System.Action`1<WP8PurchseResponce>
struct Action_1_t271847318;
// System.Action`1<WP8ConsumeResponse>
struct Action_1_t4159965940;
// System.String
struct String_t;
// System.Collections.Generic.List`1<WP8ProductTemplate>
struct List_1_t1524459830;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WP8InAppPurchasesManager
struct  WP8InAppPurchasesManager_t1381048178  : public Il2CppObject
{
public:
	// System.Boolean WP8InAppPurchasesManager::_IsInitialized
	bool ____IsInitialized_1;
	// System.Collections.Generic.List`1<WP8ProductTemplate> WP8InAppPurchasesManager::_products
	List_1_t1524459830 * ____products_9;

public:
	inline static int32_t get_offset_of__IsInitialized_1() { return static_cast<int32_t>(offsetof(WP8InAppPurchasesManager_t1381048178, ____IsInitialized_1)); }
	inline bool get__IsInitialized_1() const { return ____IsInitialized_1; }
	inline bool* get_address_of__IsInitialized_1() { return &____IsInitialized_1; }
	inline void set__IsInitialized_1(bool value)
	{
		____IsInitialized_1 = value;
	}

	inline static int32_t get_offset_of__products_9() { return static_cast<int32_t>(offsetof(WP8InAppPurchasesManager_t1381048178, ____products_9)); }
	inline List_1_t1524459830 * get__products_9() const { return ____products_9; }
	inline List_1_t1524459830 ** get_address_of__products_9() { return &____products_9; }
	inline void set__products_9(List_1_t1524459830 * value)
	{
		____products_9 = value;
		Il2CppCodeGenWriteBarrier(&____products_9, value);
	}
};

struct WP8InAppPurchasesManager_t1381048178_StaticFields
{
public:
	// WP8InAppPurchasesManager WP8InAppPurchasesManager::_instance
	WP8InAppPurchasesManager_t1381048178 * ____instance_0;
	// System.Action`1<WP8_InAppsInitResult> WP8InAppPurchasesManager::OnInitComplete
	Action_1_t2374621372 * ___OnInitComplete_2;
	// System.Action`1<WP8PurchseResponce> WP8InAppPurchasesManager::OnPurchaseFinished
	Action_1_t271847318 * ___OnPurchaseFinished_3;
	// System.Action`1<WP8ConsumeResponse> WP8InAppPurchasesManager::OnConsumeFinished
	Action_1_t4159965940 * ___OnConsumeFinished_4;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(WP8InAppPurchasesManager_t1381048178_StaticFields, ____instance_0)); }
	inline WP8InAppPurchasesManager_t1381048178 * get__instance_0() const { return ____instance_0; }
	inline WP8InAppPurchasesManager_t1381048178 ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(WP8InAppPurchasesManager_t1381048178 * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier(&____instance_0, value);
	}

	inline static int32_t get_offset_of_OnInitComplete_2() { return static_cast<int32_t>(offsetof(WP8InAppPurchasesManager_t1381048178_StaticFields, ___OnInitComplete_2)); }
	inline Action_1_t2374621372 * get_OnInitComplete_2() const { return ___OnInitComplete_2; }
	inline Action_1_t2374621372 ** get_address_of_OnInitComplete_2() { return &___OnInitComplete_2; }
	inline void set_OnInitComplete_2(Action_1_t2374621372 * value)
	{
		___OnInitComplete_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnInitComplete_2, value);
	}

	inline static int32_t get_offset_of_OnPurchaseFinished_3() { return static_cast<int32_t>(offsetof(WP8InAppPurchasesManager_t1381048178_StaticFields, ___OnPurchaseFinished_3)); }
	inline Action_1_t271847318 * get_OnPurchaseFinished_3() const { return ___OnPurchaseFinished_3; }
	inline Action_1_t271847318 ** get_address_of_OnPurchaseFinished_3() { return &___OnPurchaseFinished_3; }
	inline void set_OnPurchaseFinished_3(Action_1_t271847318 * value)
	{
		___OnPurchaseFinished_3 = value;
		Il2CppCodeGenWriteBarrier(&___OnPurchaseFinished_3, value);
	}

	inline static int32_t get_offset_of_OnConsumeFinished_4() { return static_cast<int32_t>(offsetof(WP8InAppPurchasesManager_t1381048178_StaticFields, ___OnConsumeFinished_4)); }
	inline Action_1_t4159965940 * get_OnConsumeFinished_4() const { return ___OnConsumeFinished_4; }
	inline Action_1_t4159965940 ** get_address_of_OnConsumeFinished_4() { return &___OnConsumeFinished_4; }
	inline void set_OnConsumeFinished_4(Action_1_t4159965940 * value)
	{
		___OnConsumeFinished_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnConsumeFinished_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
