#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_GooglePlayResult3097469636.h"

// GP_Snapshot
struct GP_Snapshot_t1489095664;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GP_SpanshotLoadResult
struct  GP_SpanshotLoadResult_t2263304449  : public GooglePlayResult_t3097469636
{
public:
	// GP_Snapshot GP_SpanshotLoadResult::_snapshot
	GP_Snapshot_t1489095664 * ____snapshot_2;

public:
	inline static int32_t get_offset_of__snapshot_2() { return static_cast<int32_t>(offsetof(GP_SpanshotLoadResult_t2263304449, ____snapshot_2)); }
	inline GP_Snapshot_t1489095664 * get__snapshot_2() const { return ____snapshot_2; }
	inline GP_Snapshot_t1489095664 ** get_address_of__snapshot_2() { return &____snapshot_2; }
	inline void set__snapshot_2(GP_Snapshot_t1489095664 * value)
	{
		____snapshot_2 = value;
		Il2CppCodeGenWriteBarrier(&____snapshot_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
