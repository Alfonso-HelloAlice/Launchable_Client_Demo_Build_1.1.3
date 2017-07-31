#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_DateTime693205669.h"

// System.String
struct String_t;
// UM_TBM_Participant
struct UM_TBM_Participant_t1041318914;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UM_TBM_Invite
struct  UM_TBM_Invite_t618694780  : public Il2CppObject
{
public:
	// System.String UM_TBM_Invite::_Id
	String_t* ____Id_0;
	// System.DateTime UM_TBM_Invite::_CreationTimestamp
	DateTime_t693205669  ____CreationTimestamp_1;
	// UM_TBM_Participant UM_TBM_Invite::_Inviter
	UM_TBM_Participant_t1041318914 * ____Inviter_2;

public:
	inline static int32_t get_offset_of__Id_0() { return static_cast<int32_t>(offsetof(UM_TBM_Invite_t618694780, ____Id_0)); }
	inline String_t* get__Id_0() const { return ____Id_0; }
	inline String_t** get_address_of__Id_0() { return &____Id_0; }
	inline void set__Id_0(String_t* value)
	{
		____Id_0 = value;
		Il2CppCodeGenWriteBarrier(&____Id_0, value);
	}

	inline static int32_t get_offset_of__CreationTimestamp_1() { return static_cast<int32_t>(offsetof(UM_TBM_Invite_t618694780, ____CreationTimestamp_1)); }
	inline DateTime_t693205669  get__CreationTimestamp_1() const { return ____CreationTimestamp_1; }
	inline DateTime_t693205669 * get_address_of__CreationTimestamp_1() { return &____CreationTimestamp_1; }
	inline void set__CreationTimestamp_1(DateTime_t693205669  value)
	{
		____CreationTimestamp_1 = value;
	}

	inline static int32_t get_offset_of__Inviter_2() { return static_cast<int32_t>(offsetof(UM_TBM_Invite_t618694780, ____Inviter_2)); }
	inline UM_TBM_Participant_t1041318914 * get__Inviter_2() const { return ____Inviter_2; }
	inline UM_TBM_Participant_t1041318914 ** get_address_of__Inviter_2() { return &____Inviter_2; }
	inline void set__Inviter_2(UM_TBM_Participant_t1041318914 * value)
	{
		____Inviter_2 = value;
		Il2CppCodeGenWriteBarrier(&____Inviter_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
