#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_AMN_Result4157453776.h"

// System.String
struct String_t;
// GC_Player
struct GC_Player_t1334946238;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AMN_RequestPlayerDataResult
struct  AMN_RequestPlayerDataResult_t2842909270  : public AMN_Result_t4157453776
{
public:
	// System.String AMN_RequestPlayerDataResult::error
	String_t* ___error_1;
	// GC_Player AMN_RequestPlayerDataResult::player
	GC_Player_t1334946238 * ___player_2;

public:
	inline static int32_t get_offset_of_error_1() { return static_cast<int32_t>(offsetof(AMN_RequestPlayerDataResult_t2842909270, ___error_1)); }
	inline String_t* get_error_1() const { return ___error_1; }
	inline String_t** get_address_of_error_1() { return &___error_1; }
	inline void set_error_1(String_t* value)
	{
		___error_1 = value;
		Il2CppCodeGenWriteBarrier(&___error_1, value);
	}

	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(AMN_RequestPlayerDataResult_t2842909270, ___player_2)); }
	inline GC_Player_t1334946238 * get_player_2() const { return ___player_2; }
	inline GC_Player_t1334946238 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GC_Player_t1334946238 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
