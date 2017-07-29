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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.IOSNative.StoreKit.VerificationResponse
struct  VerificationResponse_t1089213556  : public Il2CppObject
{
public:
	// System.Int32 SA.IOSNative.StoreKit.VerificationResponse::_Status
	int32_t ____Status_0;
	// System.String SA.IOSNative.StoreKit.VerificationResponse::_Receipt
	String_t* ____Receipt_1;
	// System.String SA.IOSNative.StoreKit.VerificationResponse::_ProductIdentifier
	String_t* ____ProductIdentifier_2;
	// System.String SA.IOSNative.StoreKit.VerificationResponse::_OriginalJSON
	String_t* ____OriginalJSON_3;

public:
	inline static int32_t get_offset_of__Status_0() { return static_cast<int32_t>(offsetof(VerificationResponse_t1089213556, ____Status_0)); }
	inline int32_t get__Status_0() const { return ____Status_0; }
	inline int32_t* get_address_of__Status_0() { return &____Status_0; }
	inline void set__Status_0(int32_t value)
	{
		____Status_0 = value;
	}

	inline static int32_t get_offset_of__Receipt_1() { return static_cast<int32_t>(offsetof(VerificationResponse_t1089213556, ____Receipt_1)); }
	inline String_t* get__Receipt_1() const { return ____Receipt_1; }
	inline String_t** get_address_of__Receipt_1() { return &____Receipt_1; }
	inline void set__Receipt_1(String_t* value)
	{
		____Receipt_1 = value;
		Il2CppCodeGenWriteBarrier(&____Receipt_1, value);
	}

	inline static int32_t get_offset_of__ProductIdentifier_2() { return static_cast<int32_t>(offsetof(VerificationResponse_t1089213556, ____ProductIdentifier_2)); }
	inline String_t* get__ProductIdentifier_2() const { return ____ProductIdentifier_2; }
	inline String_t** get_address_of__ProductIdentifier_2() { return &____ProductIdentifier_2; }
	inline void set__ProductIdentifier_2(String_t* value)
	{
		____ProductIdentifier_2 = value;
		Il2CppCodeGenWriteBarrier(&____ProductIdentifier_2, value);
	}

	inline static int32_t get_offset_of__OriginalJSON_3() { return static_cast<int32_t>(offsetof(VerificationResponse_t1089213556, ____OriginalJSON_3)); }
	inline String_t* get__OriginalJSON_3() const { return ____OriginalJSON_3; }
	inline String_t** get_address_of__OriginalJSON_3() { return &____OriginalJSON_3; }
	inline void set__OriginalJSON_3(String_t* value)
	{
		____OriginalJSON_3 = value;
		Il2CppCodeGenWriteBarrier(&____OriginalJSON_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
