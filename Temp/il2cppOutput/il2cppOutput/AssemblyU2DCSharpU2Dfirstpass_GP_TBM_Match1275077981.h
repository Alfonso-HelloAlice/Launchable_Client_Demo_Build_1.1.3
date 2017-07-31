#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_GP_TBM_MatchStatus2102223509.h"
#include "AssemblyU2DCSharpU2Dfirstpass_GP_TBM_MatchTurnStat2221730550.h"

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Collections.Generic.List`1<GP_Participant>
struct List_1_t2253498805;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GP_TBM_Match
struct  GP_TBM_Match_t1275077981  : public Il2CppObject
{
public:
	// System.String GP_TBM_Match::Id
	String_t* ___Id_0;
	// System.String GP_TBM_Match::RematchId
	String_t* ___RematchId_1;
	// System.String GP_TBM_Match::CreatorId
	String_t* ___CreatorId_2;
	// System.String GP_TBM_Match::LastUpdaterId
	String_t* ___LastUpdaterId_3;
	// System.String GP_TBM_Match::PendingParticipantId
	String_t* ___PendingParticipantId_4;
	// System.Int32 GP_TBM_Match::MatchNumber
	int32_t ___MatchNumber_5;
	// System.String GP_TBM_Match::Description
	String_t* ___Description_6;
	// System.Int32 GP_TBM_Match::AvailableAutoMatchSlots
	int32_t ___AvailableAutoMatchSlots_7;
	// System.Int64 GP_TBM_Match::CreationTimestamp
	int64_t ___CreationTimestamp_8;
	// System.Int64 GP_TBM_Match::LastUpdatedTimestamp
	int64_t ___LastUpdatedTimestamp_9;
	// GP_TBM_MatchStatus GP_TBM_Match::Status
	int32_t ___Status_10;
	// GP_TBM_MatchTurnStatus GP_TBM_Match::TurnStatus
	int32_t ___TurnStatus_11;
	// System.Boolean GP_TBM_Match::CanRematch
	bool ___CanRematch_12;
	// System.Int32 GP_TBM_Match::Variant
	int32_t ___Variant_13;
	// System.Int32 GP_TBM_Match::Version
	int32_t ___Version_14;
	// System.Byte[] GP_TBM_Match::Data
	ByteU5BU5D_t3397334013* ___Data_15;
	// System.Byte[] GP_TBM_Match::PreviousMatchData
	ByteU5BU5D_t3397334013* ___PreviousMatchData_16;
	// System.Collections.Generic.List`1<GP_Participant> GP_TBM_Match::Participants
	List_1_t2253498805 * ___Participants_17;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(GP_TBM_Match_t1275077981, ___Id_0)); }
	inline String_t* get_Id_0() const { return ___Id_0; }
	inline String_t** get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(String_t* value)
	{
		___Id_0 = value;
		Il2CppCodeGenWriteBarrier(&___Id_0, value);
	}

	inline static int32_t get_offset_of_RematchId_1() { return static_cast<int32_t>(offsetof(GP_TBM_Match_t1275077981, ___RematchId_1)); }
	inline String_t* get_RematchId_1() const { return ___RematchId_1; }
	inline String_t** get_address_of_RematchId_1() { return &___RematchId_1; }
	inline void set_RematchId_1(String_t* value)
	{
		___RematchId_1 = value;
		Il2CppCodeGenWriteBarrier(&___RematchId_1, value);
	}

	inline static int32_t get_offset_of_CreatorId_2() { return static_cast<int32_t>(offsetof(GP_TBM_Match_t1275077981, ___CreatorId_2)); }
	inline String_t* get_CreatorId_2() const { return ___CreatorId_2; }
	inline String_t** get_address_of_CreatorId_2() { return &___CreatorId_2; }
	inline void set_CreatorId_2(String_t* value)
	{
		___CreatorId_2 = value;
		Il2CppCodeGenWriteBarrier(&___CreatorId_2, value);
	}

	inline static int32_t get_offset_of_LastUpdaterId_3() { return static_cast<int32_t>(offsetof(GP_TBM_Match_t1275077981, ___LastUpdaterId_3)); }
	inline String_t* get_LastUpdaterId_3() const { return ___LastUpdaterId_3; }
	inline String_t** get_address_of_LastUpdaterId_3() { return &___LastUpdaterId_3; }
	inline void set_LastUpdaterId_3(String_t* value)
	{
		___LastUpdaterId_3 = value;
		Il2CppCodeGenWriteBarrier(&___LastUpdaterId_3, value);
	}

	inline static int32_t get_offset_of_PendingParticipantId_4() { return static_cast<int32_t>(offsetof(GP_TBM_Match_t1275077981, ___PendingParticipantId_4)); }
	inline String_t* get_PendingParticipantId_4() const { return ___PendingParticipantId_4; }
	inline String_t** get_address_of_PendingParticipantId_4() { return &___PendingParticipantId_4; }
	inline void set_PendingParticipantId_4(String_t* value)
	{
		___PendingParticipantId_4 = value;
		Il2CppCodeGenWriteBarrier(&___PendingParticipantId_4, value);
	}

	inline static int32_t get_offset_of_MatchNumber_5() { return static_cast<int32_t>(offsetof(GP_TBM_Match_t1275077981, ___MatchNumber_5)); }
	inline int32_t get_MatchNumber_5() const { return ___MatchNumber_5; }
	inline int32_t* get_address_of_MatchNumber_5() { return &___MatchNumber_5; }
	inline void set_MatchNumber_5(int32_t value)
	{
		___MatchNumber_5 = value;
	}

	inline static int32_t get_offset_of_Description_6() { return static_cast<int32_t>(offsetof(GP_TBM_Match_t1275077981, ___Description_6)); }
	inline String_t* get_Description_6() const { return ___Description_6; }
	inline String_t** get_address_of_Description_6() { return &___Description_6; }
	inline void set_Description_6(String_t* value)
	{
		___Description_6 = value;
		Il2CppCodeGenWriteBarrier(&___Description_6, value);
	}

	inline static int32_t get_offset_of_AvailableAutoMatchSlots_7() { return static_cast<int32_t>(offsetof(GP_TBM_Match_t1275077981, ___AvailableAutoMatchSlots_7)); }
	inline int32_t get_AvailableAutoMatchSlots_7() const { return ___AvailableAutoMatchSlots_7; }
	inline int32_t* get_address_of_AvailableAutoMatchSlots_7() { return &___AvailableAutoMatchSlots_7; }
	inline void set_AvailableAutoMatchSlots_7(int32_t value)
	{
		___AvailableAutoMatchSlots_7 = value;
	}

	inline static int32_t get_offset_of_CreationTimestamp_8() { return static_cast<int32_t>(offsetof(GP_TBM_Match_t1275077981, ___CreationTimestamp_8)); }
	inline int64_t get_CreationTimestamp_8() const { return ___CreationTimestamp_8; }
	inline int64_t* get_address_of_CreationTimestamp_8() { return &___CreationTimestamp_8; }
	inline void set_CreationTimestamp_8(int64_t value)
	{
		___CreationTimestamp_8 = value;
	}

	inline static int32_t get_offset_of_LastUpdatedTimestamp_9() { return static_cast<int32_t>(offsetof(GP_TBM_Match_t1275077981, ___LastUpdatedTimestamp_9)); }
	inline int64_t get_LastUpdatedTimestamp_9() const { return ___LastUpdatedTimestamp_9; }
	inline int64_t* get_address_of_LastUpdatedTimestamp_9() { return &___LastUpdatedTimestamp_9; }
	inline void set_LastUpdatedTimestamp_9(int64_t value)
	{
		___LastUpdatedTimestamp_9 = value;
	}

	inline static int32_t get_offset_of_Status_10() { return static_cast<int32_t>(offsetof(GP_TBM_Match_t1275077981, ___Status_10)); }
	inline int32_t get_Status_10() const { return ___Status_10; }
	inline int32_t* get_address_of_Status_10() { return &___Status_10; }
	inline void set_Status_10(int32_t value)
	{
		___Status_10 = value;
	}

	inline static int32_t get_offset_of_TurnStatus_11() { return static_cast<int32_t>(offsetof(GP_TBM_Match_t1275077981, ___TurnStatus_11)); }
	inline int32_t get_TurnStatus_11() const { return ___TurnStatus_11; }
	inline int32_t* get_address_of_TurnStatus_11() { return &___TurnStatus_11; }
	inline void set_TurnStatus_11(int32_t value)
	{
		___TurnStatus_11 = value;
	}

	inline static int32_t get_offset_of_CanRematch_12() { return static_cast<int32_t>(offsetof(GP_TBM_Match_t1275077981, ___CanRematch_12)); }
	inline bool get_CanRematch_12() const { return ___CanRematch_12; }
	inline bool* get_address_of_CanRematch_12() { return &___CanRematch_12; }
	inline void set_CanRematch_12(bool value)
	{
		___CanRematch_12 = value;
	}

	inline static int32_t get_offset_of_Variant_13() { return static_cast<int32_t>(offsetof(GP_TBM_Match_t1275077981, ___Variant_13)); }
	inline int32_t get_Variant_13() const { return ___Variant_13; }
	inline int32_t* get_address_of_Variant_13() { return &___Variant_13; }
	inline void set_Variant_13(int32_t value)
	{
		___Variant_13 = value;
	}

	inline static int32_t get_offset_of_Version_14() { return static_cast<int32_t>(offsetof(GP_TBM_Match_t1275077981, ___Version_14)); }
	inline int32_t get_Version_14() const { return ___Version_14; }
	inline int32_t* get_address_of_Version_14() { return &___Version_14; }
	inline void set_Version_14(int32_t value)
	{
		___Version_14 = value;
	}

	inline static int32_t get_offset_of_Data_15() { return static_cast<int32_t>(offsetof(GP_TBM_Match_t1275077981, ___Data_15)); }
	inline ByteU5BU5D_t3397334013* get_Data_15() const { return ___Data_15; }
	inline ByteU5BU5D_t3397334013** get_address_of_Data_15() { return &___Data_15; }
	inline void set_Data_15(ByteU5BU5D_t3397334013* value)
	{
		___Data_15 = value;
		Il2CppCodeGenWriteBarrier(&___Data_15, value);
	}

	inline static int32_t get_offset_of_PreviousMatchData_16() { return static_cast<int32_t>(offsetof(GP_TBM_Match_t1275077981, ___PreviousMatchData_16)); }
	inline ByteU5BU5D_t3397334013* get_PreviousMatchData_16() const { return ___PreviousMatchData_16; }
	inline ByteU5BU5D_t3397334013** get_address_of_PreviousMatchData_16() { return &___PreviousMatchData_16; }
	inline void set_PreviousMatchData_16(ByteU5BU5D_t3397334013* value)
	{
		___PreviousMatchData_16 = value;
		Il2CppCodeGenWriteBarrier(&___PreviousMatchData_16, value);
	}

	inline static int32_t get_offset_of_Participants_17() { return static_cast<int32_t>(offsetof(GP_TBM_Match_t1275077981, ___Participants_17)); }
	inline List_1_t2253498805 * get_Participants_17() const { return ___Participants_17; }
	inline List_1_t2253498805 ** get_address_of_Participants_17() { return &___Participants_17; }
	inline void set_Participants_17(List_1_t2253498805 * value)
	{
		___Participants_17 = value;
		Il2CppCodeGenWriteBarrier(&___Participants_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
