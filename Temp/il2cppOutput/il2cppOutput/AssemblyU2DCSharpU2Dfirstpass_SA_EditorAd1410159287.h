#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Pattern_Si1892724392.h"

// System.Action`1<System.Boolean>
struct Action_1_t3627374100;
// System.Action
struct Action_t3226471752;
// SA_Ad_EditorUIController
struct SA_Ad_EditorUIController_t4080214878;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA_EditorAd
struct  SA_EditorAd_t1410159287  : public Singleton_1_t1892724392
{
public:
	// System.Boolean SA_EditorAd::_IsInterstitialLoading
	bool ____IsInterstitialLoading_6;
	// System.Boolean SA_EditorAd::_IsVideoLoading
	bool ____IsVideoLoading_7;
	// System.Boolean SA_EditorAd::_IsInterstitialReady
	bool ____IsInterstitialReady_8;
	// System.Boolean SA_EditorAd::_IsVideoReady
	bool ____IsVideoReady_9;
	// System.Int32 SA_EditorAd::_FillRate
	int32_t ____FillRate_10;
	// SA_Ad_EditorUIController SA_EditorAd::_EditorUI
	SA_Ad_EditorUIController_t4080214878 * ____EditorUI_17;

public:
	inline static int32_t get_offset_of__IsInterstitialLoading_6() { return static_cast<int32_t>(offsetof(SA_EditorAd_t1410159287, ____IsInterstitialLoading_6)); }
	inline bool get__IsInterstitialLoading_6() const { return ____IsInterstitialLoading_6; }
	inline bool* get_address_of__IsInterstitialLoading_6() { return &____IsInterstitialLoading_6; }
	inline void set__IsInterstitialLoading_6(bool value)
	{
		____IsInterstitialLoading_6 = value;
	}

	inline static int32_t get_offset_of__IsVideoLoading_7() { return static_cast<int32_t>(offsetof(SA_EditorAd_t1410159287, ____IsVideoLoading_7)); }
	inline bool get__IsVideoLoading_7() const { return ____IsVideoLoading_7; }
	inline bool* get_address_of__IsVideoLoading_7() { return &____IsVideoLoading_7; }
	inline void set__IsVideoLoading_7(bool value)
	{
		____IsVideoLoading_7 = value;
	}

	inline static int32_t get_offset_of__IsInterstitialReady_8() { return static_cast<int32_t>(offsetof(SA_EditorAd_t1410159287, ____IsInterstitialReady_8)); }
	inline bool get__IsInterstitialReady_8() const { return ____IsInterstitialReady_8; }
	inline bool* get_address_of__IsInterstitialReady_8() { return &____IsInterstitialReady_8; }
	inline void set__IsInterstitialReady_8(bool value)
	{
		____IsInterstitialReady_8 = value;
	}

	inline static int32_t get_offset_of__IsVideoReady_9() { return static_cast<int32_t>(offsetof(SA_EditorAd_t1410159287, ____IsVideoReady_9)); }
	inline bool get__IsVideoReady_9() const { return ____IsVideoReady_9; }
	inline bool* get_address_of__IsVideoReady_9() { return &____IsVideoReady_9; }
	inline void set__IsVideoReady_9(bool value)
	{
		____IsVideoReady_9 = value;
	}

	inline static int32_t get_offset_of__FillRate_10() { return static_cast<int32_t>(offsetof(SA_EditorAd_t1410159287, ____FillRate_10)); }
	inline int32_t get__FillRate_10() const { return ____FillRate_10; }
	inline int32_t* get_address_of__FillRate_10() { return &____FillRate_10; }
	inline void set__FillRate_10(int32_t value)
	{
		____FillRate_10 = value;
	}

	inline static int32_t get_offset_of__EditorUI_17() { return static_cast<int32_t>(offsetof(SA_EditorAd_t1410159287, ____EditorUI_17)); }
	inline SA_Ad_EditorUIController_t4080214878 * get__EditorUI_17() const { return ____EditorUI_17; }
	inline SA_Ad_EditorUIController_t4080214878 ** get_address_of__EditorUI_17() { return &____EditorUI_17; }
	inline void set__EditorUI_17(SA_Ad_EditorUIController_t4080214878 * value)
	{
		____EditorUI_17 = value;
		Il2CppCodeGenWriteBarrier(&____EditorUI_17, value);
	}
};

