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
// DefaultPreviewButton
struct DefaultPreviewButton_t12674677;
// DefaultPreviewButton[]
struct DefaultPreviewButtonU5BU5D_t3800739864;
// SA_PartisipantUI[]
struct SA_PartisipantUIU5BU5D_t1392135761;
// SA_FriendUI[]
struct SA_FriendUIU5BU5D_t2705386528;
// UnityEngine.Texture
struct Texture_t2243626319;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RTM_GameExampleController
struct  RTM_GameExampleController_t4059818766  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject RTM_GameExampleController::avatar
	GameObject_t1756533147 * ___avatar_2;
	// UnityEngine.GameObject RTM_GameExampleController::hi
	GameObject_t1756533147 * ___hi_3;
	// SA_Label RTM_GameExampleController::playerLabel
	SA_Label_t226960149 * ___playerLabel_4;
	// SA_Label RTM_GameExampleController::gameState
	SA_Label_t226960149 * ___gameState_5;
	// SA_Label RTM_GameExampleController::parisipants
	SA_Label_t226960149 * ___parisipants_6;
	// DefaultPreviewButton RTM_GameExampleController::connectButton
	DefaultPreviewButton_t12674677 * ___connectButton_7;
	// DefaultPreviewButton RTM_GameExampleController::helloButton
	DefaultPreviewButton_t12674677 * ___helloButton_8;
	// DefaultPreviewButton RTM_GameExampleController::leaveRoomButton
	DefaultPreviewButton_t12674677 * ___leaveRoomButton_9;
	// DefaultPreviewButton RTM_GameExampleController::showRoomButton
	DefaultPreviewButton_t12674677 * ___showRoomButton_10;
	// DefaultPreviewButton[] RTM_GameExampleController::ConnectionDependedntButtons
	DefaultPreviewButtonU5BU5D_t3800739864* ___ConnectionDependedntButtons_11;
	// SA_PartisipantUI[] RTM_GameExampleController::patricipants
	SA_PartisipantUIU5BU5D_t1392135761* ___patricipants_12;
	// SA_FriendUI[] RTM_GameExampleController::friends
	SA_FriendUIU5BU5D_t2705386528* ___friends_13;
	// UnityEngine.Texture RTM_GameExampleController::defaulttexture
	Texture_t2243626319 * ___defaulttexture_14;
	// System.String RTM_GameExampleController::inviteId
	String_t* ___inviteId_15;

