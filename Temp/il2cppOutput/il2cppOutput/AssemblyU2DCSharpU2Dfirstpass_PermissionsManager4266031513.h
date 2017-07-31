#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Pattern_Sin453629322.h"

// System.String
struct String_t;
// System.Action`1<AN_GrantPermissionsResult>
struct Action_1_t52289039;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PermissionsManager
struct  PermissionsManager_t4266031513  : public Singleton_1_t453629322
{
public:

public:
};

struct PermissionsManager_t4266031513_StaticFields
{
public:
	// System.Action`1<AN_GrantPermissionsResult> PermissionsManager::ActionPermissionsRequestCompleted
	Action_1_t52289039 * ___ActionPermissionsRequestCompleted_5;

public:
	inline static int32_t get_offset_of_ActionPermissionsRequestCompleted_5() { return static_cast<int32_t>(offsetof(PermissionsManager_t4266031513_StaticFields, ___ActionPermissionsRequestCompleted_5)); }
	inline Action_1_t52289039 * get_ActionPermissionsRequestCompleted_5() const { return ___ActionPermissionsRequestCompleted_5; }
	inline Action_1_t52289039 ** get_address_of_ActionPermissionsRequestCompleted_5() { return &___ActionPermissionsRequestCompleted_5; }
	inline void set_ActionPermissionsRequestCompleted_5(Action_1_t52289039 * value)
	{
		___ActionPermissionsRequestCompleted_5 = value;
		Il2CppCodeGenWriteBarrier(&___ActionPermissionsRequestCompleted_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
