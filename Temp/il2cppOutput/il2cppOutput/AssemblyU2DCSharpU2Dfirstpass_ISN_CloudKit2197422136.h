#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Pattern_Si2679987241.h"

// CK_Database
struct CK_Database_t243306482;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ISN_CloudKit
struct  ISN_CloudKit_t2197422136  : public Singleton_1_t2679987241
{
public:
	// CK_Database ISN_CloudKit::_PrivateDB
	CK_Database_t243306482 * ____PrivateDB_4;
	// CK_Database ISN_CloudKit::_PublicDB
	CK_Database_t243306482 * ____PublicDB_5;

public:
	inline static int32_t get_offset_of__PrivateDB_4() { return static_cast<int32_t>(offsetof(ISN_CloudKit_t2197422136, ____PrivateDB_4)); }
	inline CK_Database_t243306482 * get__PrivateDB_4() const { return ____PrivateDB_4; }
	inline CK_Database_t243306482 ** get_address_of__PrivateDB_4() { return &____PrivateDB_4; }
	inline void set__PrivateDB_4(CK_Database_t243306482 * value)
	{
		____PrivateDB_4 = value;
		Il2CppCodeGenWriteBarrier(&____PrivateDB_4, value);
	}

	inline static int32_t get_offset_of__PublicDB_5() { return static_cast<int32_t>(offsetof(ISN_CloudKit_t2197422136, ____PublicDB_5)); }
	inline CK_Database_t243306482 * get__PublicDB_5() const { return ____PublicDB_5; }
	inline CK_Database_t243306482 ** get_address_of__PublicDB_5() { return &____PublicDB_5; }
	inline void set__PublicDB_5(CK_Database_t243306482 * value)
	{
		____PublicDB_5 = value;
		Il2CppCodeGenWriteBarrier(&____PublicDB_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
