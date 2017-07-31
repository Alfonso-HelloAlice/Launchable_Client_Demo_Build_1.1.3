#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<UnityEngine.Texture2D>
struct List_1_t2912116861;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ISN_FilePickerResult
struct  ISN_FilePickerResult_t2234803986  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> ISN_FilePickerResult::PickedImages
	List_1_t2912116861 * ___PickedImages_0;

public:
	inline static int32_t get_offset_of_PickedImages_0() { return static_cast<int32_t>(offsetof(ISN_FilePickerResult_t2234803986, ___PickedImages_0)); }
	inline List_1_t2912116861 * get_PickedImages_0() const { return ___PickedImages_0; }
	inline List_1_t2912116861 ** get_address_of_PickedImages_0() { return &___PickedImages_0; }
	inline void set_PickedImages_0(List_1_t2912116861 * value)
	{
		___PickedImages_0 = value;
		Il2CppCodeGenWriteBarrier(&___PickedImages_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
