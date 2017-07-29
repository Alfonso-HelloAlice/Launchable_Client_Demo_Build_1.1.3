#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Pattern_Si2266521149.h"

// System.Action
struct Action_t3226471752;
// System.Action`1<SA.IOSNative.Gestures.ForceInfo>
struct Action_1_t280491253;
// System.Action`1<System.String>
struct Action_1_t1831019615;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.IOSNative.Gestures.ForceTouch
struct  ForceTouch_t1783956044  : public Singleton_1_t2266521149
{
public:
	// System.Action SA.IOSNative.Gestures.ForceTouch::OnForceTouchStarted
	Action_t3226471752 * ___OnForceTouchStarted_4;
	// System.Action SA.IOSNative.Gestures.ForceTouch::OnForceTouchFinished
	Action_t3226471752 * ___OnForceTouchFinished_5;
	// System.Action`1<SA.IOSNative.Gestures.ForceInfo> SA.IOSNative.Gestures.ForceTouch::OnForceChanged
	Action_1_t280491253 * ___OnForceChanged_6;
	// System.Action`1<System.String> SA.IOSNative.Gestures.ForceTouch::OnAppShortcutClick
	Action_1_t1831019615 * ___OnAppShortcutClick_7;

public:
	inline static int32_t get_offset_of_OnForceTouchStarted_4() { return static_cast<int32_t>(offsetof(ForceTouch_t1783956044, ___OnForceTouchStarted_4)); }
	inline Action_t3226471752 * get_OnForceTouchStarted_4() const { return ___OnForceTouchStarted_4; }
	inline Action_t3226471752 ** get_address_of_OnForceTouchStarted_4() { return &___OnForceTouchStarted_4; }
	inline void set_OnForceTouchStarted_4(Action_t3226471752 * value)
	{
		___OnForceTouchStarted_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnForceTouchStarted_4, value);
	}

	inline static int32_t get_offset_of_OnForceTouchFinished_5() { return static_cast<int32_t>(offsetof(ForceTouch_t1783956044, ___OnForceTouchFinished_5)); }
	inline Action_t3226471752 * get_OnForceTouchFinished_5() const { return ___OnForceTouchFinished_5; }
	inline Action_t3226471752 ** get_address_of_OnForceTouchFinished_5() { return &___OnForceTouchFinished_5; }
	inline void set_OnForceTouchFinished_5(Action_t3226471752 * value)
	{
		___OnForceTouchFinished_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnForceTouchFinished_5, value);
	}

	inline static int32_t get_offset_of_OnForceChanged_6() { return static_cast<int32_t>(offsetof(ForceTouch_t1783956044, ___OnForceChanged_6)); }
	inline Action_1_t280491253 * get_OnForceChanged_6() const { return ___OnForceChanged_6; }
	inline Action_1_t280491253 ** get_address_of_OnForceChanged_6() { return &___OnForceChanged_6; }
	inline void set_OnForceChanged_6(Action_1_t280491253 * value)
	{
		___OnForceChanged_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnForceChanged_6, value);
	}

	inline static int32_t get_offset_of_OnAppShortcutClick_7() { return static_cast<int32_t>(offsetof(ForceTouch_t1783956044, ___OnAppShortcutClick_7)); }
	inline Action_1_t1831019615 * get_OnAppShortcutClick_7() const { return ___OnAppShortcutClick_7; }
	inline Action_1_t1831019615 ** get_address_of_OnAppShortcutClick_7() { return &___OnAppShortcutClick_7; }
	inline void set_OnAppShortcutClick_7(Action_1_t1831019615 * value)
	{
		___OnAppShortcutClick_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnAppShortcutClick_7, value);
	}
};

struct ForceTouch_t1783956044_StaticFields
{
public:
	// System.Boolean SA.IOSNative.Gestures.ForceTouch::_IsTouchTrigerred
	bool ____IsTouchTrigerred_8;
	// System.Action SA.IOSNative.Gestures.ForceTouch::<>f__am$cache0
	Action_t3226471752 * ___U3CU3Ef__amU24cache0_9;
	// System.Action SA.IOSNative.Gestures.ForceTouch::<>f__am$cache1
	Action_t3226471752 * ___U3CU3Ef__amU24cache1_10;
	// System.Action`1<SA.IOSNative.Gestures.ForceInfo> SA.IOSNative.Gestures.ForceTouch::<>f__am$cache2
	Action_1_t280491253 * ___U3CU3Ef__amU24cache2_11;
	// System.Action`1<System.String> SA.IOSNative.Gestures.ForceTouch::<>f__am$cache3
	Action_1_t1831019615 * ___U3CU3Ef__amU24cache3_12;

public:
	inline static int32_t get_offset_of__IsTouchTrigerred_8() { return static_cast<int32_t>(offsetof(ForceTouch_t1783956044_StaticFields, ____IsTouchTrigerred_8)); }
	inline bool get__IsTouchTrigerred_8() const { return ____IsTouchTrigerred_8; }
	inline bool* get_address_of__IsTouchTrigerred_8() { return &____IsTouchTrigerred_8; }
	inline void set__IsTouchTrigerred_8(bool value)
	{
		____IsTouchTrigerred_8 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_9() { return static_cast<int32_t>(offsetof(ForceTouch_t1783956044_StaticFields, ___U3CU3Ef__amU24cache0_9)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cache0_9() const { return ___U3CU3Ef__amU24cache0_9; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cache0_9() { return &___U3CU3Ef__amU24cache0_9; }
	inline void set_U3CU3Ef__amU24cache0_9(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cache0_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_9, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_10() { return static_cast<int32_t>(offsetof(ForceTouch_t1783956044_StaticFields, ___U3CU3Ef__amU24cache1_10)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cache1_10() const { return ___U3CU3Ef__amU24cache1_10; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cache1_10() { return &___U3CU3Ef__amU24cache1_10; }
	inline void set_U3CU3Ef__amU24cache1_10(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cache1_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_10, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_11() { return static_cast<int32_t>(offsetof(ForceTouch_t1783956044_StaticFields, ___U3CU3Ef__amU24cache2_11)); }
	inline Action_1_t280491253 * get_U3CU3Ef__amU24cache2_11() const { return ___U3CU3Ef__amU24cache2_11; }
	inline Action_1_t280491253 ** get_address_of_U3CU3Ef__amU24cache2_11() { return &___U3CU3Ef__amU24cache2_11; }
	inline void set_U3CU3Ef__amU24cache2_11(Action_1_t280491253 * value)
	{
		___U3CU3Ef__amU24cache2_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_11, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_12() { return static_cast<int32_t>(offsetof(ForceTouch_t1783956044_StaticFields, ___U3CU3Ef__amU24cache3_12)); }
	inline Action_1_t1831019615 * get_U3CU3Ef__amU24cache3_12() const { return ___U3CU3Ef__amU24cache3_12; }
	inline Action_1_t1831019615 ** get_address_of_U3CU3Ef__amU24cache3_12() { return &___U3CU3Ef__amU24cache3_12; }
	inline void set_U3CU3Ef__amU24cache3_12(Action_1_t1831019615 * value)
	{
		___U3CU3Ef__amU24cache3_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache3_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
