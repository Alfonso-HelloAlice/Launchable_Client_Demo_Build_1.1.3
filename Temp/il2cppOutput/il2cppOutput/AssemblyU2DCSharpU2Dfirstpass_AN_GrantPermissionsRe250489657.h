#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Models_Res4287219743.h"

// System.Collections.Generic.Dictionary`2<AN_Permission,AN_PermissionState>
struct Dictionary_2_t2548781794;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AN_GrantPermissionsResult
struct  AN_GrantPermissionsResult_t250489657  : public Result_t4287219743
{
public:
	// System.Collections.Generic.Dictionary`2<AN_Permission,AN_PermissionState> AN_GrantPermissionsResult::_RequestedPermissionsState
	Dictionary_2_t2548781794 * ____RequestedPermissionsState_1;

public:
	inline static int32_t get_offset_of__RequestedPermissionsState_1() { return static_cast<int32_t>(offsetof(AN_GrantPermissionsResult_t250489657, ____RequestedPermissionsState_1)); }
	inline Dictionary_2_t2548781794 * get__RequestedPermissionsState_1() const { return ____RequestedPermissionsState_1; }
	inline Dictionary_2_t2548781794 ** get_address_of__RequestedPermissionsState_1() { return &____RequestedPermissionsState_1; }
	inline void set__RequestedPermissionsState_1(Dictionary_2_t2548781794 * value)
	{
		____RequestedPermissionsState_1 = value;
		Il2CppCodeGenWriteBarrier(&____RequestedPermissionsState_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
