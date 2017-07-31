#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Pattern_Si1467556855.h"

// System.Action`1<System.String>
struct Action_1_t1831019615;
// System.Action`1<GP_GCM_RegistrationResult>
struct Action_1_t2694291500;
// System.Action`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>>
struct Action_2_t2514582953;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleCloudMessageService
struct  GoogleCloudMessageService_t984991750  : public Singleton_1_t1467556855
{
public:
	// System.String GoogleCloudMessageService::_lastMessage
	String_t* ____lastMessage_9;
	// System.String GoogleCloudMessageService::_registrationId
	String_t* ____registrationId_10;

public:
	inline static int32_t get_offset_of__lastMessage_9() { return static_cast<int32_t>(offsetof(GoogleCloudMessageService_t984991750, ____lastMessage_9)); }
	inline String_t* get__lastMessage_9() const { return ____lastMessage_9; }
	inline String_t** get_address_of__lastMessage_9() { return &____lastMessage_9; }
	inline void set__lastMessage_9(String_t* value)
	{
		____lastMessage_9 = value;
		Il2CppCodeGenWriteBarrier(&____lastMessage_9, value);
	}

	inline static int32_t get_offset_of__registrationId_10() { return static_cast<int32_t>(offsetof(GoogleCloudMessageService_t984991750, ____registrationId_10)); }
	inline String_t* get__registrationId_10() const { return ____registrationId_10; }
	inline String_t** get_address_of__registrationId_10() { return &____registrationId_10; }
	inline void set__registrationId_10(String_t* value)
	{
		____registrationId_10 = value;
		Il2CppCodeGenWriteBarrier(&____registrationId_10, value);
	}
};

struct GoogleCloudMessageService_t984991750_StaticFields
{
public:
	// System.Action`1<System.String> GoogleCloudMessageService::ActionCouldMessageLoaded
	Action_1_t1831019615 * ___ActionCouldMessageLoaded_4;
	// System.Action`1<GP_GCM_RegistrationResult> GoogleCloudMessageService::ActionCMDRegistrationResult
	Action_1_t2694291500 * ___ActionCMDRegistrationResult_5;
	// System.Action`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>> GoogleCloudMessageService::ActionGCMPushLaunched
	Action_2_t2514582953 * ___ActionGCMPushLaunched_6;
	// System.Action`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>> GoogleCloudMessageService::ActionGCMPushReceived
	Action_2_t2514582953 * ___ActionGCMPushReceived_7;
	// System.Action`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>> GoogleCloudMessageService::ActionParsePushReceived
	Action_2_t2514582953 * ___ActionParsePushReceived_8;

public:
	inline static int32_t get_offset_of_ActionCouldMessageLoaded_4() { return static_cast<int32_t>(offsetof(GoogleCloudMessageService_t984991750_StaticFields, ___ActionCouldMessageLoaded_4)); }
	inline Action_1_t1831019615 * get_ActionCouldMessageLoaded_4() const { return ___ActionCouldMessageLoaded_4; }
	inline Action_1_t1831019615 ** get_address_of_ActionCouldMessageLoaded_4() { return &___ActionCouldMessageLoaded_4; }
	inline void set_ActionCouldMessageLoaded_4(Action_1_t1831019615 * value)
	{
		___ActionCouldMessageLoaded_4 = value;
		Il2CppCodeGenWriteBarrier(&___ActionCouldMessageLoaded_4, value);
	}

	inline static int32_t get_offset_of_ActionCMDRegistrationResult_5() { return static_cast<int32_t>(offsetof(GoogleCloudMessageService_t984991750_StaticFields, ___ActionCMDRegistrationResult_5)); }
	inline Action_1_t2694291500 * get_ActionCMDRegistrationResult_5() const { return ___ActionCMDRegistrationResult_5; }
	inline Action_1_t2694291500 ** get_address_of_ActionCMDRegistrationResult_5() { return &___ActionCMDRegistrationResult_5; }
	inline void set_ActionCMDRegistrationResult_5(Action_1_t2694291500 * value)
	{
		___ActionCMDRegistrationResult_5 = value;
		Il2CppCodeGenWriteBarrier(&___ActionCMDRegistrationResult_5, value);
	}

	inline static int32_t get_offset_of_ActionGCMPushLaunched_6() { return static_cast<int32_t>(offsetof(GoogleCloudMessageService_t984991750_StaticFields, ___ActionGCMPushLaunched_6)); }
	inline Action_2_t2514582953 * get_ActionGCMPushLaunched_6() const { return ___ActionGCMPushLaunched_6; }
	inline Action_2_t2514582953 ** get_address_of_ActionGCMPushLaunched_6() { return &___ActionGCMPushLaunched_6; }
	inline void set_ActionGCMPushLaunched_6(Action_2_t2514582953 * value)
	{
		___ActionGCMPushLaunched_6 = value;
		Il2CppCodeGenWriteBarrier(&___ActionGCMPushLaunched_6, value);
	}

	inline static int32_t get_offset_of_ActionGCMPushReceived_7() { return static_cast<int32_t>(offsetof(GoogleCloudMessageService_t984991750_StaticFields, ___ActionGCMPushReceived_7)); }
	inline Action_2_t2514582953 * get_ActionGCMPushReceived_7() const { return ___ActionGCMPushReceived_7; }
	inline Action_2_t2514582953 ** get_address_of_ActionGCMPushReceived_7() { return &___ActionGCMPushReceived_7; }
	inline void set_ActionGCMPushReceived_7(Action_2_t2514582953 * value)
	{
		___ActionGCMPushReceived_7 = value;
		Il2CppCodeGenWriteBarrier(&___ActionGCMPushReceived_7, value);
	}

	inline static int32_t get_offset_of_ActionParsePushReceived_8() { return static_cast<int32_t>(offsetof(GoogleCloudMessageService_t984991750_StaticFields, ___ActionParsePushReceived_8)); }
	inline Action_2_t2514582953 * get_ActionParsePushReceived_8() const { return ___ActionParsePushReceived_8; }
	inline Action_2_t2514582953 ** get_address_of_ActionParsePushReceived_8() { return &___ActionParsePushReceived_8; }
	inline void set_ActionParsePushReceived_8(Action_2_t2514582953 * value)
	{
		___ActionParsePushReceived_8 = value;
		Il2CppCodeGenWriteBarrier(&___ActionParsePushReceived_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
