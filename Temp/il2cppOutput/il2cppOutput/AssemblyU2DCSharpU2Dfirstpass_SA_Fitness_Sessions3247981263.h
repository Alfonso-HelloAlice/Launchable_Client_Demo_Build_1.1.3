#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Pattern_Si3730546368.h"

// System.Collections.Generic.Dictionary`2<System.Int32,SA.Fitness.StartSessionRequest>
struct Dictionary_2_t2341665608;
// System.Collections.Generic.Dictionary`2<System.Int32,SA.Fitness.StopSessionRequest>
struct Dictionary_2_t2213241548;
// System.Collections.Generic.Dictionary`2<System.Int32,SA.Fitness.ReadSessionRequest>
struct Dictionary_2_t732689954;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Fitness.Sessions
struct  Sessions_t3247981263  : public Singleton_1_t3730546368
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,SA.Fitness.StartSessionRequest> SA.Fitness.Sessions::startSessionRequests
	Dictionary_2_t2341665608 * ___startSessionRequests_4;
	// System.Collections.Generic.Dictionary`2<System.Int32,SA.Fitness.StopSessionRequest> SA.Fitness.Sessions::stopSessionRequests
	Dictionary_2_t2213241548 * ___stopSessionRequests_5;
	// System.Collections.Generic.Dictionary`2<System.Int32,SA.Fitness.ReadSessionRequest> SA.Fitness.Sessions::readSessionRequests
	Dictionary_2_t732689954 * ___readSessionRequests_6;

public:
	inline static int32_t get_offset_of_startSessionRequests_4() { return static_cast<int32_t>(offsetof(Sessions_t3247981263, ___startSessionRequests_4)); }
	inline Dictionary_2_t2341665608 * get_startSessionRequests_4() const { return ___startSessionRequests_4; }
	inline Dictionary_2_t2341665608 ** get_address_of_startSessionRequests_4() { return &___startSessionRequests_4; }
	inline void set_startSessionRequests_4(Dictionary_2_t2341665608 * value)
	{
		___startSessionRequests_4 = value;
		Il2CppCodeGenWriteBarrier(&___startSessionRequests_4, value);
	}

	inline static int32_t get_offset_of_stopSessionRequests_5() { return static_cast<int32_t>(offsetof(Sessions_t3247981263, ___stopSessionRequests_5)); }
	inline Dictionary_2_t2213241548 * get_stopSessionRequests_5() const { return ___stopSessionRequests_5; }
	inline Dictionary_2_t2213241548 ** get_address_of_stopSessionRequests_5() { return &___stopSessionRequests_5; }
	inline void set_stopSessionRequests_5(Dictionary_2_t2213241548 * value)
	{
		___stopSessionRequests_5 = value;
		Il2CppCodeGenWriteBarrier(&___stopSessionRequests_5, value);
	}

	inline static int32_t get_offset_of_readSessionRequests_6() { return static_cast<int32_t>(offsetof(Sessions_t3247981263, ___readSessionRequests_6)); }
	inline Dictionary_2_t732689954 * get_readSessionRequests_6() const { return ___readSessionRequests_6; }
	inline Dictionary_2_t732689954 ** get_address_of_readSessionRequests_6() { return &___readSessionRequests_6; }
	inline void set_readSessionRequests_6(Dictionary_2_t732689954 * value)
	{
		___readSessionRequests_6 = value;
		Il2CppCodeGenWriteBarrier(&___readSessionRequests_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