public:
	inline static int32_t get_offset_of_avatar_2() { return static_cast<int32_t>(offsetof(RTM_GameExampleController_t4059818766, ___avatar_2)); }
	inline GameObject_t1756533147 * get_avatar_2() const { return ___avatar_2; }
	inline GameObject_t1756533147 ** get_address_of_avatar_2() { return &___avatar_2; }
	inline void set_avatar_2(GameObject_t1756533147 * value)
	{
		___avatar_2 = value;
		Il2CppCodeGenWriteBarrier(&___avatar_2, value);
	}

	inline static int32_t get_offset_of_hi_3() { return static_cast<int32_t>(offsetof(RTM_GameExampleController_t4059818766, ___hi_3)); }
	inline GameObject_t1756533147 * get_hi_3() const { return ___hi_3; }
	inline GameObject_t1756533147 ** get_address_of_hi_3() { return &___hi_3; }
	inline void set_hi_3(GameObject_t1756533147 * value)
	{
		___hi_3 = value;
		Il2CppCodeGenWriteBarrier(&___hi_3, value);
	}

	inline static int32_t get_offset_of_playerLabel_4() { return static_cast<int32_t>(offsetof(RTM_GameExampleController_t4059818766, ___playerLabel_4)); }
	inline SA_Label_t226960149 * get_playerLabel_4() const { return ___playerLabel_4; }
	inline SA_Label_t226960149 ** get_address_of_playerLabel_4() { return &___playerLabel_4; }
	inline void set_playerLabel_4(SA_Label_t226960149 * value)
	{
		___playerLabel_4 = value;
		Il2CppCodeGenWriteBarrier(&___playerLabel_4, value);
	}

	inline static int32_t get_offset_of_gameState_5() { return static_cast<int32_t>(offsetof(RTM_GameExampleController_t4059818766, ___gameState_5)); }
	inline SA_Label_t226960149 * get_gameState_5() const { return ___gameState_5; }
	inline SA_Label_t226960149 ** get_address_of_gameState_5() { return &___gameState_5; }
	inline void set_gameState_5(SA_Label_t226960149 * value)
	{
		___gameState_5 = value;
		Il2CppCodeGenWriteBarrier(&___gameState_5, value);
	}

	inline static int32_t get_offset_of_parisipants_6() { return static_cast<int32_t>(offsetof(RTM_GameExampleController_t4059818766, ___parisipants_6)); }
	inline SA_Label_t226960149 * get_parisipants_6() const { return ___parisipants_6; }
	inline SA_Label_t226960149 ** get_address_of_parisipants_6() { return &___parisipants_6; }
	inline void set_parisipants_6(SA_Label_t226960149 * value)
	{
		___parisipants_6 = value;
		Il2CppCodeGenWriteBarrier(&___parisipants_6, value);
	}

	inline static int32_t get_offset_of_connectButton_7() { return static_cast<int32_t>(offsetof(RTM_GameExampleController_t4059818766, ___connectButton_7)); }
	inline DefaultPreviewButton_t12674677 * get_connectButton_7() const { return ___connectButton_7; }
	inline DefaultPreviewButton_t12674677 ** get_address_of_connectButton_7() { return &___connectButton_7; }
	inline void set_connectButton_7(DefaultPreviewButton_t12674677 * value)
	{
		___connectButton_7 = value;
		Il2CppCodeGenWriteBarrier(&___connectButton_7, value);
	}

	inline static int32_t get_offset_of_helloButton_8() { return static_cast<int32_t>(offsetof(RTM_GameExampleController_t4059818766, ___helloButton_8)); }
	inline DefaultPreviewButton_t12674677 * get_helloButton_8() const { return ___helloButton_8; }
	inline DefaultPreviewButton_t12674677 ** get_address_of_helloButton_8() { return &___helloButton_8; }
	inline void set_helloButton_8(DefaultPreviewButton_t12674677 * value)
	{
		___helloButton_8 = value;
		Il2CppCodeGenWriteBarrier(&___helloButton_8, value);
	}

	inline static int32_t get_offset_of_leaveRoomButton_9() { return static_cast<int32_t>(offsetof(RTM_GameExampleController_t4059818766, ___leaveRoomButton_9)); }
	inline DefaultPreviewButton_t12674677 * get_leaveRoomButton_9() const { return ___leaveRoomButton_9; }
	inline DefaultPreviewButton_t12674677 ** get_address_of_leaveRoomButton_9() { return &___leaveRoomButton_9; }
	inline void set_leaveRoomButton_9(DefaultPreviewButton_t12674677 * value)
	{
		___leaveRoomButton_9 = value;
		Il2CppCodeGenWriteBarrier(&___leaveRoomButton_9, value);
	}

	inline static int32_t get_offset_of_showRoomButton_10() { return static_cast<int32_t>(offsetof(RTM_GameExampleController_t4059818766, ___showRoomButton_10)); }
	inline DefaultPreviewButton_t12674677 * get_showRoomButton_10() const { return ___showRoomButton_10; }
	inline DefaultPreviewButton_t12674677 ** get_address_of_showRoomButton_10() { return &___showRoomButton_10; }
	inline void set_showRoomButton_10(DefaultPreviewButton_t12674677 * value)
	{
		___showRoomButton_10 = value;
		Il2CppCodeGenWriteBarrier(&___showRoomButton_10, value);
	}

	inline static int32_t get_offset_of_ConnectionDependedntButtons_11() { return static_cast<int32_t>(offsetof(RTM_GameExampleController_t4059818766, ___ConnectionDependedntButtons_11)); }
	inline DefaultPreviewButtonU5BU5D_t3800739864* get_ConnectionDependedntButtons_11() const { return ___ConnectionDependedntButtons_11; }
	inline DefaultPreviewButtonU5BU5D_t3800739864** get_address_of_ConnectionDependedntButtons_11() { return &___ConnectionDependedntButtons_11; }
	inline void set_ConnectionDependedntButtons_11(DefaultPreviewButtonU5BU5D_t3800739864* value)
	{
		___ConnectionDependedntButtons_11 = value;
		Il2CppCodeGenWriteBarrier(&___ConnectionDependedntButtons_11, value);
	}

	inline static int32_t get_offset_of_patricipants_12() { return static_cast<int32_t>(offsetof(RTM_GameExampleController_t4059818766, ___patricipants_12)); }
	inline SA_PartisipantUIU5BU5D_t1392135761* get_patricipants_12() const { return ___patricipants_12; }
	inline SA_PartisipantUIU5BU5D_t1392135761** get_address_of_patricipants_12() { return &___patricipants_12; }
	inline void set_patricipants_12(SA_PartisipantUIU5BU5D_t1392135761* value)
	{
		___patricipants_12 = value;
		Il2CppCodeGenWriteBarrier(&___patricipants_12, value);
	}

	inline static int32_t get_offset_of_friends_13() { return static_cast<int32_t>(offsetof(RTM_GameExampleController_t4059818766, ___friends_13)); }
	inline SA_FriendUIU5BU5D_t2705386528* get_friends_13() const { return ___friends_13; }
	inline SA_FriendUIU5BU5D_t2705386528** get_address_of_friends_13() { return &___friends_13; }
	inline void set_friends_13(SA_FriendUIU5BU5D_t2705386528* value)
	{
		___friends_13 = value;
		Il2CppCodeGenWriteBarrier(&___friends_13, value);
	}

	inline static int32_t get_offset_of_defaulttexture_14() { return static_cast<int32_t>(offsetof(RTM_GameExampleController_t4059818766, ___defaulttexture_14)); }
	inline Texture_t2243626319 * get_defaulttexture_14() const { return ___defaulttexture_14; }
	inline Texture_t2243626319 ** get_address_of_defaulttexture_14() { return &___defaulttexture_14; }
	inline void set_defaulttexture_14(Texture_t2243626319 * value)
	{
		___defaulttexture_14 = value;
		Il2CppCodeGenWriteBarrier(&___defaulttexture_14, value);
	}

	inline static int32_t get_offset_of_inviteId_15() { return static_cast<int32_t>(offsetof(RTM_GameExampleController_t4059818766, ___inviteId_15)); }
	inline String_t* get_inviteId_15() const { return ___inviteId_15; }
	inline String_t** get_address_of_inviteId_15() { return &___inviteId_15; }
	inline void set_inviteId_15(String_t* value)
	{
		___inviteId_15 = value;
		Il2CppCodeGenWriteBarrier(&___inviteId_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
