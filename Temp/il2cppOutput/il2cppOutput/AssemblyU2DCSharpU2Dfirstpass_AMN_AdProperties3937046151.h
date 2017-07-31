#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AMN_AdProperties
struct  AMN_AdProperties_t3937046151  : public Il2CppObject
{
public:
	// System.Boolean AMN_AdProperties::_canExpand
	bool ____canExpand_0;
	// System.Boolean AMN_AdProperties::_canPlayAudio
	bool ____canPlayAudio_1;
	// System.Boolean AMN_AdProperties::_canPlayVideo
	bool ____canPlayVideo_2;
	// System.String AMN_AdProperties::_adtype
	String_t* ____adtype_3;

public:
	inline static int32_t get_offset_of__canExpand_0() { return static_cast<int32_t>(offsetof(AMN_AdProperties_t3937046151, ____canExpand_0)); }
	inline bool get__canExpand_0() const { return ____canExpand_0; }
	inline bool* get_address_of__canExpand_0() { return &____canExpand_0; }
	inline void set__canExpand_0(bool value)
	{
		____canExpand_0 = value;
	}

	inline static int32_t get_offset_of__canPlayAudio_1() { return static_cast<int32_t>(offsetof(AMN_AdProperties_t3937046151, ____canPlayAudio_1)); }
	inline bool get__canPlayAudio_1() const { return ____canPlayAudio_1; }
	inline bool* get_address_of__canPlayAudio_1() { return &____canPlayAudio_1; }
	inline void set__canPlayAudio_1(bool value)
	{
		____canPlayAudio_1 = value;
	}

	inline static int32_t get_offset_of__canPlayVideo_2() { return static_cast<int32_t>(offsetof(AMN_AdProperties_t3937046151, ____canPlayVideo_2)); }
	inline bool get__canPlayVideo_2() const { return ____canPlayVideo_2; }
	inline bool* get_address_of__canPlayVideo_2() { return &____canPlayVideo_2; }
	inline void set__canPlayVideo_2(bool value)
	{
		____canPlayVideo_2 = value;
	}

	inline static int32_t get_offset_of__adtype_3() { return static_cast<int32_t>(offsetof(AMN_AdProperties_t3937046151, ____adtype_3)); }
	inline String_t* get__adtype_3() const { return ____adtype_3; }
	inline String_t** get_address_of__adtype_3() { return &____adtype_3; }
	inline void set__adtype_3(String_t* value)
	{
		____adtype_3 = value;
		Il2CppCodeGenWriteBarrier(&____adtype_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
