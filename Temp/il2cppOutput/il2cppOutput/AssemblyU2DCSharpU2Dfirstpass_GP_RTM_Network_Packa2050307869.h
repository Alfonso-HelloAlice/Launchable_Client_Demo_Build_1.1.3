#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GP_RTM_Network_Package
struct  GP_RTM_Network_Package_t2050307869  : public Il2CppObject
{
public:
	// System.String GP_RTM_Network_Package::_playerId
	String_t* ____playerId_0;
	// System.Byte[] GP_RTM_Network_Package::_buffer
	ByteU5BU5D_t3397334013* ____buffer_1;

public:
	inline static int32_t get_offset_of__playerId_0() { return static_cast<int32_t>(offsetof(GP_RTM_Network_Package_t2050307869, ____playerId_0)); }
	inline String_t* get__playerId_0() const { return ____playerId_0; }
	inline String_t** get_address_of__playerId_0() { return &____playerId_0; }
	inline void set__playerId_0(String_t* value)
	{
		____playerId_0 = value;
		Il2CppCodeGenWriteBarrier(&____playerId_0, value);
	}

	inline static int32_t get_offset_of__buffer_1() { return static_cast<int32_t>(offsetof(GP_RTM_Network_Package_t2050307869, ____buffer_1)); }
	inline ByteU5BU5D_t3397334013* get__buffer_1() const { return ____buffer_1; }
	inline ByteU5BU5D_t3397334013** get_address_of__buffer_1() { return &____buffer_1; }
	inline void set__buffer_1(ByteU5BU5D_t3397334013* value)
	{
		____buffer_1 = value;
		Il2CppCodeGenWriteBarrier(&____buffer_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
