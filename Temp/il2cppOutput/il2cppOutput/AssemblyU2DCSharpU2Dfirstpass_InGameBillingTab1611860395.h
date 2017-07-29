#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_FeatureTab2349790125.h"

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t3071100561;
// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InGameBillingTab
struct  InGameBillingTab_t1611860395  : public FeatureTab_t2349790125
{
public:
	// UnityEngine.GameObject[] InGameBillingTab::objectToEnbaleOnInit
	GameObjectU5BU5D_t3057952154* ___objectToEnbaleOnInit_2;
	// UnityEngine.UI.Button[] InGameBillingTab::initBoundButtons
	ButtonU5BU5D_t3071100561* ___initBoundButtons_3;
	// UnityEngine.UI.Text InGameBillingTab::coinsLabel
	Text_t356221433 * ___coinsLabel_4;
	// UnityEngine.UI.Text InGameBillingTab::boostLabel
	Text_t356221433 * ___boostLabel_5;

public:
	inline static int32_t get_offset_of_objectToEnbaleOnInit_2() { return static_cast<int32_t>(offsetof(InGameBillingTab_t1611860395, ___objectToEnbaleOnInit_2)); }
	inline GameObjectU5BU5D_t3057952154* get_objectToEnbaleOnInit_2() const { return ___objectToEnbaleOnInit_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_objectToEnbaleOnInit_2() { return &___objectToEnbaleOnInit_2; }
	inline void set_objectToEnbaleOnInit_2(GameObjectU5BU5D_t3057952154* value)
	{
		___objectToEnbaleOnInit_2 = value;
		Il2CppCodeGenWriteBarrier(&___objectToEnbaleOnInit_2, value);
	}

	inline static int32_t get_offset_of_initBoundButtons_3() { return static_cast<int32_t>(offsetof(InGameBillingTab_t1611860395, ___initBoundButtons_3)); }
	inline ButtonU5BU5D_t3071100561* get_initBoundButtons_3() const { return ___initBoundButtons_3; }
	inline ButtonU5BU5D_t3071100561** get_address_of_initBoundButtons_3() { return &___initBoundButtons_3; }
	inline void set_initBoundButtons_3(ButtonU5BU5D_t3071100561* value)
	{
		___initBoundButtons_3 = value;
		Il2CppCodeGenWriteBarrier(&___initBoundButtons_3, value);
	}

	inline static int32_t get_offset_of_coinsLabel_4() { return static_cast<int32_t>(offsetof(InGameBillingTab_t1611860395, ___coinsLabel_4)); }
	inline Text_t356221433 * get_coinsLabel_4() const { return ___coinsLabel_4; }
	inline Text_t356221433 ** get_address_of_coinsLabel_4() { return &___coinsLabel_4; }
	inline void set_coinsLabel_4(Text_t356221433 * value)
	{
		___coinsLabel_4 = value;
		Il2CppCodeGenWriteBarrier(&___coinsLabel_4, value);
	}

	inline static int32_t get_offset_of_boostLabel_5() { return static_cast<int32_t>(offsetof(InGameBillingTab_t1611860395, ___boostLabel_5)); }
	inline Text_t356221433 * get_boostLabel_5() const { return ___boostLabel_5; }
	inline Text_t356221433 ** get_address_of_boostLabel_5() { return &___boostLabel_5; }
	inline void set_boostLabel_5(Text_t356221433 * value)
	{
		___boostLabel_5 = value;
		Il2CppCodeGenWriteBarrier(&___boostLabel_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
