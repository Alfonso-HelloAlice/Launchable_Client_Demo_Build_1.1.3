#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Pattern_Si1547793474.h"

// FB_UserInfo
struct FB_UserInfo_t2704578078;
// System.Collections.Generic.Dictionary`2<System.String,FB_UserInfo>
struct Dictionary_2_t324390044;
// System.Collections.Generic.Dictionary`2<System.String,FB_Score>
struct Dictionary_2_t3365620843;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,FB_LikeInfo>>
struct Dictionary_2_t2747790306;
// System.Collections.Generic.List`1<FB_AppRequest>
struct List_1_t4165401053;
// System.Action
struct Action_t3226471752;
// System.Action`1<FB_AppInviteResult>
struct Action_1_t615634938;
// System.Action`1<FB_PostResult>
struct Action_1_t794684112;
// System.Action`1<System.Boolean>
struct Action_1_t3627374100;
// System.Action`1<FB_LoginResult>
struct Action_1_t1650276661;
// System.Action`1<FB_Result>
struct Action_1_t640047754;
// System.Action`1<FB_AppRequestResult>
struct Action_1_t2252469810;
// SP_FB_API
struct SP_FB_API_t498797273;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SPFacebook
struct  SPFacebook_t1065228369  : public Singleton_1_t1547793474
{
public:
	// FB_UserInfo SPFacebook::_userInfo
	FB_UserInfo_t2704578078 * ____userInfo_4;
	// System.Collections.Generic.Dictionary`2<System.String,FB_UserInfo> SPFacebook::_friends
	Dictionary_2_t324390044 * ____friends_5;
	// System.Collections.Generic.Dictionary`2<System.String,FB_UserInfo> SPFacebook::_invitableFriends
	Dictionary_2_t324390044 * ____invitableFriends_6;
	// System.Boolean SPFacebook::_IsInited
	bool ____IsInited_7;
	// System.Collections.Generic.Dictionary`2<System.String,FB_Score> SPFacebook::_userScores
	Dictionary_2_t3365620843 * ____userScores_8;
	// System.Collections.Generic.Dictionary`2<System.String,FB_Score> SPFacebook::_appScores
	Dictionary_2_t3365620843 * ____appScores_9;
	// System.Int32 SPFacebook::lastSubmitedScore
	int32_t ___lastSubmitedScore_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,FB_LikeInfo>> SPFacebook::_likes
	Dictionary_2_t2747790306 * ____likes_11;
	// System.Collections.Generic.List`1<FB_AppRequest> SPFacebook::_AppRequests
	List_1_t4165401053 * ____AppRequests_12;
	// SP_FB_API SPFacebook::_FB
	Il2CppObject * ____FB_32;

public:
	inline static int32_t get_offset_of__userInfo_4() { return static_cast<int32_t>(offsetof(SPFacebook_t1065228369, ____userInfo_4)); }
	inline FB_UserInfo_t2704578078 * get__userInfo_4() const { return ____userInfo_4; }
	inline FB_UserInfo_t2704578078 ** get_address_of__userInfo_4() { return &____userInfo_4; }
	inline void set__userInfo_4(FB_UserInfo_t2704578078 * value)
	{
		____userInfo_4 = value;
		Il2CppCodeGenWriteBarrier(&____userInfo_4, value);
	}

	inline static int32_t get_offset_of__friends_5() { return static_cast<int32_t>(offsetof(SPFacebook_t1065228369, ____friends_5)); }
	inline Dictionary_2_t324390044 * get__friends_5() const { return ____friends_5; }
	inline Dictionary_2_t324390044 ** get_address_of__friends_5() { return &____friends_5; }
	inline void set__friends_5(Dictionary_2_t324390044 * value)
	{
		____friends_5 = value;
		Il2CppCodeGenWriteBarrier(&____friends_5, value);
	}

	inline static int32_t get_offset_of__invitableFriends_6() { return static_cast<int32_t>(offsetof(SPFacebook_t1065228369, ____invitableFriends_6)); }
	inline Dictionary_2_t324390044 * get__invitableFriends_6() const { return ____invitableFriends_6; }
	inline Dictionary_2_t324390044 ** get_address_of__invitableFriends_6() { return &____invitableFriends_6; }
	inline void set__invitableFriends_6(Dictionary_2_t324390044 * value)
	{
		____invitableFriends_6 = value;
		Il2CppCodeGenWriteBarrier(&____invitableFriends_6, value);
	}

