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

// SA_AmazonReceipt
struct  SA_AmazonReceipt_t3322297133  : public Il2CppObject
{
public:
	// System.String SA_AmazonReceipt::_sku
	String_t* ____sku_0;
	// System.String SA_AmazonReceipt::_productType
	String_t* ____productType_1;
	// System.String SA_AmazonReceipt::_receiptId
	String_t* ____receiptId_2;
	// System.Int64 SA_AmazonReceipt::_purchaseDate
	int64_t ____purchaseDate_3;
	// System.Int64 SA_AmazonReceipt::_cancelDate
	int64_t ____cancelDate_4;

public:
	inline static int32_t get_offset_of__sku_0() { return static_cast<int32_t>(offsetof(SA_AmazonReceipt_t3322297133, ____sku_0)); }
	inline String_t* get__sku_0() const { return ____sku_0; }
	inline String_t** get_address_of__sku_0() { return &____sku_0; }
	inline void set__sku_0(String_t* value)
	{
		____sku_0 = value;
		Il2CppCodeGenWriteBarrier(&____sku_0, value);
	}

	inline static int32_t get_offset_of__productType_1() { return static_cast<int32_t>(offsetof(SA_AmazonReceipt_t3322297133, ____productType_1)); }
	inline String_t* get__productType_1() const { return ____productType_1; }
	inline String_t** get_address_of__productType_1() { return &____productType_1; }
	inline void set__productType_1(String_t* value)
	{
		____productType_1 = value;
		Il2CppCodeGenWriteBarrier(&____productType_1, value);
	}

	inline static int32_t get_offset_of__receiptId_2() { return static_cast<int32_t>(offsetof(SA_AmazonReceipt_t3322297133, ____receiptId_2)); }
	inline String_t* get__receiptId_2() const { return ____receiptId_2; }
	inline String_t** get_address_of__receiptId_2() { return &____receiptId_2; }
	inline void set__receiptId_2(String_t* value)
	{
		____receiptId_2 = value;
		Il2CppCodeGenWriteBarrier(&____receiptId_2, value);
	}

	inline static int32_t get_offset_of__purchaseDate_3() { return static_cast<int32_t>(offsetof(SA_AmazonReceipt_t3322297133, ____purchaseDate_3)); }
	inline int64_t get__purchaseDate_3() const { return ____purchaseDate_3; }
	inline int64_t* get_address_of__purchaseDate_3() { return &____purchaseDate_3; }
	inline void set__purchaseDate_3(int64_t value)
	{
		____purchaseDate_3 = value;
	}

	inline static int32_t get_offset_of__cancelDate_4() { return static_cast<int32_t>(offsetof(SA_AmazonReceipt_t3322297133, ____cancelDate_4)); }
	inline int64_t get__cancelDate_4() const { return ____cancelDate_4; }
	inline int64_t* get_address_of__cancelDate_4() { return &____cancelDate_4; }
	inline void set__cancelDate_4(int64_t value)
	{
		____cancelDate_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
