#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.IO.MemoryStream
struct MemoryStream_t743994179;
// System.IO.BinaryWriter
struct BinaryWriter_t3179371318;
// ByteByffer
struct ByteByffer_t2076475296;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MNT_NetworkPackage
struct  MNT_NetworkPackage_t3216054824  : public Il2CppObject
{
public:
	// System.IO.MemoryStream MNT_NetworkPackage::buffer
	MemoryStream_t743994179 * ___buffer_0;
	// System.IO.BinaryWriter MNT_NetworkPackage::writer
	BinaryWriter_t3179371318 * ___writer_1;
	// ByteByffer MNT_NetworkPackage::_ReceivedDate
	ByteByffer_t2076475296 * ____ReceivedDate_2;
	// System.Int32 MNT_NetworkPackage::_Id
	int32_t ____Id_3;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(MNT_NetworkPackage_t3216054824, ___buffer_0)); }
	inline MemoryStream_t743994179 * get_buffer_0() const { return ___buffer_0; }
	inline MemoryStream_t743994179 ** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(MemoryStream_t743994179 * value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_0, value);
	}

	inline static int32_t get_offset_of_writer_1() { return static_cast<int32_t>(offsetof(MNT_NetworkPackage_t3216054824, ___writer_1)); }
	inline BinaryWriter_t3179371318 * get_writer_1() const { return ___writer_1; }
	inline BinaryWriter_t3179371318 ** get_address_of_writer_1() { return &___writer_1; }
	inline void set_writer_1(BinaryWriter_t3179371318 * value)
	{
		___writer_1 = value;
		Il2CppCodeGenWriteBarrier(&___writer_1, value);
	}

	inline static int32_t get_offset_of__ReceivedDate_2() { return static_cast<int32_t>(offsetof(MNT_NetworkPackage_t3216054824, ____ReceivedDate_2)); }
	inline ByteByffer_t2076475296 * get__ReceivedDate_2() const { return ____ReceivedDate_2; }
	inline ByteByffer_t2076475296 ** get_address_of__ReceivedDate_2() { return &____ReceivedDate_2; }
	inline void set__ReceivedDate_2(ByteByffer_t2076475296 * value)
	{
		____ReceivedDate_2 = value;
		Il2CppCodeGenWriteBarrier(&____ReceivedDate_2, value);
	}

	inline static int32_t get_offset_of__Id_3() { return static_cast<int32_t>(offsetof(MNT_NetworkPackage_t3216054824, ____Id_3)); }
	inline int32_t get__Id_3() const { return ____Id_3; }
	inline int32_t* get_address_of__Id_3() { return &____Id_3; }
	inline void set__Id_3(int32_t value)
	{
		____Id_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
