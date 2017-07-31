#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_FeatureTab2349790125.h"
#include "AssemblyU2DCSharpU2Dfirstpass_GPCollectionType2617299399.h"
#include "AssemblyU2DCSharpU2Dfirstpass_GPBoardTimeSpan42003024.h"

// System.String
struct String_t;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Toggle
struct Toggle_t3976754468;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t3083107861;
// LeaderboardInfoPresenter[]
struct LeaderboardInfoPresenterU5BU5D_t2330484616;
// GPLeaderBoard
struct GPLeaderBoard_t3649577886;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeaderboardsUITab
struct  LeaderboardsUITab_t4101096707  : public FeatureTab_t2349790125
{
public:
	// UnityEngine.UI.Image LeaderboardsUITab::avatar
	Image_t2042527209 * ___avatar_3;
	// UnityEngine.Sprite LeaderboardsUITab::defaulttexture
	Sprite_t309593783 * ___defaulttexture_4;
	// UnityEngine.Sprite LeaderboardsUITab::logo
	Sprite_t309593783 * ___logo_5;
	// UnityEngine.UI.Button LeaderboardsUITab::connectButton
	Button_t2872111280 * ___connectButton_6;
	// UnityEngine.UI.Text LeaderboardsUITab::connectButtonLabel
	Text_t356221433 * ___connectButtonLabel_7;
	// UnityEngine.UI.Text LeaderboardsUITab::playerLabel
	Text_t356221433 * ___playerLabel_8;
	// UnityEngine.UI.Toggle LeaderboardsUITab::GlobalButton
	Toggle_t3976754468 * ___GlobalButton_9;
	// UnityEngine.UI.Toggle LeaderboardsUITab::FriendsButton
	Toggle_t3976754468 * ___FriendsButton_10;
	// UnityEngine.UI.Toggle LeaderboardsUITab::AllTimeButton
	Toggle_t3976754468 * ___AllTimeButton_11;
	// UnityEngine.UI.Toggle LeaderboardsUITab::WeekButton
	Toggle_t3976754468 * ___WeekButton_12;
	// UnityEngine.UI.Toggle LeaderboardsUITab::TodayButton
	Toggle_t3976754468 * ___TodayButton_13;
	// UnityEngine.UI.Button LeaderboardsUITab::SubmitScoreButton
	Button_t2872111280 * ___SubmitScoreButton_14;
	// UnityEngine.UI.Text LeaderboardsUITab::SubmitScoreLabel
	Text_t356221433 * ___SubmitScoreLabel_15;
	// UnityEngine.UI.Selectable[] LeaderboardsUITab::ConnectionDependedntButtons
	SelectableU5BU5D_t3083107861* ___ConnectionDependedntButtons_16;
	// LeaderboardInfoPresenter[] LeaderboardsUITab::lines
	LeaderboardInfoPresenterU5BU5D_t2330484616* ___lines_17;
	// GPLeaderBoard LeaderboardsUITab::loadedLeaderBoard
	GPLeaderBoard_t3649577886 * ___loadedLeaderBoard_18;
	// GPCollectionType LeaderboardsUITab::displayCollection
	int32_t ___displayCollection_19;
	// GPBoardTimeSpan LeaderboardsUITab::displayTime
	int32_t ___displayTime_20;
	// System.Int32 LeaderboardsUITab::score
	int32_t ___score_21;

public:
	inline static int32_t get_offset_of_avatar_3() { return static_cast<int32_t>(offsetof(LeaderboardsUITab_t4101096707, ___avatar_3)); }
	inline Image_t2042527209 * get_avatar_3() const { return ___avatar_3; }
	inline Image_t2042527209 ** get_address_of_avatar_3() { return &___avatar_3; }
	inline void set_avatar_3(Image_t2042527209 * value)
	{
		___avatar_3 = value;
		Il2CppCodeGenWriteBarrier(&___avatar_3, value);
	}

	inline static int32_t get_offset_of_defaulttexture_4() { return static_cast<int32_t>(offsetof(LeaderboardsUITab_t4101096707, ___defaulttexture_4)); }
	inline Sprite_t309593783 * get_defaulttexture_4() const { return ___defaulttexture_4; }
	inline Sprite_t309593783 ** get_address_of_defaulttexture_4() { return &___defaulttexture_4; }
	inline void set_defaulttexture_4(Sprite_t309593783 * value)
	{
		___defaulttexture_4 = value;
		Il2CppCodeGenWriteBarrier(&___defaulttexture_4, value);
	}

	inline static int32_t get_offset_of_logo_5() { return static_cast<int32_t>(offsetof(LeaderboardsUITab_t4101096707, ___logo_5)); }
	inline Sprite_t309593783 * get_logo_5() const { return ___logo_5; }
	inline Sprite_t309593783 ** get_address_of_logo_5() { return &___logo_5; }
	inline void set_logo_5(Sprite_t309593783 * value)
	{
		___logo_5 = value;
		Il2CppCodeGenWriteBarrier(&___logo_5, value);
	}

