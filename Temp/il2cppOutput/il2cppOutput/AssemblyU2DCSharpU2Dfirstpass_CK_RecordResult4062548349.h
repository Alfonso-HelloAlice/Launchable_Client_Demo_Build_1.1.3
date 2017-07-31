#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Models_Res4287219743.h"

// CK_Record
struct CK_Record_t3973541762;
// CK_Database
struct CK_Database_t243306482;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CK_RecordResult
struct  CK_RecordResult_t4062548349  : public Result_t4287219743
{
public:
	// CK_Record CK_RecordResult::_Record
	CK_Record_t3973541762 * ____Record_1;
	// CK_Database CK_RecordResult::_Database
	CK_Database_t243306482 * ____Database_2;

public:
	inline static int32_t get_offset_of__Record_1() { return static_cast<int32_t>(offsetof(CK_RecordResult_t4062548349, ____Record_1)); }
	inline CK_Record_t3973541762 * get__Record_1() const { return ____Record_1; }
	inline CK_Record_t3973541762 ** get_address_of__Record_1() { return &____Record_1; }
	inline void set__Record_1(CK_Record_t3973541762 * value)
	{
		____Record_1 = value;
		Il2CppCodeGenWriteBarrier(&____Record_1, value);
	}

	inline static int32_t get_offset_of__Database_2() { return static_cast<int32_t>(offsetof(CK_RecordResult_t4062548349, ____Database_2)); }
	inline CK_Database_t243306482 * get__Database_2() const { return ____Database_2; }
	inline CK_Database_t243306482 ** get_address_of__Database_2() { return &____Database_2; }
	inline void set__Database_2(CK_Database_t243306482 * value)
	{
		____Database_2 = value;
		Il2CppCodeGenWriteBarrier(&____Database_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