	inline static int32_t get_offset_of__IsInited_7() { return static_cast<int32_t>(offsetof(SPFacebook_t1065228369, ____IsInited_7)); }
	inline bool get__IsInited_7() const { return ____IsInited_7; }
	inline bool* get_address_of__IsInited_7() { return &____IsInited_7; }
	inline void set__IsInited_7(bool value)
	{
		____IsInited_7 = value;
	}

	inline static int32_t get_offset_of__userScores_8() { return static_cast<int32_t>(offsetof(SPFacebook_t1065228369, ____userScores_8)); }
	inline Dictionary_2_t3365620843 * get__userScores_8() const { return ____userScores_8; }
	inline Dictionary_2_t3365620843 ** get_address_of__userScores_8() { return &____userScores_8; }
	inline void set__userScores_8(Dictionary_2_t3365620843 * value)
	{
		____userScores_8 = value;
		Il2CppCodeGenWriteBarrier(&____userScores_8, value);
	}

	inline static int32_t get_offset_of__appScores_9() { return static_cast<int32_t>(offsetof(SPFacebook_t1065228369, ____appScores_9)); }
	inline Dictionary_2_t3365620843 * get__appScores_9() const { return ____appScores_9; }
	inline Dictionary_2_t3365620843 ** get_address_of__appScores_9() { return &____appScores_9; }
	inline void set__appScores_9(Dictionary_2_t3365620843 * value)
	{
		____appScores_9 = value;
		Il2CppCodeGenWriteBarrier(&____appScores_9, value);
	}

	inline static int32_t get_offset_of_lastSubmitedScore_10() { return static_cast<int32_t>(offsetof(SPFacebook_t1065228369, ___lastSubmitedScore_10)); }
	inline int32_t get_lastSubmitedScore_10() const { return ___lastSubmitedScore_10; }
	inline int32_t* get_address_of_lastSubmitedScore_10() { return &___lastSubmitedScore_10; }
	inline void set_lastSubmitedScore_10(int32_t value)
	{
		___lastSubmitedScore_10 = value;
	}

	inline static int32_t get_offset_of__likes_11() { return static_cast<int32_t>(offsetof(SPFacebook_t1065228369, ____likes_11)); }
	inline Dictionary_2_t2747790306 * get__likes_11() const { return ____likes_11; }
	inline Dictionary_2_t2747790306 ** get_address_of__likes_11() { return &____likes_11; }
	inline void set__likes_11(Dictionary_2_t2747790306 * value)
	{
		____likes_11 = value;
		Il2CppCodeGenWriteBarrier(&____likes_11, value);
	}

	inline static int32_t get_offset_of__AppRequests_12() { return static_cast<int32_t>(offsetof(SPFacebook_t1065228369, ____AppRequests_12)); }
	inline List_1_t4165401053 * get__AppRequests_12() const { return ____AppRequests_12; }
	inline List_1_t4165401053 ** get_address_of__AppRequests_12() { return &____AppRequests_12; }
	inline void set__AppRequests_12(List_1_t4165401053 * value)
	{
		____AppRequests_12 = value;
		Il2CppCodeGenWriteBarrier(&____AppRequests_12, value);
	}

	inline static int32_t get_offset_of__FB_32() { return static_cast<int32_t>(offsetof(SPFacebook_t1065228369, ____FB_32)); }
	inline Il2CppObject * get__FB_32() const { return ____FB_32; }
	inline Il2CppObject ** get_address_of__FB_32() { return &____FB_32; }
	inline void set__FB_32(Il2CppObject * value)
	{
		____FB_32 = value;
		Il2CppCodeGenWriteBarrier(&____FB_32, value);
	}
};

