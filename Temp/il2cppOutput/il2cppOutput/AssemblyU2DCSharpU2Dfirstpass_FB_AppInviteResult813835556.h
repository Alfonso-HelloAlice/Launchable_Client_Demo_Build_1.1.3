#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_FB_Result838248372.h"

// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FB_AppInviteResult
struct  FB_AppInviteResult_t813835556  : public FB_Result_t838248372
{
public:
	// System.Boolean FB_AppInviteResult::_cancelled
	bool ____cancelled_3;
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> FB_AppInviteResult::_resultDictionary
	Il2CppObject* ____resultDictionary_4;

public:
	inline static int32_t get_offset_of__cancelled_3() { return static_cast<int32_t>(offsetof(FB_AppInviteResult_t813835556, ____cancelled_3)); }
	inline bool get__cancelled_3() const { return ____cancelled_3; }
	inline bool* get_address_of__cancelled_3() { return &____cancelled_3; }
	inline void set__cancelled_3(bool value)
	{
		____cancelled_3 = value;
	}

	inline static int32_t get_offset_of__resultDictionary_4() { return static_cast<int32_t>(offsetof(FB_AppInviteResult_t813835556, ____resultDictionary_4)); }
	inline Il2CppObject* get__resultDictionary_4() const { return ____resultDictionary_4; }
	inline Il2CppObject** get_address_of__resultDictionary_4() { return &____resultDictionary_4; }
	inline void set__resultDictionary_4(Il2CppObject* value)
	{
		____resultDictionary_4 = value;
		Il2CppCodeGenWriteBarrier(&____resultDictionary_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
