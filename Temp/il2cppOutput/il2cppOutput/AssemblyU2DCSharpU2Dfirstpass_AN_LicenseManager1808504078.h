#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Pattern_Si2291069183.h"

// System.Action`1<AN_LicenseRequestResult>
struct Action_1_t2133169943;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AN_LicenseManager
struct  AN_LicenseManager_t1808504078  : public Singleton_1_t2291069183
{
public:

public:
};

struct AN_LicenseManager_t1808504078_StaticFields
{
public:
	// System.Action`1<AN_LicenseRequestResult> AN_LicenseManager::OnLicenseRequestResult
	Action_1_t2133169943 * ___OnLicenseRequestResult_4;

public:
	inline static int32_t get_offset_of_OnLicenseRequestResult_4() { return static_cast<int32_t>(offsetof(AN_LicenseManager_t1808504078_StaticFields, ___OnLicenseRequestResult_4)); }
	inline Action_1_t2133169943 * get_OnLicenseRequestResult_4() const { return ___OnLicenseRequestResult_4; }
	inline Action_1_t2133169943 ** get_address_of_OnLicenseRequestResult_4() { return &___OnLicenseRequestResult_4; }
	inline void set_OnLicenseRequestResult_4(Action_1_t2133169943 * value)
	{
		___OnLicenseRequestResult_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnLicenseRequestResult_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
