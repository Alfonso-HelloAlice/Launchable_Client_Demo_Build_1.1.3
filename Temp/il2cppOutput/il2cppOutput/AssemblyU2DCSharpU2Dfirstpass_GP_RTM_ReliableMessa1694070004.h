#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_GP_RTM_Result473289279.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GP_RTM_ReliableMessageDeliveredResult
struct  GP_RTM_ReliableMessageDeliveredResult_t1694070004  : public GP_RTM_Result_t473289279
{
public:
	// System.Int32 GP_RTM_ReliableMessageDeliveredResult::_MessageTokenId
	int32_t ____MessageTokenId_2;
	// System.Byte[] GP_RTM_ReliableMessageDeliveredResult::_Data
	ByteU5BU5D_t3397334013* ____Data_3;

public:
	inline static int32_t get_offset_of__MessageTokenId_2() { return static_cast<int32_t>(offsetof(GP_RTM_ReliableMessageDeliveredResult_t1694070004, ____MessageTokenId_2)); }
	inline int32_t get__MessageTokenId_2() const { return ____MessageTokenId_2; }
	inline int32_t* get_address_of__MessageTokenId_2() { return &____MessageTokenId_2; }
	inline void set__MessageTokenId_2(int32_t value)
	{
		____MessageTokenId_2 = value;
	}

	inline static int32_t get_offset_of__Data_3() { return static_cast<int32_t>(offsetof(GP_RTM_ReliableMessageDeliveredResult_t1694070004, ____Data_3)); }
	inline ByteU5BU5D_t3397334013* get__Data_3() const { return ____Data_3; }
	inline ByteU5BU5D_t3397334013** get_address_of__Data_3() { return &____Data_3; }
	inline void set__Data_3(ByteU5BU5D_t3397334013* value)
	{
		____Data_3 = value;
		Il2CppCodeGenWriteBarrier(&____Data_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
