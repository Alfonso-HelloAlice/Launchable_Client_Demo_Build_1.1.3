#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_GooglePlayResult3097469636.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GP_AchievementResult
struct  GP_AchievementResult_t3970926374  : public GooglePlayResult_t3097469636
{
public:
	// System.String GP_AchievementResult::achievementId
	String_t* ___achievementId_2;

public:
	inline static int32_t get_offset_of_achievementId_2() { return static_cast<int32_t>(offsetof(GP_AchievementResult_t3970926374, ___achievementId_2)); }
	inline String_t* get_achievementId_2() const { return ___achievementId_2; }
	inline String_t** get_address_of_achievementId_2() { return &___achievementId_2; }
	inline void set_achievementId_2(String_t* value)
	{
		___achievementId_2 = value;
		Il2CppCodeGenWriteBarrier(&___achievementId_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
