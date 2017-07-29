#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<SA.IOSNative.Privacy.PermissionStatus>>
struct Dictionary_2_t3061932693;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.IOSNative.Privacy.PermissionsManager
struct  PermissionsManager_t290591673  : public Il2CppObject
{
public:

public:
};

struct PermissionsManager_t290591673_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<SA.IOSNative.Privacy.PermissionStatus>> SA.IOSNative.Privacy.PermissionsManager::OnResponseDictionary
	Dictionary_2_t3061932693 * ___OnResponseDictionary_0;

public:
	inline static int32_t get_offset_of_OnResponseDictionary_0() { return static_cast<int32_t>(offsetof(PermissionsManager_t290591673_StaticFields, ___OnResponseDictionary_0)); }
	inline Dictionary_2_t3061932693 * get_OnResponseDictionary_0() const { return ___OnResponseDictionary_0; }
	inline Dictionary_2_t3061932693 ** get_address_of_OnResponseDictionary_0() { return &___OnResponseDictionary_0; }
	inline void set_OnResponseDictionary_0(Dictionary_2_t3061932693 * value)
	{
		___OnResponseDictionary_0 = value;
		Il2CppCodeGenWriteBarrier(&___OnResponseDictionary_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
