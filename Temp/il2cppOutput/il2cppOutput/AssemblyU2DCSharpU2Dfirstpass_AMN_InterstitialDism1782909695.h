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

// AMN_InterstitialDismissedResult
struct  AMN_InterstitialDismissedResult_t1782909695  : public AMN_Result_t4157453776
{
public:
	// System.String AMN_InterstitialDismissedResult::_error_message
	String_t* ____error_message_1;

public:
	inline static int32_t get_offset_of__error_message_1() { return static_cast<int32_t>(offsetof(AMN_InterstitialDismissedResult_t1782909695, ____error_message_1)); }
	inline String_t* get__error_message_1() const { return ____error_message_1; }
	inline String_t** get_address_of__error_message_1() { return &____error_message_1; }
	inline void set__error_message_1(String_t* value)
	{
		____error_message_1 = value;
		Il2CppCodeGenWriteBarrier(&____error_message_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
