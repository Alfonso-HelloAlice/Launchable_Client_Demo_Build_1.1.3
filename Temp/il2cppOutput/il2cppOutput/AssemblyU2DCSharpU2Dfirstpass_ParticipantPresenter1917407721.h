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
// UnityEngine.UI.Text
struct Text_t356221433;
// System.String
struct String_t;
// UnityEngine.Sprite
struct Sprite_t309593783;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ParticipantPresenter
struct  ParticipantPresenter_t1917407721  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Image ParticipantPresenter::avatar
	Image_t2042527209 * ___avatar_2;
	// UnityEngine.UI.Text ParticipantPresenter::id
	Text_t356221433 * ___id_3;
	// UnityEngine.UI.Text ParticipantPresenter::status
	Text_t356221433 * ___status_4;
	// UnityEngine.UI.Text ParticipantPresenter::playerId
	Text_t356221433 * ___playerId_5;
	// UnityEngine.UI.Text ParticipantPresenter::playerName
	Text_t356221433 * ___playerName_6;
	// System.String ParticipantPresenter::_id
	String_t* ____id_7;
	// UnityEngine.Sprite ParticipantPresenter::defaulttexture
	Sprite_t309593783 * ___defaulttexture_8;
	// UnityEngine.Sprite ParticipantPresenter::icon
	Sprite_t309593783 * ___icon_9;

public:
	inline static int32_t get_offset_of_avatar_2() { return static_cast<int32_t>(offsetof(ParticipantPresenter_t1917407721, ___avatar_2)); }
	inline Image_t2042527209 * get_avatar_2() const { return ___avatar_2; }
	inline Image_t2042527209 ** get_address_of_avatar_2() { return &___avatar_2; }
	inline void set_avatar_2(Image_t2042527209 * value)
	{
		___avatar_2 = value;
		Il2CppCodeGenWriteBarrier(&___avatar_2, value);
	}

	inline static int32_t get_offset_of_id_3() { return static_cast<int32_t>(offsetof(ParticipantPresenter_t1917407721, ___id_3)); }
	inline Text_t356221433 * get_id_3() const { return ___id_3; }
	inline Text_t356221433 ** get_address_of_id_3() { return &___id_3; }
	inline void set_id_3(Text_t356221433 * value)
	{
		___id_3 = value;
		Il2CppCodeGenWriteBarrier(&___id_3, value);
	}

	inline static int32_t get_offset_of_status_4() { return static_cast<int32_t>(offsetof(ParticipantPresenter_t1917407721, ___status_4)); }
	inline Text_t356221433 * get_status_4() const { return ___status_4; }
	inline Text_t356221433 ** get_address_of_status_4() { return &___status_4; }
	inline void set_status_4(Text_t356221433 * value)
	{
		___status_4 = value;
		Il2CppCodeGenWriteBarrier(&___status_4, value);
	}

	inline static int32_t get_offset_of_playerId_5() { return static_cast<int32_t>(offsetof(ParticipantPresenter_t1917407721, ___playerId_5)); }
	inline Text_t356221433 * get_playerId_5() const { return ___playerId_5; }
	inline Text_t356221433 ** get_address_of_playerId_5() { return &___playerId_5; }
	inline void set_playerId_5(Text_t356221433 * value)
	{
		___playerId_5 = value;
		Il2CppCodeGenWriteBarrier(&___playerId_5, value);
	}

	inline static int32_t get_offset_of_playerName_6() { return static_cast<int32_t>(offsetof(ParticipantPresenter_t1917407721, ___playerName_6)); }
	inline Text_t356221433 * get_playerName_6() const { return ___playerName_6; }
	inline Text_t356221433 ** get_address_of_playerName_6() { return &___playerName_6; }
	inline void set_playerName_6(Text_t356221433 * value)
	{
		___playerName_6 = value;
		Il2CppCodeGenWriteBarrier(&___playerName_6, value);
	}

	inline static int32_t get_offset_of__id_7() { return static_cast<int32_t>(offsetof(ParticipantPresenter_t1917407721, ____id_7)); }
	inline String_t* get__id_7() const { return ____id_7; }
	inline String_t** get_address_of__id_7() { return &____id_7; }
	inline void set__id_7(String_t* value)
	{
		____id_7 = value;
		Il2CppCodeGenWriteBarrier(&____id_7, value);
	}

	inline static int32_t get_offset_of_defaulttexture_8() { return static_cast<int32_t>(offsetof(ParticipantPresenter_t1917407721, ___defaulttexture_8)); }
	inline Sprite_t309593783 * get_defaulttexture_8() const { return ___defaulttexture_8; }
	inline Sprite_t309593783 ** get_address_of_defaulttexture_8() { return &___defaulttexture_8; }
	inline void set_defaulttexture_8(Sprite_t309593783 * value)
	{
		___defaulttexture_8 = value;
		Il2CppCodeGenWriteBarrier(&___defaulttexture_8, value);
	}

	inline static int32_t get_offset_of_icon_9() { return static_cast<int32_t>(offsetof(ParticipantPresenter_t1917407721, ___icon_9)); }
	inline Sprite_t309593783 * get_icon_9() const { return ___icon_9; }
	inline Sprite_t309593783 ** get_address_of_icon_9() { return &___icon_9; }
	inline void set_icon_9(Sprite_t309593783 * value)
	{
		___icon_9 = value;
		Il2CppCodeGenWriteBarrier(&___icon_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
