#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_FeatureTab2349790125.h"

// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t3071100561;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BillingTab
struct  BillingTab_t1061873190  : public FeatureTab_t2349790125
{
public:
	// UnityEngine.UI.Button BillingTab::initButton
	Button_t2872111280 * ___initButton_2;
	// UnityEngine.UI.Button[] BillingTab::initBoundButtons
	ButtonU5BU5D_t3071100561* ___initBoundButtons_3;

public:
	inline static int32_t get_offset_of_initButton_2() { return static_cast<int32_t>(offsetof(BillingTab_t1061873190, ___initButton_2)); }
	inline Button_t2872111280 * get_initButton_2() const { return ___initButton_2; }
	inline Button_t2872111280 ** get_address_of_initButton_2() { return &___initButton_2; }
	inline void set_initButton_2(Button_t2872111280 * value)
	{
		___initButton_2 = value;
		Il2CppCodeGenWriteBarrier(&___initButton_2, value);
	}

	inline static int32_t get_offset_of_initBoundButtons_3() { return static_cast<int32_t>(offsetof(BillingTab_t1061873190, ___initBoundButtons_3)); }
	inline ButtonU5BU5D_t3071100561* get_initBoundButtons_3() const { return ___initBoundButtons_3; }
	inline ButtonU5BU5D_t3071100561** get_address_of_initBoundButtons_3() { return &___initBoundButtons_3; }
	inline void set_initBoundButtons_3(ButtonU5BU5D_t3071100561* value)
	{
		___initBoundButtons_3 = value;
		Il2CppCodeGenWriteBarrier(&___initBoundButtons_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
