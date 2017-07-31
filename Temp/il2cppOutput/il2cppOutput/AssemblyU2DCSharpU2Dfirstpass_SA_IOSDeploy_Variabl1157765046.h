#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SA_IOSDeploy_PlistVa3782075076.h"

// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.IOSDeploy.Variable
struct  Variable_t1157765046  : public Il2CppObject
{
public:
	// System.Boolean SA.IOSDeploy.Variable::IsOpen
	bool ___IsOpen_0;
	// System.Boolean SA.IOSDeploy.Variable::IsListOpen
	bool ___IsListOpen_1;
	// System.String SA.IOSDeploy.Variable::Name
	String_t* ___Name_2;
	// SA.IOSDeploy.PlistValueTypes SA.IOSDeploy.Variable::Type
	int32_t ___Type_3;
	// System.String SA.IOSDeploy.Variable::StringValue
	String_t* ___StringValue_4;
	// System.Int32 SA.IOSDeploy.Variable::IntegerValue
	int32_t ___IntegerValue_5;
	// System.Single SA.IOSDeploy.Variable::FloatValue
	float ___FloatValue_6;
	// System.Boolean SA.IOSDeploy.Variable::BooleanValue
	bool ___BooleanValue_7;
	// System.Collections.Generic.List`1<System.String> SA.IOSDeploy.Variable::ChildrensIds
	List_1_t1398341365 * ___ChildrensIds_8;

public:
	inline static int32_t get_offset_of_IsOpen_0() { return static_cast<int32_t>(offsetof(Variable_t1157765046, ___IsOpen_0)); }
	inline bool get_IsOpen_0() const { return ___IsOpen_0; }
	inline bool* get_address_of_IsOpen_0() { return &___IsOpen_0; }
	inline void set_IsOpen_0(bool value)
	{
		___IsOpen_0 = value;
	}

	inline static int32_t get_offset_of_IsListOpen_1() { return static_cast<int32_t>(offsetof(Variable_t1157765046, ___IsListOpen_1)); }
	inline bool get_IsListOpen_1() const { return ___IsListOpen_1; }
	inline bool* get_address_of_IsListOpen_1() { return &___IsListOpen_1; }
	inline void set_IsListOpen_1(bool value)
	{
		___IsListOpen_1 = value;
	}

	inline static int32_t get_offset_of_Name_2() { return static_cast<int32_t>(offsetof(Variable_t1157765046, ___Name_2)); }
	inline String_t* get_Name_2() const { return ___Name_2; }
	inline String_t** get_address_of_Name_2() { return &___Name_2; }
	inline void set_Name_2(String_t* value)
	{
		___Name_2 = value;
		Il2CppCodeGenWriteBarrier(&___Name_2, value);
	}

	inline static int32_t get_offset_of_Type_3() { return static_cast<int32_t>(offsetof(Variable_t1157765046, ___Type_3)); }
	inline int32_t get_Type_3() const { return ___Type_3; }
	inline int32_t* get_address_of_Type_3() { return &___Type_3; }
	inline void set_Type_3(int32_t value)
	{
		___Type_3 = value;
	}

	inline static int32_t get_offset_of_StringValue_4() { return static_cast<int32_t>(offsetof(Variable_t1157765046, ___StringValue_4)); }
	inline String_t* get_StringValue_4() const { return ___StringValue_4; }
	inline String_t** get_address_of_StringValue_4() { return &___StringValue_4; }
	inline void set_StringValue_4(String_t* value)
	{
		___StringValue_4 = value;
		Il2CppCodeGenWriteBarrier(&___StringValue_4, value);
	}

	inline static int32_t get_offset_of_IntegerValue_5() { return static_cast<int32_t>(offsetof(Variable_t1157765046, ___IntegerValue_5)); }
	inline int32_t get_IntegerValue_5() const { return ___IntegerValue_5; }
	inline int32_t* get_address_of_IntegerValue_5() { return &___IntegerValue_5; }
	inline void set_IntegerValue_5(int32_t value)
	{
		___IntegerValue_5 = value;
	}

	inline static int32_t get_offset_of_FloatValue_6() { return static_cast<int32_t>(offsetof(Variable_t1157765046, ___FloatValue_6)); }
	inline float get_FloatValue_6() const { return ___FloatValue_6; }
	inline float* get_address_of_FloatValue_6() { return &___FloatValue_6; }
	inline void set_FloatValue_6(float value)
	{
		___FloatValue_6 = value;
	}

	inline static int32_t get_offset_of_BooleanValue_7() { return static_cast<int32_t>(offsetof(Variable_t1157765046, ___BooleanValue_7)); }
	inline bool get_BooleanValue_7() const { return ___BooleanValue_7; }
	inline bool* get_address_of_BooleanValue_7() { return &___BooleanValue_7; }
	inline void set_BooleanValue_7(bool value)
	{
		___BooleanValue_7 = value;
	}

	inline static int32_t get_offset_of_ChildrensIds_8() { return static_cast<int32_t>(offsetof(Variable_t1157765046, ___ChildrensIds_8)); }
	inline List_1_t1398341365 * get_ChildrensIds_8() const { return ___ChildrensIds_8; }
	inline List_1_t1398341365 ** get_address_of_ChildrensIds_8() { return &___ChildrensIds_8; }
	inline void set_ChildrensIds_8(List_1_t1398341365 * value)
	{
		___ChildrensIds_8 = value;
		Il2CppCodeGenWriteBarrier(&___ChildrensIds_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
