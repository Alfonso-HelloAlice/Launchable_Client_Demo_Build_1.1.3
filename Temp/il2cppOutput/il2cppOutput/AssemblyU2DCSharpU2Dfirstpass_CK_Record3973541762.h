#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.Dictionary`2<System.Int32,CK_Record>
struct Dictionary_2_t2981367397;
// CK_RecordID
struct CK_RecordID_t41838833;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CK_Record
struct  CK_Record_t3973541762  : public Il2CppObject
{
public:
	// CK_RecordID CK_Record::_Id
	CK_RecordID_t41838833 * ____Id_1;
	// System.String CK_Record::_Type
	String_t* ____Type_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> CK_Record::_Data
	Dictionary_2_t3943999495 * ____Data_3;
	// System.Int32 CK_Record::_internalId
	int32_t ____internalId_4;

public:
	inline static int32_t get_offset_of__Id_1() { return static_cast<int32_t>(offsetof(CK_Record_t3973541762, ____Id_1)); }
	inline CK_RecordID_t41838833 * get__Id_1() const { return ____Id_1; }
	inline CK_RecordID_t41838833 ** get_address_of__Id_1() { return &____Id_1; }
	inline void set__Id_1(CK_RecordID_t41838833 * value)
	{
		____Id_1 = value;
		Il2CppCodeGenWriteBarrier(&____Id_1, value);
	}

	inline static int32_t get_offset_of__Type_2() { return static_cast<int32_t>(offsetof(CK_Record_t3973541762, ____Type_2)); }
	inline String_t* get__Type_2() const { return ____Type_2; }
	inline String_t** get_address_of__Type_2() { return &____Type_2; }
	inline void set__Type_2(String_t* value)
	{
		____Type_2 = value;
		Il2CppCodeGenWriteBarrier(&____Type_2, value);
	}

	inline static int32_t get_offset_of__Data_3() { return static_cast<int32_t>(offsetof(CK_Record_t3973541762, ____Data_3)); }
	inline Dictionary_2_t3943999495 * get__Data_3() const { return ____Data_3; }
	inline Dictionary_2_t3943999495 ** get_address_of__Data_3() { return &____Data_3; }
	inline void set__Data_3(Dictionary_2_t3943999495 * value)
	{
		____Data_3 = value;
		Il2CppCodeGenWriteBarrier(&____Data_3, value);
	}

	inline static int32_t get_offset_of__internalId_4() { return static_cast<int32_t>(offsetof(CK_Record_t3973541762, ____internalId_4)); }
	inline int32_t get__internalId_4() const { return ____internalId_4; }
	inline int32_t* get_address_of__internalId_4() { return &____internalId_4; }
	inline void set__internalId_4(int32_t value)
	{
		____internalId_4 = value;
	}
};

struct CK_Record_t3973541762_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,CK_Record> CK_Record::_Records
	Dictionary_2_t2981367397 * ____Records_0;

public:
	inline static int32_t get_offset_of__Records_0() { return static_cast<int32_t>(offsetof(CK_Record_t3973541762_StaticFields, ____Records_0)); }
	inline Dictionary_2_t2981367397 * get__Records_0() const { return ____Records_0; }
	inline Dictionary_2_t2981367397 ** get_address_of__Records_0() { return &____Records_0; }
	inline void set__Records_0(Dictionary_2_t2981367397 * value)
	{
		____Records_0 = value;
		Il2CppCodeGenWriteBarrier(&____Records_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
