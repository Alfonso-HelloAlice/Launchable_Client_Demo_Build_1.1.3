#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_AmazonAdBanner_Banne4283474116.h"

// AMN_AdProperties
struct AMN_AdProperties_t3937046151;
// System.Action`1<AmazonAdBanner>
struct Action_1_t4139300219;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AmazonAdBanner
struct  AmazonAdBanner_t42533541  : public Il2CppObject
{
public:
	// System.Int32 AmazonAdBanner::_id
	int32_t ____id_0;
	// AmazonAdBanner/BannerAligns AmazonAdBanner::_position
	int32_t ____position_1;
	// AMN_AdProperties AmazonAdBanner::_properties
	AMN_AdProperties_t3937046151 * ____properties_2;
	// System.Boolean AmazonAdBanner::_isLoaded
	bool ____isLoaded_3;
	// System.Boolean AmazonAdBanner::_isOnScreen
	bool ____isOnScreen_4;
	// System.Int32 AmazonAdBanner::_width
	int32_t ____width_5;
	// System.Int32 AmazonAdBanner::_height
	int32_t ____height_6;
	// System.Action`1<AmazonAdBanner> AmazonAdBanner::OnLoadedAction
	Action_1_t4139300219 * ___OnLoadedAction_7;
	// System.Action`1<AmazonAdBanner> AmazonAdBanner::OnFailedLoadingAction
	Action_1_t4139300219 * ___OnFailedLoadingAction_8;
	// System.Action`1<AmazonAdBanner> AmazonAdBanner::OnExpandedAction
	Action_1_t4139300219 * ___OnExpandedAction_9;
	// System.Action`1<AmazonAdBanner> AmazonAdBanner::OnDismissedAction
	Action_1_t4139300219 * ___OnDismissedAction_10;
	// System.Action`1<AmazonAdBanner> AmazonAdBanner::OnCollapsedAction
	Action_1_t4139300219 * ___OnCollapsedAction_11;

public:
	inline static int32_t get_offset_of__id_0() { return static_cast<int32_t>(offsetof(AmazonAdBanner_t42533541, ____id_0)); }
	inline int32_t get__id_0() const { return ____id_0; }
	inline int32_t* get_address_of__id_0() { return &____id_0; }
	inline void set__id_0(int32_t value)
	{
		____id_0 = value;
	}

	inline static int32_t get_offset_of__position_1() { return static_cast<int32_t>(offsetof(AmazonAdBanner_t42533541, ____position_1)); }
	inline int32_t get__position_1() const { return ____position_1; }
	inline int32_t* get_address_of__position_1() { return &____position_1; }
	inline void set__position_1(int32_t value)
	{
		____position_1 = value;
	}

	inline static int32_t get_offset_of__properties_2() { return static_cast<int32_t>(offsetof(AmazonAdBanner_t42533541, ____properties_2)); }
	inline AMN_AdProperties_t3937046151 * get__properties_2() const { return ____properties_2; }
	inline AMN_AdProperties_t3937046151 ** get_address_of__properties_2() { return &____properties_2; }
	inline void set__properties_2(AMN_AdProperties_t3937046151 * value)
	{
		____properties_2 = value;
		Il2CppCodeGenWriteBarrier(&____properties_2, value);
	}

	inline static int32_t get_offset_of__isLoaded_3() { return static_cast<int32_t>(offsetof(AmazonAdBanner_t42533541, ____isLoaded_3)); }
	inline bool get__isLoaded_3() const { return ____isLoaded_3; }
	inline bool* get_address_of__isLoaded_3() { return &____isLoaded_3; }
	inline void set__isLoaded_3(bool value)
	{
		____isLoaded_3 = value;
	}

	inline static int32_t get_offset_of__isOnScreen_4() { return static_cast<int32_t>(offsetof(AmazonAdBanner_t42533541, ____isOnScreen_4)); }
	inline bool get__isOnScreen_4() const { return ____isOnScreen_4; }
	inline bool* get_address_of__isOnScreen_4() { return &____isOnScreen_4; }
	inline void set__isOnScreen_4(bool value)
	{
		____isOnScreen_4 = value;
	}

