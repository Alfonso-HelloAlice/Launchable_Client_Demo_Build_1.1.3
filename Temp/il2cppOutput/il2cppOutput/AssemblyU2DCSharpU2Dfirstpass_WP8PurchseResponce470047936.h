#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WP8PurchaseCodes2389113972.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WP8PurchseResponce
struct  WP8PurchseResponce_t470047936  : public Il2CppObject
{
public:
	// WP8PurchaseCodes WP8PurchseResponce::_code
	int32_t ____code_0;
	// System.String WP8PurchseResponce::_transactionId
	String_t* ____transactionId_1;
	// System.String WP8PurchseResponce::_productId
	String_t* ____productId_2;

public:
	inline static int32_t get_offset_of__code_0() { return static_cast<int32_t>(offsetof(WP8PurchseResponce_t470047936, ____code_0)); }
	inline int32_t get__code_0() const { return ____code_0; }
	inline int32_t* get_address_of__code_0() { return &____code_0; }
	inline void set__code_0(int32_t value)
	{
		____code_0 = value;
	}

	inline static int32_t get_offset_of__transactionId_1() { return static_cast<int32_t>(offsetof(WP8PurchseResponce_t470047936, ____transactionId_1)); }
	inline String_t* get__transactionId_1() const { return ____transactionId_1; }
	inline String_t** get_address_of__transactionId_1() { return &____transactionId_1; }
	inline void set__transactionId_1(String_t* value)
	{
		____transactionId_1 = value;
		Il2CppCodeGenWriteBarrier(&____transactionId_1, value);
	}

	inline static int32_t get_offset_of__productId_2() { return static_cast<int32_t>(offsetof(WP8PurchseResponce_t470047936, ____productId_2)); }
	inline String_t* get__productId_2() const { return ____productId_2; }
	inline String_t** get_address_of__productId_2() { return &____productId_2; }
	inline void set__productId_2(String_t* value)
	{
		____productId_2 = value;
		Il2CppCodeGenWriteBarrier(&____productId_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
