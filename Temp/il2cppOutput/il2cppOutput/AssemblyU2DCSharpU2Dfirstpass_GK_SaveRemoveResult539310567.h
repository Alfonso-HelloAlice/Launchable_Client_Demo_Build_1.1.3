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

// GK_SaveRemoveResult
struct  GK_SaveRemoveResult_t539310567  : public Result_t4287219743
{
public:
	// System.String GK_SaveRemoveResult::_SaveName
	String_t* ____SaveName_1;

public:
	inline static int32_t get_offset_of__SaveName_1() { return static_cast<int32_t>(offsetof(GK_SaveRemoveResult_t539310567, ____SaveName_1)); }
	inline String_t* get__SaveName_1() const { return ____SaveName_1; }
	inline String_t** get_address_of__SaveName_1() { return &____SaveName_1; }
	inline void set__SaveName_1(String_t* value)
	{
		____SaveName_1 = value;
		Il2CppCodeGenWriteBarrier(&____SaveName_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
