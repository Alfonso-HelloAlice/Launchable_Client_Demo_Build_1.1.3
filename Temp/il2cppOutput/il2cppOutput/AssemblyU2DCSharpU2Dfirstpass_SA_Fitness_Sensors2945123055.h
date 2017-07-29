#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Pattern_Si3427688160.h"

// System.Collections.Generic.Dictionary`2<System.Int32,SA.Fitness.SensorRequest>
struct Dictionary_2_t951285900;
// System.Collections.Generic.Dictionary`2<System.Int32,SA.Fitness.SensorListener>
struct Dictionary_2_t1230420047;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Fitness.Sensors
struct  Sensors_t2945123055  : public Singleton_1_t3427688160
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,SA.Fitness.SensorRequest> SA.Fitness.Sensors::requests
	Dictionary_2_t951285900 * ___requests_4;
	// System.Collections.Generic.Dictionary`2<System.Int32,SA.Fitness.SensorListener> SA.Fitness.Sensors::listeners
	Dictionary_2_t1230420047 * ___listeners_5;

public:
	inline static int32_t get_offset_of_requests_4() { return static_cast<int32_t>(offsetof(Sensors_t2945123055, ___requests_4)); }
	inline Dictionary_2_t951285900 * get_requests_4() const { return ___requests_4; }
	inline Dictionary_2_t951285900 ** get_address_of_requests_4() { return &___requests_4; }
	inline void set_requests_4(Dictionary_2_t951285900 * value)
	{
		___requests_4 = value;
		Il2CppCodeGenWriteBarrier(&___requests_4, value);
	}

	inline static int32_t get_offset_of_listeners_5() { return static_cast<int32_t>(offsetof(Sensors_t2945123055, ___listeners_5)); }
	inline Dictionary_2_t1230420047 * get_listeners_5() const { return ___listeners_5; }
	inline Dictionary_2_t1230420047 ** get_address_of_listeners_5() { return &___listeners_5; }
	inline void set_listeners_5(Dictionary_2_t1230420047 * value)
	{
		___listeners_5 = value;
		Il2CppCodeGenWriteBarrier(&___listeners_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