	inline static int32_t get_offset_of__width_5() { return static_cast<int32_t>(offsetof(AmazonAdBanner_t42533541, ____width_5)); }
	inline int32_t get__width_5() const { return ____width_5; }
	inline int32_t* get_address_of__width_5() { return &____width_5; }
	inline void set__width_5(int32_t value)
	{
		____width_5 = value;
	}

	inline static int32_t get_offset_of__height_6() { return static_cast<int32_t>(offsetof(AmazonAdBanner_t42533541, ____height_6)); }
	inline int32_t get__height_6() const { return ____height_6; }
	inline int32_t* get_address_of__height_6() { return &____height_6; }
	inline void set__height_6(int32_t value)
	{
		____height_6 = value;
	}

	inline static int32_t get_offset_of_OnLoadedAction_7() { return static_cast<int32_t>(offsetof(AmazonAdBanner_t42533541, ___OnLoadedAction_7)); }
	inline Action_1_t4139300219 * get_OnLoadedAction_7() const { return ___OnLoadedAction_7; }
	inline Action_1_t4139300219 ** get_address_of_OnLoadedAction_7() { return &___OnLoadedAction_7; }
	inline void set_OnLoadedAction_7(Action_1_t4139300219 * value)
	{
		___OnLoadedAction_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnLoadedAction_7, value);
	}

	inline static int32_t get_offset_of_OnFailedLoadingAction_8() { return static_cast<int32_t>(offsetof(AmazonAdBanner_t42533541, ___OnFailedLoadingAction_8)); }
	inline Action_1_t4139300219 * get_OnFailedLoadingAction_8() const { return ___OnFailedLoadingAction_8; }
	inline Action_1_t4139300219 ** get_address_of_OnFailedLoadingAction_8() { return &___OnFailedLoadingAction_8; }
	inline void set_OnFailedLoadingAction_8(Action_1_t4139300219 * value)
	{
		___OnFailedLoadingAction_8 = value;
		Il2CppCodeGenWriteBarrier(&___OnFailedLoadingAction_8, value);
	}

	inline static int32_t get_offset_of_OnExpandedAction_9() { return static_cast<int32_t>(offsetof(AmazonAdBanner_t42533541, ___OnExpandedAction_9)); }
	inline Action_1_t4139300219 * get_OnExpandedAction_9() const { return ___OnExpandedAction_9; }
	inline Action_1_t4139300219 ** get_address_of_OnExpandedAction_9() { return &___OnExpandedAction_9; }
	inline void set_OnExpandedAction_9(Action_1_t4139300219 * value)
	{
		___OnExpandedAction_9 = value;
		Il2CppCodeGenWriteBarrier(&___OnExpandedAction_9, value);
	}

	inline static int32_t get_offset_of_OnDismissedAction_10() { return static_cast<int32_t>(offsetof(AmazonAdBanner_t42533541, ___OnDismissedAction_10)); }
	inline Action_1_t4139300219 * get_OnDismissedAction_10() const { return ___OnDismissedAction_10; }
	inline Action_1_t4139300219 ** get_address_of_OnDismissedAction_10() { return &___OnDismissedAction_10; }
	inline void set_OnDismissedAction_10(Action_1_t4139300219 * value)
	{
		___OnDismissedAction_10 = value;
		Il2CppCodeGenWriteBarrier(&___OnDismissedAction_10, value);
	}

	inline static int32_t get_offset_of_OnCollapsedAction_11() { return static_cast<int32_t>(offsetof(AmazonAdBanner_t42533541, ___OnCollapsedAction_11)); }
	inline Action_1_t4139300219 * get_OnCollapsedAction_11() const { return ___OnCollapsedAction_11; }
	inline Action_1_t4139300219 ** get_address_of_OnCollapsedAction_11() { return &___OnCollapsedAction_11; }
	inline void set_OnCollapsedAction_11(Action_1_t4139300219 * value)
	{
		___OnCollapsedAction_11 = value;
		Il2CppCodeGenWriteBarrier(&___OnCollapsedAction_11, value);
	}
};

