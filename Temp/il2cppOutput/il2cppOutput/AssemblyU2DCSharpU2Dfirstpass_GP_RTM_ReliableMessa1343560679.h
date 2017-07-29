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

// GP_RTM_ReliableMessageListener
struct  GP_RTM_ReliableMessageListener_t1343560679  : public Il2CppObject
{
public:
	// System.Byte[] GP_RTM_ReliableMessageListener::_Data
	ByteU5BU5D_t3397334013* ____Data_0;
	// System.Int32 GP_RTM_ReliableMessageListener::_DataTokenId
	int32_t ____DataTokenId_1;
	// System.Int32 GP_RTM_ReliableMessageListener::_ReliableMessagesCounter
	int32_t ____ReliableMessagesCounter_2;

public:
	inline static int32_t get_offset_of__Data_0() { return static_cast<int32_t>(offsetof(GP_RTM_ReliableMessageListener_t1343560679, ____Data_0)); }
	inline ByteU5BU5D_t3397334013* get__Data_0() const { return ____Data_0; }
	inline ByteU5BU5D_t3397334013** get_address_of__Data_0() { return &____Data_0; }
	inline void set__Data_0(ByteU5BU5D_t3397334013* value)
	{
		____Data_0 = value;
		Il2CppCodeGenWriteBarrier(&____Data_0, value);
	}

	inline static int32_t get_offset_of__DataTokenId_1() { return static_cast<int32_t>(offsetof(GP_RTM_ReliableMessageListener_t1343560679, ____DataTokenId_1)); }
	inline int32_t get__DataTokenId_1() const { return ____DataTokenId_1; }
	inline int32_t* get_address_of__DataTokenId_1() { return &____DataTokenId_1; }
	inline void set__DataTokenId_1(int32_t value)
	{
		____DataTokenId_1 = value;
	}

	inline static int32_t get_offset_of__ReliableMessagesCounter_2() { return static_cast<int32_t>(offsetof(GP_RTM_ReliableMessageListener_t1343560679, ____ReliableMessagesCounter_2)); }
	inline int32_t get__ReliableMessagesCounter_2() const { return ____ReliableMessagesCounter_2; }
	inline int32_t* get_address_of__ReliableMessagesCounter_2() { return &____ReliableMessagesCounter_2; }
	inline void set__ReliableMessagesCounter_2(int32_t value)
	{
		____ReliableMessagesCounter_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
