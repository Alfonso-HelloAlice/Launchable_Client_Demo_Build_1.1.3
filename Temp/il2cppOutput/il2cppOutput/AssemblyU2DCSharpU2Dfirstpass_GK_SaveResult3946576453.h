#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Models_Res4287219743.h"

// GK_SavedGame
struct GK_SavedGame_t3320093620;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GK_SaveResult
struct  GK_SaveResult_t3946576453  : public Result_t4287219743
{
public:
	// GK_SavedGame GK_SaveResult::_SavedGame
	GK_SavedGame_t3320093620 * ____SavedGame_1;

public:
	inline static int32_t get_offset_of__SavedGame_1() { return static_cast<int32_t>(offsetof(GK_SaveResult_t3946576453, ____SavedGame_1)); }
	inline GK_SavedGame_t3320093620 * get__SavedGame_1() const { return ____SavedGame_1; }
	inline GK_SavedGame_t3320093620 ** get_address_of__SavedGame_1() { return &____SavedGame_1; }
	inline void set__SavedGame_1(GK_SavedGame_t3320093620 * value)
	{
		____SavedGame_1 = value;
		Il2CppCodeGenWriteBarrier(&____SavedGame_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