	inline static int32_t get_offset_of_connectButton_6() { return static_cast<int32_t>(offsetof(LeaderboardsUITab_t4101096707, ___connectButton_6)); }
	inline Button_t2872111280 * get_connectButton_6() const { return ___connectButton_6; }
	inline Button_t2872111280 ** get_address_of_connectButton_6() { return &___connectButton_6; }
	inline void set_connectButton_6(Button_t2872111280 * value)
	{
		___connectButton_6 = value;
		Il2CppCodeGenWriteBarrier(&___connectButton_6, value);
	}

	inline static int32_t get_offset_of_connectButtonLabel_7() { return static_cast<int32_t>(offsetof(LeaderboardsUITab_t4101096707, ___connectButtonLabel_7)); }
	inline Text_t356221433 * get_connectButtonLabel_7() const { return ___connectButtonLabel_7; }
	inline Text_t356221433 ** get_address_of_connectButtonLabel_7() { return &___connectButtonLabel_7; }
	inline void set_connectButtonLabel_7(Text_t356221433 * value)
	{
		___connectButtonLabel_7 = value;
		Il2CppCodeGenWriteBarrier(&___connectButtonLabel_7, value);
	}

	inline static int32_t get_offset_of_playerLabel_8() { return static_cast<int32_t>(offsetof(LeaderboardsUITab_t4101096707, ___playerLabel_8)); }
	inline Text_t356221433 * get_playerLabel_8() const { return ___playerLabel_8; }
	inline Text_t356221433 ** get_address_of_playerLabel_8() { return &___playerLabel_8; }
	inline void set_playerLabel_8(Text_t356221433 * value)
	{
		___playerLabel_8 = value;
		Il2CppCodeGenWriteBarrier(&___playerLabel_8, value);
	}

	inline static int32_t get_offset_of_GlobalButton_9() { return static_cast<int32_t>(offsetof(LeaderboardsUITab_t4101096707, ___GlobalButton_9)); }
	inline Toggle_t3976754468 * get_GlobalButton_9() const { return ___GlobalButton_9; }
	inline Toggle_t3976754468 ** get_address_of_GlobalButton_9() { return &___GlobalButton_9; }
	inline void set_GlobalButton_9(Toggle_t3976754468 * value)
	{
		___GlobalButton_9 = value;
		Il2CppCodeGenWriteBarrier(&___GlobalButton_9, value);
	}

	inline static int32_t get_offset_of_FriendsButton_10() { return static_cast<int32_t>(offsetof(LeaderboardsUITab_t4101096707, ___FriendsButton_10)); }
	inline Toggle_t3976754468 * get_FriendsButton_10() const { return ___FriendsButton_10; }
	inline Toggle_t3976754468 ** get_address_of_FriendsButton_10() { return &___FriendsButton_10; }
	inline void set_FriendsButton_10(Toggle_t3976754468 * value)
	{
		___FriendsButton_10 = value;
		Il2CppCodeGenWriteBarrier(&___FriendsButton_10, value);
	}

	inline static int32_t get_offset_of_AllTimeButton_11() { return static_cast<int32_t>(offsetof(LeaderboardsUITab_t4101096707, ___AllTimeButton_11)); }
	inline Toggle_t3976754468 * get_AllTimeButton_11() const { return ___AllTimeButton_11; }
	inline Toggle_t3976754468 ** get_address_of_AllTimeButton_11() { return &___AllTimeButton_11; }
	inline void set_AllTimeButton_11(Toggle_t3976754468 * value)
	{
		___AllTimeButton_11 = value;
		Il2CppCodeGenWriteBarrier(&___AllTimeButton_11, value);
	}

	inline static int32_t get_offset_of_WeekButton_12() { return static_cast<int32_t>(offsetof(LeaderboardsUITab_t4101096707, ___WeekButton_12)); }
	inline Toggle_t3976754468 * get_WeekButton_12() const { return ___WeekButton_12; }
	inline Toggle_t3976754468 ** get_address_of_WeekButton_12() { return &___WeekButton_12; }
	inline void set_WeekButton_12(Toggle_t3976754468 * value)
	{
		___WeekButton_12 = value;
		Il2CppCodeGenWriteBarrier(&___WeekButton_12, value);
	}

	inline static int32_t get_offset_of_TodayButton_13() { return static_cast<int32_t>(offsetof(LeaderboardsUITab_t4101096707, ___TodayButton_13)); }
	inline Toggle_t3976754468 * get_TodayButton_13() const { return ___TodayButton_13; }
	inline Toggle_t3976754468 ** get_address_of_TodayButton_13() { return &___TodayButton_13; }
	inline void set_TodayButton_13(Toggle_t3976754468 * value)
	{
		___TodayButton_13 = value;
		Il2CppCodeGenWriteBarrier(&___TodayButton_13, value);
	}

