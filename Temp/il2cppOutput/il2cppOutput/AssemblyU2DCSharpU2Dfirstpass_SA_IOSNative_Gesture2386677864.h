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

// SA.IOSNative.Gestures.ForceTouchMenuItem
struct  ForceTouchMenuItem_t2386677864  : public Il2CppObject
{
public:
	// System.Boolean SA.IOSNative.Gestures.ForceTouchMenuItem::IsOpen
	bool ___IsOpen_0;
	// System.String SA.IOSNative.Gestures.ForceTouchMenuItem::Title
	String_t* ___Title_1;
	// System.String SA.IOSNative.Gestures.ForceTouchMenuItem::Subtitle
	String_t* ___Subtitle_2;
	// System.String SA.IOSNative.Gestures.ForceTouchMenuItem::Action
	String_t* ___Action_3;

public:
	inline static int32_t get_offset_of_IsOpen_0() { return static_cast<int32_t>(offsetof(ForceTouchMenuItem_t2386677864, ___IsOpen_0)); }
	inline bool get_IsOpen_0() const { return ___IsOpen_0; }
	inline bool* get_address_of_IsOpen_0() { return &___IsOpen_0; }
	inline void set_IsOpen_0(bool value)
	{
		___IsOpen_0 = value;
	}

	inline static int32_t get_offset_of_Title_1() { return static_cast<int32_t>(offsetof(ForceTouchMenuItem_t2386677864, ___Title_1)); }
	inline String_t* get_Title_1() const { return ___Title_1; }
	inline String_t** get_address_of_Title_1() { return &___Title_1; }
	inline void set_Title_1(String_t* value)
	{
		___Title_1 = value;
		Il2CppCodeGenWriteBarrier(&___Title_1, value);
	}

	inline static int32_t get_offset_of_Subtitle_2() { return static_cast<int32_t>(offsetof(ForceTouchMenuItem_t2386677864, ___Subtitle_2)); }
	inline String_t* get_Subtitle_2() const { return ___Subtitle_2; }
	inline String_t** get_address_of_Subtitle_2() { return &___Subtitle_2; }
	inline void set_Subtitle_2(String_t* value)
	{
		___Subtitle_2 = value;
		Il2CppCodeGenWriteBarrier(&___Subtitle_2, value);
	}

	inline static int32_t get_offset_of_Action_3() { return static_cast<int32_t>(offsetof(ForceTouchMenuItem_t2386677864, ___Action_3)); }
	inline String_t* get_Action_3() const { return ___Action_3; }
	inline String_t** get_address_of_Action_3() { return &___Action_3; }
	inline void set_Action_3(String_t* value)
	{
		___Action_3 = value;
		Il2CppCodeGenWriteBarrier(&___Action_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
