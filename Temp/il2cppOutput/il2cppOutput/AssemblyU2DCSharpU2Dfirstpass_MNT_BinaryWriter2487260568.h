#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.IO.BinaryWriter
struct BinaryWriter_t3179371318;
// System.IO.MemoryStream
struct MemoryStream_t743994179;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MNT_BinaryWriter
struct  MNT_BinaryWriter_t2487260568  : public Il2CppObject
{
public:
	// System.IO.BinaryWriter MNT_BinaryWriter::writer
	BinaryWriter_t3179371318 * ___writer_0;
	// System.IO.MemoryStream MNT_BinaryWriter::buffer
	MemoryStream_t743994179 * ___buffer_1;

public:
	inline static int32_t get_offset_of_writer_0() { return static_cast<int32_t>(offsetof(MNT_BinaryWriter_t2487260568, ___writer_0)); }
	inline BinaryWriter_t3179371318 * get_writer_0() const { return ___writer_0; }
	inline BinaryWriter_t3179371318 ** get_address_of_writer_0() { return &___writer_0; }
	inline void set_writer_0(BinaryWriter_t3179371318 * value)
	{
		___writer_0 = value;
		Il2CppCodeGenWriteBarrier(&___writer_0, value);
	}

	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(MNT_BinaryWriter_t2487260568, ___buffer_1)); }
	inline MemoryStream_t743994179 * get_buffer_1() const { return ___buffer_1; }
	inline MemoryStream_t743994179 ** get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(MemoryStream_t743994179 * value)
	{
		___buffer_1 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
