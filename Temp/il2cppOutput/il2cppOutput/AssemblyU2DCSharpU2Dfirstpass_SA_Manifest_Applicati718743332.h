#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Manifest_BaseTemp3675092023.h"

// System.Collections.Generic.Dictionary`2<System.Int32,SA.Manifest.ActivityTemplate>
struct Dictionary_2_t366907814;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Manifest.ApplicationTemplate
struct  ApplicationTemplate_t718743332  : public BaseTemplate_t3675092023
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,SA.Manifest.ActivityTemplate> SA.Manifest.ApplicationTemplate::_activities
	Dictionary_2_t366907814 * ____activities_2;

public:
	inline static int32_t get_offset_of__activities_2() { return static_cast<int32_t>(offsetof(ApplicationTemplate_t718743332, ____activities_2)); }
	inline Dictionary_2_t366907814 * get__activities_2() const { return ____activities_2; }
	inline Dictionary_2_t366907814 ** get_address_of__activities_2() { return &____activities_2; }
	inline void set__activities_2(Dictionary_2_t366907814 * value)
	{
		____activities_2 = value;
		Il2CppCodeGenWriteBarrier(&____activities_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
