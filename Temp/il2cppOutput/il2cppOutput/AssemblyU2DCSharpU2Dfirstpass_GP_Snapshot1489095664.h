#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// GP_SnapshotMeta
struct GP_SnapshotMeta_t1354779439;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GP_Snapshot
struct  GP_Snapshot_t1489095664  : public Il2CppObject
{
public:
	// GP_SnapshotMeta GP_Snapshot::meta
	GP_SnapshotMeta_t1354779439 * ___meta_0;
	// System.Byte[] GP_Snapshot::bytes
	ByteU5BU5D_t3397334013* ___bytes_1;
	// System.String GP_Snapshot::stringData
	String_t* ___stringData_2;

public:
	inline static int32_t get_offset_of_meta_0() { return static_cast<int32_t>(offsetof(GP_Snapshot_t1489095664, ___meta_0)); }
	inline GP_SnapshotMeta_t1354779439 * get_meta_0() const { return ___meta_0; }
	inline GP_SnapshotMeta_t1354779439 ** get_address_of_meta_0() { return &___meta_0; }
	inline void set_meta_0(GP_SnapshotMeta_t1354779439 * value)
	{
		___meta_0 = value;
		Il2CppCodeGenWriteBarrier(&___meta_0, value);
	}

	inline static int32_t get_offset_of_bytes_1() { return static_cast<int32_t>(offsetof(GP_Snapshot_t1489095664, ___bytes_1)); }
	inline ByteU5BU5D_t3397334013* get_bytes_1() const { return ___bytes_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_bytes_1() { return &___bytes_1; }
	inline void set_bytes_1(ByteU5BU5D_t3397334013* value)
	{
		___bytes_1 = value;
		Il2CppCodeGenWriteBarrier(&___bytes_1, value);
	}

	inline static int32_t get_offset_of_stringData_2() { return static_cast<int32_t>(offsetof(GP_Snapshot_t1489095664, ___stringData_2)); }
	inline String_t* get_stringData_2() const { return ___stringData_2; }
	inline String_t** get_address_of_stringData_2() { return &___stringData_2; }
	inline void set_stringData_2(String_t* value)
	{
		___stringData_2 = value;
		Il2CppCodeGenWriteBarrier(&___stringData_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
