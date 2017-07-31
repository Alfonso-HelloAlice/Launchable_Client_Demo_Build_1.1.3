#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.Sprite
struct Sprite_t309593783;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// flashLightController
struct  flashLightController_t903264914  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Image flashLightController::_TorchToggleImage
	Image_t2042527209 * ____TorchToggleImage_2;
	// UnityEngine.Sprite flashLightController::_TorchOnSprite
	Sprite_t309593783 * ____TorchOnSprite_3;
	// UnityEngine.Sprite flashLightController::_TorchOffSprite
	Sprite_t309593783 * ____TorchOffSprite_4;
	// System.Boolean flashLightController::mIsTorchSupported
	bool ___mIsTorchSupported_5;
	// System.Boolean flashLightController::mTorchState
	bool ___mTorchState_6;

public:
	inline static int32_t get_offset_of__TorchToggleImage_2() { return static_cast<int32_t>(offsetof(flashLightController_t903264914, ____TorchToggleImage_2)); }
	inline Image_t2042527209 * get__TorchToggleImage_2() const { return ____TorchToggleImage_2; }
	inline Image_t2042527209 ** get_address_of__TorchToggleImage_2() { return &____TorchToggleImage_2; }
	inline void set__TorchToggleImage_2(Image_t2042527209 * value)
	{
		____TorchToggleImage_2 = value;
		Il2CppCodeGenWriteBarrier(&____TorchToggleImage_2, value);
	}

	inline static int32_t get_offset_of__TorchOnSprite_3() { return static_cast<int32_t>(offsetof(flashLightController_t903264914, ____TorchOnSprite_3)); }
	inline Sprite_t309593783 * get__TorchOnSprite_3() const { return ____TorchOnSprite_3; }
	inline Sprite_t309593783 ** get_address_of__TorchOnSprite_3() { return &____TorchOnSprite_3; }
	inline void set__TorchOnSprite_3(Sprite_t309593783 * value)
	{
		____TorchOnSprite_3 = value;
		Il2CppCodeGenWriteBarrier(&____TorchOnSprite_3, value);
	}

	inline static int32_t get_offset_of__TorchOffSprite_4() { return static_cast<int32_t>(offsetof(flashLightController_t903264914, ____TorchOffSprite_4)); }
	inline Sprite_t309593783 * get__TorchOffSprite_4() const { return ____TorchOffSprite_4; }
	inline Sprite_t309593783 ** get_address_of__TorchOffSprite_4() { return &____TorchOffSprite_4; }
	inline void set__TorchOffSprite_4(Sprite_t309593783 * value)
	{
		____TorchOffSprite_4 = value;
		Il2CppCodeGenWriteBarrier(&____TorchOffSprite_4, value);
	}

	inline static int32_t get_offset_of_mIsTorchSupported_5() { return static_cast<int32_t>(offsetof(flashLightController_t903264914, ___mIsTorchSupported_5)); }
	inline bool get_mIsTorchSupported_5() const { return ___mIsTorchSupported_5; }
	inline bool* get_address_of_mIsTorchSupported_5() { return &___mIsTorchSupported_5; }
	inline void set_mIsTorchSupported_5(bool value)
	{
		___mIsTorchSupported_5 = value;
	}

	inline static int32_t get_offset_of_mTorchState_6() { return static_cast<int32_t>(offsetof(flashLightController_t903264914, ___mTorchState_6)); }
	inline bool get_mTorchState_6() const { return ___mTorchState_6; }
	inline bool* get_address_of_mTorchState_6() { return &___mTorchState_6; }
	inline void set_mTorchState_6(bool value)
	{
		___mTorchState_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
