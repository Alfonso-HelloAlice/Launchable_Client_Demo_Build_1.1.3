#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_GP_InvitationType3295179663.h"

// System.String
struct String_t;
// GP_Participant
struct GP_Participant_t2884377673;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GP_Invite
struct  GP_Invite_t626929087  : public Il2CppObject
{
public:
	// System.String GP_Invite::Id
	String_t* ___Id_0;
	// System.Int64 GP_Invite::CreationTimestamp
	int64_t ___CreationTimestamp_1;
	// GP_InvitationType GP_Invite::InvitationType
	int32_t ___InvitationType_2;
	// System.Int32 GP_Invite::Variant
	int32_t ___Variant_3;
	// GP_Participant GP_Invite::Participant
	GP_Participant_t2884377673 * ___Participant_4;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(GP_Invite_t626929087, ___Id_0)); }
	inline String_t* get_Id_0() const { return ___Id_0; }
	inline String_t** get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(String_t* value)
	{
		___Id_0 = value;
		Il2CppCodeGenWriteBarrier(&___Id_0, value);
	}

	inline static int32_t get_offset_of_CreationTimestamp_1() { return static_cast<int32_t>(offsetof(GP_Invite_t626929087, ___CreationTimestamp_1)); }
	inline int64_t get_CreationTimestamp_1() const { return ___CreationTimestamp_1; }
	inline int64_t* get_address_of_CreationTimestamp_1() { return &___CreationTimestamp_1; }
	inline void set_CreationTimestamp_1(int64_t value)
	{
		___CreationTimestamp_1 = value;
	}

	inline static int32_t get_offset_of_InvitationType_2() { return static_cast<int32_t>(offsetof(GP_Invite_t626929087, ___InvitationType_2)); }
	inline int32_t get_InvitationType_2() const { return ___InvitationType_2; }
	inline int32_t* get_address_of_InvitationType_2() { return &___InvitationType_2; }
	inline void set_InvitationType_2(int32_t value)
	{
		___InvitationType_2 = value;
	}

	inline static int32_t get_offset_of_Variant_3() { return static_cast<int32_t>(offsetof(GP_Invite_t626929087, ___Variant_3)); }
	inline int32_t get_Variant_3() const { return ___Variant_3; }
	inline int32_t* get_address_of_Variant_3() { return &___Variant_3; }
	inline void set_Variant_3(int32_t value)
	{
		___Variant_3 = value;
	}

	inline static int32_t get_offset_of_Participant_4() { return static_cast<int32_t>(offsetof(GP_Invite_t626929087, ___Participant_4)); }
	inline GP_Participant_t2884377673 * get_Participant_4() const { return ___Participant_4; }
	inline GP_Participant_t2884377673 ** get_address_of_Participant_4() { return &___Participant_4; }
	inline void set_Participant_4(GP_Participant_t2884377673 * value)
	{
		___Participant_4 = value;
		Il2CppCodeGenWriteBarrier(&___Participant_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
