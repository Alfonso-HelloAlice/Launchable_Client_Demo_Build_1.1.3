#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_FB_Result838248372.h"

// System.Collections.Generic.Dictionary`2<System.String,FB_Permission>
struct Dictionary_2_t3787551384;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FB_PermissionResult
struct  FB_PermissionResult_t2322011743  : public FB_Result_t838248372
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,FB_Permission> FB_PermissionResult::_Permissions
	Dictionary_2_t3787551384 * ____Permissions_3;

public:
	inline static int32_t get_offset_of__Permissions_3() { return static_cast<int32_t>(offsetof(FB_PermissionResult_t2322011743, ____Permissions_3)); }
	inline Dictionary_2_t3787551384 * get__Permissions_3() const { return ____Permissions_3; }
	inline Dictionary_2_t3787551384 ** get_address_of__Permissions_3() { return &____Permissions_3; }
	inline void set__Permissions_3(Dictionary_2_t3787551384 * value)
	{
		____Permissions_3 = value;
		Il2CppCodeGenWriteBarrier(&____Permissions_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
