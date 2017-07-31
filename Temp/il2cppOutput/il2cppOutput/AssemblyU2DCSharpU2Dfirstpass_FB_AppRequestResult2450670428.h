#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_FB_Result838248372.h"

// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FB_AppRequestResult
struct  FB_AppRequestResult_t2450670428  : public FB_Result_t838248372
{
public:
	// System.String FB_AppRequestResult::_ReuqestId
	String_t* ____ReuqestId_3;
	// System.Collections.Generic.List`1<System.String> FB_AppRequestResult::_Recipients
	List_1_t1398341365 * ____Recipients_4;

public:
	inline static int32_t get_offset_of__ReuqestId_3() { return static_cast<int32_t>(offsetof(FB_AppRequestResult_t2450670428, ____ReuqestId_3)); }
	inline String_t* get__ReuqestId_3() const { return ____ReuqestId_3; }
	inline String_t** get_address_of__ReuqestId_3() { return &____ReuqestId_3; }
	inline void set__ReuqestId_3(String_t* value)
	{
		____ReuqestId_3 = value;
		Il2CppCodeGenWriteBarrier(&____ReuqestId_3, value);
	}

	inline static int32_t get_offset_of__Recipients_4() { return static_cast<int32_t>(offsetof(FB_AppRequestResult_t2450670428, ____Recipients_4)); }
	inline List_1_t1398341365 * get__Recipients_4() const { return ____Recipients_4; }
	inline List_1_t1398341365 ** get_address_of__Recipients_4() { return &____Recipients_4; }
	inline void set__Recipients_4(List_1_t1398341365 * value)
	{
		____Recipients_4 = value;
		Il2CppCodeGenWriteBarrier(&____Recipients_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
