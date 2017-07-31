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
// GooglePurchaseTemplate
struct GooglePurchaseTemplate_t2609331866;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BillingResult
struct  BillingResult_t3511841850  : public Il2CppObject
{
public:
	// System.Int32 BillingResult::_response
	int32_t ____response_0;
	// System.String BillingResult::_message
	String_t* ____message_1;
	// GooglePurchaseTemplate BillingResult::_purchase
	GooglePurchaseTemplate_t2609331866 * ____purchase_2;

public:
	inline static int32_t get_offset_of__response_0() { return static_cast<int32_t>(offsetof(BillingResult_t3511841850, ____response_0)); }
	inline int32_t get__response_0() const { return ____response_0; }
	inline int32_t* get_address_of__response_0() { return &____response_0; }
	inline void set__response_0(int32_t value)
	{
		____response_0 = value;
	}

	inline static int32_t get_offset_of__message_1() { return static_cast<int32_t>(offsetof(BillingResult_t3511841850, ____message_1)); }
	inline String_t* get__message_1() const { return ____message_1; }
	inline String_t** get_address_of__message_1() { return &____message_1; }
	inline void set__message_1(String_t* value)
	{
		____message_1 = value;
		Il2CppCodeGenWriteBarrier(&____message_1, value);
	}

	inline static int32_t get_offset_of__purchase_2() { return static_cast<int32_t>(offsetof(BillingResult_t3511841850, ____purchase_2)); }
	inline GooglePurchaseTemplate_t2609331866 * get__purchase_2() const { return ____purchase_2; }
	inline GooglePurchaseTemplate_t2609331866 ** get_address_of__purchase_2() { return &____purchase_2; }
	inline void set__purchase_2(GooglePurchaseTemplate_t2609331866 * value)
	{
		____purchase_2 = value;
		Il2CppCodeGenWriteBarrier(&____purchase_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
