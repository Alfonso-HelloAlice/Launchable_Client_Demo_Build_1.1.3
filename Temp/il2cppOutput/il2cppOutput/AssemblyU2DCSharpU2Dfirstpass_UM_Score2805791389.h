#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UM_Player
struct UM_Player_t1338759646;
// GK_Score
struct GK_Score_t1529008873;
// GPScore
struct GPScore_t3219488889;
// GC_Score
struct GC_Score_t2340546833;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UM_Score
struct  UM_Score_t2805791389  : public Il2CppObject
{
public:
	// UM_Player UM_Score::player
	UM_Player_t1338759646 * ___player_0;
	// GK_Score UM_Score::_GK_Score
	GK_Score_t1529008873 * ____GK_Score_1;
	// GPScore UM_Score::_GP_Score
	GPScore_t3219488889 * ____GP_Score_2;
	// GC_Score UM_Score::_GC_Score
	GC_Score_t2340546833 * ____GC_Score_3;

public:
	inline static int32_t get_offset_of_player_0() { return static_cast<int32_t>(offsetof(UM_Score_t2805791389, ___player_0)); }
	inline UM_Player_t1338759646 * get_player_0() const { return ___player_0; }
	inline UM_Player_t1338759646 ** get_address_of_player_0() { return &___player_0; }
	inline void set_player_0(UM_Player_t1338759646 * value)
	{
		___player_0 = value;
		Il2CppCodeGenWriteBarrier(&___player_0, value);
	}

	inline static int32_t get_offset_of__GK_Score_1() { return static_cast<int32_t>(offsetof(UM_Score_t2805791389, ____GK_Score_1)); }
	inline GK_Score_t1529008873 * get__GK_Score_1() const { return ____GK_Score_1; }
	inline GK_Score_t1529008873 ** get_address_of__GK_Score_1() { return &____GK_Score_1; }
	inline void set__GK_Score_1(GK_Score_t1529008873 * value)
	{
		____GK_Score_1 = value;
		Il2CppCodeGenWriteBarrier(&____GK_Score_1, value);
	}

	inline static int32_t get_offset_of__GP_Score_2() { return static_cast<int32_t>(offsetof(UM_Score_t2805791389, ____GP_Score_2)); }
	inline GPScore_t3219488889 * get__GP_Score_2() const { return ____GP_Score_2; }
	inline GPScore_t3219488889 ** get_address_of__GP_Score_2() { return &____GP_Score_2; }
	inline void set__GP_Score_2(GPScore_t3219488889 * value)
	{
		____GP_Score_2 = value;
		Il2CppCodeGenWriteBarrier(&____GP_Score_2, value);
	}

	inline static int32_t get_offset_of__GC_Score_3() { return static_cast<int32_t>(offsetof(UM_Score_t2805791389, ____GC_Score_3)); }
	inline GC_Score_t2340546833 * get__GC_Score_3() const { return ____GC_Score_3; }
	inline GC_Score_t2340546833 ** get_address_of__GC_Score_3() { return &____GC_Score_3; }
	inline void set__GC_Score_3(GC_Score_t2340546833 * value)
	{
		____GC_Score_3 = value;
		Il2CppCodeGenWriteBarrier(&____GC_Score_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
