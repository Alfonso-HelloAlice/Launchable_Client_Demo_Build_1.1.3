#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UM_InAppType1981088219.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SA_IOSNative_StoreKi2535984837.h"

// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// SA.IOSNative.StoreKit.Product
struct Product_t1711672835;
// WP8ProductTemplate
struct WP8ProductTemplate_t2155338698;
// GoogleProductTemplate
struct GoogleProductTemplate_t1112616324;
// AmazonProductTemplate
struct AmazonProductTemplate_t40661111;
// UM_InAppProductTemplate
struct UM_InAppProductTemplate_t815754684;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UM_InAppProduct
struct  UM_InAppProduct_t2355913522  : public Il2CppObject
{
public:
	// System.Boolean UM_InAppProduct::IsOpen
	bool ___IsOpen_0;
	// System.String UM_InAppProduct::id
	String_t* ___id_1;
	// UM_InAppType UM_InAppProduct::Type
	int32_t ___Type_2;
	// SA.IOSNative.StoreKit.PriceTier UM_InAppProduct::PriceTier
	int32_t ___PriceTier_3;
	// UnityEngine.Texture2D UM_InAppProduct::Texture
	Texture2D_t3542995729 * ___Texture_4;
	// System.String UM_InAppProduct::DisplayName
	String_t* ___DisplayName_5;
	// System.String UM_InAppProduct::Description
	String_t* ___Description_6;
	// System.String UM_InAppProduct::IOSId
	String_t* ___IOSId_7;
	// System.String UM_InAppProduct::AndroidId
	String_t* ___AndroidId_8;
	// System.String UM_InAppProduct::WP8Id
	String_t* ___WP8Id_9;
	// System.String UM_InAppProduct::AmazonId
	String_t* ___AmazonId_10;
	// SA.IOSNative.StoreKit.Product UM_InAppProduct::_IOSTemplate
	Product_t1711672835 * ____IOSTemplate_11;
	// WP8ProductTemplate UM_InAppProduct::_WP8Template
	WP8ProductTemplate_t2155338698 * ____WP8Template_12;
	// GoogleProductTemplate UM_InAppProduct::_AndroidTemplate
	GoogleProductTemplate_t1112616324 * ____AndroidTemplate_13;
	// AmazonProductTemplate UM_InAppProduct::_AmazonTemplate
	AmazonProductTemplate_t40661111 * ____AmazonTemplate_14;
	// UM_InAppProductTemplate UM_InAppProduct::_template
	UM_InAppProductTemplate_t815754684 * ____template_15;
	// System.Boolean UM_InAppProduct::_isTemplateSet
	bool ____isTemplateSet_16;

public:
	inline static int32_t get_offset_of_IsOpen_0() { return static_cast<int32_t>(offsetof(UM_InAppProduct_t2355913522, ___IsOpen_0)); }
	inline bool get_IsOpen_0() const { return ___IsOpen_0; }
	inline bool* get_address_of_IsOpen_0() { return &___IsOpen_0; }
	inline void set_IsOpen_0(bool value)
	{
		___IsOpen_0 = value;
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(UM_InAppProduct_t2355913522, ___id_1)); }
	inline String_t* get_id_1() const { return ___id_1; }
	inline String_t** get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(String_t* value)
	{
		___id_1 = value;
		Il2CppCodeGenWriteBarrier(&___id_1, value);
	}

	inline static int32_t get_offset_of_Type_2() { return static_cast<int32_t>(offsetof(UM_InAppProduct_t2355913522, ___Type_2)); }
	inline int32_t get_Type_2() const { return ___Type_2; }
	inline int32_t* get_address_of_Type_2() { return &___Type_2; }
	inline void set_Type_2(int32_t value)
	{
		___Type_2 = value;
	}

	inline static int32_t get_offset_of_PriceTier_3() { return static_cast<int32_t>(offsetof(UM_InAppProduct_t2355913522, ___PriceTier_3)); }
	inline int32_t get_PriceTier_3() const { return ___PriceTier_3; }
	inline int32_t* get_address_of_PriceTier_3() { return &___PriceTier_3; }
	inline void set_PriceTier_3(int32_t value)
	{
		___PriceTier_3 = value;
	}

	inline static int32_t get_offset_of_Texture_4() { return static_cast<int32_t>(offsetof(UM_InAppProduct_t2355913522, ___Texture_4)); }
	inline Texture2D_t3542995729 * get_Texture_4() const { return ___Texture_4; }
	inline Texture2D_t3542995729 ** get_address_of_Texture_4() { return &___Texture_4; }
	inline void set_Texture_4(Texture2D_t3542995729 * value)
	{
		___Texture_4 = value;
		Il2CppCodeGenWriteBarrier(&___Texture_4, value);
	}

	inline static int32_t get_offset_of_DisplayName_5() { return static_cast<int32_t>(offsetof(UM_InAppProduct_t2355913522, ___DisplayName_5)); }
	inline String_t* get_DisplayName_5() const { return ___DisplayName_5; }
	inline String_t** get_address_of_DisplayName_5() { return &___DisplayName_5; }
	inline void set_DisplayName_5(String_t* value)
	{
		___DisplayName_5 = value;
		Il2CppCodeGenWriteBarrier(&___DisplayName_5, value);
	}

	inline static int32_t get_offset_of_Description_6() { return static_cast<int32_t>(offsetof(UM_InAppProduct_t2355913522, ___Description_6)); }
	inline String_t* get_Description_6() const { return ___Description_6; }
	inline String_t** get_address_of_Description_6() { return &___Description_6; }
	inline void set_Description_6(String_t* value)
	{
		___Description_6 = value;
		Il2CppCodeGenWriteBarrier(&___Description_6, value);
	}

	inline static int32_t get_offset_of_IOSId_7() { return static_cast<int32_t>(offsetof(UM_InAppProduct_t2355913522, ___IOSId_7)); }
	inline String_t* get_IOSId_7() const { return ___IOSId_7; }
	inline String_t** get_address_of_IOSId_7() { return &___IOSId_7; }
	inline void set_IOSId_7(String_t* value)
	{
		___IOSId_7 = value;
		Il2CppCodeGenWriteBarrier(&___IOSId_7, value);
	}

	inline static int32_t get_offset_of_AndroidId_8() { return static_cast<int32_t>(offsetof(UM_InAppProduct_t2355913522, ___AndroidId_8)); }
	inline String_t* get_AndroidId_8() const { return ___AndroidId_8; }
	inline String_t** get_address_of_AndroidId_8() { return &___AndroidId_8; }
	inline void set_AndroidId_8(String_t* value)
	{
		___AndroidId_8 = value;
		Il2CppCodeGenWriteBarrier(&___AndroidId_8, value);
	}

	inline static int32_t get_offset_of_WP8Id_9() { return static_cast<int32_t>(offsetof(UM_InAppProduct_t2355913522, ___WP8Id_9)); }
	inline String_t* get_WP8Id_9() const { return ___WP8Id_9; }
	inline String_t** get_address_of_WP8Id_9() { return &___WP8Id_9; }
	inline void set_WP8Id_9(String_t* value)
	{
		___WP8Id_9 = value;
		Il2CppCodeGenWriteBarrier(&___WP8Id_9, value);
	}

	inline static int32_t get_offset_of_AmazonId_10() { return static_cast<int32_t>(offsetof(UM_InAppProduct_t2355913522, ___AmazonId_10)); }
	inline String_t* get_AmazonId_10() const { return ___AmazonId_10; }
	inline String_t** get_address_of_AmazonId_10() { return &___AmazonId_10; }
	inline void set_AmazonId_10(String_t* value)
	{
		___AmazonId_10 = value;
		Il2CppCodeGenWriteBarrier(&___AmazonId_10, value);
	}

	inline static int32_t get_offset_of__IOSTemplate_11() { return static_cast<int32_t>(offsetof(UM_InAppProduct_t2355913522, ____IOSTemplate_11)); }
	inline Product_t1711672835 * get__IOSTemplate_11() const { return ____IOSTemplate_11; }
	inline Product_t1711672835 ** get_address_of__IOSTemplate_11() { return &____IOSTemplate_11; }
	inline void set__IOSTemplate_11(Product_t1711672835 * value)
	{
		____IOSTemplate_11 = value;
		Il2CppCodeGenWriteBarrier(&____IOSTemplate_11, value);
	}

	inline static int32_t get_offset_of__WP8Template_12() { return static_cast<int32_t>(offsetof(UM_InAppProduct_t2355913522, ____WP8Template_12)); }
	inline WP8ProductTemplate_t2155338698 * get__WP8Template_12() const { return ____WP8Template_12; }
	inline WP8ProductTemplate_t2155338698 ** get_address_of__WP8Template_12() { return &____WP8Template_12; }
	inline void set__WP8Template_12(WP8ProductTemplate_t2155338698 * value)
	{
		____WP8Template_12 = value;
		Il2CppCodeGenWriteBarrier(&____WP8Template_12, value);
	}

	inline static int32_t get_offset_of__AndroidTemplate_13() { return static_cast<int32_t>(offsetof(UM_InAppProduct_t2355913522, ____AndroidTemplate_13)); }
	inline GoogleProductTemplate_t1112616324 * get__AndroidTemplate_13() const { return ____AndroidTemplate_13; }
	inline GoogleProductTemplate_t1112616324 ** get_address_of__AndroidTemplate_13() { return &____AndroidTemplate_13; }
	inline void set__AndroidTemplate_13(GoogleProductTemplate_t1112616324 * value)
	{
		____AndroidTemplate_13 = value;
		Il2CppCodeGenWriteBarrier(&____AndroidTemplate_13, value);
	}

	inline static int32_t get_offset_of__AmazonTemplate_14() { return static_cast<int32_t>(offsetof(UM_InAppProduct_t2355913522, ____AmazonTemplate_14)); }
	inline AmazonProductTemplate_t40661111 * get__AmazonTemplate_14() const { return ____AmazonTemplate_14; }
	inline AmazonProductTemplate_t40661111 ** get_address_of__AmazonTemplate_14() { return &____AmazonTemplate_14; }
	inline void set__AmazonTemplate_14(AmazonProductTemplate_t40661111 * value)
	{
		____AmazonTemplate_14 = value;
		Il2CppCodeGenWriteBarrier(&____AmazonTemplate_14, value);
	}

	inline static int32_t get_offset_of__template_15() { return static_cast<int32_t>(offsetof(UM_InAppProduct_t2355913522, ____template_15)); }
	inline UM_InAppProductTemplate_t815754684 * get__template_15() const { return ____template_15; }
	inline UM_InAppProductTemplate_t815754684 ** get_address_of__template_15() { return &____template_15; }
	inline void set__template_15(UM_InAppProductTemplate_t815754684 * value)
	{
		____template_15 = value;
		Il2CppCodeGenWriteBarrier(&____template_15, value);
	}

	inline static int32_t get_offset_of__isTemplateSet_16() { return static_cast<int32_t>(offsetof(UM_InAppProduct_t2355913522, ____isTemplateSet_16)); }
	inline bool get__isTemplateSet_16() const { return ____isTemplateSet_16; }
	inline bool* get_address_of__isTemplateSet_16() { return &____isTemplateSet_16; }
	inline void set__isTemplateSet_16(bool value)
	{
		____isTemplateSet_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
