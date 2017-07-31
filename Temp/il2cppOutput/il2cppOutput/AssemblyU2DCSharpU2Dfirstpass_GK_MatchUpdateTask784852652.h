#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// GK_TBM_Controller
struct GK_TBM_Controller_t665756537;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GK_MatchUpdateTask
struct  GK_MatchUpdateTask_t784852652  : public MonoBehaviour_t1158329972
{
public:
	// GK_TBM_Controller GK_MatchUpdateTask::_controller
	GK_TBM_Controller_t665756537 * ____controller_2;
	// System.String GK_MatchUpdateTask::_matchId
	String_t* ____matchId_3;

public:
	inline static int32_t get_offset_of__controller_2() { return static_cast<int32_t>(offsetof(GK_MatchUpdateTask_t784852652, ____controller_2)); }
	inline GK_TBM_Controller_t665756537 * get__controller_2() const { return ____controller_2; }
	inline GK_TBM_Controller_t665756537 ** get_address_of__controller_2() { return &____controller_2; }
	inline void set__controller_2(GK_TBM_Controller_t665756537 * value)
	{
		____controller_2 = value;
		Il2CppCodeGenWriteBarrier(&____controller_2, value);
	}

	inline static int32_t get_offset_of__matchId_3() { return static_cast<int32_t>(offsetof(GK_MatchUpdateTask_t784852652, ____matchId_3)); }
	inline String_t* get__matchId_3() const { return ____matchId_3; }
	inline String_t** get_address_of__matchId_3() { return &____matchId_3; }
	inline void set__matchId_3(String_t* value)
	{
		____matchId_3 = value;
		Il2CppCodeGenWriteBarrier(&____matchId_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
