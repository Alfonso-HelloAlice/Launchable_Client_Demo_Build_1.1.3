#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Action`1<UM_BillingConnectionResult>
struct Action_1_t1086961063;
// System.Action`1<UM_PurchaseResult>
struct Action_1_t2264362245;
// System.Action`1<UM_BaseResult>
struct Action_1_t1142410483;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UM_BaseInAppClient
struct  UM_BaseInAppClient_t739551207  : public Il2CppObject
{
public:
	// System.Action`1<UM_BillingConnectionResult> UM_BaseInAppClient::OnServiceConnected
	Action_1_t1086961063 * ___OnServiceConnected_0;
	// System.Action`1<UM_PurchaseResult> UM_BaseInAppClient::OnPurchaseFinished
	Action_1_t2264362245 * ___OnPurchaseFinished_1;
	// System.Action`1<UM_BaseResult> UM_BaseInAppClient::OnRestoreFinished
	Action_1_t1142410483 * ___OnRestoreFinished_2;
	// System.Boolean UM_BaseInAppClient::_IsConnected
	bool ____IsConnected_3;

public:
	inline static int32_t get_offset_of_OnServiceConnected_0() { return static_cast<int32_t>(offsetof(UM_BaseInAppClient_t739551207, ___OnServiceConnected_0)); }
	inline Action_1_t1086961063 * get_OnServiceConnected_0() const { return ___OnServiceConnected_0; }
	inline Action_1_t1086961063 ** get_address_of_OnServiceConnected_0() { return &___OnServiceConnected_0; }
	inline void set_OnServiceConnected_0(Action_1_t1086961063 * value)
	{
		___OnServiceConnected_0 = value;
		Il2CppCodeGenWriteBarrier(&___OnServiceConnected_0, value);
	}

	inline static int32_t get_offset_of_OnPurchaseFinished_1() { return static_cast<int32_t>(offsetof(UM_BaseInAppClient_t739551207, ___OnPurchaseFinished_1)); }
	inline Action_1_t2264362245 * get_OnPurchaseFinished_1() const { return ___OnPurchaseFinished_1; }
	inline Action_1_t2264362245 ** get_address_of_OnPurchaseFinished_1() { return &___OnPurchaseFinished_1; }
	inline void set_OnPurchaseFinished_1(Action_1_t2264362245 * value)
	{
		___OnPurchaseFinished_1 = value;
		Il2CppCodeGenWriteBarrier(&___OnPurchaseFinished_1, value);
	}

	inline static int32_t get_offset_of_OnRestoreFinished_2() { return static_cast<int32_t>(offsetof(UM_BaseInAppClient_t739551207, ___OnRestoreFinished_2)); }
	inline Action_1_t1142410483 * get_OnRestoreFinished_2() const { return ___OnRestoreFinished_2; }
	inline Action_1_t1142410483 ** get_address_of_OnRestoreFinished_2() { return &___OnRestoreFinished_2; }
	inline void set_OnRestoreFinished_2(Action_1_t1142410483 * value)
	{
		___OnRestoreFinished_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnRestoreFinished_2, value);
	}

	inline static int32_t get_offset_of__IsConnected_3() { return static_cast<int32_t>(offsetof(UM_BaseInAppClient_t739551207, ____IsConnected_3)); }
	inline bool get__IsConnected_3() const { return ____IsConnected_3; }
	inline bool* get_address_of__IsConnected_3() { return &____IsConnected_3; }
	inline void set__IsConnected_3(bool value)
	{
		____IsConnected_3 = value;
	}
};

struct UM_BaseInAppClient_t739551207_StaticFields
{
public:
	// System.Action`1<UM_BillingConnectionResult> UM_BaseInAppClient::<>f__am$cache0
	Action_1_t1086961063 * ___U3CU3Ef__amU24cache0_4;
	// System.Action`1<UM_PurchaseResult> UM_BaseInAppClient::<>f__am$cache1
	Action_1_t2264362245 * ___U3CU3Ef__amU24cache1_5;
	// System.Action`1<UM_BaseResult> UM_BaseInAppClient::<>f__am$cache2
	Action_1_t1142410483 * ___U3CU3Ef__amU24cache2_6;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_4() { return static_cast<int32_t>(offsetof(UM_BaseInAppClient_t739551207_StaticFields, ___U3CU3Ef__amU24cache0_4)); }
	inline Action_1_t1086961063 * get_U3CU3Ef__amU24cache0_4() const { return ___U3CU3Ef__amU24cache0_4; }
	inline Action_1_t1086961063 ** get_address_of_U3CU3Ef__amU24cache0_4() { return &___U3CU3Ef__amU24cache0_4; }
	inline void set_U3CU3Ef__amU24cache0_4(Action_1_t1086961063 * value)
	{
		___U3CU3Ef__amU24cache0_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_4, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_5() { return static_cast<int32_t>(offsetof(UM_BaseInAppClient_t739551207_StaticFields, ___U3CU3Ef__amU24cache1_5)); }
	inline Action_1_t2264362245 * get_U3CU3Ef__amU24cache1_5() const { return ___U3CU3Ef__amU24cache1_5; }
	inline Action_1_t2264362245 ** get_address_of_U3CU3Ef__amU24cache1_5() { return &___U3CU3Ef__amU24cache1_5; }
	inline void set_U3CU3Ef__amU24cache1_5(Action_1_t2264362245 * value)
	{
		___U3CU3Ef__amU24cache1_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_5, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_6() { return static_cast<int32_t>(offsetof(UM_BaseInAppClient_t739551207_StaticFields, ___U3CU3Ef__amU24cache2_6)); }
	inline Action_1_t1142410483 * get_U3CU3Ef__amU24cache2_6() const { return ___U3CU3Ef__amU24cache2_6; }
	inline Action_1_t1142410483 ** get_address_of_U3CU3Ef__amU24cache2_6() { return &___U3CU3Ef__amU24cache2_6; }
	inline void set_U3CU3Ef__amU24cache2_6(Action_1_t1142410483 * value)
	{
		___U3CU3Ef__amU24cache2_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
