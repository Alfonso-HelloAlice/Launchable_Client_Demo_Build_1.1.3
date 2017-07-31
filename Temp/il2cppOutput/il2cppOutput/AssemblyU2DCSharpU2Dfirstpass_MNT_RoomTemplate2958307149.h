#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MNT_RoomTemplate
struct  MNT_RoomTemplate_t2958307149  : public Il2CppObject
{
public:
	// System.Int32 MNT_RoomTemplate::_size
	int32_t ____size_0;
	// System.Byte[] MNT_RoomTemplate::_data
	ByteU5BU5D_t3397334013* ____data_1;

public:
	inline static int32_t get_offset_of__size_0() { return static_cast<int32_t>(offsetof(MNT_RoomTemplate_t2958307149, ____size_0)); }
	inline int32_t get__size_0() const { return ____size_0; }
	inline int32_t* get_address_of__size_0() { return &____size_0; }
	inline void set__size_0(int32_t value)
	{
		____size_0 = value;
	}

	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(MNT_RoomTemplate_t2958307149, ____data_1)); }
	inline ByteU5BU5D_t3397334013* get__data_1() const { return ____data_1; }
	inline ByteU5BU5D_t3397334013** get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(ByteU5BU5D_t3397334013* value)
	{
		____data_1 = value;
		Il2CppCodeGenWriteBarrier(&____data_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
