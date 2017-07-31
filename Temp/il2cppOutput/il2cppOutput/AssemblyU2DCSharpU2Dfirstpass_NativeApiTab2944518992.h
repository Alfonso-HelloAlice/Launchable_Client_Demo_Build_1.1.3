#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_FeatureTab2349790125.h"

// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NativeApiTab
struct  NativeApiTab_t2944518992  : public FeatureTab_t2349790125
{
public:
	// UnityEngine.UI.Image NativeApiTab::image
	Image_t2042527209 * ___image_2;
	// UnityEngine.Texture2D NativeApiTab::helloWorldTexture
	Texture2D_t3542995729 * ___helloWorldTexture_3;

public:
	inline static int32_t get_offset_of_image_2() { return static_cast<int32_t>(offsetof(NativeApiTab_t2944518992, ___image_2)); }
	inline Image_t2042527209 * get_image_2() const { return ___image_2; }
	inline Image_t2042527209 ** get_address_of_image_2() { return &___image_2; }
	inline void set_image_2(Image_t2042527209 * value)
	{
		___image_2 = value;
		Il2CppCodeGenWriteBarrier(&___image_2, value);
	}

	inline static int32_t get_offset_of_helloWorldTexture_3() { return static_cast<int32_t>(offsetof(NativeApiTab_t2944518992, ___helloWorldTexture_3)); }
	inline Texture2D_t3542995729 * get_helloWorldTexture_3() const { return ___helloWorldTexture_3; }
	inline Texture2D_t3542995729 ** get_address_of_helloWorldTexture_3() { return &___helloWorldTexture_3; }
	inline void set_helloWorldTexture_3(Texture2D_t3542995729 * value)
	{
		___helloWorldTexture_3 = value;
		Il2CppCodeGenWriteBarrier(&___helloWorldTexture_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
