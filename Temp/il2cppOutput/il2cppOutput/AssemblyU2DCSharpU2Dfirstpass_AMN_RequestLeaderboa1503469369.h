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
// System.Collections.Generic.List`1<GC_Leaderboard>
struct List_1_t3410611094;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AMN_RequestLeaderboardsResult
struct  AMN_RequestLeaderboardsResult_t1503469369  : public AMN_Result_t4157453776
{
public:
	// System.String AMN_RequestLeaderboardsResult::error
	String_t* ___error_1;
	// System.Collections.Generic.List`1<GC_Leaderboard> AMN_RequestLeaderboardsResult::leaderboardsList
	List_1_t3410611094 * ___leaderboardsList_2;

public:
	inline static int32_t get_offset_of_error_1() { return static_cast<int32_t>(offsetof(AMN_RequestLeaderboardsResult_t1503469369, ___error_1)); }
	inline String_t* get_error_1() const { return ___error_1; }
	inline String_t** get_address_of_error_1() { return &___error_1; }
	inline void set_error_1(String_t* value)
	{
		___error_1 = value;
		Il2CppCodeGenWriteBarrier(&___error_1, value);
	}

	inline static int32_t get_offset_of_leaderboardsList_2() { return static_cast<int32_t>(offsetof(AMN_RequestLeaderboardsResult_t1503469369, ___leaderboardsList_2)); }
	inline List_1_t3410611094 * get_leaderboardsList_2() const { return ___leaderboardsList_2; }
	inline List_1_t3410611094 ** get_address_of_leaderboardsList_2() { return &___leaderboardsList_2; }
	inline void set_leaderboardsList_2(List_1_t3410611094 * value)
	{
		___leaderboardsList_2 = value;
		Il2CppCodeGenWriteBarrier(&___leaderboardsList_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
