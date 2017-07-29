#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t590162004;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t4216439300;
// System.Action`1<System.Boolean>
struct Action_1_t3627374100;
// System.Action
struct Action_t3226471752;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA_Ad_EditorUIController
struct  SA_Ad_EditorUIController_t4080214878  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject SA_Ad_EditorUIController::VideoPanel
	GameObject_t1756533147 * ___VideoPanel_2;
	// UnityEngine.GameObject SA_Ad_EditorUIController::InterstitialPanel
	GameObject_t1756533147 * ___InterstitialPanel_3;
	// UnityEngine.UI.Image[] SA_Ad_EditorUIController::AppIcons
	ImageU5BU5D_t590162004* ___AppIcons_4;
	// UnityEngine.UI.Text[] SA_Ad_EditorUIController::AppNames
	TextU5BU5D_t4216439300* ___AppNames_5;
	// System.Action`1<System.Boolean> SA_Ad_EditorUIController::OnCloseVideo
	Action_1_t3627374100 * ___OnCloseVideo_6;
	// System.Action SA_Ad_EditorUIController::OnVideoLeftApplication
	Action_t3226471752 * ___OnVideoLeftApplication_7;
	// System.Action`1<System.Boolean> SA_Ad_EditorUIController::OnCloseInterstitial
	Action_1_t3627374100 * ___OnCloseInterstitial_8;
	// System.Action SA_Ad_EditorUIController::OnInterstitialLeftApplication
	Action_t3226471752 * ___OnInterstitialLeftApplication_9;

public:
	inline static int32_t get_offset_of_VideoPanel_2() { return static_cast<int32_t>(offsetof(SA_Ad_EditorUIController_t4080214878, ___VideoPanel_2)); }
	inline GameObject_t1756533147 * get_VideoPanel_2() const { return ___VideoPanel_2; }
	inline GameObject_t1756533147 ** get_address_of_VideoPanel_2() { return &___VideoPanel_2; }
	inline void set_VideoPanel_2(GameObject_t1756533147 * value)
	{
		___VideoPanel_2 = value;
		Il2CppCodeGenWriteBarrier(&___VideoPanel_2, value);
	}

	inline static int32_t get_offset_of_InterstitialPanel_3() { return static_cast<int32_t>(offsetof(SA_Ad_EditorUIController_t4080214878, ___InterstitialPanel_3)); }
	inline GameObject_t1756533147 * get_InterstitialPanel_3() const { return ___InterstitialPanel_3; }
	inline GameObject_t1756533147 ** get_address_of_InterstitialPanel_3() { return &___InterstitialPanel_3; }
	inline void set_InterstitialPanel_3(GameObject_t1756533147 * value)
	{
		___InterstitialPanel_3 = value;
		Il2CppCodeGenWriteBarrier(&___InterstitialPanel_3, value);
	}

	inline static int32_t get_offset_of_AppIcons_4() { return static_cast<int32_t>(offsetof(SA_Ad_EditorUIController_t4080214878, ___AppIcons_4)); }
	inline ImageU5BU5D_t590162004* get_AppIcons_4() const { return ___AppIcons_4; }
	inline ImageU5BU5D_t590162004** get_address_of_AppIcons_4() { return &___AppIcons_4; }
	inline void set_AppIcons_4(ImageU5BU5D_t590162004* value)
	{
		___AppIcons_4 = value;
		Il2CppCodeGenWriteBarrier(&___AppIcons_4, value);
	}

	inline static int32_t get_offset_of_AppNames_5() { return static_cast<int32_t>(offsetof(SA_Ad_EditorUIController_t4080214878, ___AppNames_5)); }
	inline TextU5BU5D_t4216439300* get_AppNames_5() const { return ___AppNames_5; }
	inline TextU5BU5D_t4216439300** get_address_of_AppNames_5() { return &___AppNames_5; }
	inline void set_AppNames_5(TextU5BU5D_t4216439300* value)
	{
		___AppNames_5 = value;
		Il2CppCodeGenWriteBarrier(&___AppNames_5, value);
	}

	inline static int32_t get_offset_of_OnCloseVideo_6() { return static_cast<int32_t>(offsetof(SA_Ad_EditorUIController_t4080214878, ___OnCloseVideo_6)); }
	inline Action_1_t3627374100 * get_OnCloseVideo_6() const { return ___OnCloseVideo_6; }
	inline Action_1_t3627374100 ** get_address_of_OnCloseVideo_6() { return &___OnCloseVideo_6; }
	inline void set_OnCloseVideo_6(Action_1_t3627374100 * value)
	{
		___OnCloseVideo_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnCloseVideo_6, value);
	}

	inline static int32_t get_offset_of_OnVideoLeftApplication_7() { return static_cast<int32_t>(offsetof(SA_Ad_EditorUIController_t4080214878, ___OnVideoLeftApplication_7)); }
	inline Action_t3226471752 * get_OnVideoLeftApplication_7() const { return ___OnVideoLeftApplication_7; }
	inline Action_t3226471752 ** get_address_of_OnVideoLeftApplication_7() { return &___OnVideoLeftApplication_7; }
	inline void set_OnVideoLeftApplication_7(Action_t3226471752 * value)
	{
		___OnVideoLeftApplication_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnVideoLeftApplication_7, value);
	}

	inline static int32_t get_offset_of_OnCloseInterstitial_8() { return static_cast<int32_t>(offsetof(SA_Ad_EditorUIController_t4080214878, ___OnCloseInterstitial_8)); }
	inline Action_1_t3627374100 * get_OnCloseInterstitial_8() const { return ___OnCloseInterstitial_8; }
	inline Action_1_t3627374100 ** get_address_of_OnCloseInterstitial_8() { return &___OnCloseInterstitial_8; }
	inline void set_OnCloseInterstitial_8(Action_1_t3627374100 * value)
	{
		___OnCloseInterstitial_8 = value;
		Il2CppCodeGenWriteBarrier(&___OnCloseInterstitial_8, value);
	}

	inline static int32_t get_offset_of_OnInterstitialLeftApplication_9() { return static_cast<int32_t>(offsetof(SA_Ad_EditorUIController_t4080214878, ___OnInterstitialLeftApplication_9)); }
	inline Action_t3226471752 * get_OnInterstitialLeftApplication_9() const { return ___OnInterstitialLeftApplication_9; }
	inline Action_t3226471752 ** get_address_of_OnInterstitialLeftApplication_9() { return &___OnInterstitialLeftApplication_9; }
	inline void set_OnInterstitialLeftApplication_9(Action_t3226471752 * value)
	{
		___OnInterstitialLeftApplication_9 = value;
		Il2CppCodeGenWriteBarrier(&___OnInterstitialLeftApplication_9, value);
	}
};

