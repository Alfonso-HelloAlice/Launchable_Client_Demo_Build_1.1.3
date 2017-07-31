#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Pattern_Si3875692280.h"

// System.Action`1<SA.AndroidNative.DynamicLinks.ShortLinkResult>
struct Action_1_t1260274741;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.AndroidNative.DynamicLinks.Manager
struct  Manager_t3393127175  : public Singleton_1_t3875692280
{
public:
	// System.Action`1<SA.AndroidNative.DynamicLinks.ShortLinkResult> SA.AndroidNative.DynamicLinks.Manager::OnShortLinkReceived
	Action_1_t1260274741 * ___OnShortLinkReceived_4;

public:
	inline static int32_t get_offset_of_OnShortLinkReceived_4() { return static_cast<int32_t>(offsetof(Manager_t3393127175, ___OnShortLinkReceived_4)); }
	inline Action_1_t1260274741 * get_OnShortLinkReceived_4() const { return ___OnShortLinkReceived_4; }
	inline Action_1_t1260274741 ** get_address_of_OnShortLinkReceived_4() { return &___OnShortLinkReceived_4; }
	inline void set_OnShortLinkReceived_4(Action_1_t1260274741 * value)
	{
		___OnShortLinkReceived_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnShortLinkReceived_4, value);
	}
};

struct Manager_t3393127175_StaticFields
{
public:
	// System.Action`1<SA.AndroidNative.DynamicLinks.ShortLinkResult> SA.AndroidNative.DynamicLinks.Manager::<>f__am$cache0
	Action_1_t1260274741 * ___U3CU3Ef__amU24cache0_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_5() { return static_cast<int32_t>(offsetof(Manager_t3393127175_StaticFields, ___U3CU3Ef__amU24cache0_5)); }
	inline Action_1_t1260274741 * get_U3CU3Ef__amU24cache0_5() const { return ___U3CU3Ef__amU24cache0_5; }
	inline Action_1_t1260274741 ** get_address_of_U3CU3Ef__amU24cache0_5() { return &___U3CU3Ef__amU24cache0_5; }
	inline void set_U3CU3Ef__amU24cache0_5(Action_1_t1260274741 * value)
	{
		___U3CU3Ef__amU24cache0_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
