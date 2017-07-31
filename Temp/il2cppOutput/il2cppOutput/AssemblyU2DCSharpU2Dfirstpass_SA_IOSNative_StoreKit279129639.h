#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Pattern_Sin761694744.h"

// System.String
struct String_t;
// System.Action`1<SA.Common.Models.Result>
struct Action_1_t4089019125;
// System.Action
struct Action_t3226471752;
// System.Action`1<SA.IOSNative.StoreKit.RestoreResult>
struct Action_1_t1089275841;
// System.Action`1<System.String>
struct Action_1_t1831019615;
// System.Action`1<SA.IOSNative.StoreKit.PurchaseResult>
struct Action_1_t3586638478;
// System.Action`1<SA.IOSNative.StoreKit.VerificationResponse>
struct Action_1_t891012938;
// System.Collections.Generic.Dictionary`2<System.Int32,SA.IOSNative.StoreKit.StoreProductView>
struct Dictionary_2_t3145035686;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.IOSNative.StoreKit.PaymentManager
struct  PaymentManager_t279129639  : public Singleton_1_t761694744
{
public:
	// System.Boolean SA.IOSNative.StoreKit.PaymentManager::_IsStoreLoaded
	bool ____IsStoreLoaded_12;
	// System.Boolean SA.IOSNative.StoreKit.PaymentManager::_IsWaitingLoadResult
	bool ____IsWaitingLoadResult_13;
	// System.Collections.Generic.Dictionary`2<System.Int32,SA.IOSNative.StoreKit.StoreProductView> SA.IOSNative.StoreKit.PaymentManager::_productsView
	Dictionary_2_t3145035686 * ____productsView_15;

public:
	inline static int32_t get_offset_of__IsStoreLoaded_12() { return static_cast<int32_t>(offsetof(PaymentManager_t279129639, ____IsStoreLoaded_12)); }
	inline bool get__IsStoreLoaded_12() const { return ____IsStoreLoaded_12; }
	inline bool* get_address_of__IsStoreLoaded_12() { return &____IsStoreLoaded_12; }
	inline void set__IsStoreLoaded_12(bool value)
	{
		____IsStoreLoaded_12 = value;
	}

	inline static int32_t get_offset_of__IsWaitingLoadResult_13() { return static_cast<int32_t>(offsetof(PaymentManager_t279129639, ____IsWaitingLoadResult_13)); }
	inline bool get__IsWaitingLoadResult_13() const { return ____IsWaitingLoadResult_13; }
	inline bool* get_address_of__IsWaitingLoadResult_13() { return &____IsWaitingLoadResult_13; }
	inline void set__IsWaitingLoadResult_13(bool value)
	{
		____IsWaitingLoadResult_13 = value;
	}

	inline static int32_t get_offset_of__productsView_15() { return static_cast<int32_t>(offsetof(PaymentManager_t279129639, ____productsView_15)); }
	inline Dictionary_2_t3145035686 * get__productsView_15() const { return ____productsView_15; }
	inline Dictionary_2_t3145035686 ** get_address_of__productsView_15() { return &____productsView_15; }
	inline void set__productsView_15(Dictionary_2_t3145035686 * value)
	{
		____productsView_15 = value;
		Il2CppCodeGenWriteBarrier(&____productsView_15, value);
	}
};

