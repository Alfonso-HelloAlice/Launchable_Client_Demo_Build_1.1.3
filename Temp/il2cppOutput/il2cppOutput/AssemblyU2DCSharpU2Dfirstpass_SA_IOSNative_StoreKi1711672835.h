#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SA_IOSNative_StoreKi2727710035.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SA_IOSNative_StoreKi2535984837.h"

// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.IOSNative.StoreKit.Product
struct  Product_t1711672835  : public Il2CppObject
{
public:
	// System.Boolean SA.IOSNative.StoreKit.Product::IsOpen
	bool ___IsOpen_0;
	// System.Boolean SA.IOSNative.StoreKit.Product::_IsAvailable
	bool ____IsAvailable_1;
	// System.String SA.IOSNative.StoreKit.Product::_Id
	String_t* ____Id_2;
	// System.String SA.IOSNative.StoreKit.Product::_DisplayName
	String_t* ____DisplayName_3;
	// System.String SA.IOSNative.StoreKit.Product::_Description
	String_t* ____Description_4;
	// System.Single SA.IOSNative.StoreKit.Product::_Price
	float ____Price_5;
	// System.String SA.IOSNative.StoreKit.Product::_LocalizedPrice
	String_t* ____LocalizedPrice_6;
	// System.String SA.IOSNative.StoreKit.Product::_CurrencySymbol
	String_t* ____CurrencySymbol_7;
	// System.String SA.IOSNative.StoreKit.Product::_CurrencyCode
	String_t* ____CurrencyCode_8;
	// UnityEngine.Texture2D SA.IOSNative.StoreKit.Product::_Texture
	Texture2D_t3542995729 * ____Texture_9;
	// SA.IOSNative.StoreKit.ProductType SA.IOSNative.StoreKit.Product::_ProductType
	int32_t ____ProductType_10;
	// SA.IOSNative.StoreKit.PriceTier SA.IOSNative.StoreKit.Product::_PriceTier
	int32_t ____PriceTier_11;

public:
	inline static int32_t get_offset_of_IsOpen_0() { return static_cast<int32_t>(offsetof(Product_t1711672835, ___IsOpen_0)); }
	inline bool get_IsOpen_0() const { return ___IsOpen_0; }
	inline bool* get_address_of_IsOpen_0() { return &___IsOpen_0; }
	inline void set_IsOpen_0(bool value)
	{
		___IsOpen_0 = value;
	}

	inline static int32_t get_offset_of__IsAvailable_1() { return static_cast<int32_t>(offsetof(Product_t1711672835, ____IsAvailable_1)); }
	inline bool get__IsAvailable_1() const { return ____IsAvailable_1; }
	inline bool* get_address_of__IsAvailable_1() { return &____IsAvailable_1; }
	inline void set__IsAvailable_1(bool value)
	{
		____IsAvailable_1 = value;
	}

	inline static int32_t get_offset_of__Id_2() { return static_cast<int32_t>(offsetof(Product_t1711672835, ____Id_2)); }
	inline String_t* get__Id_2() const { return ____Id_2; }
	inline String_t** get_address_of__Id_2() { return &____Id_2; }
	inline void set__Id_2(String_t* value)
	{
		____Id_2 = value;
		Il2CppCodeGenWriteBarrier(&____Id_2, value);
	}

	inline static int32_t get_offset_of__DisplayName_3() { return static_cast<int32_t>(offsetof(Product_t1711672835, ____DisplayName_3)); }
	inline String_t* get__DisplayName_3() const { return ____DisplayName_3; }
	inline String_t** get_address_of__DisplayName_3() { return &____DisplayName_3; }
	inline void set__DisplayName_3(String_t* value)
	{
		____DisplayName_3 = value;
		Il2CppCodeGenWriteBarrier(&____DisplayName_3, value);
	}

	inline static int32_t get_offset_of__Description_4() { return static_cast<int32_t>(offsetof(Product_t1711672835, ____Description_4)); }
	inline String_t* get__Description_4() const { return ____Description_4; }
	inline String_t** get_address_of__Description_4() { return &____Description_4; }
	inline void set__Description_4(String_t* value)
	{
		____Description_4 = value;
		Il2CppCodeGenWriteBarrier(&____Description_4, value);
	}

	inline static int32_t get_offset_of__Price_5() { return static_cast<int32_t>(offsetof(Product_t1711672835, ____Price_5)); }
	inline float get__Price_5() const { return ____Price_5; }
	inline float* get_address_of__Price_5() { return &____Price_5; }
	inline void set__Price_5(float value)
	{
		____Price_5 = value;
	}

	inline static int32_t get_offset_of__LocalizedPrice_6() { return static_cast<int32_t>(offsetof(Product_t1711672835, ____LocalizedPrice_6)); }
	inline String_t* get__LocalizedPrice_6() const { return ____LocalizedPrice_6; }
	inline String_t** get_address_of__LocalizedPrice_6() { return &____LocalizedPrice_6; }
	inline void set__LocalizedPrice_6(String_t* value)
	{
		____LocalizedPrice_6 = value;
		Il2CppCodeGenWriteBarrier(&____LocalizedPrice_6, value);
	}

	inline static int32_t get_offset_of__CurrencySymbol_7() { return static_cast<int32_t>(offsetof(Product_t1711672835, ____CurrencySymbol_7)); }
	inline String_t* get__CurrencySymbol_7() const { return ____CurrencySymbol_7; }
	inline String_t** get_address_of__CurrencySymbol_7() { return &____CurrencySymbol_7; }
	inline void set__CurrencySymbol_7(String_t* value)
	{
		____CurrencySymbol_7 = value;
		Il2CppCodeGenWriteBarrier(&____CurrencySymbol_7, value);
	}

	inline static int32_t get_offset_of__CurrencyCode_8() { return static_cast<int32_t>(offsetof(Product_t1711672835, ____CurrencyCode_8)); }
	inline String_t* get__CurrencyCode_8() const { return ____CurrencyCode_8; }
	inline String_t** get_address_of__CurrencyCode_8() { return &____CurrencyCode_8; }
	inline void set__CurrencyCode_8(String_t* value)
	{
		____CurrencyCode_8 = value;
		Il2CppCodeGenWriteBarrier(&____CurrencyCode_8, value);
	}

	inline static int32_t get_offset_of__Texture_9() { return static_cast<int32_t>(offsetof(Product_t1711672835, ____Texture_9)); }
	inline Texture2D_t3542995729 * get__Texture_9() const { return ____Texture_9; }
	inline Texture2D_t3542995729 ** get_address_of__Texture_9() { return &____Texture_9; }
	inline void set__Texture_9(Texture2D_t3542995729 * value)
	{
		____Texture_9 = value;
		Il2CppCodeGenWriteBarrier(&____Texture_9, value);
	}

	inline static int32_t get_offset_of__ProductType_10() { return static_cast<int32_t>(offsetof(Product_t1711672835, ____ProductType_10)); }
	inline int32_t get__ProductType_10() const { return ____ProductType_10; }
	inline int32_t* get_address_of__ProductType_10() { return &____ProductType_10; }
	inline void set__ProductType_10(int32_t value)
	{
		____ProductType_10 = value;
	}

	inline static int32_t get_offset_of__PriceTier_11() { return static_cast<int32_t>(offsetof(Product_t1711672835, ____PriceTier_11)); }
	inline int32_t get__PriceTier_11() const { return ____PriceTier_11; }
	inline int32_t* get_address_of__PriceTier_11() { return &____PriceTier_11; }
	inline void set__PriceTier_11(int32_t value)
	{
		____PriceTier_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
