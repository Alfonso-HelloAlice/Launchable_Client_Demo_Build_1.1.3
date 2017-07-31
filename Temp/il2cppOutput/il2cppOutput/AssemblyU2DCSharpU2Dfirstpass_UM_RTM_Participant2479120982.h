#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UM_RTM_ParticipantSta673276692.h"

// System.String
struct String_t;
// GP_Participant
struct GP_Participant_t2884377673;
// GK_Player
struct GK_Player_t2782008294;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UM_RTM_Participant
struct  UM_RTM_Participant_t2479120982  : public Il2CppObject
{
public:
	// System.String UM_RTM_Participant::_Id
	String_t* ____Id_0;
	// System.String UM_RTM_Participant::_Name
	String_t* ____Name_1;
	// UM_RTM_ParticipantStatus UM_RTM_Participant::_Status
	int32_t ____Status_2;
	// GP_Participant UM_RTM_Participant::_gpParticipant
	GP_Participant_t2884377673 * ____gpParticipant_3;
	// GK_Player UM_RTM_Participant::_gkPlayer
	GK_Player_t2782008294 * ____gkPlayer_4;

public:
	inline static int32_t get_offset_of__Id_0() { return static_cast<int32_t>(offsetof(UM_RTM_Participant_t2479120982, ____Id_0)); }
	inline String_t* get__Id_0() const { return ____Id_0; }
	inline String_t** get_address_of__Id_0() { return &____Id_0; }
	inline void set__Id_0(String_t* value)
	{
		____Id_0 = value;
		Il2CppCodeGenWriteBarrier(&____Id_0, value);
	}

	inline static int32_t get_offset_of__Name_1() { return static_cast<int32_t>(offsetof(UM_RTM_Participant_t2479120982, ____Name_1)); }
	inline String_t* get__Name_1() const { return ____Name_1; }
	inline String_t** get_address_of__Name_1() { return &____Name_1; }
	inline void set__Name_1(String_t* value)
	{
		____Name_1 = value;
		Il2CppCodeGenWriteBarrier(&____Name_1, value);
	}

	inline static int32_t get_offset_of__Status_2() { return static_cast<int32_t>(offsetof(UM_RTM_Participant_t2479120982, ____Status_2)); }
	inline int32_t get__Status_2() const { return ____Status_2; }
	inline int32_t* get_address_of__Status_2() { return &____Status_2; }
	inline void set__Status_2(int32_t value)
	{
		____Status_2 = value;
	}

	inline static int32_t get_offset_of__gpParticipant_3() { return static_cast<int32_t>(offsetof(UM_RTM_Participant_t2479120982, ____gpParticipant_3)); }
	inline GP_Participant_t2884377673 * get__gpParticipant_3() const { return ____gpParticipant_3; }
	inline GP_Participant_t2884377673 ** get_address_of__gpParticipant_3() { return &____gpParticipant_3; }
	inline void set__gpParticipant_3(GP_Participant_t2884377673 * value)
	{
		____gpParticipant_3 = value;
		Il2CppCodeGenWriteBarrier(&____gpParticipant_3, value);
	}

	inline static int32_t get_offset_of__gkPlayer_4() { return static_cast<int32_t>(offsetof(UM_RTM_Participant_t2479120982, ____gkPlayer_4)); }
	inline GK_Player_t2782008294 * get__gkPlayer_4() const { return ____gkPlayer_4; }
	inline GK_Player_t2782008294 ** get_address_of__gkPlayer_4() { return &____gkPlayer_4; }
	inline void set__gkPlayer_4(GK_Player_t2782008294 * value)
	{
		____gkPlayer_4 = value;
		Il2CppCodeGenWriteBarrier(&____gkPlayer_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
