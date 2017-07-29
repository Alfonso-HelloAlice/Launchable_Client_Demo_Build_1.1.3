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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AndroidDialog
struct  AndroidDialog_t3283474837  : public BaseAndroidPopup_t3200634462
{
public:
	// System.String AndroidDialog::yes
	String_t* ___yes_6;
	// System.String AndroidDialog::no
	String_t* ___no_7;

public:
	inline static int32_t get_offset_of_yes_6() { return static_cast<int32_t>(offsetof(AndroidDialog_t3283474837, ___yes_6)); }
	inline String_t* get_yes_6() const { return ___yes_6; }
	inline String_t** get_address_of_yes_6() { return &___yes_6; }
	inline void set_yes_6(String_t* value)
	{
		___yes_6 = value;
		Il2CppCodeGenWriteBarrier(&___yes_6, value);
	}

	inline static int32_t get_offset_of_no_7() { return static_cast<int32_t>(offsetof(AndroidDialog_t3283474837, ___no_7)); }
	inline String_t* get_no_7() const { return ___no_7; }
	inline String_t** get_address_of_no_7() { return &___no_7; }
	inline void set_no_7(String_t* value)
	{
		___no_7 = value;
		Il2CppCodeGenWriteBarrier(&___no_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
