#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.Sprite
struct Sprite_t309593783;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FriendPresenter
struct  FriendPresenter_t840974312  : public MonoBehaviour_t1158329972
{
public:
	// System.String FriendPresenter::_pId
	String_t* ____pId_2;
	// UnityEngine.UI.Image FriendPresenter::avatar
	Image_t2042527209 * ___avatar_3;
	// UnityEngine.UI.Text FriendPresenter::playerId
	Text_t356221433 * ___playerId_4;
	// UnityEngine.UI.Text FriendPresenter::playerName
	Text_t356221433 * ___playerName_5;
	// UnityEngine.Sprite FriendPresenter::defaulttexture
	Sprite_t309593783 * ___defaulttexture_6;

public:
	inline static int32_t get_offset_of__pId_2() { return static_cast<int32_t>(offsetof(FriendPresenter_t840974312, ____pId_2)); }
	inline String_t* get__pId_2() const { return ____pId_2; }
	inline String_t** get_address_of__pId_2() { return &____pId_2; }
	inline void set__pId_2(String_t* value)
	{
		____pId_2 = value;
		Il2CppCodeGenWriteBarrier(&____pId_2, value);
	}

	inline static int32_t get_offset_of_avatar_3() { return static_cast<int32_t>(offsetof(FriendPresenter_t840974312, ___avatar_3)); }
	inline Image_t2042527209 * get_avatar_3() const { return ___avatar_3; }
	inline Image_t2042527209 ** get_address_of_avatar_3() { return &___avatar_3; }
	inline void set_avatar_3(Image_t2042527209 * value)
	{
		___avatar_3 = value;
		Il2CppCodeGenWriteBarrier(&___avatar_3, value);
	}

	inline static int32_t get_offset_of_playerId_4() { return static_cast<int32_t>(offsetof(FriendPresenter_t840974312, ___playerId_4)); }
	inline Text_t356221433 * get_playerId_4() const { return ___playerId_4; }
	inline Text_t356221433 ** get_address_of_playerId_4() { return &___playerId_4; }
	inline void set_playerId_4(Text_t356221433 * value)
	{
		___playerId_4 = value;
		Il2CppCodeGenWriteBarrier(&___playerId_4, value);
	}

	inline static int32_t get_offset_of_playerName_5() { return static_cast<int32_t>(offsetof(FriendPresenter_t840974312, ___playerName_5)); }
	inline Text_t356221433 * get_playerName_5() const { return ___playerName_5; }
	inline Text_t356221433 ** get_address_of_playerName_5() { return &___playerName_5; }
	inline void set_playerName_5(Text_t356221433 * value)
	{
		___playerName_5 = value;
		Il2CppCodeGenWriteBarrier(&___playerName_5, value);
	}

	inline static int32_t get_offset_of_defaulttexture_6() { return static_cast<int32_t>(offsetof(FriendPresenter_t840974312, ___defaulttexture_6)); }
	inline Sprite_t309593783 * get_defaulttexture_6() const { return ___defaulttexture_6; }
	inline Sprite_t309593783 ** get_address_of_defaulttexture_6() { return &___defaulttexture_6; }
	inline void set_defaulttexture_6(Sprite_t309593783 * value)
	{
		___defaulttexture_6 = value;
		Il2CppCodeGenWriteBarrier(&___defaulttexture_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
