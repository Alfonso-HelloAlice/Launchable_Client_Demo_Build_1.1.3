#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Pattern_Si1364820637.h"

// System.Collections.Generic.List`1<AN_PlusButton>
struct List_1_t739879572;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AN_PlusButtonsManager
struct  AN_PlusButtonsManager_t882255532  : public Singleton_1_t1364820637
{
public:
	// System.Collections.Generic.List`1<AN_PlusButton> AN_PlusButtonsManager::buttons
	List_1_t739879572 * ___buttons_4;

public:
	inline static int32_t get_offset_of_buttons_4() { return static_cast<int32_t>(offsetof(AN_PlusButtonsManager_t882255532, ___buttons_4)); }
	inline List_1_t739879572 * get_buttons_4() const { return ___buttons_4; }
	inline List_1_t739879572 ** get_address_of_buttons_4() { return &___buttons_4; }
	inline void set_buttons_4(List_1_t739879572 * value)
	{
		___buttons_4 = value;
		Il2CppCodeGenWriteBarrier(&___buttons_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
