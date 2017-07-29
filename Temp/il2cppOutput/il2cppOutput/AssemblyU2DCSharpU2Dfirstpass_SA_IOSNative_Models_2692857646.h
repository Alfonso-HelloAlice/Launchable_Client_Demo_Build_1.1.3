#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Uri
struct Uri_t19570940;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.IOSNative.Models.LaunchUrl
struct  LaunchUrl_t2692857646  : public Il2CppObject
{
public:
	// System.Uri SA.IOSNative.Models.LaunchUrl::_URI
	Uri_t19570940 * ____URI_0;
	// System.String SA.IOSNative.Models.LaunchUrl::_AbsoluteUrl
	String_t* ____AbsoluteUrl_1;
	// System.String SA.IOSNative.Models.LaunchUrl::_SourceApplication
	String_t* ____SourceApplication_2;

public:
	inline static int32_t get_offset_of__URI_0() { return static_cast<int32_t>(offsetof(LaunchUrl_t2692857646, ____URI_0)); }
	inline Uri_t19570940 * get__URI_0() const { return ____URI_0; }
	inline Uri_t19570940 ** get_address_of__URI_0() { return &____URI_0; }
	inline void set__URI_0(Uri_t19570940 * value)
	{
		____URI_0 = value;
		Il2CppCodeGenWriteBarrier(&____URI_0, value);
	}

	inline static int32_t get_offset_of__AbsoluteUrl_1() { return static_cast<int32_t>(offsetof(LaunchUrl_t2692857646, ____AbsoluteUrl_1)); }
	inline String_t* get__AbsoluteUrl_1() const { return ____AbsoluteUrl_1; }
	inline String_t** get_address_of__AbsoluteUrl_1() { return &____AbsoluteUrl_1; }
	inline void set__AbsoluteUrl_1(String_t* value)
	{
		____AbsoluteUrl_1 = value;
		Il2CppCodeGenWriteBarrier(&____AbsoluteUrl_1, value);
	}

	inline static int32_t get_offset_of__SourceApplication_2() { return static_cast<int32_t>(offsetof(LaunchUrl_t2692857646, ____SourceApplication_2)); }
	inline String_t* get__SourceApplication_2() const { return ____SourceApplication_2; }
	inline String_t** get_address_of__SourceApplication_2() { return &____SourceApplication_2; }
	inline void set__SourceApplication_2(String_t* value)
	{
		____SourceApplication_2 = value;
		Il2CppCodeGenWriteBarrier(&____SourceApplication_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
