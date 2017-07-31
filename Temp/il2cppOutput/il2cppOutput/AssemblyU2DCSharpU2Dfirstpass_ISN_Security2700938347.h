#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Pattern_Si3183503452.h"

// System.Action`1<ISN_LocalReceiptResult>
struct Action_1_t3548126951;
// System.Action`1<SA.Common.Models.Result>
struct Action_1_t4089019125;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ISN_Security
struct  ISN_Security_t2700938347  : public Singleton_1_t3183503452
{
public:

public:
};

struct ISN_Security_t2700938347_StaticFields
{
public:
	// System.Action`1<ISN_LocalReceiptResult> ISN_Security::OnReceiptLoaded
	Action_1_t3548126951 * ___OnReceiptLoaded_4;
	// System.Action`1<SA.Common.Models.Result> ISN_Security::OnReceiptRefreshComplete
	Action_1_t4089019125 * ___OnReceiptRefreshComplete_5;

public:
	inline static int32_t get_offset_of_OnReceiptLoaded_4() { return static_cast<int32_t>(offsetof(ISN_Security_t2700938347_StaticFields, ___OnReceiptLoaded_4)); }
	inline Action_1_t3548126951 * get_OnReceiptLoaded_4() const { return ___OnReceiptLoaded_4; }
	inline Action_1_t3548126951 ** get_address_of_OnReceiptLoaded_4() { return &___OnReceiptLoaded_4; }
	inline void set_OnReceiptLoaded_4(Action_1_t3548126951 * value)
	{
		___OnReceiptLoaded_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnReceiptLoaded_4, value);
	}

	inline static int32_t get_offset_of_OnReceiptRefreshComplete_5() { return static_cast<int32_t>(offsetof(ISN_Security_t2700938347_StaticFields, ___OnReceiptRefreshComplete_5)); }
	inline Action_1_t4089019125 * get_OnReceiptRefreshComplete_5() const { return ___OnReceiptRefreshComplete_5; }
	inline Action_1_t4089019125 ** get_address_of_OnReceiptRefreshComplete_5() { return &___OnReceiptRefreshComplete_5; }
	inline void set_OnReceiptRefreshComplete_5(Action_1_t4089019125 * value)
	{
		___OnReceiptRefreshComplete_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnReceiptRefreshComplete_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
