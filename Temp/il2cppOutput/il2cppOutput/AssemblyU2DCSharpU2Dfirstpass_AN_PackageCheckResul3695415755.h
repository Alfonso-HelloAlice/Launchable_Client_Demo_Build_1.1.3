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

// AN_PackageCheckResult
struct  AN_PackageCheckResult_t3695415755  : public Result_t4287219743
{
public:
	// System.String AN_PackageCheckResult::_packageName
	String_t* ____packageName_1;

public:
	inline static int32_t get_offset_of__packageName_1() { return static_cast<int32_t>(offsetof(AN_PackageCheckResult_t3695415755, ____packageName_1)); }
	inline String_t* get__packageName_1() const { return ____packageName_1; }
	inline String_t** get_address_of__packageName_1() { return &____packageName_1; }
	inline void set__packageName_1(String_t* value)
	{
		____packageName_1 = value;
		Il2CppCodeGenWriteBarrier(&____packageName_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
