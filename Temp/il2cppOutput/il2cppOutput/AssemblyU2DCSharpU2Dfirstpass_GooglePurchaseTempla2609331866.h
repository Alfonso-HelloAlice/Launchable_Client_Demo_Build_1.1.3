#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_GooglePurchaseState3606541435.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePurchaseTemplate
struct  GooglePurchaseTemplate_t2609331866  : public Il2CppObject
{
public:
	// System.String GooglePurchaseTemplate::OrderId
	String_t* ___OrderId_0;
	// System.String GooglePurchaseTemplate::PackageName
	String_t* ___PackageName_1;
	// System.String GooglePurchaseTemplate::SKU
	String_t* ___SKU_2;
	// System.String GooglePurchaseTemplate::DeveloperPayload
	String_t* ___DeveloperPayload_3;
	// System.String GooglePurchaseTemplate::Signature
	String_t* ___Signature_4;
	// System.String GooglePurchaseTemplate::Token
	String_t* ___Token_5;
	// System.Int64 GooglePurchaseTemplate::Time
	int64_t ___Time_6;
	// System.String GooglePurchaseTemplate::OriginalJson
	String_t* ___OriginalJson_7;
	// GooglePurchaseState GooglePurchaseTemplate::State
	int32_t ___State_8;

public:
	inline static int32_t get_offset_of_OrderId_0() { return static_cast<int32_t>(offsetof(GooglePurchaseTemplate_t2609331866, ___OrderId_0)); }
	inline String_t* get_OrderId_0() const { return ___OrderId_0; }
	inline String_t** get_address_of_OrderId_0() { return &___OrderId_0; }
	inline void set_OrderId_0(String_t* value)
	{
		___OrderId_0 = value;
		Il2CppCodeGenWriteBarrier(&___OrderId_0, value);
	}

	inline static int32_t get_offset_of_PackageName_1() { return static_cast<int32_t>(offsetof(GooglePurchaseTemplate_t2609331866, ___PackageName_1)); }
	inline String_t* get_PackageName_1() const { return ___PackageName_1; }
	inline String_t** get_address_of_PackageName_1() { return &___PackageName_1; }
	inline void set_PackageName_1(String_t* value)
	{
		___PackageName_1 = value;
		Il2CppCodeGenWriteBarrier(&___PackageName_1, value);
	}

	inline static int32_t get_offset_of_SKU_2() { return static_cast<int32_t>(offsetof(GooglePurchaseTemplate_t2609331866, ___SKU_2)); }
	inline String_t* get_SKU_2() const { return ___SKU_2; }
	inline String_t** get_address_of_SKU_2() { return &___SKU_2; }
	inline void set_SKU_2(String_t* value)
	{
		___SKU_2 = value;
		Il2CppCodeGenWriteBarrier(&___SKU_2, value);
	}

	inline static int32_t get_offset_of_DeveloperPayload_3() { return static_cast<int32_t>(offsetof(GooglePurchaseTemplate_t2609331866, ___DeveloperPayload_3)); }
	inline String_t* get_DeveloperPayload_3() const { return ___DeveloperPayload_3; }
	inline String_t** get_address_of_DeveloperPayload_3() { return &___DeveloperPayload_3; }
	inline void set_DeveloperPayload_3(String_t* value)
	{
		___DeveloperPayload_3 = value;
		Il2CppCodeGenWriteBarrier(&___DeveloperPayload_3, value);
	}

	inline static int32_t get_offset_of_Signature_4() { return static_cast<int32_t>(offsetof(GooglePurchaseTemplate_t2609331866, ___Signature_4)); }
	inline String_t* get_Signature_4() const { return ___Signature_4; }
	inline String_t** get_address_of_Signature_4() { return &___Signature_4; }
	inline void set_Signature_4(String_t* value)
	{
		___Signature_4 = value;
		Il2CppCodeGenWriteBarrier(&___Signature_4, value);
	}

	inline static int32_t get_offset_of_Token_5() { return static_cast<int32_t>(offsetof(GooglePurchaseTemplate_t2609331866, ___Token_5)); }
	inline String_t* get_Token_5() const { return ___Token_5; }
	inline String_t** get_address_of_Token_5() { return &___Token_5; }
	inline void set_Token_5(String_t* value)
	{
		___Token_5 = value;
		Il2CppCodeGenWriteBarrier(&___Token_5, value);
	}

	inline static int32_t get_offset_of_Time_6() { return static_cast<int32_t>(offsetof(GooglePurchaseTemplate_t2609331866, ___Time_6)); }
	inline int64_t get_Time_6() const { return ___Time_6; }
	inline int64_t* get_address_of_Time_6() { return &___Time_6; }
	inline void set_Time_6(int64_t value)
	{
		___Time_6 = value;
	}

	inline static int32_t get_offset_of_OriginalJson_7() { return static_cast<int32_t>(offsetof(GooglePurchaseTemplate_t2609331866, ___OriginalJson_7)); }
	inline String_t* get_OriginalJson_7() const { return ___OriginalJson_7; }
	inline String_t** get_address_of_OriginalJson_7() { return &___OriginalJson_7; }
	inline void set_OriginalJson_7(String_t* value)
	{
		___OriginalJson_7 = value;
		Il2CppCodeGenWriteBarrier(&___OriginalJson_7, value);
	}

	inline static int32_t get_offset_of_State_8() { return static_cast<int32_t>(offsetof(GooglePurchaseTemplate_t2609331866, ___State_8)); }
	inline int32_t get_State_8() const { return ___State_8; }
	inline int32_t* get_address_of_State_8() { return &___State_8; }
	inline void set_State_8(int32_t value)
	{
		___State_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