struct SA_EditorAd_t1410159287_StaticFields
{
public:
	// System.Action`1<System.Boolean> SA_EditorAd::OnInterstitialFinished
	Action_1_t3627374100 * ___OnInterstitialFinished_11;
	// System.Action`1<System.Boolean> SA_EditorAd::OnInterstitialLoadComplete
	Action_1_t3627374100 * ___OnInterstitialLoadComplete_12;
	// System.Action SA_EditorAd::OnInterstitialLeftApplication
	Action_t3226471752 * ___OnInterstitialLeftApplication_13;
	// System.Action`1<System.Boolean> SA_EditorAd::OnVideoFinished
	Action_1_t3627374100 * ___OnVideoFinished_14;
	// System.Action`1<System.Boolean> SA_EditorAd::OnVideoLoadComplete
	Action_1_t3627374100 * ___OnVideoLoadComplete_15;
	// System.Action SA_EditorAd::OnVideoLeftApplication
	Action_t3226471752 * ___OnVideoLeftApplication_16;

public:
	inline static int32_t get_offset_of_OnInterstitialFinished_11() { return static_cast<int32_t>(offsetof(SA_EditorAd_t1410159287_StaticFields, ___OnInterstitialFinished_11)); }
	inline Action_1_t3627374100 * get_OnInterstitialFinished_11() const { return ___OnInterstitialFinished_11; }
	inline Action_1_t3627374100 ** get_address_of_OnInterstitialFinished_11() { return &___OnInterstitialFinished_11; }
	inline void set_OnInterstitialFinished_11(Action_1_t3627374100 * value)
	{
		___OnInterstitialFinished_11 = value;
		Il2CppCodeGenWriteBarrier(&___OnInterstitialFinished_11, value);
	}

	inline static int32_t get_offset_of_OnInterstitialLoadComplete_12() { return static_cast<int32_t>(offsetof(SA_EditorAd_t1410159287_StaticFields, ___OnInterstitialLoadComplete_12)); }
	inline Action_1_t3627374100 * get_OnInterstitialLoadComplete_12() const { return ___OnInterstitialLoadComplete_12; }
	inline Action_1_t3627374100 ** get_address_of_OnInterstitialLoadComplete_12() { return &___OnInterstitialLoadComplete_12; }
	inline void set_OnInterstitialLoadComplete_12(Action_1_t3627374100 * value)
	{
		___OnInterstitialLoadComplete_12 = value;
		Il2CppCodeGenWriteBarrier(&___OnInterstitialLoadComplete_12, value);
	}

	inline static int32_t get_offset_of_OnInterstitialLeftApplication_13() { return static_cast<int32_t>(offsetof(SA_EditorAd_t1410159287_StaticFields, ___OnInterstitialLeftApplication_13)); }
	inline Action_t3226471752 * get_OnInterstitialLeftApplication_13() const { return ___OnInterstitialLeftApplication_13; }
	inline Action_t3226471752 ** get_address_of_OnInterstitialLeftApplication_13() { return &___OnInterstitialLeftApplication_13; }
	inline void set_OnInterstitialLeftApplication_13(Action_t3226471752 * value)
	{
		___OnInterstitialLeftApplication_13 = value;
		Il2CppCodeGenWriteBarrier(&___OnInterstitialLeftApplication_13, value);
	}

	inline static int32_t get_offset_of_OnVideoFinished_14() { return static_cast<int32_t>(offsetof(SA_EditorAd_t1410159287_StaticFields, ___OnVideoFinished_14)); }
	inline Action_1_t3627374100 * get_OnVideoFinished_14() const { return ___OnVideoFinished_14; }
	inline Action_1_t3627374100 ** get_address_of_OnVideoFinished_14() { return &___OnVideoFinished_14; }
	inline void set_OnVideoFinished_14(Action_1_t3627374100 * value)
	{
		___OnVideoFinished_14 = value;
		Il2CppCodeGenWriteBarrier(&___OnVideoFinished_14, value);
	}

	inline static int32_t get_offset_of_OnVideoLoadComplete_15() { return static_cast<int32_t>(offsetof(SA_EditorAd_t1410159287_StaticFields, ___OnVideoLoadComplete_15)); }
	inline Action_1_t3627374100 * get_OnVideoLoadComplete_15() const { return ___OnVideoLoadComplete_15; }
	inline Action_1_t3627374100 ** get_address_of_OnVideoLoadComplete_15() { return &___OnVideoLoadComplete_15; }
	inline void set_OnVideoLoadComplete_15(Action_1_t3627374100 * value)
	{
		___OnVideoLoadComplete_15 = value;
		Il2CppCodeGenWriteBarrier(&___OnVideoLoadComplete_15, value);
	}

	inline static int32_t get_offset_of_OnVideoLeftApplication_16() { return static_cast<int32_t>(offsetof(SA_EditorAd_t1410159287_StaticFields, ___OnVideoLeftApplication_16)); }
	inline Action_t3226471752 * get_OnVideoLeftApplication_16() const { return ___OnVideoLeftApplication_16; }
	inline Action_t3226471752 ** get_address_of_OnVideoLeftApplication_16() { return &___OnVideoLeftApplication_16; }
	inline void set_OnVideoLeftApplication_16(Action_t3226471752 * value)
	{
		___OnVideoLeftApplication_16 = value;
		Il2CppCodeGenWriteBarrier(&___OnVideoLeftApplication_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
