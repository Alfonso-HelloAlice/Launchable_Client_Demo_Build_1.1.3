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

// ByteByffer
struct  ByteByffer_t2076475296  : public Il2CppObject
{
public:
	// System.Byte[] ByteByffer::_buffer
	ByteU5BU5D_t3397334013* ____buffer_0;
	// System.Int32 ByteByffer::pointer
	int32_t ___pointer_1;

public:
	inline static int32_t get_offset_of__buffer_0() { return static_cast<int32_t>(offsetof(ByteByffer_t2076475296, ____buffer_0)); }
	inline ByteU5BU5D_t3397334013* get__buffer_0() const { return ____buffer_0; }
	inline ByteU5BU5D_t3397334013** get_address_of__buffer_0() { return &____buffer_0; }
	inline void set__buffer_0(ByteU5BU5D_t3397334013* value)
	{
		____buffer_0 = value;
		Il2CppCodeGenWriteBarrier(&____buffer_0, value);
	}

	inline static int32_t get_offset_of_pointer_1() { return static_cast<int32_t>(offsetof(ByteByffer_t2076475296, ___pointer_1)); }
	inline int32_t get_pointer_1() const { return ___pointer_1; }
	inline int32_t* get_address_of_pointer_1() { return &___pointer_1; }
	inline void set_pointer_1(int32_t value)
	{
		___pointer_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