struct PaymentManager_t279129639_StaticFields
{
public:
	// System.Action`1<SA.Common.Models.Result> SA.IOSNative.StoreKit.PaymentManager::OnStoreKitInitComplete
	Action_1_t4089019125 * ___OnStoreKitInitComplete_6;
	// System.Action SA.IOSNative.StoreKit.PaymentManager::OnRestoreStarted
	Action_t3226471752 * ___OnRestoreStarted_7;
	// System.Action`1<SA.IOSNative.StoreKit.RestoreResult> SA.IOSNative.StoreKit.PaymentManager::OnRestoreComplete
	Action_1_t1089275841 * ___OnRestoreComplete_8;
	// System.Action`1<System.String> SA.IOSNative.StoreKit.PaymentManager::OnTransactionStarted
	Action_1_t1831019615 * ___OnTransactionStarted_9;
	// System.Action`1<SA.IOSNative.StoreKit.PurchaseResult> SA.IOSNative.StoreKit.PaymentManager::OnTransactionComplete
	Action_1_t3586638478 * ___OnTransactionComplete_10;
	// System.Action`1<SA.IOSNative.StoreKit.VerificationResponse> SA.IOSNative.StoreKit.PaymentManager::OnVerificationComplete
	Action_1_t891012938 * ___OnVerificationComplete_11;
	// System.Int32 SA.IOSNative.StoreKit.PaymentManager::_nextId
	int32_t ____nextId_14;
	// System.String SA.IOSNative.StoreKit.PaymentManager::lastPurchasedProduct
	String_t* ___lastPurchasedProduct_16;

public:
	inline static int32_t get_offset_of_OnStoreKitInitComplete_6() { return static_cast<int32_t>(offsetof(PaymentManager_t279129639_StaticFields, ___OnStoreKitInitComplete_6)); }
	inline Action_1_t4089019125 * get_OnStoreKitInitComplete_6() const { return ___OnStoreKitInitComplete_6; }
	inline Action_1_t4089019125 ** get_address_of_OnStoreKitInitComplete_6() { return &___OnStoreKitInitComplete_6; }
	inline void set_OnStoreKitInitComplete_6(Action_1_t4089019125 * value)
	{
		___OnStoreKitInitComplete_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnStoreKitInitComplete_6, value);
	}

	inline static int32_t get_offset_of_OnRestoreStarted_7() { return static_cast<int32_t>(offsetof(PaymentManager_t279129639_StaticFields, ___OnRestoreStarted_7)); }
	inline Action_t3226471752 * get_OnRestoreStarted_7() const { return ___OnRestoreStarted_7; }
	inline Action_t3226471752 ** get_address_of_OnRestoreStarted_7() { return &___OnRestoreStarted_7; }
	inline void set_OnRestoreStarted_7(Action_t3226471752 * value)
	{
		___OnRestoreStarted_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnRestoreStarted_7, value);
	}

	inline static int32_t get_offset_of_OnRestoreComplete_8() { return static_cast<int32_t>(offsetof(PaymentManager_t279129639_StaticFields, ___OnRestoreComplete_8)); }
	inline Action_1_t1089275841 * get_OnRestoreComplete_8() const { return ___OnRestoreComplete_8; }
	inline Action_1_t1089275841 ** get_address_of_OnRestoreComplete_8() { return &___OnRestoreComplete_8; }
	inline void set_OnRestoreComplete_8(Action_1_t1089275841 * value)
	{
		___OnRestoreComplete_8 = value;
		Il2CppCodeGenWriteBarrier(&___OnRestoreComplete_8, value);
	}

	inline static int32_t get_offset_of_OnTransactionStarted_9() { return static_cast<int32_t>(offsetof(PaymentManager_t279129639_StaticFields, ___OnTransactionStarted_9)); }
	inline Action_1_t1831019615 * get_OnTransactionStarted_9() const { return ___OnTransactionStarted_9; }
	inline Action_1_t1831019615 ** get_address_of_OnTransactionStarted_9() { return &___OnTransactionStarted_9; }
	inline void set_OnTransactionStarted_9(Action_1_t1831019615 * value)
	{
		___OnTransactionStarted_9 = value;
		Il2CppCodeGenWriteBarrier(&___OnTransactionStarted_9, value);
	}

	inline static int32_t get_offset_of_OnTransactionComplete_10() { return static_cast<int32_t>(offsetof(PaymentManager_t279129639_StaticFields, ___OnTransactionComplete_10)); }
	inline Action_1_t3586638478 * get_OnTransactionComplete_10() const { return ___OnTransactionComplete_10; }
	inline Action_1_t3586638478 ** get_address_of_OnTransactionComplete_10() { return &___OnTransactionComplete_10; }
	inline void set_OnTransactionComplete_10(Action_1_t3586638478 * value)
	{
		___OnTransactionComplete_10 = value;
		Il2CppCodeGenWriteBarrier(&___OnTransactionComplete_10, value);
	}

	inline static int32_t get_offset_of_OnVerificationComplete_11() { return static_cast<int32_t>(offsetof(PaymentManager_t279129639_StaticFields, ___OnVerificationComplete_11)); }
	inline Action_1_t891012938 * get_OnVerificationComplete_11() const { return ___OnVerificationComplete_11; }
	inline Action_1_t891012938 ** get_address_of_OnVerificationComplete_11() { return &___OnVerificationComplete_11; }
	inline void set_OnVerificationComplete_11(Action_1_t891012938 * value)
	{
		___OnVerificationComplete_11 = value;
		Il2CppCodeGenWriteBarrier(&___OnVerificationComplete_11, value);
	}

	inline static int32_t get_offset_of__nextId_14() { return static_cast<int32_t>(offsetof(PaymentManager_t279129639_StaticFields, ____nextId_14)); }
	inline int32_t get__nextId_14() const { return ____nextId_14; }
	inline int32_t* get_address_of__nextId_14() { return &____nextId_14; }
	inline void set__nextId_14(int32_t value)
	{
		____nextId_14 = value;
	}

	inline static int32_t get_offset_of_lastPurchasedProduct_16() { return static_cast<int32_t>(offsetof(PaymentManager_t279129639_StaticFields, ___lastPurchasedProduct_16)); }
	inline String_t* get_lastPurchasedProduct_16() const { return ___lastPurchasedProduct_16; }
	inline String_t** get_address_of_lastPurchasedProduct_16() { return &___lastPurchasedProduct_16; }
	inline void set_lastPurchasedProduct_16(String_t* value)
	{
		___lastPurchasedProduct_16 = value;
		Il2CppCodeGenWriteBarrier(&___lastPurchasedProduct_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
