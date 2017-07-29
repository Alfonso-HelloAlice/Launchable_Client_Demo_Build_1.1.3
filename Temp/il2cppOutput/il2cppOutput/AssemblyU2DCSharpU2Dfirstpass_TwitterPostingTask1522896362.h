#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_AsyncTask1407929465.h"

// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// TwitterManagerInterface
struct TwitterManagerInterface_t481322177;
// System.Action`1<TWResult>
struct Action_1_t1282590442;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TwitterPostingTask
struct  TwitterPostingTask_t1522896362  : public AsyncTask_t1407929465
{
public:
	// System.String TwitterPostingTask::_status
	String_t* ____status_2;
	// UnityEngine.Texture2D TwitterPostingTask::_texture
	Texture2D_t3542995729 * ____texture_3;
	// TwitterManagerInterface TwitterPostingTask::_controller
	Il2CppObject * ____controller_4;
	// System.Action`1<TWResult> TwitterPostingTask::ActionComplete
	Action_1_t1282590442 * ___ActionComplete_5;

public:
	inline static int32_t get_offset_of__status_2() { return static_cast<int32_t>(offsetof(TwitterPostingTask_t1522896362, ____status_2)); }
	inline String_t* get__status_2() const { return ____status_2; }
	inline String_t** get_address_of__status_2() { return &____status_2; }
	inline void set__status_2(String_t* value)
	{
		____status_2 = value;
		Il2CppCodeGenWriteBarrier(&____status_2, value);
	}

	inline static int32_t get_offset_of__texture_3() { return static_cast<int32_t>(offsetof(TwitterPostingTask_t1522896362, ____texture_3)); }
	inline Texture2D_t3542995729 * get__texture_3() const { return ____texture_3; }
	inline Texture2D_t3542995729 ** get_address_of__texture_3() { return &____texture_3; }
	inline void set__texture_3(Texture2D_t3542995729 * value)
	{
		____texture_3 = value;
		Il2CppCodeGenWriteBarrier(&____texture_3, value);
	}

	inline static int32_t get_offset_of__controller_4() { return static_cast<int32_t>(offsetof(TwitterPostingTask_t1522896362, ____controller_4)); }
	inline Il2CppObject * get__controller_4() const { return ____controller_4; }
	inline Il2CppObject ** get_address_of__controller_4() { return &____controller_4; }
	inline void set__controller_4(Il2CppObject * value)
	{
		____controller_4 = value;
		Il2CppCodeGenWriteBarrier(&____controller_4, value);
	}

	inline static int32_t get_offset_of_ActionComplete_5() { return static_cast<int32_t>(offsetof(TwitterPostingTask_t1522896362, ___ActionComplete_5)); }
	inline Action_1_t1282590442 * get_ActionComplete_5() const { return ___ActionComplete_5; }
	inline Action_1_t1282590442 ** get_address_of_ActionComplete_5() { return &___ActionComplete_5; }
	inline void set_ActionComplete_5(Action_1_t1282590442 * value)
	{
		___ActionComplete_5 = value;
		Il2CppCodeGenWriteBarrier(&___ActionComplete_5, value);
	}
};

struct TwitterPostingTask_t1522896362_StaticFields
{
public:
	// System.Action`1<TWResult> TwitterPostingTask::<>f__am$cache0
	Action_1_t1282590442 * ___U3CU3Ef__amU24cache0_6;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_6() { return static_cast<int32_t>(offsetof(TwitterPostingTask_t1522896362_StaticFields, ___U3CU3Ef__amU24cache0_6)); }
	inline Action_1_t1282590442 * get_U3CU3Ef__amU24cache0_6() const { return ___U3CU3Ef__amU24cache0_6; }
	inline Action_1_t1282590442 ** get_address_of_U3CU3Ef__amU24cache0_6() { return &___U3CU3Ef__amU24cache0_6; }
	inline void set_U3CU3Ef__amU24cache0_6(Action_1_t1282590442 * value)
	{
		___U3CU3Ef__amU24cache0_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
