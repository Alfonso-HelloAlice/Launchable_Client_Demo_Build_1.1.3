#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Models_Res4287219743.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GP_AdvertisingIdLoadResult
struct  GP_AdvertisingIdLoadResult_t2783375090  : public Result_t4287219743
{
public:
	// System.String GP_AdvertisingIdLoadResult::id
	String_t* ___id_1;
	// System.Boolean GP_AdvertisingIdLoadResult::isLimitAdTrackingEnabled
	bool ___isLimitAdTrackingEnabled_2;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(GP_AdvertisingIdLoadResult_t2783375090, ___id_1)); }
	inline String_t* get_id_1() const { return ___id_1; }
	inline String_t** get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(String_t* value)
	{
		___id_1 = value;
		Il2CppCodeGenWriteBarrier(&___id_1, value);
	}

	inline static int32_t get_offset_of_isLimitAdTrackingEnabled_2() { return static_cast<int32_t>(offsetof(GP_AdvertisingIdLoadResult_t2783375090, ___isLimitAdTrackingEnabled_2)); }
	inline bool get_isLimitAdTrackingEnabled_2() const { return ___isLimitAdTrackingEnabled_2; }
	inline bool* get_address_of_isLimitAdTrackingEnabled_2() { return &___isLimitAdTrackingEnabled_2; }
	inline void set_isLimitAdTrackingEnabled_2(bool value)
	{
		___isLimitAdTrackingEnabled_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
