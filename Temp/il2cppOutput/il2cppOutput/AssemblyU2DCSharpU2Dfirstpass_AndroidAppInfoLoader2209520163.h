#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Pattern_Si2692085268.h"

// System.Action`1<PackageAppInfo>
struct Action_1_t62711973;
// PackageAppInfo
struct PackageAppInfo_t260912591;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AndroidAppInfoLoader
struct  AndroidAppInfoLoader_t2209520163  : public Singleton_1_t2692085268
{
public:
	// PackageAppInfo AndroidAppInfoLoader::PacakgeInfo
	PackageAppInfo_t260912591 * ___PacakgeInfo_5;

public:
	inline static int32_t get_offset_of_PacakgeInfo_5() { return static_cast<int32_t>(offsetof(AndroidAppInfoLoader_t2209520163, ___PacakgeInfo_5)); }
	inline PackageAppInfo_t260912591 * get_PacakgeInfo_5() const { return ___PacakgeInfo_5; }
	inline PackageAppInfo_t260912591 ** get_address_of_PacakgeInfo_5() { return &___PacakgeInfo_5; }
	inline void set_PacakgeInfo_5(PackageAppInfo_t260912591 * value)
	{
		___PacakgeInfo_5 = value;
		Il2CppCodeGenWriteBarrier(&___PacakgeInfo_5, value);
	}
};

struct AndroidAppInfoLoader_t2209520163_StaticFields
{
public:
	// System.Action`1<PackageAppInfo> AndroidAppInfoLoader::ActionPacakgeInfoLoaded
	Action_1_t62711973 * ___ActionPacakgeInfoLoaded_4;

public:
	inline static int32_t get_offset_of_ActionPacakgeInfoLoaded_4() { return static_cast<int32_t>(offsetof(AndroidAppInfoLoader_t2209520163_StaticFields, ___ActionPacakgeInfoLoaded_4)); }
	inline Action_1_t62711973 * get_ActionPacakgeInfoLoaded_4() const { return ___ActionPacakgeInfoLoaded_4; }
	inline Action_1_t62711973 ** get_address_of_ActionPacakgeInfoLoaded_4() { return &___ActionPacakgeInfoLoaded_4; }
	inline void set_ActionPacakgeInfoLoaded_4(Action_1_t62711973 * value)
	{
		___ActionPacakgeInfoLoaded_4 = value;
		Il2CppCodeGenWriteBarrier(&___ActionPacakgeInfoLoaded_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
