#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Models_Res4287219743.h"

// GK_AchievementTemplate
struct GK_AchievementTemplate_t2296152240;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GK_AchievementProgressResult
struct  GK_AchievementProgressResult_t3539574352  : public Result_t4287219743
{
public:
	// GK_AchievementTemplate GK_AchievementProgressResult::_tpl
	GK_AchievementTemplate_t2296152240 * ____tpl_1;

public:
	inline static int32_t get_offset_of__tpl_1() { return static_cast<int32_t>(offsetof(GK_AchievementProgressResult_t3539574352, ____tpl_1)); }
	inline GK_AchievementTemplate_t2296152240 * get__tpl_1() const { return ____tpl_1; }
	inline GK_AchievementTemplate_t2296152240 ** get_address_of__tpl_1() { return &____tpl_1; }
	inline void set__tpl_1(GK_AchievementTemplate_t2296152240 * value)
	{
		____tpl_1 = value;
		Il2CppCodeGenWriteBarrier(&____tpl_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
