#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SAOnClickAction650504801.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SAOpenUrlOnClick
struct  SAOpenUrlOnClick_t1829835980  : public SAOnClickAction_t650504801
{
public:
	// System.String SAOpenUrlOnClick::url
	String_t* ___url_2;

public:
	inline static int32_t get_offset_of_url_2() { return static_cast<int32_t>(offsetof(SAOpenUrlOnClick_t1829835980, ___url_2)); }
	inline String_t* get_url_2() const { return ___url_2; }
	inline String_t** get_address_of_url_2() { return &___url_2; }
	inline void set_url_2(String_t* value)
	{
		___url_2 = value;
		Il2CppCodeGenWriteBarrier(&___url_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
