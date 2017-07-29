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
// SA_Label
struct SA_Label_t226960149;
// UnityEngine.Texture
struct Texture_t2243626319;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA_PartisipantUI
struct  SA_PartisipantUI_t3115332592  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject SA_PartisipantUI::avatar
	GameObject_t1756533147 * ___avatar_2;
	// SA_Label SA_PartisipantUI::id
	SA_Label_t226960149 * ___id_3;
	// SA_Label SA_PartisipantUI::status
	SA_Label_t226960149 * ___status_4;
	// SA_Label SA_PartisipantUI::playerId
	SA_Label_t226960149 * ___playerId_5;
	// SA_Label SA_PartisipantUI::playerName
	SA_Label_t226960149 * ___playerName_6;
	// UnityEngine.Texture SA_PartisipantUI::defaulttexture
	Texture_t2243626319 * ___defaulttexture_7;

public:
	inline static int32_t get_offset_of_avatar_2() { return static_cast<int32_t>(offsetof(SA_PartisipantUI_t3115332592, ___avatar_2)); }
	inline GameObject_t1756533147 * get_avatar_2() const { return ___avatar_2; }
	inline GameObject_t1756533147 ** get_address_of_avatar_2() { return &___avatar_2; }
	inline void set_avatar_2(GameObject_t1756533147 * value)
	{
		___avatar_2 = value;
		Il2CppCodeGenWriteBarrier(&___avatar_2, value);
	}

	inline static int32_t get_offset_of_id_3() { return static_cast<int32_t>(offsetof(SA_PartisipantUI_t3115332592, ___id_3)); }
	inline SA_Label_t226960149 * get_id_3() const { return ___id_3; }
	inline SA_Label_t226960149 ** get_address_of_id_3() { return &___id_3; }
	inline void set_id_3(SA_Label_t226960149 * value)
	{
		___id_3 = value;
		Il2CppCodeGenWriteBarrier(&___id_3, value);
	}

	inline static int32_t get_offset_of_status_4() { return static_cast<int32_t>(offsetof(SA_PartisipantUI_t3115332592, ___status_4)); }
	inline SA_Label_t226960149 * get_status_4() const { return ___status_4; }
	inline SA_Label_t226960149 ** get_address_of_status_4() { return &___status_4; }
	inline void set_status_4(SA_Label_t226960149 * value)
	{
		___status_4 = value;
		Il2CppCodeGenWriteBarrier(&___status_4, value);
	}

	inline static int32_t get_offset_of_playerId_5() { return static_cast<int32_t>(offsetof(SA_PartisipantUI_t3115332592, ___playerId_5)); }
	inline SA_Label_t226960149 * get_playerId_5() const { return ___playerId_5; }
	inline SA_Label_t226960149 ** get_address_of_playerId_5() { return &___playerId_5; }
	inline void set_playerId_5(SA_Label_t226960149 * value)
	{
		___playerId_5 = value;
		Il2CppCodeGenWriteBarrier(&___playerId_5, value);
	}

	inline static int32_t get_offset_of_playerName_6() { return static_cast<int32_t>(offsetof(SA_PartisipantUI_t3115332592, ___playerName_6)); }
	inline SA_Label_t226960149 * get_playerName_6() const { return ___playerName_6; }
	inline SA_Label_t226960149 ** get_address_of_playerName_6() { return &___playerName_6; }
	inline void set_playerName_6(SA_Label_t226960149 * value)
	{
		___playerName_6 = value;
		Il2CppCodeGenWriteBarrier(&___playerName_6, value);
	}

	inline static int32_t get_offset_of_defaulttexture_7() { return static_cast<int32_t>(offsetof(SA_PartisipantUI_t3115332592, ___defaulttexture_7)); }
	inline Texture_t2243626319 * get_defaulttexture_7() const { return ___defaulttexture_7; }
	inline Texture_t2243626319 ** get_address_of_defaulttexture_7() { return &___defaulttexture_7; }
	inline void set_defaulttexture_7(Texture_t2243626319 * value)
	{
		___defaulttexture_7 = value;
		Il2CppCodeGenWriteBarrier(&___defaulttexture_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
