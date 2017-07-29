#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Pattern_Si3303336739.h"

// System.Collections.Generic.Dictionary`2<System.Int32,SA.Fitness.ReadDailyTotalRequest>
struct Dictionary_2_t1688681839;
// System.Collections.Generic.Dictionary`2<System.Int32,SA.Fitness.ReadHistoryRequest>
struct Dictionary_2_t213558742;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Fitness.History
struct  History_t2820771634  : public Singleton_1_t3303336739
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,SA.Fitness.ReadDailyTotalRequest> SA.Fitness.History::dailyTotalRequests
	Dictionary_2_t1688681839 * ___dailyTotalRequests_4;
	// System.Collections.Generic.Dictionary`2<System.Int32,SA.Fitness.ReadHistoryRequest> SA.Fitness.History::readRequests
	Dictionary_2_t213558742 * ___readRequests_5;

public:
	inline static int32_t get_offset_of_dailyTotalRequests_4() { return static_cast<int32_t>(offsetof(History_t2820771634, ___dailyTotalRequests_4)); }
	inline Dictionary_2_t1688681839 * get_dailyTotalRequests_4() const { return ___dailyTotalRequests_4; }
	inline Dictionary_2_t1688681839 ** get_address_of_dailyTotalRequests_4() { return &___dailyTotalRequests_4; }
	inline void set_dailyTotalRequests_4(Dictionary_2_t1688681839 * value)
	{
		___dailyTotalRequests_4 = value;
		Il2CppCodeGenWriteBarrier(&___dailyTotalRequests_4, value);
	}

	inline static int32_t get_offset_of_readRequests_5() { return static_cast<int32_t>(offsetof(History_t2820771634, ___readRequests_5)); }
	inline Dictionary_2_t213558742 * get_readRequests_5() const { return ___readRequests_5; }
	inline Dictionary_2_t213558742 ** get_address_of_readRequests_5() { return &___readRequests_5; }
	inline void set_readRequests_5(Dictionary_2_t213558742 * value)
	{
		___readRequests_5 = value;
		Il2CppCodeGenWriteBarrier(&___readRequests_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
