#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Models_Res4287219743.h"

// CK_Database
struct CK_Database_t243306482;
// System.Collections.Generic.List`1<CK_Record>
struct List_1_t3342662894;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CK_QueryResult
struct  CK_QueryResult_t1174067488  : public Result_t4287219743
{
public:
	// CK_Database CK_QueryResult::_Database
	CK_Database_t243306482 * ____Database_1;
	// System.Collections.Generic.List`1<CK_Record> CK_QueryResult::_Records
	List_1_t3342662894 * ____Records_2;

public:
	inline static int32_t get_offset_of__Database_1() { return static_cast<int32_t>(offsetof(CK_QueryResult_t1174067488, ____Database_1)); }
	inline CK_Database_t243306482 * get__Database_1() const { return ____Database_1; }
	inline CK_Database_t243306482 ** get_address_of__Database_1() { return &____Database_1; }
	inline void set__Database_1(CK_Database_t243306482 * value)
	{
		____Database_1 = value;
		Il2CppCodeGenWriteBarrier(&____Database_1, value);
	}

	inline static int32_t get_offset_of__Records_2() { return static_cast<int32_t>(offsetof(CK_QueryResult_t1174067488, ____Records_2)); }
	inline List_1_t3342662894 * get__Records_2() const { return ____Records_2; }
	inline List_1_t3342662894 ** get_address_of__Records_2() { return &____Records_2; }
	inline void set__Records_2(List_1_t3342662894 * value)
	{
		____Records_2 = value;
		Il2CppCodeGenWriteBarrier(&____Records_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
