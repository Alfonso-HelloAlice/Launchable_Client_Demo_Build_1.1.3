#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t1779888572;
// UnityEngine.UI.Button
struct Button_t2872111280;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TrackableEventHandler
struct  TrackableEventHandler_t3812462983  : public MonoBehaviour_t1158329972
{
public:
	// Vuforia.TrackableBehaviour TrackableEventHandler::mTrackableBehaviour
	TrackableBehaviour_t1779888572 * ___mTrackableBehaviour_2;
	// System.Boolean TrackableEventHandler::mHasBeenFound
	bool ___mHasBeenFound_3;
	// System.Boolean TrackableEventHandler::mLostTracking
	bool ___mLostTracking_4;
	// System.Single TrackableEventHandler::mSecondsSinceLost
	float ___mSecondsSinceLost_5;
	// UnityEngine.UI.Button TrackableEventHandler::bt1
	Button_t2872111280 * ___bt1_6;
	// UnityEngine.UI.Button TrackableEventHandler::bt2
	Button_t2872111280 * ___bt2_7;
	// System.Boolean TrackableEventHandler::testing
	bool ___testing_8;

public:
	inline static int32_t get_offset_of_mTrackableBehaviour_2() { return static_cast<int32_t>(offsetof(TrackableEventHandler_t3812462983, ___mTrackableBehaviour_2)); }
	inline TrackableBehaviour_t1779888572 * get_mTrackableBehaviour_2() const { return ___mTrackableBehaviour_2; }
	inline TrackableBehaviour_t1779888572 ** get_address_of_mTrackableBehaviour_2() { return &___mTrackableBehaviour_2; }
	inline void set_mTrackableBehaviour_2(TrackableBehaviour_t1779888572 * value)
	{
		___mTrackableBehaviour_2 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackableBehaviour_2, value);
	}

	inline static int32_t get_offset_of_mHasBeenFound_3() { return static_cast<int32_t>(offsetof(TrackableEventHandler_t3812462983, ___mHasBeenFound_3)); }
	inline bool get_mHasBeenFound_3() const { return ___mHasBeenFound_3; }
	inline bool* get_address_of_mHasBeenFound_3() { return &___mHasBeenFound_3; }
	inline void set_mHasBeenFound_3(bool value)
	{
		___mHasBeenFound_3 = value;
	}

	inline static int32_t get_offset_of_mLostTracking_4() { return static_cast<int32_t>(offsetof(TrackableEventHandler_t3812462983, ___mLostTracking_4)); }
	inline bool get_mLostTracking_4() const { return ___mLostTracking_4; }
	inline bool* get_address_of_mLostTracking_4() { return &___mLostTracking_4; }
	inline void set_mLostTracking_4(bool value)
	{
		___mLostTracking_4 = value;
	}

	inline static int32_t get_offset_of_mSecondsSinceLost_5() { return static_cast<int32_t>(offsetof(TrackableEventHandler_t3812462983, ___mSecondsSinceLost_5)); }
	inline float get_mSecondsSinceLost_5() const { return ___mSecondsSinceLost_5; }
	inline float* get_address_of_mSecondsSinceLost_5() { return &___mSecondsSinceLost_5; }
	inline void set_mSecondsSinceLost_5(float value)
	{
		___mSecondsSinceLost_5 = value;
	}

	inline static int32_t get_offset_of_bt1_6() { return static_cast<int32_t>(offsetof(TrackableEventHandler_t3812462983, ___bt1_6)); }
	inline Button_t2872111280 * get_bt1_6() const { return ___bt1_6; }
	inline Button_t2872111280 ** get_address_of_bt1_6() { return &___bt1_6; }
	inline void set_bt1_6(Button_t2872111280 * value)
	{
		___bt1_6 = value;
		Il2CppCodeGenWriteBarrier(&___bt1_6, value);
	}

	inline static int32_t get_offset_of_bt2_7() { return static_cast<int32_t>(offsetof(TrackableEventHandler_t3812462983, ___bt2_7)); }
	inline Button_t2872111280 * get_bt2_7() const { return ___bt2_7; }
	inline Button_t2872111280 ** get_address_of_bt2_7() { return &___bt2_7; }
	inline void set_bt2_7(Button_t2872111280 * value)
	{
		___bt2_7 = value;
		Il2CppCodeGenWriteBarrier(&___bt2_7, value);
	}

	inline static int32_t get_offset_of_testing_8() { return static_cast<int32_t>(offsetof(TrackableEventHandler_t3812462983, ___testing_8)); }
	inline bool get_testing_8() const { return ___testing_8; }
	inline bool* get_address_of_testing_8() { return &___testing_8; }
	inline void set_testing_8(bool value)
	{
		___testing_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
