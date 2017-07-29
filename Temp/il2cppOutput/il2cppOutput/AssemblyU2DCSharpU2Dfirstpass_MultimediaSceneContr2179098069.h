#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MultimediaSceneController
struct  MultimediaSceneController_t2179098069  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Image MultimediaSceneController::SampleImage
	Image_t2042527209 * ___SampleImage_2;
	// UnityEngine.Texture2D MultimediaSceneController::SampleTexture
	Texture2D_t3542995729 * ___SampleTexture_3;

public:
	inline static int32_t get_offset_of_SampleImage_2() { return static_cast<int32_t>(offsetof(MultimediaSceneController_t2179098069, ___SampleImage_2)); }
	inline Image_t2042527209 * get_SampleImage_2() const { return ___SampleImage_2; }
	inline Image_t2042527209 ** get_address_of_SampleImage_2() { return &___SampleImage_2; }
	inline void set_SampleImage_2(Image_t2042527209 * value)
	{
		___SampleImage_2 = value;
		Il2CppCodeGenWriteBarrier(&___SampleImage_2, value);
	}

	inline static int32_t get_offset_of_SampleTexture_3() { return static_cast<int32_t>(offsetof(MultimediaSceneController_t2179098069, ___SampleTexture_3)); }
	inline Texture2D_t3542995729 * get_SampleTexture_3() const { return ___SampleTexture_3; }
	inline Texture2D_t3542995729 ** get_address_of_SampleTexture_3() { return &___SampleTexture_3; }
	inline void set_SampleTexture_3(Texture2D_t3542995729 * value)
	{
		___SampleTexture_3 = value;
		Il2CppCodeGenWriteBarrier(&___SampleTexture_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
