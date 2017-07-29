#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Pattern_Si3885929051.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SA_Fitness_Connectio1780278783.h"

// System.String
struct String_t;
// System.Action`1<SA.Fitness.ConnectionResult>
struct Action_1_t2608890867;
// System.Collections.Generic.List`1<SA.Fitness.LoginApi>
struct List_1_t3336846181;
// System.Collections.Generic.List`1<SA.Fitness.LoginScope>
struct List_1_t3495431899;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Fitness.Connection
struct  Connection_t3403363946  : public Singleton_1_t3885929051
{
public:
	// System.Action`1<SA.Fitness.ConnectionResult> SA.Fitness.Connection::OnConnectionFinished
	Action_1_t2608890867 * ___OnConnectionFinished_10;
	// System.Collections.Generic.List`1<SA.Fitness.LoginApi> SA.Fitness.Connection::apis
	List_1_t3336846181 * ___apis_11;
	// System.Collections.Generic.List`1<SA.Fitness.LoginScope> SA.Fitness.Connection::scopes
	List_1_t3495431899 * ___scopes_12;
	// SA.Fitness.ConnectionState SA.Fitness.Connection::connectionState
	int32_t ___connectionState_13;
	// System.Boolean SA.Fitness.Connection::shouldManageReconnection
	bool ___shouldManageReconnection_14;

public:
	inline static int32_t get_offset_of_OnConnectionFinished_10() { return static_cast<int32_t>(offsetof(Connection_t3403363946, ___OnConnectionFinished_10)); }
	inline Action_1_t2608890867 * get_OnConnectionFinished_10() const { return ___OnConnectionFinished_10; }
	inline Action_1_t2608890867 ** get_address_of_OnConnectionFinished_10() { return &___OnConnectionFinished_10; }
	inline void set_OnConnectionFinished_10(Action_1_t2608890867 * value)
	{
		___OnConnectionFinished_10 = value;
		Il2CppCodeGenWriteBarrier(&___OnConnectionFinished_10, value);
	}

	inline static int32_t get_offset_of_apis_11() { return static_cast<int32_t>(offsetof(Connection_t3403363946, ___apis_11)); }
	inline List_1_t3336846181 * get_apis_11() const { return ___apis_11; }
	inline List_1_t3336846181 ** get_address_of_apis_11() { return &___apis_11; }
	inline void set_apis_11(List_1_t3336846181 * value)
	{
		___apis_11 = value;
		Il2CppCodeGenWriteBarrier(&___apis_11, value);
	}

	inline static int32_t get_offset_of_scopes_12() { return static_cast<int32_t>(offsetof(Connection_t3403363946, ___scopes_12)); }
	inline List_1_t3495431899 * get_scopes_12() const { return ___scopes_12; }
	inline List_1_t3495431899 ** get_address_of_scopes_12() { return &___scopes_12; }
	inline void set_scopes_12(List_1_t3495431899 * value)
	{
		___scopes_12 = value;
		Il2CppCodeGenWriteBarrier(&___scopes_12, value);
	}

	inline static int32_t get_offset_of_connectionState_13() { return static_cast<int32_t>(offsetof(Connection_t3403363946, ___connectionState_13)); }
	inline int32_t get_connectionState_13() const { return ___connectionState_13; }
	inline int32_t* get_address_of_connectionState_13() { return &___connectionState_13; }
	inline void set_connectionState_13(int32_t value)
	{
		___connectionState_13 = value;
	}

	inline static int32_t get_offset_of_shouldManageReconnection_14() { return static_cast<int32_t>(offsetof(Connection_t3403363946, ___shouldManageReconnection_14)); }
	inline bool get_shouldManageReconnection_14() const { return ___shouldManageReconnection_14; }
	inline bool* get_address_of_shouldManageReconnection_14() { return &___shouldManageReconnection_14; }
	inline void set_shouldManageReconnection_14(bool value)
	{
		___shouldManageReconnection_14 = value;
	}
};

struct Connection_t3403363946_StaticFields
{
public:
	// System.Action`1<SA.Fitness.ConnectionResult> SA.Fitness.Connection::<>f__am$cache0
	Action_1_t2608890867 * ___U3CU3Ef__amU24cache0_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_15() { return static_cast<int32_t>(offsetof(Connection_t3403363946_StaticFields, ___U3CU3Ef__amU24cache0_15)); }
	inline Action_1_t2608890867 * get_U3CU3Ef__amU24cache0_15() const { return ___U3CU3Ef__amU24cache0_15; }
	inline Action_1_t2608890867 ** get_address_of_U3CU3Ef__amU24cache0_15() { return &___U3CU3Ef__amU24cache0_15; }
	inline void set_U3CU3Ef__amU24cache0_15(Action_1_t2608890867 * value)
	{
		___U3CU3Ef__amU24cache0_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
