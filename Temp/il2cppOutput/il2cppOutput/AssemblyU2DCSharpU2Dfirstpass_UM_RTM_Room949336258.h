#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<UM_RTM_Participant>
struct List_1_t1848242114;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UM_RTM_Room
struct  UM_RTM_Room_t949336258  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<UM_RTM_Participant> UM_RTM_Room::_Participants
	List_1_t1848242114 * ____Participants_0;

public:
	inline static int32_t get_offset_of__Participants_0() { return static_cast<int32_t>(offsetof(UM_RTM_Room_t949336258, ____Participants_0)); }
	inline List_1_t1848242114 * get__Participants_0() const { return ____Participants_0; }
	inline List_1_t1848242114 ** get_address_of__Participants_0() { return &____Participants_0; }
	inline void set__Participants_0(List_1_t1848242114 * value)
	{
		____Participants_0 = value;
		Il2CppCodeGenWriteBarrier(&____Participants_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
