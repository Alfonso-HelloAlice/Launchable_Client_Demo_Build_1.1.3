#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_AMN_Result4157453776.h"

// AMN_AdProperties
struct AMN_AdProperties_t3937046151;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AMN_BannerDataResult
struct  AMN_BannerDataResult_t73874990  : public AMN_Result_t4157453776
{
public:
	// AMN_AdProperties AMN_BannerDataResult::properties
	AMN_AdProperties_t3937046151 * ___properties_1;
	// System.String AMN_BannerDataResult::_error_message
	String_t* ____error_message_2;

public:
	inline static int32_t get_offset_of_properties_1() { return static_cast<int32_t>(offsetof(AMN_BannerDataResult_t73874990, ___properties_1)); }
	inline AMN_AdProperties_t3937046151 * get_properties_1() const { return ___properties_1; }
	inline AMN_AdProperties_t3937046151 ** get_address_of_properties_1() { return &___properties_1; }
	inline void set_properties_1(AMN_AdProperties_t3937046151 * value)
	{
		___properties_1 = value;
		Il2CppCodeGenWriteBarrier(&___properties_1, value);
	}

	inline static int32_t get_offset_of__error_message_2() { return static_cast<int32_t>(offsetof(AMN_BannerDataResult_t73874990, ____error_message_2)); }
	inline String_t* get__error_message_2() const { return ____error_message_2; }
	inline String_t** get_address_of__error_message_2() { return &____error_message_2; }
	inline void set__error_message_2(String_t* value)
	{
		____error_message_2 = value;
		Il2CppCodeGenWriteBarrier(&____error_message_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