	inline static int32_t get_offset_of_SubmitScoreButton_14() { return static_cast<int32_t>(offsetof(LeaderboardsUITab_t4101096707, ___SubmitScoreButton_14)); }
	inline Button_t2872111280 * get_SubmitScoreButton_14() const { return ___SubmitScoreButton_14; }
	inline Button_t2872111280 ** get_address_of_SubmitScoreButton_14() { return &___SubmitScoreButton_14; }
	inline void set_SubmitScoreButton_14(Button_t2872111280 * value)
	{
		___SubmitScoreButton_14 = value;
		Il2CppCodeGenWriteBarrier(&___SubmitScoreButton_14, value);
	}

	inline static int32_t get_offset_of_SubmitScoreLabel_15() { return static_cast<int32_t>(offsetof(LeaderboardsUITab_t4101096707, ___SubmitScoreLabel_15)); }
	inline Text_t356221433 * get_SubmitScoreLabel_15() const { return ___SubmitScoreLabel_15; }
	inline Text_t356221433 ** get_address_of_SubmitScoreLabel_15() { return &___SubmitScoreLabel_15; }
	inline void set_SubmitScoreLabel_15(Text_t356221433 * value)
	{
		___SubmitScoreLabel_15 = value;
		Il2CppCodeGenWriteBarrier(&___SubmitScoreLabel_15, value);
	}

	inline static int32_t get_offset_of_ConnectionDependedntButtons_16() { return static_cast<int32_t>(offsetof(LeaderboardsUITab_t4101096707, ___ConnectionDependedntButtons_16)); }
	inline SelectableU5BU5D_t3083107861* get_ConnectionDependedntButtons_16() const { return ___ConnectionDependedntButtons_16; }
	inline SelectableU5BU5D_t3083107861** get_address_of_ConnectionDependedntButtons_16() { return &___ConnectionDependedntButtons_16; }
	inline void set_ConnectionDependedntButtons_16(SelectableU5BU5D_t3083107861* value)
	{
		___ConnectionDependedntButtons_16 = value;
		Il2CppCodeGenWriteBarrier(&___ConnectionDependedntButtons_16, value);
	}

	inline static int32_t get_offset_of_lines_17() { return static_cast<int32_t>(offsetof(LeaderboardsUITab_t4101096707, ___lines_17)); }
	inline LeaderboardInfoPresenterU5BU5D_t2330484616* get_lines_17() const { return ___lines_17; }
	inline LeaderboardInfoPresenterU5BU5D_t2330484616** get_address_of_lines_17() { return &___lines_17; }
	inline void set_lines_17(LeaderboardInfoPresenterU5BU5D_t2330484616* value)
	{
		___lines_17 = value;
		Il2CppCodeGenWriteBarrier(&___lines_17, value);
	}

	inline static int32_t get_offset_of_loadedLeaderBoard_18() { return static_cast<int32_t>(offsetof(LeaderboardsUITab_t4101096707, ___loadedLeaderBoard_18)); }
	inline GPLeaderBoard_t3649577886 * get_loadedLeaderBoard_18() const { return ___loadedLeaderBoard_18; }
	inline GPLeaderBoard_t3649577886 ** get_address_of_loadedLeaderBoard_18() { return &___loadedLeaderBoard_18; }
	inline void set_loadedLeaderBoard_18(GPLeaderBoard_t3649577886 * value)
	{
		___loadedLeaderBoard_18 = value;
		Il2CppCodeGenWriteBarrier(&___loadedLeaderBoard_18, value);
	}

	inline static int32_t get_offset_of_displayCollection_19() { return static_cast<int32_t>(offsetof(LeaderboardsUITab_t4101096707, ___displayCollection_19)); }
	inline int32_t get_displayCollection_19() const { return ___displayCollection_19; }
	inline int32_t* get_address_of_displayCollection_19() { return &___displayCollection_19; }
	inline void set_displayCollection_19(int32_t value)
	{
		___displayCollection_19 = value;
	}

	inline static int32_t get_offset_of_displayTime_20() { return static_cast<int32_t>(offsetof(LeaderboardsUITab_t4101096707, ___displayTime_20)); }
	inline int32_t get_displayTime_20() const { return ___displayTime_20; }
	inline int32_t* get_address_of_displayTime_20() { return &___displayTime_20; }
	inline void set_displayTime_20(int32_t value)
	{
		___displayTime_20 = value;
	}

	inline static int32_t get_offset_of_score_21() { return static_cast<int32_t>(offsetof(LeaderboardsUITab_t4101096707, ___score_21)); }
	inline int32_t get_score_21() const { return ___score_21; }
	inline int32_t* get_address_of_score_21() { return &___score_21; }
	inline void set_score_21(int32_t value)
	{
		___score_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
