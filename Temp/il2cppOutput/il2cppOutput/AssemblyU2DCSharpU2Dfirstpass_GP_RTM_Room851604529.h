#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_GP_RTM_RoomStatus2051988161.h"

// System.String
struct String_t;
// System.Collections.Generic.List`1<GP_Participant>
struct List_1_t2253498805;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GP_RTM_Room
struct  GP_RTM_Room_t851604529  : public Il2CppObject
{
public:
	// System.String GP_RTM_Room::id
	String_t* ___id_0;
	// System.String GP_RTM_Room::creatorId
	String_t* ___creatorId_1;
	// GP_RTM_RoomStatus GP_RTM_Room::status
	int32_t ___status_2;
	// System.Int64 GP_RTM_Room::creationTimestamp
	int64_t ___creationTimestamp_3;
	// System.Collections.Generic.List`1<GP_Participant> GP_RTM_Room::participants
	List_1_t2253498805 * ___participants_4;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(GP_RTM_Room_t851604529, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier(&___id_0, value);
	}

	inline static int32_t get_offset_of_creatorId_1() { return static_cast<int32_t>(offsetof(GP_RTM_Room_t851604529, ___creatorId_1)); }
	inline String_t* get_creatorId_1() const { return ___creatorId_1; }
	inline String_t** get_address_of_creatorId_1() { return &___creatorId_1; }
	inline void set_creatorId_1(String_t* value)
	{
		___creatorId_1 = value;
		Il2CppCodeGenWriteBarrier(&___creatorId_1, value);
	}

	inline static int32_t get_offset_of_status_2() { return static_cast<int32_t>(offsetof(GP_RTM_Room_t851604529, ___status_2)); }
	inline int32_t get_status_2() const { return ___status_2; }
	inline int32_t* get_address_of_status_2() { return &___status_2; }
	inline void set_status_2(int32_t value)
	{
		___status_2 = value;
	}

	inline static int32_t get_offset_of_creationTimestamp_3() { return static_cast<int32_t>(offsetof(GP_RTM_Room_t851604529, ___creationTimestamp_3)); }
	inline int64_t get_creationTimestamp_3() const { return ___creationTimestamp_3; }
	inline int64_t* get_address_of_creationTimestamp_3() { return &___creationTimestamp_3; }
	inline void set_creationTimestamp_3(int64_t value)
	{
		___creationTimestamp_3 = value;
	}

	inline static int32_t get_offset_of_participants_4() { return static_cast<int32_t>(offsetof(GP_RTM_Room_t851604529, ___participants_4)); }
	inline List_1_t2253498805 * get_participants_4() const { return ___participants_4; }
	inline List_1_t2253498805 ** get_address_of_participants_4() { return &___participants_4; }
	inline void set_participants_4(List_1_t2253498805 * value)
	{
		___participants_4 = value;
		Il2CppCodeGenWriteBarrier(&___participants_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
