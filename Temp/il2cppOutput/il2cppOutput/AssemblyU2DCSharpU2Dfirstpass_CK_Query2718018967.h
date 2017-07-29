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

// CK_Query
struct  CK_Query_t2718018967  : public Il2CppObject
{
public:
	// System.String CK_Query::_Predicate
	String_t* ____Predicate_0;
	// System.String CK_Query::_RecordType
	String_t* ____RecordType_1;

public:
	inline static int32_t get_offset_of__Predicate_0() { return static_cast<int32_t>(offsetof(CK_Query_t2718018967, ____Predicate_0)); }
	inline String_t* get__Predicate_0() const { return ____Predicate_0; }
	inline String_t** get_address_of__Predicate_0() { return &____Predicate_0; }
	inline void set__Predicate_0(String_t* value)
	{
		____Predicate_0 = value;
		Il2CppCodeGenWriteBarrier(&____Predicate_0, value);
	}

	inline static int32_t get_offset_of__RecordType_1() { return static_cast<int32_t>(offsetof(CK_Query_t2718018967, ____RecordType_1)); }
	inline String_t* get__RecordType_1() const { return ____RecordType_1; }
	inline String_t** get_address_of__RecordType_1() { return &____RecordType_1; }
	inline void set__RecordType_1(String_t* value)
	{
		____RecordType_1 = value;
		Il2CppCodeGenWriteBarrier(&____RecordType_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
