#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// GP_Snapshot
struct GP_Snapshot_t1489095664;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GP_SnapshotConflict
struct  GP_SnapshotConflict_t4002586770  : public Il2CppObject
{
public:
	// GP_Snapshot GP_SnapshotConflict::_s1
	GP_Snapshot_t1489095664 * ____s1_0;
	// GP_Snapshot GP_SnapshotConflict::_s2
	GP_Snapshot_t1489095664 * ____s2_1;

public:
	inline static int32_t get_offset_of__s1_0() { return static_cast<int32_t>(offsetof(GP_SnapshotConflict_t4002586770, ____s1_0)); }
	inline GP_Snapshot_t1489095664 * get__s1_0() const { return ____s1_0; }
	inline GP_Snapshot_t1489095664 ** get_address_of__s1_0() { return &____s1_0; }
	inline void set__s1_0(GP_Snapshot_t1489095664 * value)
	{
		____s1_0 = value;
		Il2CppCodeGenWriteBarrier(&____s1_0, value);
	}

	inline static int32_t get_offset_of__s2_1() { return static_cast<int32_t>(offsetof(GP_SnapshotConflict_t4002586770, ____s2_1)); }
	inline GP_Snapshot_t1489095664 * get__s2_1() const { return ____s2_1; }
	inline GP_Snapshot_t1489095664 ** get_address_of__s2_1() { return &____s2_1; }
	inline void set__s2_1(GP_Snapshot_t1489095664 * value)
	{
		____s2_1 = value;
		Il2CppCodeGenWriteBarrier(&____s2_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
