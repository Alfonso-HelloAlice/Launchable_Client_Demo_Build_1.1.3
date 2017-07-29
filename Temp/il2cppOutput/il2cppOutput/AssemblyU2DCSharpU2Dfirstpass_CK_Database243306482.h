#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Action`1<CK_RecordResult>
struct Action_1_t3864347731;
// System.Action`1<CK_RecordDeleteResult>
struct Action_1_t3050268866;
// System.Action`1<CK_QueryResult>
struct Action_1_t975866870;
// System.Collections.Generic.Dictionary`2<System.Int32,CK_Database>
struct Dictionary_2_t3546099413;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CK_Database
struct  CK_Database_t243306482  : public Il2CppObject
{
public:
	// System.Action`1<CK_RecordResult> CK_Database::ActionRecordSaved
	Action_1_t3864347731 * ___ActionRecordSaved_0;
	// System.Action`1<CK_RecordResult> CK_Database::ActionRecordFetchComplete
	Action_1_t3864347731 * ___ActionRecordFetchComplete_1;
	// System.Action`1<CK_RecordDeleteResult> CK_Database::ActionRecordDeleted
	Action_1_t3050268866 * ___ActionRecordDeleted_2;
	// System.Action`1<CK_QueryResult> CK_Database::ActionQueryComplete
	Action_1_t975866870 * ___ActionQueryComplete_3;
	// System.Int32 CK_Database::_InternalId
	int32_t ____InternalId_5;

public:
	inline static int32_t get_offset_of_ActionRecordSaved_0() { return static_cast<int32_t>(offsetof(CK_Database_t243306482, ___ActionRecordSaved_0)); }
	inline Action_1_t3864347731 * get_ActionRecordSaved_0() const { return ___ActionRecordSaved_0; }
	inline Action_1_t3864347731 ** get_address_of_ActionRecordSaved_0() { return &___ActionRecordSaved_0; }
	inline void set_ActionRecordSaved_0(Action_1_t3864347731 * value)
	{
		___ActionRecordSaved_0 = value;
		Il2CppCodeGenWriteBarrier(&___ActionRecordSaved_0, value);
	}

	inline static int32_t get_offset_of_ActionRecordFetchComplete_1() { return static_cast<int32_t>(offsetof(CK_Database_t243306482, ___ActionRecordFetchComplete_1)); }
	inline Action_1_t3864347731 * get_ActionRecordFetchComplete_1() const { return ___ActionRecordFetchComplete_1; }
	inline Action_1_t3864347731 ** get_address_of_ActionRecordFetchComplete_1() { return &___ActionRecordFetchComplete_1; }
	inline void set_ActionRecordFetchComplete_1(Action_1_t3864347731 * value)
	{
		___ActionRecordFetchComplete_1 = value;
		Il2CppCodeGenWriteBarrier(&___ActionRecordFetchComplete_1, value);
	}

	inline static int32_t get_offset_of_ActionRecordDeleted_2() { return static_cast<int32_t>(offsetof(CK_Database_t243306482, ___ActionRecordDeleted_2)); }
	inline Action_1_t3050268866 * get_ActionRecordDeleted_2() const { return ___ActionRecordDeleted_2; }
	inline Action_1_t3050268866 ** get_address_of_ActionRecordDeleted_2() { return &___ActionRecordDeleted_2; }
	inline void set_ActionRecordDeleted_2(Action_1_t3050268866 * value)
	{
		___ActionRecordDeleted_2 = value;
		Il2CppCodeGenWriteBarrier(&___ActionRecordDeleted_2, value);
	}

	inline static int32_t get_offset_of_ActionQueryComplete_3() { return static_cast<int32_t>(offsetof(CK_Database_t243306482, ___ActionQueryComplete_3)); }
	inline Action_1_t975866870 * get_ActionQueryComplete_3() const { return ___ActionQueryComplete_3; }
	inline Action_1_t975866870 ** get_address_of_ActionQueryComplete_3() { return &___ActionQueryComplete_3; }
	inline void set_ActionQueryComplete_3(Action_1_t975866870 * value)
	{
		___ActionQueryComplete_3 = value;
		Il2CppCodeGenWriteBarrier(&___ActionQueryComplete_3, value);
	}

