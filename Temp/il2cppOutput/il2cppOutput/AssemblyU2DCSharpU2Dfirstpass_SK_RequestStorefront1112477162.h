#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Models_Res4287219743.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SK_RequestStorefrontIdentifierResult
struct  SK_RequestStorefrontIdentifierResult_t1112477162  : public Result_t4287219743
{
public:
	// System.String SK_RequestStorefrontIdentifierResult::_StorefrontIdentifier
	String_t* ____StorefrontIdentifier_1;

public:
	inline static int32_t get_offset_of__StorefrontIdentifier_1() { return static_cast<int32_t>(offsetof(SK_RequestStorefrontIdentifierResult_t1112477162, ____StorefrontIdentifier_1)); }
	inline String_t* get__StorefrontIdentifier_1() const { return ____StorefrontIdentifier_1; }
	inline String_t** get_address_of__StorefrontIdentifier_1() { return &____StorefrontIdentifier_1; }
	inline void set__StorefrontIdentifier_1(String_t* value)
	{
		____StorefrontIdentifier_1 = value;
		Il2CppCodeGenWriteBarrier(&____StorefrontIdentifier_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