struct SPFacebook_t1065228369_StaticFields
{
public:
	// System.Action SPFacebook::OnPostStarted
	Action_t3226471752 * ___OnPostStarted_13;
	// System.Action SPFacebook::OnLoginStarted
	Action_t3226471752 * ___OnLoginStarted_14;
	// System.Action SPFacebook::OnLogOut
	Action_t3226471752 * ___OnLogOut_15;
	// System.Action SPFacebook::OnFriendsRequestStarted
	Action_t3226471752 * ___OnFriendsRequestStarted_16;
	// System.Action`1<FB_AppInviteResult> SPFacebook::OnAppInviteSent
	Action_1_t615634938 * ___OnAppInviteSent_17;
	// System.Action SPFacebook::OnInitCompleteAction
	Action_t3226471752 * ___OnInitCompleteAction_18;
	// System.Action`1<FB_PostResult> SPFacebook::OnPostingCompleteAction
	Action_1_t794684112 * ___OnPostingCompleteAction_19;
	// System.Action`1<System.Boolean> SPFacebook::OnFocusChangedAction
	Action_1_t3627374100 * ___OnFocusChangedAction_20;
	// System.Action`1<FB_LoginResult> SPFacebook::OnAuthCompleteAction
	Action_1_t1650276661 * ___OnAuthCompleteAction_21;
	// System.Action`1<FB_Result> SPFacebook::OnUserDataRequestCompleteAction
	Action_1_t640047754 * ___OnUserDataRequestCompleteAction_22;
	// System.Action`1<FB_Result> SPFacebook::OnFriendsDataRequestCompleteAction
	Action_1_t640047754 * ___OnFriendsDataRequestCompleteAction_23;
	// System.Action`1<FB_Result> SPFacebook::OnInvitableFriendsDataRequestCompleteAction
	Action_1_t640047754 * ___OnInvitableFriendsDataRequestCompleteAction_24;
	// System.Action`1<FB_AppRequestResult> SPFacebook::OnAppRequestCompleteAction
	Action_1_t2252469810 * ___OnAppRequestCompleteAction_25;
	// System.Action`1<FB_Result> SPFacebook::OnAppRequestsLoaded
	Action_1_t640047754 * ___OnAppRequestsLoaded_26;
	// System.Action`1<FB_Result> SPFacebook::OnAppScoresRequestCompleteAction
	Action_1_t640047754 * ___OnAppScoresRequestCompleteAction_27;
	// System.Action`1<FB_Result> SPFacebook::OnPlayerScoresRequestCompleteAction
	Action_1_t640047754 * ___OnPlayerScoresRequestCompleteAction_28;
	// System.Action`1<FB_Result> SPFacebook::OnSubmitScoreRequestCompleteAction
	Action_1_t640047754 * ___OnSubmitScoreRequestCompleteAction_29;
	// System.Action`1<FB_Result> SPFacebook::OnDeleteScoresRequestCompleteAction
	Action_1_t640047754 * ___OnDeleteScoresRequestCompleteAction_30;
	// System.Action`1<FB_Result> SPFacebook::OnLikesListLoadedAction
	Action_1_t640047754 * ___OnLikesListLoadedAction_31;

public:
	inline static int32_t get_offset_of_OnPostStarted_13() { return static_cast<int32_t>(offsetof(SPFacebook_t1065228369_StaticFields, ___OnPostStarted_13)); }
	inline Action_t3226471752 * get_OnPostStarted_13() const { return ___OnPostStarted_13; }
	inline Action_t3226471752 ** get_address_of_OnPostStarted_13() { return &___OnPostStarted_13; }
	inline void set_OnPostStarted_13(Action_t3226471752 * value)
	{
		___OnPostStarted_13 = value;
		Il2CppCodeGenWriteBarrier(&___OnPostStarted_13, value);
	}

	inline static int32_t get_offset_of_OnLoginStarted_14() { return static_cast<int32_t>(offsetof(SPFacebook_t1065228369_StaticFields, ___OnLoginStarted_14)); }
	inline Action_t3226471752 * get_OnLoginStarted_14() const { return ___OnLoginStarted_14; }
	inline Action_t3226471752 ** get_address_of_OnLoginStarted_14() { return &___OnLoginStarted_14; }
	inline void set_OnLoginStarted_14(Action_t3226471752 * value)
	{
		___OnLoginStarted_14 = value;
		Il2CppCodeGenWriteBarrier(&___OnLoginStarted_14, value);
	}

	inline static int32_t get_offset_of_OnLogOut_15() { return static_cast<int32_t>(offsetof(SPFacebook_t1065228369_StaticFields, ___OnLogOut_15)); }
	inline Action_t3226471752 * get_OnLogOut_15() const { return ___OnLogOut_15; }
	inline Action_t3226471752 ** get_address_of_OnLogOut_15() { return &___OnLogOut_15; }
	inline void set_OnLogOut_15(Action_t3226471752 * value)
	{
		___OnLogOut_15 = value;
		Il2CppCodeGenWriteBarrier(&___OnLogOut_15, value);
	}

