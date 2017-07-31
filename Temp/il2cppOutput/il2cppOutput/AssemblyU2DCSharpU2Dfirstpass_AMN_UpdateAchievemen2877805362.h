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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AMN_UpdateAchievementResult
struct  AMN_UpdateAchievementResult_t2877805362  : public AMN_Result_t4157453776
{
public:
	// System.String AMN_UpdateAchievementResult::error
	String_t* ___error_1;
	// System.String AMN_UpdateAchievementResult::achievementID
	String_t* ___achievementID_2;

public:
	inline static int32_t get_offset_of_error_1() { return static_cast<int32_t>(offsetof(AMN_UpdateAchievementResult_t2877805362, ___error_1)); }
	inline String_t* get_error_1() const { return ___error_1; }
	inline String_t** get_address_of_error_1() { return &___error_1; }
	inline void set_error_1(String_t* value)
	{
		___error_1 = value;
		Il2CppCodeGenWriteBarrier(&___error_1, value);
	}

	inline static int32_t get_offset_of_achievementID_2() { return static_cast<int32_t>(offsetof(AMN_UpdateAchievementResult_t2877805362, ___achievementID_2)); }
	inline String_t* get_achievementID_2() const { return ___achievementID_2; }
	inline String_t** get_address_of_achievementID_2() { return &___achievementID_2; }
	inline void set_achievementID_2(String_t* value)
	{
		___achievementID_2 = value;
		Il2CppCodeGenWriteBarrier(&___achievementID_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
