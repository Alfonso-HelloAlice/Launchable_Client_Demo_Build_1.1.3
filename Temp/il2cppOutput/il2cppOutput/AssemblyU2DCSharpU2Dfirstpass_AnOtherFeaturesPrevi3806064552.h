#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AnOtherFeaturesPreview
struct  AnOtherFeaturesPreview_t3806064552  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject AnOtherFeaturesPreview::image
	GameObject_t1756533147 * ___image_2;
	// UnityEngine.Texture2D AnOtherFeaturesPreview::helloWorldTexture
	Texture2D_t3542995729 * ___helloWorldTexture_3;

public:
	inline static int32_t get_offset_of_image_2() { return static_cast<int32_t>(offsetof(AnOtherFeaturesPreview_t3806064552, ___image_2)); }
	inline GameObject_t1756533147 * get_image_2() const { return ___image_2; }
	inline GameObject_t1756533147 ** get_address_of_image_2() { return &___image_2; }
	inline void set_image_2(GameObject_t1756533147 * value)
	{
		___image_2 = value;
		Il2CppCodeGenWriteBarrier(&___image_2, value);
	}

	inline static int32_t get_offset_of_helloWorldTexture_3() { return static_cast<int32_t>(offsetof(AnOtherFeaturesPreview_t3806064552, ___helloWorldTexture_3)); }
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
