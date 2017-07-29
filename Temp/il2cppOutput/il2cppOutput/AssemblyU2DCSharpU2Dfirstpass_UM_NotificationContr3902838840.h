#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Pattern_Sing90436649.h"

// System.Action`1<UM_PushRegistrationResult>
struct Action_1_t771266261;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UM_NotificationController
struct  UM_NotificationController_t3902838840  : public Singleton_1_t90436649
{
public:
	// System.Boolean UM_NotificationController::IsPushListnersRegistred
	bool ___IsPushListnersRegistred_5;

public:
	inline static int32_t get_offset_of_IsPushListnersRegistred_5() { return static_cast<int32_t>(offsetof(UM_NotificationController_t3902838840, ___IsPushListnersRegistred_5)); }
	inline bool get_IsPushListnersRegistred_5() const { return ___IsPushListnersRegistred_5; }
	inline bool* get_address_of_IsPushListnersRegistred_5() { return &___IsPushListnersRegistred_5; }
	inline void set_IsPushListnersRegistred_5(bool value)
	{
		___IsPushListnersRegistred_5 = value;
	}
};

struct UM_NotificationController_t3902838840_StaticFields
{
public:
	// System.Action`1<UM_PushRegistrationResult> UM_NotificationController::OnPushIdLoadResult
	Action_1_t771266261 * ___OnPushIdLoadResult_4;

public:
	inline static int32_t get_offset_of_OnPushIdLoadResult_4() { return static_cast<int32_t>(offsetof(UM_NotificationController_t3902838840_StaticFields, ___OnPushIdLoadResult_4)); }
	inline Action_1_t771266261 * get_OnPushIdLoadResult_4() const { return ___OnPushIdLoadResult_4; }
	inline Action_1_t771266261 ** get_address_of_OnPushIdLoadResult_4() { return &___OnPushIdLoadResult_4; }
	inline void set_OnPushIdLoadResult_4(Action_1_t771266261 * value)
	{
		___OnPushIdLoadResult_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnPushIdLoadResult_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
