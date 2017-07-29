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
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AMN_GetProductDataResponse
struct  AMN_GetProductDataResponse_t2625826437  : public AMN_Result_t4157453776
{
public:
	// System.String AMN_GetProductDataResponse::_requestId
	String_t* ____requestId_1;
	// System.Collections.Generic.List`1<System.String> AMN_GetProductDataResponse::_unavailableSkus
	List_1_t1398341365 * ____unavailableSkus_2;
	// System.String AMN_GetProductDataResponse::_status
	String_t* ____status_3;

public:
	inline static int32_t get_offset_of__requestId_1() { return static_cast<int32_t>(offsetof(AMN_GetProductDataResponse_t2625826437, ____requestId_1)); }
	inline String_t* get__requestId_1() const { return ____requestId_1; }
	inline String_t** get_address_of__requestId_1() { return &____requestId_1; }
	inline void set__requestId_1(String_t* value)
	{
		____requestId_1 = value;
		Il2CppCodeGenWriteBarrier(&____requestId_1, value);
	}

	inline static int32_t get_offset_of__unavailableSkus_2() { return static_cast<int32_t>(offsetof(AMN_GetProductDataResponse_t2625826437, ____unavailableSkus_2)); }
	inline List_1_t1398341365 * get__unavailableSkus_2() const { return ____unavailableSkus_2; }
	inline List_1_t1398341365 ** get_address_of__unavailableSkus_2() { return &____unavailableSkus_2; }
	inline void set__unavailableSkus_2(List_1_t1398341365 * value)
	{
		____unavailableSkus_2 = value;
		Il2CppCodeGenWriteBarrier(&____unavailableSkus_2, value);
	}

	inline static int32_t get_offset_of__status_3() { return static_cast<int32_t>(offsetof(AMN_GetProductDataResponse_t2625826437, ____status_3)); }
	inline String_t* get__status_3() const { return ____status_3; }
	inline String_t** get_address_of__status_3() { return &____status_3; }
	inline void set__status_3(String_t* value)
	{
		____status_3 = value;
		Il2CppCodeGenWriteBarrier(&____status_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
