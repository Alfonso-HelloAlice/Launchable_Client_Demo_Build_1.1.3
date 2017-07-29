#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_AndroidActivityResul3757510801.h"

// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AndroidImagePickResult
struct  AndroidImagePickResult_t1791733552  : public AndroidActivityResult_t3757510801
{
public:
	// UnityEngine.Texture2D AndroidImagePickResult::_Image
	Texture2D_t3542995729 * ____Image_2;
	// System.String AndroidImagePickResult::_ImagePath
	String_t* ____ImagePath_3;

public:
	inline static int32_t get_offset_of__Image_2() { return static_cast<int32_t>(offsetof(AndroidImagePickResult_t1791733552, ____Image_2)); }
	inline Texture2D_t3542995729 * get__Image_2() const { return ____Image_2; }
	inline Texture2D_t3542995729 ** get_address_of__Image_2() { return &____Image_2; }
	inline void set__Image_2(Texture2D_t3542995729 * value)
	{
		____Image_2 = value;
		Il2CppCodeGenWriteBarrier(&____Image_2, value);
	}

	inline static int32_t get_offset_of__ImagePath_3() { return static_cast<int32_t>(offsetof(AndroidImagePickResult_t1791733552, ____ImagePath_3)); }
	inline String_t* get__ImagePath_3() const { return ____ImagePath_3; }
	inline String_t** get_address_of__ImagePath_3() { return &____ImagePath_3; }
	inline void set__ImagePath_3(String_t* value)
	{
		____ImagePath_3 = value;
		Il2CppCodeGenWriteBarrier(&____ImagePath_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
