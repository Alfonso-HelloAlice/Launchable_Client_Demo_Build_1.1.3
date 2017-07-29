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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FB_PostResult
struct  FB_PostResult_t992884730  : public FB_Result_t838248372
{
public:
	// System.String FB_PostResult::_PostId
	String_t* ____PostId_3;

public:
	inline static int32_t get_offset_of__PostId_3() { return static_cast<int32_t>(offsetof(FB_PostResult_t992884730, ____PostId_3)); }
	inline String_t* get__PostId_3() const { return ____PostId_3; }
	inline String_t** get_address_of__PostId_3() { return &____PostId_3; }
	inline void set__PostId_3(String_t* value)
	{
		____PostId_3 = value;
		Il2CppCodeGenWriteBarrier(&____PostId_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
