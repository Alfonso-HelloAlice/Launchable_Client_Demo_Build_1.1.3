#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Models_Res4287219743.h"

// CK_RecordID
struct CK_RecordID_t41838833;
// CK_Database
struct CK_Database_t243306482;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CK_RecordDeleteResult
struct  CK_RecordDeleteResult_t3248469484  : public Result_t4287219743
{
public:
	// CK_RecordID CK_RecordDeleteResult::_RecordID
	CK_RecordID_t41838833 * ____RecordID_1;
	// CK_Database CK_RecordDeleteResult::_Database
	CK_Database_t243306482 * ____Database_2;

public:
	inline static int32_t get_offset_of__RecordID_1() { return static_cast<int32_t>(offsetof(CK_RecordDeleteResult_t3248469484, ____RecordID_1)); }
	inline CK_RecordID_t41838833 * get__RecordID_1() const { return ____RecordID_1; }
	inline CK_RecordID_t41838833 ** get_address_of__RecordID_1() { return &____RecordID_1; }
	inline void set__RecordID_1(CK_RecordID_t41838833 * value)
	{
		____RecordID_1 = value;
		Il2CppCodeGenWriteBarrier(&____RecordID_1, value);
	}

	inline static int32_t get_offset_of__Database_2() { return static_cast<int32_t>(offsetof(CK_RecordDeleteResult_t3248469484, ____Database_2)); }
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
