#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GP_SnapshotMeta
struct  GP_SnapshotMeta_t1354779439  : public Il2CppObject
{
public:
	// System.String GP_SnapshotMeta::Title
	String_t* ___Title_0;
	// System.String GP_SnapshotMeta::Description
	String_t* ___Description_1;
	// System.String GP_SnapshotMeta::CoverImageUrl
	String_t* ___CoverImageUrl_2;
	// System.Int64 GP_SnapshotMeta::LastModifiedTimestamp
	int64_t ___LastModifiedTimestamp_3;
	// System.Int64 GP_SnapshotMeta::TotalPlayedTime
	int64_t ___TotalPlayedTime_4;

public:
	inline static int32_t get_offset_of_Title_0() { return static_cast<int32_t>(offsetof(GP_SnapshotMeta_t1354779439, ___Title_0)); }
	inline String_t* get_Title_0() const { return ___Title_0; }
	inline String_t** get_address_of_Title_0() { return &___Title_0; }
	inline void set_Title_0(String_t* value)
	{
		___Title_0 = value;
		Il2CppCodeGenWriteBarrier(&___Title_0, value);
	}

	inline static int32_t get_offset_of_Description_1() { return static_cast<int32_t>(offsetof(GP_SnapshotMeta_t1354779439, ___Description_1)); }
	inline String_t* get_Description_1() const { return ___Description_1; }
	inline String_t** get_address_of_Description_1() { return &___Description_1; }
	inline void set_Description_1(String_t* value)
	{
		___Description_1 = value;
		Il2CppCodeGenWriteBarrier(&___Description_1, value);
	}

	inline static int32_t get_offset_of_CoverImageUrl_2() { return static_cast<int32_t>(offsetof(GP_SnapshotMeta_t1354779439, ___CoverImageUrl_2)); }
	inline String_t* get_CoverImageUrl_2() const { return ___CoverImageUrl_2; }
	inline String_t** get_address_of_CoverImageUrl_2() { return &___CoverImageUrl_2; }
	inline void set_CoverImageUrl_2(String_t* value)
	{
		___CoverImageUrl_2 = value;
		Il2CppCodeGenWriteBarrier(&___CoverImageUrl_2, value);
	}

	inline static int32_t get_offset_of_LastModifiedTimestamp_3() { return static_cast<int32_t>(offsetof(GP_SnapshotMeta_t1354779439, ___LastModifiedTimestamp_3)); }
	inline int64_t get_LastModifiedTimestamp_3() const { return ___LastModifiedTimestamp_3; }
	inline int64_t* get_address_of_LastModifiedTimestamp_3() { return &___LastModifiedTimestamp_3; }
	inline void set_LastModifiedTimestamp_3(int64_t value)
	{
		___LastModifiedTimestamp_3 = value;
	}

	inline static int32_t get_offset_of_TotalPlayedTime_4() { return static_cast<int32_t>(offsetof(GP_SnapshotMeta_t1354779439, ___TotalPlayedTime_4)); }
	inline int64_t get_TotalPlayedTime_4() const { return ___TotalPlayedTime_4; }
	inline int64_t* get_address_of_TotalPlayedTime_4() { return &___TotalPlayedTime_4; }
	inline void set_TotalPlayedTime_4(int64_t value)
	{
		___TotalPlayedTime_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
