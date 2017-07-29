#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_UM_BaseResult1340611101.h"

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Texture2D>
struct Dictionary_2_t1162807695;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UM_ImagesPickResult
struct  UM_ImagesPickResult_t1773958113  : public UM_BaseResult_t1340611101
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Texture2D> UM_ImagesPickResult::_Images
	Dictionary_2_t1162807695 * ____Images_1;

public:
	inline static int32_t get_offset_of__Images_1() { return static_cast<int32_t>(offsetof(UM_ImagesPickResult_t1773958113, ____Images_1)); }
	inline Dictionary_2_t1162807695 * get__Images_1() const { return ____Images_1; }
	inline Dictionary_2_t1162807695 ** get_address_of__Images_1() { return &____Images_1; }
	inline void set__Images_1(Dictionary_2_t1162807695 * value)
	{
		____Images_1 = value;
		Il2CppCodeGenWriteBarrier(&____Images_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
