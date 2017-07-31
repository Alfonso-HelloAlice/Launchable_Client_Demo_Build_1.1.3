#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UM_InAppProduct
struct UM_InAppProduct_t2355913522;
// System.String
struct String_t;
// GooglePurchaseTemplate
struct GooglePurchaseTemplate_t2609331866;
// SA.IOSNative.StoreKit.PurchaseResult
struct PurchaseResult_t3784839096;
// WP8PurchseResponce
struct WP8PurchseResponce_t470047936;
// AMN_PurchaseResponse
struct AMN_PurchaseResponse_t366013439;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UM_PurchaseResult
struct  UM_PurchaseResult_t2462562863  : public Il2CppObject
{
public:
	// System.Boolean UM_PurchaseResult::isSuccess
	bool ___isSuccess_0;
	// UM_InAppProduct UM_PurchaseResult::product
	UM_InAppProduct_t2355913522 * ___product_1;
	// System.Int32 UM_PurchaseResult::_ResponceCode
	int32_t ____ResponceCode_2;
	// System.String UM_PurchaseResult::EditorDummyId
	String_t* ___EditorDummyId_3;
	// GooglePurchaseTemplate UM_PurchaseResult::Google_PurchaseInfo
	GooglePurchaseTemplate_t2609331866 * ___Google_PurchaseInfo_4;
	// SA.IOSNative.StoreKit.PurchaseResult UM_PurchaseResult::IOS_PurchaseInfo
	PurchaseResult_t3784839096 * ___IOS_PurchaseInfo_5;
	// WP8PurchseResponce UM_PurchaseResult::WP8_PurchaseInfo
	WP8PurchseResponce_t470047936 * ___WP8_PurchaseInfo_6;
	// AMN_PurchaseResponse UM_PurchaseResult::Amazon_PurchaseInfo
	AMN_PurchaseResponse_t366013439 * ___Amazon_PurchaseInfo_7;

public:
	inline static int32_t get_offset_of_isSuccess_0() { return static_cast<int32_t>(offsetof(UM_PurchaseResult_t2462562863, ___isSuccess_0)); }
	inline bool get_isSuccess_0() const { return ___isSuccess_0; }
	inline bool* get_address_of_isSuccess_0() { return &___isSuccess_0; }
	inline void set_isSuccess_0(bool value)
	{
		___isSuccess_0 = value;
	}

	inline static int32_t get_offset_of_product_1() { return static_cast<int32_t>(offsetof(UM_PurchaseResult_t2462562863, ___product_1)); }
	inline UM_InAppProduct_t2355913522 * get_product_1() const { return ___product_1; }
	inline UM_InAppProduct_t2355913522 ** get_address_of_product_1() { return &___product_1; }
	inline void set_product_1(UM_InAppProduct_t2355913522 * value)
	{
		___product_1 = value;
		Il2CppCodeGenWriteBarrier(&___product_1, value);
	}

	inline static int32_t get_offset_of__ResponceCode_2() { return static_cast<int32_t>(offsetof(UM_PurchaseResult_t2462562863, ____ResponceCode_2)); }
	inline int32_t get__ResponceCode_2() const { return ____ResponceCode_2; }
	inline int32_t* get_address_of__ResponceCode_2() { return &____ResponceCode_2; }
	inline void set__ResponceCode_2(int32_t value)
	{
		____ResponceCode_2 = value;
	}

	inline static int32_t get_offset_of_EditorDummyId_3() { return static_cast<int32_t>(offsetof(UM_PurchaseResult_t2462562863, ___EditorDummyId_3)); }
	inline String_t* get_EditorDummyId_3() const { return ___EditorDummyId_3; }
	inline String_t** get_address_of_EditorDummyId_3() { return &___EditorDummyId_3; }
	inline void set_EditorDummyId_3(String_t* value)
	{
		___EditorDummyId_3 = value;
		Il2CppCodeGenWriteBarrier(&___EditorDummyId_3, value);
	}

	inline static int32_t get_offset_of_Google_PurchaseInfo_4() { return static_cast<int32_t>(offsetof(UM_PurchaseResult_t2462562863, ___Google_PurchaseInfo_4)); }
	inline GooglePurchaseTemplate_t2609331866 * get_Google_PurchaseInfo_4() const { return ___Google_PurchaseInfo_4; }
	inline GooglePurchaseTemplate_t2609331866 ** get_address_of_Google_PurchaseInfo_4() { return &___Google_PurchaseInfo_4; }
	inline void set_Google_PurchaseInfo_4(GooglePurchaseTemplate_t2609331866 * value)
	{
		___Google_PurchaseInfo_4 = value;
		Il2CppCodeGenWriteBarrier(&___Google_PurchaseInfo_4, value);
	}

	inline static int32_t get_offset_of_IOS_PurchaseInfo_5() { return static_cast<int32_t>(offsetof(UM_PurchaseResult_t2462562863, ___IOS_PurchaseInfo_5)); }
	inline PurchaseResult_t3784839096 * get_IOS_PurchaseInfo_5() const { return ___IOS_PurchaseInfo_5; }
	inline PurchaseResult_t3784839096 ** get_address_of_IOS_PurchaseInfo_5() { return &___IOS_PurchaseInfo_5; }
	inline void set_IOS_PurchaseInfo_5(PurchaseResult_t3784839096 * value)
	{
		___IOS_PurchaseInfo_5 = value;
		Il2CppCodeGenWriteBarrier(&___IOS_PurchaseInfo_5, value);
	}

	inline static int32_t get_offset_of_WP8_PurchaseInfo_6() { return static_cast<int32_t>(offsetof(UM_PurchaseResult_t2462562863, ___WP8_PurchaseInfo_6)); }
	inline WP8PurchseResponce_t470047936 * get_WP8_PurchaseInfo_6() const { return ___WP8_PurchaseInfo_6; }
	inline WP8PurchseResponce_t470047936 ** get_address_of_WP8_PurchaseInfo_6() { return &___WP8_PurchaseInfo_6; }
	inline void set_WP8_PurchaseInfo_6(WP8PurchseResponce_t470047936 * value)
	{
		___WP8_PurchaseInfo_6 = value;
		Il2CppCodeGenWriteBarrier(&___WP8_PurchaseInfo_6, value);
	}

	inline static int32_t get_offset_of_Amazon_PurchaseInfo_7() { return static_cast<int32_t>(offsetof(UM_PurchaseResult_t2462562863, ___Amazon_PurchaseInfo_7)); }
	inline AMN_PurchaseResponse_t366013439 * get_Amazon_PurchaseInfo_7() const { return ___Amazon_PurchaseInfo_7; }
	inline AMN_PurchaseResponse_t366013439 ** get_address_of_Amazon_PurchaseInfo_7() { return &___Amazon_PurchaseInfo_7; }
	inline void set_Amazon_PurchaseInfo_7(AMN_PurchaseResponse_t366013439 * value)
	{
		___Amazon_PurchaseInfo_7 = value;
		Il2CppCodeGenWriteBarrier(&___Amazon_PurchaseInfo_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
