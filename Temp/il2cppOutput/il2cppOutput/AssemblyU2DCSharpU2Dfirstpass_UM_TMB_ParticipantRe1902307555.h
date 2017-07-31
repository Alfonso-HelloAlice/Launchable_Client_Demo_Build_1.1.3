#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UM_TBM_Outcome103888435.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UM_TMB_ParticipantResult
struct  UM_TMB_ParticipantResult_t1902307555  : public Il2CppObject
{
public:
	// System.String UM_TMB_ParticipantResult::_ParticipantId
	String_t* ____ParticipantId_0;
	// UM_TBM_Outcome UM_TMB_ParticipantResult::_Outcome
	int32_t ____Outcome_1;

public:
	inline static int32_t get_offset_of__ParticipantId_0() { return static_cast<int32_t>(offsetof(UM_TMB_ParticipantResult_t1902307555, ____ParticipantId_0)); }
	inline String_t* get__ParticipantId_0() const { return ____ParticipantId_0; }
	inline String_t** get_address_of__ParticipantId_0() { return &____ParticipantId_0; }
	inline void set__ParticipantId_0(String_t* value)
	{
		____ParticipantId_0 = value;
		Il2CppCodeGenWriteBarrier(&____ParticipantId_0, value);
	}

	inline static int32_t get_offset_of__Outcome_1() { return static_cast<int32_t>(offsetof(UM_TMB_ParticipantResult_t1902307555, ____Outcome_1)); }
	inline int32_t get__Outcome_1() const { return ____Outcome_1; }
	inline int32_t* get_address_of__Outcome_1() { return &____Outcome_1; }
	inline void set__Outcome_1(int32_t value)
	{
		____Outcome_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
