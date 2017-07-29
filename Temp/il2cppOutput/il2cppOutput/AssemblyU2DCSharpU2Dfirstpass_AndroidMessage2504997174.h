#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_BaseAndroidPopup3200634462.h"

// System.String
struct String_t;
// System.Action
struct Action_t3226471752;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AndroidMessage
struct  AndroidMessage_t2504997174  : public BaseAndroidPopup_t3200634462
{
public:
	// System.String AndroidMessage::ok
	String_t* ___ok_6;
	// System.Action AndroidMessage::OnComplete
	Action_t3226471752 * ___OnComplete_7;

public:
	inline static int32_t get_offset_of_ok_6() { return static_cast<int32_t>(offsetof(AndroidMessage_t2504997174, ___ok_6)); }
	inline String_t* get_ok_6() const { return ___ok_6; }
	inline String_t** get_address_of_ok_6() { return &___ok_6; }
	inline void set_ok_6(String_t* value)
	{
		___ok_6 = value;
		Il2CppCodeGenWriteBarrier(&___ok_6, value);
	}

	inline static int32_t get_offset_of_OnComplete_7() { return static_cast<int32_t>(offsetof(AndroidMessage_t2504997174, ___OnComplete_7)); }
	inline Action_t3226471752 * get_OnComplete_7() const { return ___OnComplete_7; }
	inline Action_t3226471752 ** get_address_of_OnComplete_7() { return &___OnComplete_7; }
	inline void set_OnComplete_7(Action_t3226471752 * value)
	{
		___OnComplete_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnComplete_7, value);
	}
};

struct AndroidMessage_t2504997174_StaticFields
{
public:
	// System.Action AndroidMessage::<>f__am$cache0
	Action_t3226471752 * ___U3CU3Ef__amU24cache0_8;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_8() { return static_cast<int32_t>(offsetof(AndroidMessage_t2504997174_StaticFields, ___U3CU3Ef__amU24cache0_8)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cache0_8() const { return ___U3CU3Ef__amU24cache0_8; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cache0_8() { return &___U3CU3Ef__amU24cache0_8; }
	inline void set_U3CU3Ef__amU24cache0_8(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cache0_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
