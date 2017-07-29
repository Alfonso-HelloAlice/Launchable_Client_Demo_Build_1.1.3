#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Pattern_Sin830932694.h"
#include "AssemblyU2DCSharpU2Dfirstpass_GPConnectionState647346880.h"

// System.Action`1<GooglePlayConnectionResult>
struct Action_1_t2560518106;
// System.Action`1<GPConnectionState>
struct Action_1_t449146262;
// System.Action
struct Action_t3226471752;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayConnection
struct  GooglePlayConnection_t348367589  : public Singleton_1_t830932694
{
public:
	// System.Boolean GooglePlayConnection::_IsInitialized
	bool ____IsInitialized_8;

public:
	inline static int32_t get_offset_of__IsInitialized_8() { return static_cast<int32_t>(offsetof(GooglePlayConnection_t348367589, ____IsInitialized_8)); }
	inline bool get__IsInitialized_8() const { return ____IsInitialized_8; }
	inline bool* get_address_of__IsInitialized_8() { return &____IsInitialized_8; }
	inline void set__IsInitialized_8(bool value)
	{
		____IsInitialized_8 = value;
	}
};

struct GooglePlayConnection_t348367589_StaticFields
{
public:
	// System.Action`1<GooglePlayConnectionResult> GooglePlayConnection::ActionConnectionResultReceived
	Action_1_t2560518106 * ___ActionConnectionResultReceived_4;
	// System.Action`1<GPConnectionState> GooglePlayConnection::ActionConnectionStateChanged
	Action_1_t449146262 * ___ActionConnectionStateChanged_5;
	// System.Action GooglePlayConnection::ActionPlayerConnected
	Action_t3226471752 * ___ActionPlayerConnected_6;
	// System.Action GooglePlayConnection::ActionPlayerDisconnected
	Action_t3226471752 * ___ActionPlayerDisconnected_7;
	// GPConnectionState GooglePlayConnection::_State
	int32_t ____State_9;

public:
	inline static int32_t get_offset_of_ActionConnectionResultReceived_4() { return static_cast<int32_t>(offsetof(GooglePlayConnection_t348367589_StaticFields, ___ActionConnectionResultReceived_4)); }
	inline Action_1_t2560518106 * get_ActionConnectionResultReceived_4() const { return ___ActionConnectionResultReceived_4; }
	inline Action_1_t2560518106 ** get_address_of_ActionConnectionResultReceived_4() { return &___ActionConnectionResultReceived_4; }
	inline void set_ActionConnectionResultReceived_4(Action_1_t2560518106 * value)
	{
		___ActionConnectionResultReceived_4 = value;
		Il2CppCodeGenWriteBarrier(&___ActionConnectionResultReceived_4, value);
	}

	inline static int32_t get_offset_of_ActionConnectionStateChanged_5() { return static_cast<int32_t>(offsetof(GooglePlayConnection_t348367589_StaticFields, ___ActionConnectionStateChanged_5)); }
	inline Action_1_t449146262 * get_ActionConnectionStateChanged_5() const { return ___ActionConnectionStateChanged_5; }
	inline Action_1_t449146262 ** get_address_of_ActionConnectionStateChanged_5() { return &___ActionConnectionStateChanged_5; }
	inline void set_ActionConnectionStateChanged_5(Action_1_t449146262 * value)
	{
		___ActionConnectionStateChanged_5 = value;
		Il2CppCodeGenWriteBarrier(&___ActionConnectionStateChanged_5, value);
	}

	inline static int32_t get_offset_of_ActionPlayerConnected_6() { return static_cast<int32_t>(offsetof(GooglePlayConnection_t348367589_StaticFields, ___ActionPlayerConnected_6)); }
	inline Action_t3226471752 * get_ActionPlayerConnected_6() const { return ___ActionPlayerConnected_6; }
	inline Action_t3226471752 ** get_address_of_ActionPlayerConnected_6() { return &___ActionPlayerConnected_6; }
	inline void set_ActionPlayerConnected_6(Action_t3226471752 * value)
	{
		___ActionPlayerConnected_6 = value;
		Il2CppCodeGenWriteBarrier(&___ActionPlayerConnected_6, value);
	}

	inline static int32_t get_offset_of_ActionPlayerDisconnected_7() { return static_cast<int32_t>(offsetof(GooglePlayConnection_t348367589_StaticFields, ___ActionPlayerDisconnected_7)); }
	inline Action_t3226471752 * get_ActionPlayerDisconnected_7() const { return ___ActionPlayerDisconnected_7; }
	inline Action_t3226471752 ** get_address_of_ActionPlayerDisconnected_7() { return &___ActionPlayerDisconnected_7; }
	inline void set_ActionPlayerDisconnected_7(Action_t3226471752 * value)
	{
		___ActionPlayerDisconnected_7 = value;
		Il2CppCodeGenWriteBarrier(&___ActionPlayerDisconnected_7, value);
	}

	inline static int32_t get_offset_of__State_9() { return static_cast<int32_t>(offsetof(GooglePlayConnection_t348367589_StaticFields, ____State_9)); }
	inline int32_t get__State_9() const { return ____State_9; }
	inline int32_t* get_address_of__State_9() { return &____State_9; }
	inline void set__State_9(int32_t value)
	{
		____State_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
