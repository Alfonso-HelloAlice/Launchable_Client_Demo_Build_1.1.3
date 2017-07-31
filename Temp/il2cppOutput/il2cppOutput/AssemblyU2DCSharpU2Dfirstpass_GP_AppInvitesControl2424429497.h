#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Pattern_Si2906994602.h"

// System.Action`1<GP_SendAppInvitesResult>
struct Action_1_t3800876926;
// System.Action`1<GP_RetrieveAppInviteResult>
struct Action_1_t4115251907;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GP_AppInvitesController
struct  GP_AppInvitesController_t2424429497  : public Singleton_1_t2906994602
{
public:

public:
};

struct GP_AppInvitesController_t2424429497_StaticFields
{
public:
	// System.Action`1<GP_SendAppInvitesResult> GP_AppInvitesController::ActionAppInvitesSent
	Action_1_t3800876926 * ___ActionAppInvitesSent_4;
	// System.Action`1<GP_RetrieveAppInviteResult> GP_AppInvitesController::ActionAppInviteRetrieved
	Action_1_t4115251907 * ___ActionAppInviteRetrieved_5;

public:
	inline static int32_t get_offset_of_ActionAppInvitesSent_4() { return static_cast<int32_t>(offsetof(GP_AppInvitesController_t2424429497_StaticFields, ___ActionAppInvitesSent_4)); }
	inline Action_1_t3800876926 * get_ActionAppInvitesSent_4() const { return ___ActionAppInvitesSent_4; }
	inline Action_1_t3800876926 ** get_address_of_ActionAppInvitesSent_4() { return &___ActionAppInvitesSent_4; }
	inline void set_ActionAppInvitesSent_4(Action_1_t3800876926 * value)
	{
		___ActionAppInvitesSent_4 = value;
		Il2CppCodeGenWriteBarrier(&___ActionAppInvitesSent_4, value);
	}

	inline static int32_t get_offset_of_ActionAppInviteRetrieved_5() { return static_cast<int32_t>(offsetof(GP_AppInvitesController_t2424429497_StaticFields, ___ActionAppInviteRetrieved_5)); }
	inline Action_1_t4115251907 * get_ActionAppInviteRetrieved_5() const { return ___ActionAppInviteRetrieved_5; }
	inline Action_1_t4115251907 ** get_address_of_ActionAppInviteRetrieved_5() { return &___ActionAppInviteRetrieved_5; }
	inline void set_ActionAppInviteRetrieved_5(Action_1_t4115251907 * value)
	{
		___ActionAppInviteRetrieved_5 = value;
		Il2CppCodeGenWriteBarrier(&___ActionAppInviteRetrieved_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