	inline static int32_t get_offset_of_OnFriendsRequestStarted_16() { return static_cast<int32_t>(offsetof(SPFacebook_t1065228369_StaticFields, ___OnFriendsRequestStarted_16)); }
	inline Action_t3226471752 * get_OnFriendsRequestStarted_16() const { return ___OnFriendsRequestStarted_16; }
	inline Action_t3226471752 ** get_address_of_OnFriendsRequestStarted_16() { return &___OnFriendsRequestStarted_16; }
	inline void set_OnFriendsRequestStarted_16(Action_t3226471752 * value)
	{
		___OnFriendsRequestStarted_16 = value;
		Il2CppCodeGenWriteBarrier(&___OnFriendsRequestStarted_16, value);
	}

	inline static int32_t get_offset_of_OnAppInviteSent_17() { return static_cast<int32_t>(offsetof(SPFacebook_t1065228369_StaticFields, ___OnAppInviteSent_17)); }
	inline Action_1_t615634938 * get_OnAppInviteSent_17() const { return ___OnAppInviteSent_17; }
	inline Action_1_t615634938 ** get_address_of_OnAppInviteSent_17() { return &___OnAppInviteSent_17; }
	inline void set_OnAppInviteSent_17(Action_1_t615634938 * value)
	{
		___OnAppInviteSent_17 = value;
		Il2CppCodeGenWriteBarrier(&___OnAppInviteSent_17, value);
	}

	inline static int32_t get_offset_of_OnInitCompleteAction_18() { return static_cast<int32_t>(offsetof(SPFacebook_t1065228369_StaticFields, ___OnInitCompleteAction_18)); }
	inline Action_t3226471752 * get_OnInitCompleteAction_18() const { return ___OnInitCompleteAction_18; }
	inline Action_t3226471752 ** get_address_of_OnInitCompleteAction_18() { return &___OnInitCompleteAction_18; }
	inline void set_OnInitCompleteAction_18(Action_t3226471752 * value)
	{
		___OnInitCompleteAction_18 = value;
		Il2CppCodeGenWriteBarrier(&___OnInitCompleteAction_18, value);
	}

	inline static int32_t get_offset_of_OnPostingCompleteAction_19() { return static_cast<int32_t>(offsetof(SPFacebook_t1065228369_StaticFields, ___OnPostingCompleteAction_19)); }
	inline Action_1_t794684112 * get_OnPostingCompleteAction_19() const { return ___OnPostingCompleteAction_19; }
	inline Action_1_t794684112 ** get_address_of_OnPostingCompleteAction_19() { return &___OnPostingCompleteAction_19; }
	inline void set_OnPostingCompleteAction_19(Action_1_t794684112 * value)
	{
		___OnPostingCompleteAction_19 = value;
		Il2CppCodeGenWriteBarrier(&___OnPostingCompleteAction_19, value);
	}

	inline static int32_t get_offset_of_OnFocusChangedAction_20() { return static_cast<int32_t>(offsetof(SPFacebook_t1065228369_StaticFields, ___OnFocusChangedAction_20)); }
	inline Action_1_t3627374100 * get_OnFocusChangedAction_20() const { return ___OnFocusChangedAction_20; }
	inline Action_1_t3627374100 ** get_address_of_OnFocusChangedAction_20() { return &___OnFocusChangedAction_20; }
	inline void set_OnFocusChangedAction_20(Action_1_t3627374100 * value)
	{
		___OnFocusChangedAction_20 = value;
		Il2CppCodeGenWriteBarrier(&___OnFocusChangedAction_20, value);
	}

	inline static int32_t get_offset_of_OnAuthCompleteAction_21() { return static_cast<int32_t>(offsetof(SPFacebook_t1065228369_StaticFields, ___OnAuthCompleteAction_21)); }
	inline Action_1_t1650276661 * get_OnAuthCompleteAction_21() const { return ___OnAuthCompleteAction_21; }
	inline Action_1_t1650276661 ** get_address_of_OnAuthCompleteAction_21() { return &___OnAuthCompleteAction_21; }
	inline void set_OnAuthCompleteAction_21(Action_1_t1650276661 * value)
	{
		___OnAuthCompleteAction_21 = value;
		Il2CppCodeGenWriteBarrier(&___OnAuthCompleteAction_21, value);
	}

