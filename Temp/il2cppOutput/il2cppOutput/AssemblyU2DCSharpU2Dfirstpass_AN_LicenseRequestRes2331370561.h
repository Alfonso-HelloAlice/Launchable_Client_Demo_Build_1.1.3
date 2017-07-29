#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_AN_LicenseStatusCode1568613372.h"
#include "AssemblyU2DCSharpU2Dfirstpass_AN_LicenseErrorCode626681470.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AN_LicenseRequestResult
struct  AN_LicenseRequestResult_t2331370561  : public Il2CppObject
{
public:
	// AN_LicenseStatusCode AN_LicenseRequestResult::_status
	int32_t ____status_0;
	// AN_LicenseErrorCode AN_LicenseRequestResult::_error
	int32_t ____error_1;

public:
	inline static int32_t get_offset_of__status_0() { return static_cast<int32_t>(offsetof(AN_LicenseRequestResult_t2331370561, ____status_0)); }
	inline int32_t get__status_0() const { return ____status_0; }
	inline int32_t* get_address_of__status_0() { return &____status_0; }
	inline void set__status_0(int32_t value)
	{
		____status_0 = value;
	}

	inline static int32_t get_offset_of__error_1() { return static_cast<int32_t>(offsetof(AN_LicenseRequestResult_t2331370561, ____error_1)); }
	inline int32_t get__error_1() const { return ____error_1; }
	inline int32_t* get_address_of__error_1() { return &____error_1; }
	inline void set__error_1(int32_t value)
	{
		____error_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
