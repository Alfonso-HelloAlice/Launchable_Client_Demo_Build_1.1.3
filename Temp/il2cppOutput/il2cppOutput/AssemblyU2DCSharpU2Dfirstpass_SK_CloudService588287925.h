#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Pattern_Si1070853030.h"

// System.Action`1<SK_AuthorizationResult>
struct Action_1_t1849553253;
// System.Action`1<SK_RequestCapabilitieResult>
struct Action_1_t2311963226;
// System.Action`1<SK_RequestStorefrontIdentifierResult>
struct Action_1_t914276544;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SK_CloudService
struct  SK_CloudService_t588287925  : public Singleton_1_t1070853030
{
public:

public:
};

struct SK_CloudService_t588287925_StaticFields
{
public:
	// System.Action`1<SK_AuthorizationResult> SK_CloudService::OnAuthorizationFinished
	Action_1_t1849553253 * ___OnAuthorizationFinished_4;
	// System.Action`1<SK_RequestCapabilitieResult> SK_CloudService::OnCapabilitiesRequestFinished
	Action_1_t2311963226 * ___OnCapabilitiesRequestFinished_5;
	// System.Action`1<SK_RequestStorefrontIdentifierResult> SK_CloudService::OnStorefrontIdentifierRequestFinished
	Action_1_t914276544 * ___OnStorefrontIdentifierRequestFinished_6;

public:
	inline static int32_t get_offset_of_OnAuthorizationFinished_4() { return static_cast<int32_t>(offsetof(SK_CloudService_t588287925_StaticFields, ___OnAuthorizationFinished_4)); }
	inline Action_1_t1849553253 * get_OnAuthorizationFinished_4() const { return ___OnAuthorizationFinished_4; }
	inline Action_1_t1849553253 ** get_address_of_OnAuthorizationFinished_4() { return &___OnAuthorizationFinished_4; }
	inline void set_OnAuthorizationFinished_4(Action_1_t1849553253 * value)
	{
		___OnAuthorizationFinished_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnAuthorizationFinished_4, value);
	}

	inline static int32_t get_offset_of_OnCapabilitiesRequestFinished_5() { return static_cast<int32_t>(offsetof(SK_CloudService_t588287925_StaticFields, ___OnCapabilitiesRequestFinished_5)); }
	inline Action_1_t2311963226 * get_OnCapabilitiesRequestFinished_5() const { return ___OnCapabilitiesRequestFinished_5; }
	inline Action_1_t2311963226 ** get_address_of_OnCapabilitiesRequestFinished_5() { return &___OnCapabilitiesRequestFinished_5; }
	inline void set_OnCapabilitiesRequestFinished_5(Action_1_t2311963226 * value)
	{
		___OnCapabilitiesRequestFinished_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnCapabilitiesRequestFinished_5, value);
	}

	inline static int32_t get_offset_of_OnStorefrontIdentifierRequestFinished_6() { return static_cast<int32_t>(offsetof(SK_CloudService_t588287925_StaticFields, ___OnStorefrontIdentifierRequestFinished_6)); }
	inline Action_1_t914276544 * get_OnStorefrontIdentifierRequestFinished_6() const { return ___OnStorefrontIdentifierRequestFinished_6; }
	inline Action_1_t914276544 ** get_address_of_OnStorefrontIdentifierRequestFinished_6() { return &___OnStorefrontIdentifierRequestFinished_6; }
	inline void set_OnStorefrontIdentifierRequestFinished_6(Action_1_t914276544 * value)
	{
		___OnStorefrontIdentifierRequestFinished_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnStorefrontIdentifierRequestFinished_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