	inline static int32_t get_offset_of__InternalId_5() { return static_cast<int32_t>(offsetof(CK_Database_t243306482, ____InternalId_5)); }
	inline int32_t get__InternalId_5() const { return ____InternalId_5; }
	inline int32_t* get_address_of__InternalId_5() { return &____InternalId_5; }
	inline void set__InternalId_5(int32_t value)
	{
		____InternalId_5 = value;
	}
};

struct CK_Database_t243306482_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,CK_Database> CK_Database::_Databases
	Dictionary_2_t3546099413 * ____Databases_4;
	// System.Action`1<CK_RecordResult> CK_Database::<>f__am$cache0
	Action_1_t3864347731 * ___U3CU3Ef__amU24cache0_6;
	// System.Action`1<CK_RecordResult> CK_Database::<>f__am$cache1
	Action_1_t3864347731 * ___U3CU3Ef__amU24cache1_7;
	// System.Action`1<CK_RecordDeleteResult> CK_Database::<>f__am$cache2
	Action_1_t3050268866 * ___U3CU3Ef__amU24cache2_8;
	// System.Action`1<CK_QueryResult> CK_Database::<>f__am$cache3
	Action_1_t975866870 * ___U3CU3Ef__amU24cache3_9;

public:
	inline static int32_t get_offset_of__Databases_4() { return static_cast<int32_t>(offsetof(CK_Database_t243306482_StaticFields, ____Databases_4)); }
	inline Dictionary_2_t3546099413 * get__Databases_4() const { return ____Databases_4; }
	inline Dictionary_2_t3546099413 ** get_address_of__Databases_4() { return &____Databases_4; }
	inline void set__Databases_4(Dictionary_2_t3546099413 * value)
	{
		____Databases_4 = value;
		Il2CppCodeGenWriteBarrier(&____Databases_4, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_6() { return static_cast<int32_t>(offsetof(CK_Database_t243306482_StaticFields, ___U3CU3Ef__amU24cache0_6)); }
	inline Action_1_t3864347731 * get_U3CU3Ef__amU24cache0_6() const { return ___U3CU3Ef__amU24cache0_6; }
	inline Action_1_t3864347731 ** get_address_of_U3CU3Ef__amU24cache0_6() { return &___U3CU3Ef__amU24cache0_6; }
	inline void set_U3CU3Ef__amU24cache0_6(Action_1_t3864347731 * value)
	{
		___U3CU3Ef__amU24cache0_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_6, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_7() { return static_cast<int32_t>(offsetof(CK_Database_t243306482_StaticFields, ___U3CU3Ef__amU24cache1_7)); }
	inline Action_1_t3864347731 * get_U3CU3Ef__amU24cache1_7() const { return ___U3CU3Ef__amU24cache1_7; }
	inline Action_1_t3864347731 ** get_address_of_U3CU3Ef__amU24cache1_7() { return &___U3CU3Ef__amU24cache1_7; }
	inline void set_U3CU3Ef__amU24cache1_7(Action_1_t3864347731 * value)
	{
		___U3CU3Ef__amU24cache1_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_7, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_8() { return static_cast<int32_t>(offsetof(CK_Database_t243306482_StaticFields, ___U3CU3Ef__amU24cache2_8)); }
	inline Action_1_t3050268866 * get_U3CU3Ef__amU24cache2_8() const { return ___U3CU3Ef__amU24cache2_8; }
	inline Action_1_t3050268866 ** get_address_of_U3CU3Ef__amU24cache2_8() { return &___U3CU3Ef__amU24cache2_8; }
	inline void set_U3CU3Ef__amU24cache2_8(Action_1_t3050268866 * value)
	{
		___U3CU3Ef__amU24cache2_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_8, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_9() { return static_cast<int32_t>(offsetof(CK_Database_t243306482_StaticFields, ___U3CU3Ef__amU24cache3_9)); }
	inline Action_1_t975866870 * get_U3CU3Ef__amU24cache3_9() const { return ___U3CU3Ef__amU24cache3_9; }
	inline Action_1_t975866870 ** get_address_of_U3CU3Ef__amU24cache3_9() { return &___U3CU3Ef__amU24cache3_9; }
	inline void set_U3CU3Ef__amU24cache3_9(Action_1_t975866870 * value)
	{
		___U3CU3Ef__amU24cache3_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache3_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
