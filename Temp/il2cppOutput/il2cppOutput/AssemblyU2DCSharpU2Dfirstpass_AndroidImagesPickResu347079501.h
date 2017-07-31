#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_AndroidActivityResul3757510801.h"

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Texture2D>
struct Dictionary_2_t1162807695;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AndroidImagesPickResult
struct  AndroidImagesPickResult_t347079501  : public AndroidActivityResult_t3757510801
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Texture2D> AndroidImagesPickResult::_Images
	Dictionary_2_t1162807695 * ____Images_2;

public:
	inline static int32_t get_offset_of__Images_2() { return static_cast<int32_t>(offsetof(AndroidImagesPickResult_t347079501, ____Images_2)); }
	inline Dictionary_2_t1162807695 * get__Images_2() const { return ____Images_2; }
	inline Dictionary_2_t1162807695 ** get_address_of__Images_2() { return &____Images_2; }
	inline void set__Images_2(Dictionary_2_t1162807695 * value)
	{
		____Images_2 = value;
		Il2CppCodeGenWriteBarrier(&____Images_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
