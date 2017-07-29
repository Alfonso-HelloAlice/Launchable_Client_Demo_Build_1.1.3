#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Models_Res4287219743.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SA_IOSNative_StoreKi3376674198.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.IOSNative.StoreKit.PurchaseResult
struct  PurchaseResult_t3784839096  : public Result_t4287219743
{
public:
	// System.String SA.IOSNative.StoreKit.PurchaseResult::_ProductIdentifier
	String_t* ____ProductIdentifier_1;
	// SA.IOSNative.StoreKit.PurchaseState SA.IOSNative.StoreKit.PurchaseResult::_State
	int32_t ____State_2;
	// System.String SA.IOSNative.StoreKit.PurchaseResult::_Receipt
	String_t* ____Receipt_3;
	// System.String SA.IOSNative.StoreKit.PurchaseResult::_TransactionIdentifier
	String_t* ____TransactionIdentifier_4;
	// System.String SA.IOSNative.StoreKit.PurchaseResult::_ApplicationUsername
	String_t* ____ApplicationUsername_5;

public:
	inline static int32_t get_offset_of__ProductIdentifier_1() { return static_cast<int32_t>(offsetof(PurchaseResult_t3784839096, ____ProductIdentifier_1)); }
	inline String_t* get__ProductIdentifier_1() const { return ____ProductIdentifier_1; }
	inline String_t** get_address_of__ProductIdentifier_1() { return &____ProductIdentifier_1; }
	inline void set__ProductIdentifier_1(String_t* value)
	{
		____ProductIdentifier_1 = value;
		Il2CppCodeGenWriteBarrier(&____ProductIdentifier_1, value);
	}

	inline static int32_t get_offset_of__State_2() { return static_cast<int32_t>(offsetof(PurchaseResult_t3784839096, ____State_2)); }
	inline int32_t get__State_2() const { return ____State_2; }
	inline int32_t* get_address_of__State_2() { return &____State_2; }
	inline void set__State_2(int32_t value)
	{
		____State_2 = value;
	}

	inline static int32_t get_offset_of__Receipt_3() { return static_cast<int32_t>(offsetof(PurchaseResult_t3784839096, ____Receipt_3)); }
	inline String_t* get__Receipt_3() const { return ____Receipt_3; }
	inline String_t** get_address_of__Receipt_3() { return &____Receipt_3; }
	inline void set__Receipt_3(String_t* value)
	{
		____Receipt_3 = value;
		Il2CppCodeGenWriteBarrier(&____Receipt_3, value);
	}

	inline static int32_t get_offset_of__TransactionIdentifier_4() { return static_cast<int32_t>(offsetof(PurchaseResult_t3784839096, ____TransactionIdentifier_4)); }
	inline String_t* get__TransactionIdentifier_4() const { return ____TransactionIdentifier_4; }
	inline String_t** get_address_of__TransactionIdentifier_4() { return &____TransactionIdentifier_4; }
	inline void set__TransactionIdentifier_4(String_t* value)
	{
		____TransactionIdentifier_4 = value;
		Il2CppCodeGenWriteBarrier(&____TransactionIdentifier_4, value);
	}

	inline static int32_t get_offset_of__ApplicationUsername_5() { return static_cast<int32_t>(offsetof(PurchaseResult_t3784839096, ____ApplicationUsername_5)); }
	inline String_t* get__ApplicationUsername_5() const { return ____ApplicationUsername_5; }
	inline String_t** get_address_of__ApplicationUsername_5() { return &____ApplicationUsername_5; }
	inline void set__ApplicationUsername_5(String_t* value)
	{
		____ApplicationUsername_5 = value;
		Il2CppCodeGenWriteBarrier(&____ApplicationUsername_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
