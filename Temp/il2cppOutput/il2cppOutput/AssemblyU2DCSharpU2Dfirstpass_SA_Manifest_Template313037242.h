#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Manifest_BaseTemp3675092023.h"

// SA.Manifest.ApplicationTemplate
struct ApplicationTemplate_t718743332;
// System.Collections.Generic.List`1<SA.Manifest.PropertyTemplate>
struct List_1_t1882727143;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Manifest.Template
struct  Template_t313037242  : public BaseTemplate_t3675092023
{
public:
	// SA.Manifest.ApplicationTemplate SA.Manifest.Template::_applicationTemplate
	ApplicationTemplate_t718743332 * ____applicationTemplate_2;
	// System.Collections.Generic.List`1<SA.Manifest.PropertyTemplate> SA.Manifest.Template::_permissions
	List_1_t1882727143 * ____permissions_3;

public:
	inline static int32_t get_offset_of__applicationTemplate_2() { return static_cast<int32_t>(offsetof(Template_t313037242, ____applicationTemplate_2)); }
	inline ApplicationTemplate_t718743332 * get__applicationTemplate_2() const { return ____applicationTemplate_2; }
	inline ApplicationTemplate_t718743332 ** get_address_of__applicationTemplate_2() { return &____applicationTemplate_2; }
	inline void set__applicationTemplate_2(ApplicationTemplate_t718743332 * value)
	{
		____applicationTemplate_2 = value;
		Il2CppCodeGenWriteBarrier(&____applicationTemplate_2, value);
	}

	inline static int32_t get_offset_of__permissions_3() { return static_cast<int32_t>(offsetof(Template_t313037242, ____permissions_3)); }
	inline List_1_t1882727143 * get__permissions_3() const { return ____permissions_3; }
	inline List_1_t1882727143 ** get_address_of__permissions_3() { return &____permissions_3; }
	inline void set__permissions_3(List_1_t1882727143 * value)
	{
		____permissions_3 = value;
		Il2CppCodeGenWriteBarrier(&____permissions_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
