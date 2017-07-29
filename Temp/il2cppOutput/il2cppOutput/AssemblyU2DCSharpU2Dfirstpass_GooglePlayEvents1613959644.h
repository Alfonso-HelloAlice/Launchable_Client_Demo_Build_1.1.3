#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Pattern_Si2096524749.h"

// System.Action`1<GooglePlayResult>
struct Action_1_t2899269018;
// System.Collections.Generic.List`1<GP_Event>
struct List_1_t3987232096;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayEvents
struct  GooglePlayEvents_t1613959644  : public Singleton_1_t2096524749
{
public:
	// System.Action`1<GooglePlayResult> GooglePlayEvents::OnEventsLoaded
	Action_1_t2899269018 * ___OnEventsLoaded_4;
	// System.Collections.Generic.List`1<GP_Event> GooglePlayEvents::_Events
	List_1_t3987232096 * ____Events_5;

public:
	inline static int32_t get_offset_of_OnEventsLoaded_4() { return static_cast<int32_t>(offsetof(GooglePlayEvents_t1613959644, ___OnEventsLoaded_4)); }
	inline Action_1_t2899269018 * get_OnEventsLoaded_4() const { return ___OnEventsLoaded_4; }
	inline Action_1_t2899269018 ** get_address_of_OnEventsLoaded_4() { return &___OnEventsLoaded_4; }
	inline void set_OnEventsLoaded_4(Action_1_t2899269018 * value)
	{
		___OnEventsLoaded_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnEventsLoaded_4, value);
	}

	inline static int32_t get_offset_of__Events_5() { return static_cast<int32_t>(offsetof(GooglePlayEvents_t1613959644, ____Events_5)); }
	inline List_1_t3987232096 * get__Events_5() const { return ____Events_5; }
	inline List_1_t3987232096 ** get_address_of__Events_5() { return &____Events_5; }
	inline void set__Events_5(List_1_t3987232096 * value)
	{
		____Events_5 = value;
		Il2CppCodeGenWriteBarrier(&____Events_5, value);
	}
};

struct GooglePlayEvents_t1613959644_StaticFields
{
public:
	// System.Action`1<GooglePlayResult> GooglePlayEvents::<>f__am$cache0
	Action_1_t2899269018 * ___U3CU3Ef__amU24cache0_6;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_6() { return static_cast<int32_t>(offsetof(GooglePlayEvents_t1613959644_StaticFields, ___U3CU3Ef__amU24cache0_6)); }
	inline Action_1_t2899269018 * get_U3CU3Ef__amU24cache0_6() const { return ___U3CU3Ef__amU24cache0_6; }
	inline Action_1_t2899269018 ** get_address_of_U3CU3Ef__amU24cache0_6() { return &___U3CU3Ef__amU24cache0_6; }
	inline void set_U3CU3Ef__amU24cache0_6(Action_1_t2899269018 * value)
	{
		___U3CU3Ef__amU24cache0_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