	inline static int32_t get_offset_of_OnUserDataRequestCompleteAction_22() { return static_cast<int32_t>(offsetof(SPFacebook_t1065228369_StaticFields, ___OnUserDataRequestCompleteAction_22)); }
	inline Action_1_t640047754 * get_OnUserDataRequestCompleteAction_22() const { return ___OnUserDataRequestCompleteAction_22; }
	inline Action_1_t640047754 ** get_address_of_OnUserDataRequestCompleteAction_22() { return &___OnUserDataRequestCompleteAction_22; }
	inline void set_OnUserDataRequestCompleteAction_22(Action_1_t640047754 * value)
	{
		___OnUserDataRequestCompleteAction_22 = value;
		Il2CppCodeGenWriteBarrier(&___OnUserDataRequestCompleteAction_22, value);
	}

	inline static int32_t get_offset_of_OnFriendsDataRequestCompleteAction_23() { return static_cast<int32_t>(offsetof(SPFacebook_t1065228369_StaticFields, ___OnFriendsDataRequestCompleteAction_23)); }
	inline Action_1_t640047754 * get_OnFriendsDataRequestCompleteAction_23() const { return ___OnFriendsDataRequestCompleteAction_23; }
	inline Action_1_t640047754 ** get_address_of_OnFriendsDataRequestCompleteAction_23() { return &___OnFriendsDataRequestCompleteAction_23; }
	inline void set_OnFriendsDataRequestCompleteAction_23(Action_1_t640047754 * value)
	{
		___OnFriendsDataRequestCompleteAction_23 = value;
		Il2CppCodeGenWriteBarrier(&___OnFriendsDataRequestCompleteAction_23, value);
	}

	inline static int32_t get_offset_of_OnInvitableFriendsDataRequestCompleteAction_24() { return static_cast<int32_t>(offsetof(SPFacebook_t1065228369_StaticFields, ___OnInvitableFriendsDataRequestCompleteAction_24)); }
	inline Action_1_t640047754 * get_OnInvitableFriendsDataRequestCompleteAction_24() const { return ___OnInvitableFriendsDataRequestCompleteAction_24; }
	inline Action_1_t640047754 ** get_address_of_OnInvitableFriendsDataRequestCompleteAction_24() { return &___OnInvitableFriendsDataRequestCompleteAction_24; }
	inline void set_OnInvitableFriendsDataRequestCompleteAction_24(Action_1_t640047754 * value)
	{
		___OnInvitableFriendsDataRequestCompleteAction_24 = value;
		Il2CppCodeGenWriteBarrier(&___OnInvitableFriendsDataRequestCompleteAction_24, value);
	}

	inline static int32_t get_offset_of_OnAppRequestCompleteAction_25() { return static_cast<int32_t>(offsetof(SPFacebook_t1065228369_StaticFields, ___OnAppRequestCompleteAction_25)); }
	inline Action_1_t2252469810 * get_OnAppRequestCompleteAction_25() const { return ___OnAppRequestCompleteAction_25; }
	inline Action_1_t2252469810 ** get_address_of_OnAppRequestCompleteAction_25() { return &___OnAppRequestCompleteAction_25; }
	inline void set_OnAppRequestCompleteAction_25(Action_1_t2252469810 * value)
	{
		___OnAppRequestCompleteAction_25 = value;
		Il2CppCodeGenWriteBarrier(&___OnAppRequestCompleteAction_25, value);
	}

	inline static int32_t get_offset_of_OnAppRequestsLoaded_26() { return static_cast<int32_t>(offsetof(SPFacebook_t1065228369_StaticFields, ___OnAppRequestsLoaded_26)); }
	inline Action_1_t640047754 * get_OnAppRequestsLoaded_26() const { return ___OnAppRequestsLoaded_26; }
	inline Action_1_t640047754 ** get_address_of_OnAppRequestsLoaded_26() { return &___OnAppRequestsLoaded_26; }
	inline void set_OnAppRequestsLoaded_26(Action_1_t640047754 * value)
	{
		___OnAppRequestsLoaded_26 = value;
		Il2CppCodeGenWriteBarrier(&___OnAppRequestsLoaded_26, value);
	}