struct SA_Ad_EditorUIController_t4080214878_StaticFields
{
public:
	// System.Action`1<System.Boolean> SA_Ad_EditorUIController::<>f__am$cache0
	Action_1_t3627374100 * ___U3CU3Ef__amU24cache0_10;
	// System.Action SA_Ad_EditorUIController::<>f__am$cache1
	Action_t3226471752 * ___U3CU3Ef__amU24cache1_11;
	// System.Action`1<System.Boolean> SA_Ad_EditorUIController::<>f__am$cache2
	Action_1_t3627374100 * ___U3CU3Ef__amU24cache2_12;
	// System.Action SA_Ad_EditorUIController::<>f__am$cache3
	Action_t3226471752 * ___U3CU3Ef__amU24cache3_13;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_10() { return static_cast<int32_t>(offsetof(SA_Ad_EditorUIController_t4080214878_StaticFields, ___U3CU3Ef__amU24cache0_10)); }
	inline Action_1_t3627374100 * get_U3CU3Ef__amU24cache0_10() const { return ___U3CU3Ef__amU24cache0_10; }
	inline Action_1_t3627374100 ** get_address_of_U3CU3Ef__amU24cache0_10() { return &___U3CU3Ef__amU24cache0_10; }
	inline void set_U3CU3Ef__amU24cache0_10(Action_1_t3627374100 * value)
	{
		___U3CU3Ef__amU24cache0_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_10, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_11() { return static_cast<int32_t>(offsetof(SA_Ad_EditorUIController_t4080214878_StaticFields, ___U3CU3Ef__amU24cache1_11)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cache1_11() const { return ___U3CU3Ef__amU24cache1_11; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cache1_11() { return &___U3CU3Ef__amU24cache1_11; }
	inline void set_U3CU3Ef__amU24cache1_11(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cache1_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_11, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_12() { return static_cast<int32_t>(offsetof(SA_Ad_EditorUIController_t4080214878_StaticFields, ___U3CU3Ef__amU24cache2_12)); }
	inline Action_1_t3627374100 * get_U3CU3Ef__amU24cache2_12() const { return ___U3CU3Ef__amU24cache2_12; }
	inline Action_1_t3627374100 ** get_address_of_U3CU3Ef__amU24cache2_12() { return &___U3CU3Ef__amU24cache2_12; }
	inline void set_U3CU3Ef__amU24cache2_12(Action_1_t3627374100 * value)
	{
		___U3CU3Ef__amU24cache2_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_12, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_13() { return static_cast<int32_t>(offsetof(SA_Ad_EditorUIController_t4080214878_StaticFields, ___U3CU3Ef__amU24cache3_13)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cache3_13() const { return ___U3CU3Ef__amU24cache3_13; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cache3_13() { return &___U3CU3Ef__amU24cache3_13; }
	inline void set_U3CU3Ef__amU24cache3_13(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cache3_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache3_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
