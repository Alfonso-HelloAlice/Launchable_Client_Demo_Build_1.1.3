#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.Action`1<UnityEngine.Texture2D>
struct Action_1_t3344795111;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GC_Player
struct  GC_Player_t1334946238  : public Il2CppObject
{
public:
	// System.String GC_Player::_playerId
	String_t* ____playerId_0;
	// System.String GC_Player::_name
	String_t* ____name_1;
	// System.String GC_Player::_avatarUrl
	String_t* ____avatarUrl_2;
	// UnityEngine.Texture2D GC_Player::_avatar
	Texture2D_t3542995729 * ____avatar_3;
	// System.Action`1<UnityEngine.Texture2D> GC_Player::AvatarLoaded
	Action_1_t3344795111 * ___AvatarLoaded_4;

public:
	inline static int32_t get_offset_of__playerId_0() { return static_cast<int32_t>(offsetof(GC_Player_t1334946238, ____playerId_0)); }
	inline String_t* get__playerId_0() const { return ____playerId_0; }
	inline String_t** get_address_of__playerId_0() { return &____playerId_0; }
	inline void set__playerId_0(String_t* value)
	{
		____playerId_0 = value;
		Il2CppCodeGenWriteBarrier(&____playerId_0, value);
	}

	inline static int32_t get_offset_of__name_1() { return static_cast<int32_t>(offsetof(GC_Player_t1334946238, ____name_1)); }
	inline String_t* get__name_1() const { return ____name_1; }
	inline String_t** get_address_of__name_1() { return &____name_1; }
	inline void set__name_1(String_t* value)
	{
		____name_1 = value;
		Il2CppCodeGenWriteBarrier(&____name_1, value);
	}

	inline static int32_t get_offset_of__avatarUrl_2() { return static_cast<int32_t>(offsetof(GC_Player_t1334946238, ____avatarUrl_2)); }
	inline String_t* get__avatarUrl_2() const { return ____avatarUrl_2; }
	inline String_t** get_address_of__avatarUrl_2() { return &____avatarUrl_2; }
	inline void set__avatarUrl_2(String_t* value)
	{
		____avatarUrl_2 = value;
		Il2CppCodeGenWriteBarrier(&____avatarUrl_2, value);
	}

	inline static int32_t get_offset_of__avatar_3() { return static_cast<int32_t>(offsetof(GC_Player_t1334946238, ____avatar_3)); }
	inline Texture2D_t3542995729 * get__avatar_3() const { return ____avatar_3; }
	inline Texture2D_t3542995729 ** get_address_of__avatar_3() { return &____avatar_3; }
	inline void set__avatar_3(Texture2D_t3542995729 * value)
	{
		____avatar_3 = value;
		Il2CppCodeGenWriteBarrier(&____avatar_3, value);
	}

	inline static int32_t get_offset_of_AvatarLoaded_4() { return static_cast<int32_t>(offsetof(GC_Player_t1334946238, ___AvatarLoaded_4)); }
	inline Action_1_t3344795111 * get_AvatarLoaded_4() const { return ___AvatarLoaded_4; }
	inline Action_1_t3344795111 ** get_address_of_AvatarLoaded_4() { return &___AvatarLoaded_4; }
	inline void set_AvatarLoaded_4(Action_1_t3344795111 * value)
	{
		___AvatarLoaded_4 = value;
		Il2CppCodeGenWriteBarrier(&___AvatarLoaded_4, value);
	}
};

struct GC_Player_t1334946238_StaticFields
{
public:
	// System.Action`1<UnityEngine.Texture2D> GC_Player::<>f__am$cache0
	Action_1_t3344795111 * ___U3CU3Ef__amU24cache0_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_5() { return static_cast<int32_t>(offsetof(GC_Player_t1334946238_StaticFields, ___U3CU3Ef__amU24cache0_5)); }
	inline Action_1_t3344795111 * get_U3CU3Ef__amU24cache0_5() const { return ___U3CU3Ef__amU24cache0_5; }
	inline Action_1_t3344795111 ** get_address_of_U3CU3Ef__amU24cache0_5() { return &___U3CU3Ef__amU24cache0_5; }
	inline void set_U3CU3Ef__amU24cache0_5(Action_1_t3344795111 * value)
	{
		___U3CU3Ef__amU24cache0_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
