#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Pattern_Sin312665136.h"

// UnityEngine.Texture2D
struct Texture2D_t3542995729;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SALevelLoader
struct  SALevelLoader_t4125067327  : public Singleton_1_t312665136
{
public:
	// UnityEngine.Texture2D SALevelLoader::bg
	Texture2D_t3542995729 * ___bg_4;

public:
	inline static int32_t get_offset_of_bg_4() { return static_cast<int32_t>(offsetof(SALevelLoader_t4125067327, ___bg_4)); }
	inline Texture2D_t3542995729 * get_bg_4() const { return ___bg_4; }
	inline Texture2D_t3542995729 ** get_address_of_bg_4() { return &___bg_4; }
	inline void set_bg_4(Texture2D_t3542995729 * value)
	{
		___bg_4 = value;
		Il2CppCodeGenWriteBarrier(&___bg_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
