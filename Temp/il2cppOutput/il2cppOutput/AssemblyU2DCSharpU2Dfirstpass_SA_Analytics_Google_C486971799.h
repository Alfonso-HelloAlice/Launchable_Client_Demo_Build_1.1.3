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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Analytics.Google.CachedRequest
struct  CachedRequest_t486971799  : public Il2CppObject
{
public:
	// System.Int64 SA.Analytics.Google.CachedRequest::_TimeCreated
	int64_t ____TimeCreated_0;
	// System.String SA.Analytics.Google.CachedRequest::_RequestBody
	String_t* ____RequestBody_1;

public:
	inline static int32_t get_offset_of__TimeCreated_0() { return static_cast<int32_t>(offsetof(CachedRequest_t486971799, ____TimeCreated_0)); }
	inline int64_t get__TimeCreated_0() const { return ____TimeCreated_0; }
	inline int64_t* get_address_of__TimeCreated_0() { return &____TimeCreated_0; }
	inline void set__TimeCreated_0(int64_t value)
	{
		____TimeCreated_0 = value;
	}

	inline static int32_t get_offset_of__RequestBody_1() { return static_cast<int32_t>(offsetof(CachedRequest_t486971799, ____RequestBody_1)); }
	inline String_t* get__RequestBody_1() const { return ____RequestBody_1; }
	inline String_t** get_address_of__RequestBody_1() { return &____RequestBody_1; }
	inline void set__RequestBody_1(String_t* value)
	{
		____RequestBody_1 = value;
		Il2CppCodeGenWriteBarrier(&____RequestBody_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
