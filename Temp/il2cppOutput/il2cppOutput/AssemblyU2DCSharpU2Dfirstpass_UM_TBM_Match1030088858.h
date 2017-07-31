#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UM_TBM_MatchStatus2012997728.h"

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// UM_TBM_Participant
struct UM_TBM_Participant_t1041318914;
// System.Collections.Generic.List`1<UM_TBM_Participant>
struct List_1_t410440046;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UM_TBM_Match
struct  UM_TBM_Match_t1030088858  : public Il2CppObject
{
public:
	// System.String UM_TBM_Match::_Id
	String_t* ____Id_0;
	// System.Byte[] UM_TBM_Match::_Data
	ByteU5BU5D_t3397334013* ____Data_1;
	// System.Boolean UM_TBM_Match::_IsCurrentPlayerTurn
	bool ____IsCurrentPlayerTurn_2;
	// UM_TBM_MatchStatus UM_TBM_Match::_Status
	int32_t ____Status_3;
	// UM_TBM_Participant UM_TBM_Match::_CurrentParticipant
	UM_TBM_Participant_t1041318914 * ____CurrentParticipant_4;
	// System.Collections.Generic.List`1<UM_TBM_Participant> UM_TBM_Match::_Participants
	List_1_t410440046 * ____Participants_5;

public:
	inline static int32_t get_offset_of__Id_0() { return static_cast<int32_t>(offsetof(UM_TBM_Match_t1030088858, ____Id_0)); }
	inline String_t* get__Id_0() const { return ____Id_0; }
	inline String_t** get_address_of__Id_0() { return &____Id_0; }
	inline void set__Id_0(String_t* value)
	{
		____Id_0 = value;
		Il2CppCodeGenWriteBarrier(&____Id_0, value);
	}

	inline static int32_t get_offset_of__Data_1() { return static_cast<int32_t>(offsetof(UM_TBM_Match_t1030088858, ____Data_1)); }
	inline ByteU5BU5D_t3397334013* get__Data_1() const { return ____Data_1; }
	inline ByteU5BU5D_t3397334013** get_address_of__Data_1() { return &____Data_1; }
	inline void set__Data_1(ByteU5BU5D_t3397334013* value)
	{
		____Data_1 = value;
		Il2CppCodeGenWriteBarrier(&____Data_1, value);
	}

	inline static int32_t get_offset_of__IsCurrentPlayerTurn_2() { return static_cast<int32_t>(offsetof(UM_TBM_Match_t1030088858, ____IsCurrentPlayerTurn_2)); }
	inline bool get__IsCurrentPlayerTurn_2() const { return ____IsCurrentPlayerTurn_2; }
	inline bool* get_address_of__IsCurrentPlayerTurn_2() { return &____IsCurrentPlayerTurn_2; }
	inline void set__IsCurrentPlayerTurn_2(bool value)
	{
		____IsCurrentPlayerTurn_2 = value;
	}

	inline static int32_t get_offset_of__Status_3() { return static_cast<int32_t>(offsetof(UM_TBM_Match_t1030088858, ____Status_3)); }
	inline int32_t get__Status_3() const { return ____Status_3; }
	inline int32_t* get_address_of__Status_3() { return &____Status_3; }
	inline void set__Status_3(int32_t value)
	{
		____Status_3 = value;
	}

	inline static int32_t get_offset_of__CurrentParticipant_4() { return static_cast<int32_t>(offsetof(UM_TBM_Match_t1030088858, ____CurrentParticipant_4)); }
	inline UM_TBM_Participant_t1041318914 * get__CurrentParticipant_4() const { return ____CurrentParticipant_4; }
	inline UM_TBM_Participant_t1041318914 ** get_address_of__CurrentParticipant_4() { return &____CurrentParticipant_4; }
	inline void set__CurrentParticipant_4(UM_TBM_Participant_t1041318914 * value)
	{
		____CurrentParticipant_4 = value;
		Il2CppCodeGenWriteBarrier(&____CurrentParticipant_4, value);
	}

	inline static int32_t get_offset_of__Participants_5() { return static_cast<int32_t>(offsetof(UM_TBM_Match_t1030088858, ____Participants_5)); }
	inline List_1_t410440046 * get__Participants_5() const { return ____Participants_5; }
	inline List_1_t410440046 ** get_address_of__Participants_5() { return &____Participants_5; }
	inline void set__Participants_5(List_1_t410440046 * value)
	{
		____Participants_5 = value;
		Il2CppCodeGenWriteBarrier(&____Participants_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
