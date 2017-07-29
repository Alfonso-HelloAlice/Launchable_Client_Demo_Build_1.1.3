#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Pattern_Si2046894414.h"

// System.Action
struct Action_t3226471752;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TVAppController
struct  TVAppController_t1564329309  : public Singleton_1_t2046894414
{
public:
	// System.Boolean TVAppController::_IsRuningOnTVDevice
	bool ____IsRuningOnTVDevice_4;

public:
	inline static int32_t get_offset_of__IsRuningOnTVDevice_4() { return static_cast<int32_t>(offsetof(TVAppController_t1564329309, ____IsRuningOnTVDevice_4)); }
	inline bool get__IsRuningOnTVDevice_4() const { return ____IsRuningOnTVDevice_4; }
	inline bool* get_address_of__IsRuningOnTVDevice_4() { return &____IsRuningOnTVDevice_4; }
	inline void set__IsRuningOnTVDevice_4(bool value)
	{
		____IsRuningOnTVDevice_4 = value;
	}
};

struct TVAppController_t1564329309_StaticFields
{
public:
	// System.Action TVAppController::DeviceTypeChecked
	Action_t3226471752 * ___DeviceTypeChecked_5;

public:
	inline static int32_t get_offset_of_DeviceTypeChecked_5() { return static_cast<int32_t>(offsetof(TVAppController_t1564329309_StaticFields, ___DeviceTypeChecked_5)); }
	inline Action_t3226471752 * get_DeviceTypeChecked_5() const { return ___DeviceTypeChecked_5; }
	inline Action_t3226471752 ** get_address_of_DeviceTypeChecked_5() { return &___DeviceTypeChecked_5; }
	inline void set_DeviceTypeChecked_5(Action_t3226471752 * value)
	{
		___DeviceTypeChecked_5 = value;
		Il2CppCodeGenWriteBarrier(&___DeviceTypeChecked_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
