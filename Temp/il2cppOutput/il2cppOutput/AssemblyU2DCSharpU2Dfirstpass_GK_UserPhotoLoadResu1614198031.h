#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Models_Res4287219743.h"
#include "AssemblyU2DCSharpU2Dfirstpass_GK_PhotoSize3124681388.h"

// UnityEngine.Texture2D
struct Texture2D_t3542995729;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GK_UserPhotoLoadResult
struct  GK_UserPhotoLoadResult_t1614198031  : public Result_t4287219743
{
public:
	// UnityEngine.Texture2D GK_UserPhotoLoadResult::_Photo
	Texture2D_t3542995729 * ____Photo_1;
	// GK_PhotoSize GK_UserPhotoLoadResult::_Size
	int32_t ____Size_2;

public:
	inline static int32_t get_offset_of__Photo_1() { return static_cast<int32_t>(offsetof(GK_UserPhotoLoadResult_t1614198031, ____Photo_1)); }
	inline Texture2D_t3542995729 * get__Photo_1() const { return ____Photo_1; }
	inline Texture2D_t3542995729 ** get_address_of__Photo_1() { return &____Photo_1; }
	inline void set__Photo_1(Texture2D_t3542995729 * value)
	{
		____Photo_1 = value;
		Il2CppCodeGenWriteBarrier(&____Photo_1, value);
	}

	inline static int32_t get_offset_of__Size_2() { return static_cast<int32_t>(offsetof(GK_UserPhotoLoadResult_t1614198031, ____Size_2)); }
	inline int32_t get__Size_2() const { return ____Size_2; }
	inline int32_t* get_address_of__Size_2() { return &____Size_2; }
	inline void set__Size_2(int32_t value)
	{
		____Size_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