	inline static int32_t get_offset_of_OnAppScoresRequestCompleteAction_27() { return static_cast<int32_t>(offsetof(SPFacebook_t1065228369_StaticFields, ___OnAppScoresRequestCompleteAction_27)); }
	inline Action_1_t640047754 * get_OnAppScoresRequestCompleteAction_27() const { return ___OnAppScoresRequestCompleteAction_27; }
	inline Action_1_t640047754 ** get_address_of_OnAppScoresRequestCompleteAction_27() { return &___OnAppScoresRequestCompleteAction_27; }
	inline void set_OnAppScoresRequestCompleteAction_27(Action_1_t640047754 * value)
	{
		___OnAppScoresRequestCompleteAction_27 = value;
		Il2CppCodeGenWriteBarrier(&___OnAppScoresRequestCompleteAction_27, value);
	}

	inline static int32_t get_offset_of_OnPlayerScoresRequestCompleteAction_28() { return static_cast<int32_t>(offsetof(SPFacebook_t1065228369_StaticFields, ___OnPlayerScoresRequestCompleteAction_28)); }
	inline Action_1_t640047754 * get_OnPlayerScoresRequestCompleteAction_28() const { return ___OnPlayerScoresRequestCompleteAction_28; }
	inline Action_1_t640047754 ** get_address_of_OnPlayerScoresRequestCompleteAction_28() { return &___OnPlayerScoresRequestCompleteAction_28; }
	inline void set_OnPlayerScoresRequestCompleteAction_28(Action_1_t640047754 * value)
	{
		___OnPlayerScoresRequestCompleteAction_28 = value;
		Il2CppCodeGenWriteBarrier(&___OnPlayerScoresRequestCompleteAction_28, value);
	}

	inline static int32_t get_offset_of_OnSubmitScoreRequestCompleteAction_29() { return static_cast<int32_t>(offsetof(SPFacebook_t1065228369_StaticFields, ___OnSubmitScoreRequestCompleteAction_29)); }
	inline Action_1_t640047754 * get_OnSubmitScoreRequestCompleteAction_29() const { return ___OnSubmitScoreRequestCompleteAction_29; }
	inline Action_1_t640047754 ** get_address_of_OnSubmitScoreRequestCompleteAction_29() { return &___OnSubmitScoreRequestCompleteAction_29; }
	inline void set_OnSubmitScoreRequestCompleteAction_29(Action_1_t640047754 * value)
	{
		___OnSubmitScoreRequestCompleteAction_29 = value;
		Il2CppCodeGenWriteBarrier(&___OnSubmitScoreRequestCompleteAction_29, value);
	}

	inline static int32_t get_offset_of_OnDeleteScoresRequestCompleteAction_30() { return static_cast<int32_t>(offsetof(SPFacebook_t1065228369_StaticFields, ___OnDeleteScoresRequestCompleteAction_30)); }
	inline Action_1_t640047754 * get_OnDeleteScoresRequestCompleteAction_30() const { return ___OnDeleteScoresRequestCompleteAction_30; }
	inline Action_1_t640047754 ** get_address_of_OnDeleteScoresRequestCompleteAction_30() { return &___OnDeleteScoresRequestCompleteAction_30; }
	inline void set_OnDeleteScoresRequestCompleteAction_30(Action_1_t640047754 * value)
	{
		___OnDeleteScoresRequestCompleteAction_30 = value;
		Il2CppCodeGenWriteBarrier(&___OnDeleteScoresRequestCompleteAction_30, value);
	}

	inline static int32_t get_offset_of_OnLikesListLoadedAction_31() { return static_cast<int32_t>(offsetof(SPFacebook_t1065228369_StaticFields, ___OnLikesListLoadedAction_31)); }
	inline Action_1_t640047754 * get_OnLikesListLoadedAction_31() const { return ___OnLikesListLoadedAction_31; }
	inline Action_1_t640047754 ** get_address_of_OnLikesListLoadedAction_31() { return &___OnLikesListLoadedAction_31; }
	inline void set_OnLikesListLoadedAction_31(Action_1_t640047754 * value)
	{
		___OnLikesListLoadedAction_31 = value;
		Il2CppCodeGenWriteBarrier(&___OnLikesListLoadedAction_31, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
