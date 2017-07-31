#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Image[]
struct ImageU5BU5D_t590162004;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UM_GalleryMultipleImagesExample
struct  UM_GalleryMultipleImagesExample_t504108681  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Image[] UM_GalleryMultipleImagesExample::Images
	ImageU5BU5D_t590162004* ___Images_2;

public:
	inline static int32_t get_offset_of_Images_2() { return static_cast<int32_t>(offsetof(UM_GalleryMultipleImagesExample_t504108681, ___Images_2)); }
	inline ImageU5BU5D_t590162004* get_Images_2() const { return ___Images_2; }
	inline ImageU5BU5D_t590162004** get_address_of_Images_2() { return &___Images_2; }
	inline void set_Images_2(ImageU5BU5D_t590162004* value)
	{
		___Images_2 = value;
		Il2CppCodeGenWriteBarrier(&___Images_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
