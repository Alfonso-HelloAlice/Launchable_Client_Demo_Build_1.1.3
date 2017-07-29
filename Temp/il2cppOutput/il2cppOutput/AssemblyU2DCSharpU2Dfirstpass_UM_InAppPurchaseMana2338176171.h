#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// UM_InAppClient
struct UM_InAppClient_t3389195648;
// System.Action`1<UM_PurchaseResult>
struct Action_1_t2264362245;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UM_InAppPurchaseManager
struct  UM_InAppPurchaseManager_t2338176171  : public Il2CppObject
{
public:

public:
};

struct UM_InAppPurchaseManager_t2338176171_StaticFields
{
public:
	// UM_InAppClient UM_InAppPurchaseManager::_Client
	Il2CppObject * ____Client_1;
	// System.Action`1<UM_PurchaseResult> UM_InAppPurchaseManager::<>f__mg$cache0
	Action_1_t2264362245 * ___U3CU3Ef__mgU24cache0_2;

public:
	inline static int32_t get_offset_of__Client_1() { return static_cast<int32_t>(offsetof(UM_InAppPurchaseManager_t2338176171_StaticFields, ____Client_1)); }
	inline Il2CppObject * get__Client_1() const { return ____Client_1; }
	inline Il2CppObject ** get_address_of__Client_1() { return &____Client_1; }
	inline void set__Client_1(Il2CppObject * value)
	{
		____Client_1 = value;
		Il2CppCodeGenWriteBarrier(&____Client_1, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_2() { return static_cast<int32_t>(offsetof(UM_InAppPurchaseManager_t2338176171_StaticFields, ___U3CU3Ef__mgU24cache0_2)); }
	inline Action_1_t2264362245 * get_U3CU3Ef__mgU24cache0_2() const { return ___U3CU3Ef__mgU24cache0_2; }
	inline Action_1_t2264362245 ** get_address_of_U3CU3Ef__mgU24cache0_2() { return &___U3CU3Ef__mgU24cache0_2; }
	inline void set_U3CU3Ef__mgU24cache0_2(Action_1_t2264362245 * value)
	{
		___U3CU3Ef__mgU24cache0_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
