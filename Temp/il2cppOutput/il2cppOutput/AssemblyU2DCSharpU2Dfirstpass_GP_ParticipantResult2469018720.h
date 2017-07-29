#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_GP_TBM_ParticipantRe1952842762.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GP_ParticipantResult
struct  GP_ParticipantResult_t2469018720  : public Il2CppObject
{
public:
	// System.Int32 GP_ParticipantResult::_Placing
	int32_t ____Placing_0;
	// GP_TBM_ParticipantResult GP_ParticipantResult::_Result
	int32_t ____Result_1;
	// System.Int32 GP_ParticipantResult::_VersionCode
	int32_t ____VersionCode_2;
	// System.String GP_ParticipantResult::_ParticipantId
	String_t* ____ParticipantId_3;

public:
	inline static int32_t get_offset_of__Placing_0() { return static_cast<int32_t>(offsetof(GP_ParticipantResult_t2469018720, ____Placing_0)); }
	inline int32_t get__Placing_0() const { return ____Placing_0; }
	inline int32_t* get_address_of__Placing_0() { return &____Placing_0; }
	inline void set__Placing_0(int32_t value)
	{
		____Placing_0 = value;
	}

	inline static int32_t get_offset_of__Result_1() { return static_cast<int32_t>(offsetof(GP_ParticipantResult_t2469018720, ____Result_1)); }
	inline int32_t get__Result_1() const { return ____Result_1; }
	inline int32_t* get_address_of__Result_1() { return &____Result_1; }
	inline void set__Result_1(int32_t value)
	{
		____Result_1 = value;
	}

	inline static int32_t get_offset_of__VersionCode_2() { return static_cast<int32_t>(offsetof(GP_ParticipantResult_t2469018720, ____VersionCode_2)); }
	inline int32_t get__VersionCode_2() const { return ____VersionCode_2; }
	inline int32_t* get_address_of__VersionCode_2() { return &____VersionCode_2; }
	inline void set__VersionCode_2(int32_t value)
	{
		____VersionCode_2 = value;
	}

	inline static int32_t get_offset_of__ParticipantId_3() { return static_cast<int32_t>(offsetof(GP_ParticipantResult_t2469018720, ____ParticipantId_3)); }
	inline String_t* get__ParticipantId_3() const { return ____ParticipantId_3; }
	inline String_t** get_address_of__ParticipantId_3() { return &____ParticipantId_3; }
	inline void set__ParticipantId_3(String_t* value)
	{
		____ParticipantId_3 = value;
		Il2CppCodeGenWriteBarrier(&____ParticipantId_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
