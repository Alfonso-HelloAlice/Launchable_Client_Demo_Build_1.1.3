#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Toggle
struct Toggle_t3976754468;
// FeatureTab
struct FeatureTab_t2349790125;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FeatureSelector
struct  FeatureSelector_t3732784103  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Toggle FeatureSelector::Selector
	Toggle_t3976754468 * ___Selector_2;
	// FeatureTab FeatureSelector::Tab
	FeatureTab_t2349790125 * ___Tab_3;

public:
	inline static int32_t get_offset_of_Selector_2() { return static_cast<int32_t>(offsetof(FeatureSelector_t3732784103, ___Selector_2)); }
	inline Toggle_t3976754468 * get_Selector_2() const { return ___Selector_2; }
	inline Toggle_t3976754468 ** get_address_of_Selector_2() { return &___Selector_2; }
	inline void set_Selector_2(Toggle_t3976754468 * value)
	{
		___Selector_2 = value;
		Il2CppCodeGenWriteBarrier(&___Selector_2, value);
	}

	inline static int32_t get_offset_of_Tab_3() { return static_cast<int32_t>(offsetof(FeatureSelector_t3732784103, ___Tab_3)); }
	inline FeatureTab_t2349790125 * get_Tab_3() const { return ___Tab_3; }
	inline FeatureTab_t2349790125 ** get_address_of_Tab_3() { return &___Tab_3; }
	inline void set_Tab_3(FeatureTab_t2349790125 * value)
	{
		___Tab_3 = value;
		Il2CppCodeGenWriteBarrier(&___Tab_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
