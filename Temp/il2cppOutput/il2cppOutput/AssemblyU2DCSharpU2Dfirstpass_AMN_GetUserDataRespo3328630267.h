#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_AMN_Result4157453776.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AMN_GetUserDataResponse
struct  AMN_GetUserDataResponse_t3328630267  : public AMN_Result_t4157453776
{
public:
	// System.String AMN_GetUserDataResponse::_requestId
	String_t* ____requestId_1;
	// System.String AMN_GetUserDataResponse::_userId
	String_t* ____userId_2;
	// System.String AMN_GetUserDataResponse::_marketplace
	String_t* ____marketplace_3;
	// System.String AMN_GetUserDataResponse::_status
	String_t* ____status_4;

public:
	inline static int32_t get_offset_of__requestId_1() { return static_cast<int32_t>(offsetof(AMN_GetUserDataResponse_t3328630267, ____requestId_1)); }
	inline String_t* get__requestId_1() const { return ____requestId_1; }
	inline String_t** get_address_of__requestId_1() { return &____requestId_1; }
	inline void set__requestId_1(String_t* value)
	{
		____requestId_1 = value;
		Il2CppCodeGenWriteBarrier(&____requestId_1, value);
	}

	inline static int32_t get_offset_of__userId_2() { return static_cast<int32_t>(offsetof(AMN_GetUserDataResponse_t3328630267, ____userId_2)); }
	inline String_t* get__userId_2() const { return ____userId_2; }
	inline String_t** get_address_of__userId_2() { return &____userId_2; }
	inline void set__userId_2(String_t* value)
	{
		____userId_2 = value;
		Il2CppCodeGenWriteBarrier(&____userId_2, value);
	}

	inline static int32_t get_offset_of__marketplace_3() { return static_cast<int32_t>(offsetof(AMN_GetUserDataResponse_t3328630267, ____marketplace_3)); }
	inline String_t* get__marketplace_3() const { return ____marketplace_3; }
	inline String_t** get_address_of__marketplace_3() { return &____marketplace_3; }
	inline void set__marketplace_3(String_t* value)
	{
		____marketplace_3 = value;
		Il2CppCodeGenWriteBarrier(&____marketplace_3, value);
	}

	inline static int32_t get_offset_of__status_4() { return static_cast<int32_t>(offsetof(AMN_GetUserDataResponse_t3328630267, ____status_4)); }
	inline String_t* get__status_4() const { return ____status_4; }
	inline String_t** get_address_of__status_4() { return &____status_4; }
	inline void set__status_4(String_t* value)
	{
		____status_4 = value;
		Il2CppCodeGenWriteBarrier(&____status_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
