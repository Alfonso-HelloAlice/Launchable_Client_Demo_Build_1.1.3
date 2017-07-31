#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>
struct Dictionary_2_t1064303623;
// System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>
struct Dictionary_2_t2002150002;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TwitterDataCash
struct  TwitterDataCash_t3686392272  : public Il2CppObject
{
public:

public:
};

struct TwitterDataCash_t3686392272_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,TweetTemplate> TwitterDataCash::tweets
	Dictionary_2_t1064303623 * ___tweets_0;
	// System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo> TwitterDataCash::users
	Dictionary_2_t2002150002 * ___users_1;

public:
	inline static int32_t get_offset_of_tweets_0() { return static_cast<int32_t>(offsetof(TwitterDataCash_t3686392272_StaticFields, ___tweets_0)); }
	inline Dictionary_2_t1064303623 * get_tweets_0() const { return ___tweets_0; }
	inline Dictionary_2_t1064303623 ** get_address_of_tweets_0() { return &___tweets_0; }
	inline void set_tweets_0(Dictionary_2_t1064303623 * value)
	{
		___tweets_0 = value;
		Il2CppCodeGenWriteBarrier(&___tweets_0, value);
	}

	inline static int32_t get_offset_of_users_1() { return static_cast<int32_t>(offsetof(TwitterDataCash_t3686392272_StaticFields, ___users_1)); }
	inline Dictionary_2_t2002150002 * get_users_1() const { return ___users_1; }
	inline Dictionary_2_t2002150002 ** get_address_of_users_1() { return &___users_1; }
	inline void set_users_1(Dictionary_2_t2002150002 * value)
	{
		___users_1 = value;
		Il2CppCodeGenWriteBarrier(&___users_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
