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

// GallerySaveResult
struct  GallerySaveResult_t1643856950  : public Result_t4287219743
{
public:
	// System.String GallerySaveResult::_imagePath
	String_t* ____imagePath_1;

public:
	inline static int32_t get_offset_of__imagePath_1() { return static_cast<int32_t>(offsetof(GallerySaveResult_t1643856950, ____imagePath_1)); }
	inline String_t* get__imagePath_1() const { return ____imagePath_1; }
	inline String_t** get_address_of__imagePath_1() { return &____imagePath_1; }
	inline void set__imagePath_1(String_t* value)
	{
		____imagePath_1 = value;
		Il2CppCodeGenWriteBarrier(&____imagePath_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
