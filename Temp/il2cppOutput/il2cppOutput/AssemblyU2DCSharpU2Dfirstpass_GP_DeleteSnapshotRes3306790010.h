#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_GooglePlayResult3097469636.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GP_DeleteSnapshotResult
struct  GP_DeleteSnapshotResult_t3306790010  : public GooglePlayResult_t3097469636
{
public:
	// System.String GP_DeleteSnapshotResult::_SnapshotId
	String_t* ____SnapshotId_2;

public:
	inline static int32_t get_offset_of__SnapshotId_2() { return static_cast<int32_t>(offsetof(GP_DeleteSnapshotResult_t3306790010, ____SnapshotId_2)); }
	inline String_t* get__SnapshotId_2() const { return ____SnapshotId_2; }
	inline String_t** get_address_of__SnapshotId_2() { return &____SnapshotId_2; }
	inline void set__SnapshotId_2(String_t* value)
	{
		____SnapshotId_2 = value;
		Il2CppCodeGenWriteBarrier(&____SnapshotId_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
