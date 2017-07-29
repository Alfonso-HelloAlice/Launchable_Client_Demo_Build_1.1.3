#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.TextMesh
struct TextMesh_t1641806576;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CustomPlayerUIRow
struct  CustomPlayerUIRow_t1758969648  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.TextMesh CustomPlayerUIRow::playerId
	TextMesh_t1641806576 * ___playerId_2;
	// UnityEngine.TextMesh CustomPlayerUIRow::playerName
	TextMesh_t1641806576 * ___playerName_3;
	// UnityEngine.GameObject CustomPlayerUIRow::avatar
	GameObject_t1756533147 * ___avatar_4;
	// UnityEngine.TextMesh CustomPlayerUIRow::hasIcon
	TextMesh_t1641806576 * ___hasIcon_5;
	// UnityEngine.TextMesh CustomPlayerUIRow::hasImage
	TextMesh_t1641806576 * ___hasImage_6;

public:
	inline static int32_t get_offset_of_playerId_2() { return static_cast<int32_t>(offsetof(CustomPlayerUIRow_t1758969648, ___playerId_2)); }
	inline TextMesh_t1641806576 * get_playerId_2() const { return ___playerId_2; }
	inline TextMesh_t1641806576 ** get_address_of_playerId_2() { return &___playerId_2; }
	inline void set_playerId_2(TextMesh_t1641806576 * value)
	{
		___playerId_2 = value;
		Il2CppCodeGenWriteBarrier(&___playerId_2, value);
	}

	inline static int32_t get_offset_of_playerName_3() { return static_cast<int32_t>(offsetof(CustomPlayerUIRow_t1758969648, ___playerName_3)); }
	inline TextMesh_t1641806576 * get_playerName_3() const { return ___playerName_3; }
	inline TextMesh_t1641806576 ** get_address_of_playerName_3() { return &___playerName_3; }
	inline void set_playerName_3(TextMesh_t1641806576 * value)
	{
		___playerName_3 = value;
		Il2CppCodeGenWriteBarrier(&___playerName_3, value);
	}

	inline static int32_t get_offset_of_avatar_4() { return static_cast<int32_t>(offsetof(CustomPlayerUIRow_t1758969648, ___avatar_4)); }
	inline GameObject_t1756533147 * get_avatar_4() const { return ___avatar_4; }
	inline GameObject_t1756533147 ** get_address_of_avatar_4() { return &___avatar_4; }
	inline void set_avatar_4(GameObject_t1756533147 * value)
	{
		___avatar_4 = value;
		Il2CppCodeGenWriteBarrier(&___avatar_4, value);
	}

	inline static int32_t get_offset_of_hasIcon_5() { return static_cast<int32_t>(offsetof(CustomPlayerUIRow_t1758969648, ___hasIcon_5)); }
	inline TextMesh_t1641806576 * get_hasIcon_5() const { return ___hasIcon_5; }
	inline TextMesh_t1641806576 ** get_address_of_hasIcon_5() { return &___hasIcon_5; }
	inline void set_hasIcon_5(TextMesh_t1641806576 * value)
	{
		___hasIcon_5 = value;
		Il2CppCodeGenWriteBarrier(&___hasIcon_5, value);
	}

	inline static int32_t get_offset_of_hasImage_6() { return static_cast<int32_t>(offsetof(CustomPlayerUIRow_t1758969648, ___hasImage_6)); }
	inline TextMesh_t1641806576 * get_hasImage_6() const { return ___hasImage_6; }
	inline TextMesh_t1641806576 ** get_address_of_hasImage_6() { return &___hasImage_6; }
	inline void set_hasImage_6(TextMesh_t1641806576 * value)
	{
		___hasImage_6 = value;
		Il2CppCodeGenWriteBarrier(&___hasImage_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
