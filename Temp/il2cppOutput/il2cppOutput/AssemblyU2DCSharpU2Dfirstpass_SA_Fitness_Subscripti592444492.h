#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Models_Res4287219743.h"

// System.Collections.Generic.List`1<SA.Fitness.Subscription>
struct List_1_t3053805937;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Fitness.SubscriptionsRequestResult
struct  SubscriptionsRequestResult_t592444492  : public Result_t4287219743
{
public:
	// System.Collections.Generic.List`1<SA.Fitness.Subscription> SA.Fitness.SubscriptionsRequestResult::subscriptions
	List_1_t3053805937 * ___subscriptions_1;
	// System.Int32 SA.Fitness.SubscriptionsRequestResult::id
	int32_t ___id_2;

public:
	inline static int32_t get_offset_of_subscriptions_1() { return static_cast<int32_t>(offsetof(SubscriptionsRequestResult_t592444492, ___subscriptions_1)); }
	inline List_1_t3053805937 * get_subscriptions_1() const { return ___subscriptions_1; }
	inline List_1_t3053805937 ** get_address_of_subscriptions_1() { return &___subscriptions_1; }
	inline void set_subscriptions_1(List_1_t3053805937 * value)
	{
		___subscriptions_1 = value;
		Il2CppCodeGenWriteBarrier(&___subscriptions_1, value);
	}

	inline static int32_t get_offset_of_id_2() { return static_cast<int32_t>(offsetof(SubscriptionsRequestResult_t592444492, ___id_2)); }
	inline int32_t get_id_2() const { return ___id_2; }
	inline int32_t* get_address_of_id_2() { return &___id_2; }
	inline void set_id_2(int32_t value)
	{
		___id_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
