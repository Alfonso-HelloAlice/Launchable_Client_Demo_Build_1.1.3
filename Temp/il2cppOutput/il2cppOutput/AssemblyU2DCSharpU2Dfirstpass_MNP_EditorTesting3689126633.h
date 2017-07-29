#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_MNP_Singleton_1_gen605670122.h"

// MNP_EditorUIController
struct MNP_EditorUIController_t4137967787;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MNP_EditorTesting
struct  MNP_EditorTesting_t3689126633  : public MNP_Singleton_1_t605670122
{
public:
	// MNP_EditorUIController MNP_EditorTesting::UiController
	MNP_EditorUIController_t4137967787 * ___UiController_4;

public:
	inline static int32_t get_offset_of_UiController_4() { return static_cast<int32_t>(offsetof(MNP_EditorTesting_t3689126633, ___UiController_4)); }
	inline MNP_EditorUIController_t4137967787 * get_UiController_4() const { return ___UiController_4; }
	inline MNP_EditorUIController_t4137967787 ** get_address_of_UiController_4() { return &___UiController_4; }
	inline void set_UiController_4(MNP_EditorUIController_t4137967787 * value)
	{
		___UiController_4 = value;
		Il2CppCodeGenWriteBarrier(&___UiController_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
