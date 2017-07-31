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

// SA.AndroidNative.DynamicLinks.LinkEditorTemplate
struct  LinkEditorTemplate_t1160033857  : public Il2CppObject
{
public:
	// System.String SA.AndroidNative.DynamicLinks.LinkEditorTemplate::Host
	String_t* ___Host_0;
	// System.String SA.AndroidNative.DynamicLinks.LinkEditorTemplate::Scheme
	String_t* ___Scheme_1;

public:
	inline static int32_t get_offset_of_Host_0() { return static_cast<int32_t>(offsetof(LinkEditorTemplate_t1160033857, ___Host_0)); }
	inline String_t* get_Host_0() const { return ___Host_0; }
	inline String_t** get_address_of_Host_0() { return &___Host_0; }
	inline void set_Host_0(String_t* value)
	{
		___Host_0 = value;
		Il2CppCodeGenWriteBarrier(&___Host_0, value);
	}

	inline static int32_t get_offset_of_Scheme_1() { return static_cast<int32_t>(offsetof(LinkEditorTemplate_t1160033857, ___Scheme_1)); }
	inline String_t* get_Scheme_1() const { return ___Scheme_1; }
	inline String_t** get_address_of_Scheme_1() { return &___Scheme_1; }
	inline void set_Scheme_1(String_t* value)
	{
		___Scheme_1 = value;
		Il2CppCodeGenWriteBarrier(&___Scheme_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