struct AmazonAdBanner_t42533541_StaticFields
{
public:
	// System.Action`1<AmazonAdBanner> AmazonAdBanner::<>f__am$cache0
	Action_1_t4139300219 * ___U3CU3Ef__amU24cache0_12;
	// System.Action`1<AmazonAdBanner> AmazonAdBanner::<>f__am$cache1
	Action_1_t4139300219 * ___U3CU3Ef__amU24cache1_13;
	// System.Action`1<AmazonAdBanner> AmazonAdBanner::<>f__am$cache2
	Action_1_t4139300219 * ___U3CU3Ef__amU24cache2_14;
	// System.Action`1<AmazonAdBanner> AmazonAdBanner::<>f__am$cache3
	Action_1_t4139300219 * ___U3CU3Ef__amU24cache3_15;
	// System.Action`1<AmazonAdBanner> AmazonAdBanner::<>f__am$cache4
	Action_1_t4139300219 * ___U3CU3Ef__amU24cache4_16;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_12() { return static_cast<int32_t>(offsetof(AmazonAdBanner_t42533541_StaticFields, ___U3CU3Ef__amU24cache0_12)); }
	inline Action_1_t4139300219 * get_U3CU3Ef__amU24cache0_12() const { return ___U3CU3Ef__amU24cache0_12; }
	inline Action_1_t4139300219 ** get_address_of_U3CU3Ef__amU24cache0_12() { return &___U3CU3Ef__amU24cache0_12; }
	inline void set_U3CU3Ef__amU24cache0_12(Action_1_t4139300219 * value)
	{
		___U3CU3Ef__amU24cache0_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_12, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_13() { return static_cast<int32_t>(offsetof(AmazonAdBanner_t42533541_StaticFields, ___U3CU3Ef__amU24cache1_13)); }
	inline Action_1_t4139300219 * get_U3CU3Ef__amU24cache1_13() const { return ___U3CU3Ef__amU24cache1_13; }
	inline Action_1_t4139300219 ** get_address_of_U3CU3Ef__amU24cache1_13() { return &___U3CU3Ef__amU24cache1_13; }
	inline void set_U3CU3Ef__amU24cache1_13(Action_1_t4139300219 * value)
	{
		___U3CU3Ef__amU24cache1_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_13, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_14() { return static_cast<int32_t>(offsetof(AmazonAdBanner_t42533541_StaticFields, ___U3CU3Ef__amU24cache2_14)); }
	inline Action_1_t4139300219 * get_U3CU3Ef__amU24cache2_14() const { return ___U3CU3Ef__amU24cache2_14; }
	inline Action_1_t4139300219 ** get_address_of_U3CU3Ef__amU24cache2_14() { return &___U3CU3Ef__amU24cache2_14; }
	inline void set_U3CU3Ef__amU24cache2_14(Action_1_t4139300219 * value)
	{
		___U3CU3Ef__amU24cache2_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_14, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_15() { return static_cast<int32_t>(offsetof(AmazonAdBanner_t42533541_StaticFields, ___U3CU3Ef__amU24cache3_15)); }
	inline Action_1_t4139300219 * get_U3CU3Ef__amU24cache3_15() const { return ___U3CU3Ef__amU24cache3_15; }
	inline Action_1_t4139300219 ** get_address_of_U3CU3Ef__amU24cache3_15() { return &___U3CU3Ef__amU24cache3_15; }
	inline void set_U3CU3Ef__amU24cache3_15(Action_1_t4139300219 * value)
	{
		___U3CU3Ef__amU24cache3_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache3_15, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_16() { return static_cast<int32_t>(offsetof(AmazonAdBanner_t42533541_StaticFields, ___U3CU3Ef__amU24cache4_16)); }
	inline Action_1_t4139300219 * get_U3CU3Ef__amU24cache4_16() const { return ___U3CU3Ef__amU24cache4_16; }
	inline Action_1_t4139300219 ** get_address_of_U3CU3Ef__amU24cache4_16() { return &___U3CU3Ef__amU24cache4_16; }
	inline void set_U3CU3Ef__amU24cache4_16(Action_1_t4139300219 * value)
	{
		___U3CU3Ef__amU24cache4_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache4_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
