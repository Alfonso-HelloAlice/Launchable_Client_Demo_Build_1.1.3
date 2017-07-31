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
// UnityEngine.GameObject
struct GameObject_t1756533147;
// SA_Label
struct SA_Label_t226960149;
// UnityEngine.Texture
struct Texture_t2243626319;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA_FriendUI
struct  SA_FriendUI_t3775341837  : public MonoBehaviour_t1158329972
{
public:
	// System.String SA_FriendUI::_pId
	String_t* ____pId_2;
	// UnityEngine.GameObject SA_FriendUI::avatar
	GameObject_t1756533147 * ___avatar_3;
	// SA_Label SA_FriendUI::playerId
	SA_Label_t226960149 * ___playerId_4;
	// SA_Label SA_FriendUI::playerName
	SA_Label_t226960149 * ___playerName_5;
	// UnityEngine.Texture SA_FriendUI::defaulttexture
	Texture_t2243626319 * ___defaulttexture_6;

public:
	inline static int32_t get_offset_of__pId_2() { return static_cast<int32_t>(offsetof(SA_FriendUI_t3775341837, ____pId_2)); }
	inline String_t* get__pId_2() const { return ____pId_2; }
	inline String_t** get_address_of__pId_2() { return &____pId_2; }
	inline void set__pId_2(String_t* value)
	{
		____pId_2 = value;
		Il2CppCodeGenWriteBarrier(&____pId_2, value);
	}

	inline static int32_t get_offset_of_avatar_3() { return static_cast<int32_t>(offsetof(SA_FriendUI_t3775341837, ___avatar_3)); }
	inline GameObject_t1756533147 * get_avatar_3() const { return ___avatar_3; }
	inline GameObject_t1756533147 ** get_address_of_avatar_3() { return &___avatar_3; }
	inline void set_avatar_3(GameObject_t1756533147 * value)
	{
		___avatar_3 = value;
		Il2CppCodeGenWriteBarrier(&___avatar_3, value);
	}

	inline static int32_t get_offset_of_playerId_4() { return static_cast<int32_t>(offsetof(SA_FriendUI_t3775341837, ___playerId_4)); }
	inline SA_Label_t226960149 * get_playerId_4() const { return ___playerId_4; }
	inline SA_Label_t226960149 ** get_address_of_playerId_4() { return &___playerId_4; }
	inline void set_playerId_4(SA_Label_t226960149 * value)
	{
		___playerId_4 = value;
		Il2CppCodeGenWriteBarrier(&___playerId_4, value);
	}

	inline static int32_t get_offset_of_playerName_5() { return static_cast<int32_t>(offsetof(SA_FriendUI_t3775341837, ___playerName_5)); }
	inline SA_Label_t226960149 * get_playerName_5() const { return ___playerName_5; }
	inline SA_Label_t226960149 ** get_address_of_playerName_5() { return &___playerName_5; }
	inline void set_playerName_5(SA_Label_t226960149 * value)
	{
		___playerName_5 = value;
		Il2CppCodeGenWriteBarrier(&___playerName_5, value);
	}

	inline static int32_t get_offset_of_defaulttexture_6() { return static_cast<int32_t>(offsetof(SA_FriendUI_t3775341837, ___defaulttexture_6)); }
	inline Texture_t2243626319 * get_defaulttexture_6() const { return ___defaulttexture_6; }
	inline Texture_t2243626319 ** get_address_of_defaulttexture_6() { return &___defaulttexture_6; }
	inline void set_defaulttexture_6(Texture_t2243626319 * value)
	{
		___defaulttexture_6 = value;
		Il2CppCodeGenWriteBarrier(&___defaulttexture_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
