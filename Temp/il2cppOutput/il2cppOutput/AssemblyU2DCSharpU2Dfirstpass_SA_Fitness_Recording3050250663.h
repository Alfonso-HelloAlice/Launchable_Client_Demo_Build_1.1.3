#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Pattern_Si3532815768.h"

// System.Collections.Generic.Dictionary`2<System.Int32,SA.Fitness.SubscribeRequest>
struct Dictionary_2_t2609228414;
// System.Collections.Generic.Dictionary`2<System.Int32,SA.Fitness.UnsubscribeRequest>
struct Dictionary_2_t1120662903;
// System.Collections.Generic.Dictionary`2<System.Int32,SA.Fitness.SubscriptionsRequest>
struct Dictionary_2_t1185454666;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Fitness.Recording
struct  Recording_t3050250663  : public Singleton_1_t3532815768
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,SA.Fitness.SubscribeRequest> SA.Fitness.Recording::subscriptions
	Dictionary_2_t2609228414 * ___subscriptions_4;
	// System.Collections.Generic.Dictionary`2<System.Int32,SA.Fitness.UnsubscribeRequest> SA.Fitness.Recording::unsubs
	Dictionary_2_t1120662903 * ___unsubs_5;
	// System.Collections.Generic.Dictionary`2<System.Int32,SA.Fitness.SubscriptionsRequest> SA.Fitness.Recording::subsRequests
	Dictionary_2_t1185454666 * ___subsRequests_6;

public:
	inline static int32_t get_offset_of_subscriptions_4() { return static_cast<int32_t>(offsetof(Recording_t3050250663, ___subscriptions_4)); }
	inline Dictionary_2_t2609228414 * get_subscriptions_4() const { return ___subscriptions_4; }
	inline Dictionary_2_t2609228414 ** get_address_of_subscriptions_4() { return &___subscriptions_4; }
	inline void set_subscriptions_4(Dictionary_2_t2609228414 * value)
	{
		___subscriptions_4 = value;
		Il2CppCodeGenWriteBarrier(&___subscriptions_4, value);
	}

	inline static int32_t get_offset_of_unsubs_5() { return static_cast<int32_t>(offsetof(Recording_t3050250663, ___unsubs_5)); }
	inline Dictionary_2_t1120662903 * get_unsubs_5() const { return ___unsubs_5; }
	inline Dictionary_2_t1120662903 ** get_address_of_unsubs_5() { return &___unsubs_5; }
	inline void set_unsubs_5(Dictionary_2_t1120662903 * value)
	{
		___unsubs_5 = value;
		Il2CppCodeGenWriteBarrier(&___unsubs_5, value);
	}

	inline static int32_t get_offset_of_subsRequests_6() { return static_cast<int32_t>(offsetof(Recording_t3050250663, ___subsRequests_6)); }
	inline Dictionary_2_t1185454666 * get_subsRequests_6() const { return ___subsRequests_6; }
	inline Dictionary_2_t1185454666 ** get_address_of_subsRequests_6() { return &___subsRequests_6; }
	inline void set_subsRequests_6(Dictionary_2_t1185454666 * value)
	{
		___subsRequests_6 = value;
		Il2CppCodeGenWriteBarrier(&___subsRequests_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
