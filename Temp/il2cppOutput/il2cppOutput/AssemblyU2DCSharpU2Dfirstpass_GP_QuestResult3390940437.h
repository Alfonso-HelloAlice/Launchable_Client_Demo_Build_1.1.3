#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_GooglePlayResult3097469636.h"

// GP_Quest
struct GP_Quest_t1641883470;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GP_QuestResult
struct  GP_QuestResult_t3390940437  : public GooglePlayResult_t3097469636
{
public:
	// GP_Quest GP_QuestResult::quest
	GP_Quest_t1641883470 * ___quest_2;

public:
	inline static int32_t get_offset_of_quest_2() { return static_cast<int32_t>(offsetof(GP_QuestResult_t3390940437, ___quest_2)); }
	inline GP_Quest_t1641883470 * get_quest_2() const { return ___quest_2; }
	inline GP_Quest_t1641883470 ** get_address_of_quest_2() { return &___quest_2; }
	inline void set_quest_2(GP_Quest_t1641883470 * value)
	{
		___quest_2 = value;
		Il2CppCodeGenWriteBarrier(&___quest_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
