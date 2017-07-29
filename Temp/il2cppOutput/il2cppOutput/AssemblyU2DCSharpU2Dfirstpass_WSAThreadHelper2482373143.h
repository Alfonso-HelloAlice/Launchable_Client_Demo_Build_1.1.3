#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// WSAThreadHelper
struct WSAThreadHelper_t2482373143;
// System.Collections.Generic.List`1<System.Action>
struct List_1_t2595592884;
// System.Collections.Generic.List`1<WSAThreadHelper/DelayedQueueItem>
struct List_1_t2381171656;
// System.Func`2<WSAThreadHelper/DelayedQueueItem,System.Boolean>
struct Func_2_t3616164803;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WSAThreadHelper
struct  WSAThreadHelper_t2482373143  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 WSAThreadHelper::_count
	int32_t ____count_5;
	// System.Collections.Generic.List`1<System.Action> WSAThreadHelper::_actions
	List_1_t2595592884 * ____actions_7;
	// System.Collections.Generic.List`1<WSAThreadHelper/DelayedQueueItem> WSAThreadHelper::_delayed
	List_1_t2381171656 * ____delayed_8;
	// System.Collections.Generic.List`1<WSAThreadHelper/DelayedQueueItem> WSAThreadHelper::_currentDelayed
	List_1_t2381171656 * ____currentDelayed_9;
	// System.Collections.Generic.List`1<System.Action> WSAThreadHelper::_currentActions
	List_1_t2595592884 * ____currentActions_10;

public:
	inline static int32_t get_offset_of__count_5() { return static_cast<int32_t>(offsetof(WSAThreadHelper_t2482373143, ____count_5)); }
	inline int32_t get__count_5() const { return ____count_5; }
	inline int32_t* get_address_of__count_5() { return &____count_5; }
	inline void set__count_5(int32_t value)
	{
		____count_5 = value;
	}

	inline static int32_t get_offset_of__actions_7() { return static_cast<int32_t>(offsetof(WSAThreadHelper_t2482373143, ____actions_7)); }
	inline List_1_t2595592884 * get__actions_7() const { return ____actions_7; }
	inline List_1_t2595592884 ** get_address_of__actions_7() { return &____actions_7; }
	inline void set__actions_7(List_1_t2595592884 * value)
	{
		____actions_7 = value;
		Il2CppCodeGenWriteBarrier(&____actions_7, value);
	}

	inline static int32_t get_offset_of__delayed_8() { return static_cast<int32_t>(offsetof(WSAThreadHelper_t2482373143, ____delayed_8)); }
	inline List_1_t2381171656 * get__delayed_8() const { return ____delayed_8; }
	inline List_1_t2381171656 ** get_address_of__delayed_8() { return &____delayed_8; }
	inline void set__delayed_8(List_1_t2381171656 * value)
	{
		____delayed_8 = value;
		Il2CppCodeGenWriteBarrier(&____delayed_8, value);
	}

	inline static int32_t get_offset_of__currentDelayed_9() { return static_cast<int32_t>(offsetof(WSAThreadHelper_t2482373143, ____currentDelayed_9)); }
	inline List_1_t2381171656 * get__currentDelayed_9() const { return ____currentDelayed_9; }
	inline List_1_t2381171656 ** get_address_of__currentDelayed_9() { return &____currentDelayed_9; }
	inline void set__currentDelayed_9(List_1_t2381171656 * value)
	{
		____currentDelayed_9 = value;
		Il2CppCodeGenWriteBarrier(&____currentDelayed_9, value);
	}

	inline static int32_t get_offset_of__currentActions_10() { return static_cast<int32_t>(offsetof(WSAThreadHelper_t2482373143, ____currentActions_10)); }
	inline List_1_t2595592884 * get__currentActions_10() const { return ____currentActions_10; }
	inline List_1_t2595592884 ** get_address_of__currentActions_10() { return &____currentActions_10; }
	inline void set__currentActions_10(List_1_t2595592884 * value)
	{
		____currentActions_10 = value;
		Il2CppCodeGenWriteBarrier(&____currentActions_10, value);
	}
};

struct WSAThreadHelper_t2482373143_StaticFields
{
public:
	// System.Int32 WSAThreadHelper::maxThreads
	int32_t ___maxThreads_2;
	// System.Int32 WSAThreadHelper::numThreads
	int32_t ___numThreads_3;
	// WSAThreadHelper WSAThreadHelper::_current
	WSAThreadHelper_t2482373143 * ____current_4;
	// System.Boolean WSAThreadHelper::initialized
	bool ___initialized_6;
	// System.Func`2<WSAThreadHelper/DelayedQueueItem,System.Boolean> WSAThreadHelper::<>f__am$cache0
	Func_2_t3616164803 * ___U3CU3Ef__amU24cache0_11;

public:
	inline static int32_t get_offset_of_maxThreads_2() { return static_cast<int32_t>(offsetof(WSAThreadHelper_t2482373143_StaticFields, ___maxThreads_2)); }
	inline int32_t get_maxThreads_2() const { return ___maxThreads_2; }
	inline int32_t* get_address_of_maxThreads_2() { return &___maxThreads_2; }
	inline void set_maxThreads_2(int32_t value)
	{
		___maxThreads_2 = value;
	}

	inline static int32_t get_offset_of_numThreads_3() { return static_cast<int32_t>(offsetof(WSAThreadHelper_t2482373143_StaticFields, ___numThreads_3)); }
	inline int32_t get_numThreads_3() const { return ___numThreads_3; }
	inline int32_t* get_address_of_numThreads_3() { return &___numThreads_3; }
	inline void set_numThreads_3(int32_t value)
	{
		___numThreads_3 = value;
	}

	inline static int32_t get_offset_of__current_4() { return static_cast<int32_t>(offsetof(WSAThreadHelper_t2482373143_StaticFields, ____current_4)); }
	inline WSAThreadHelper_t2482373143 * get__current_4() const { return ____current_4; }
	inline WSAThreadHelper_t2482373143 ** get_address_of__current_4() { return &____current_4; }
	inline void set__current_4(WSAThreadHelper_t2482373143 * value)
	{
		____current_4 = value;
		Il2CppCodeGenWriteBarrier(&____current_4, value);
	}

	inline static int32_t get_offset_of_initialized_6() { return static_cast<int32_t>(offsetof(WSAThreadHelper_t2482373143_StaticFields, ___initialized_6)); }
	inline bool get_initialized_6() const { return ___initialized_6; }
	inline bool* get_address_of_initialized_6() { return &___initialized_6; }
	inline void set_initialized_6(bool value)
	{
		___initialized_6 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_11() { return static_cast<int32_t>(offsetof(WSAThreadHelper_t2482373143_StaticFields, ___U3CU3Ef__amU24cache0_11)); }
	inline Func_2_t3616164803 * get_U3CU3Ef__amU24cache0_11() const { return ___U3CU3Ef__amU24cache0_11; }
	inline Func_2_t3616164803 ** get_address_of_U3CU3Ef__amU24cache0_11() { return &___U3CU3Ef__amU24cache0_11; }
	inline void set_U3CU3Ef__amU24cache0_11(Func_2_t3616164803 * value)
	{
		___U3CU3Ef__amU24cache0_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
