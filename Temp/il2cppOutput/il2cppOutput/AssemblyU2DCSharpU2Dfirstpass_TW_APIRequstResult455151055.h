#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<TweetTemplate>
struct List_1_t2813612789;
// System.Collections.Generic.List`1<TwitterUserInfo>
struct List_1_t3751459168;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TW_APIRequstResult
struct  TW_APIRequstResult_t455151055  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<TweetTemplate> TW_APIRequstResult::tweets
	List_1_t2813612789 * ___tweets_0;
	// System.Collections.Generic.List`1<TwitterUserInfo> TW_APIRequstResult::users
	List_1_t3751459168 * ___users_1;
	// System.Collections.Generic.List`1<System.String> TW_APIRequstResult::ids
	List_1_t1398341365 * ___ids_2;
	// System.Boolean TW_APIRequstResult::_IsSucceeded
	bool ____IsSucceeded_3;
	// System.String TW_APIRequstResult::_data
	String_t* ____data_4;

public:
	inline static int32_t get_offset_of_tweets_0() { return static_cast<int32_t>(offsetof(TW_APIRequstResult_t455151055, ___tweets_0)); }
	inline List_1_t2813612789 * get_tweets_0() const { return ___tweets_0; }
	inline List_1_t2813612789 ** get_address_of_tweets_0() { return &___tweets_0; }
	inline void set_tweets_0(List_1_t2813612789 * value)
	{
		___tweets_0 = value;
		Il2CppCodeGenWriteBarrier(&___tweets_0, value);
	}

	inline static int32_t get_offset_of_users_1() { return static_cast<int32_t>(offsetof(TW_APIRequstResult_t455151055, ___users_1)); }
	inline List_1_t3751459168 * get_users_1() const { return ___users_1; }
	inline List_1_t3751459168 ** get_address_of_users_1() { return &___users_1; }
	inline void set_users_1(List_1_t3751459168 * value)
	{
		___users_1 = value;
		Il2CppCodeGenWriteBarrier(&___users_1, value);
	}

	inline static int32_t get_offset_of_ids_2() { return static_cast<int32_t>(offsetof(TW_APIRequstResult_t455151055, ___ids_2)); }
	inline List_1_t1398341365 * get_ids_2() const { return ___ids_2; }
	inline List_1_t1398341365 ** get_address_of_ids_2() { return &___ids_2; }
	inline void set_ids_2(List_1_t1398341365 * value)
	{
		___ids_2 = value;
		Il2CppCodeGenWriteBarrier(&___ids_2, value);
	}

	inline static int32_t get_offset_of__IsSucceeded_3() { return static_cast<int32_t>(offsetof(TW_APIRequstResult_t455151055, ____IsSucceeded_3)); }
	inline bool get__IsSucceeded_3() const { return ____IsSucceeded_3; }
	inline bool* get_address_of__IsSucceeded_3() { return &____IsSucceeded_3; }
	inline void set__IsSucceeded_3(bool value)
	{
		____IsSucceeded_3 = value;
	}

	inline static int32_t get_offset_of__data_4() { return static_cast<int32_t>(offsetof(TW_APIRequstResult_t455151055, ____data_4)); }
	inline String_t* get__data_4() const { return ____data_4; }
	inline String_t** get_address_of__data_4() { return &____data_4; }
	inline void set__data_4(String_t* value)
	{
		____data_4 = value;
		Il2CppCodeGenWriteBarrier(&____data_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
