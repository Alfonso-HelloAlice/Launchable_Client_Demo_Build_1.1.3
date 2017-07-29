#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SA_IOSNative_StoreKi3720527225.h"
#include "AssemblyU2DCSharpU2Dfirstpass_IOSGalleryLoadImageFo518894765.h"

// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.Collections.Generic.List`1<SA.IOSNative.StoreKit.Product>
struct List_1_t1080793967;
// System.Collections.Generic.List`1<GK_Leaderboard>
struct List_1_t3820534894;
// System.Collections.Generic.List`1<GK_AchievementTemplate>
struct List_1_t1665273372;
// System.Collections.Generic.List`1<SA.IOSNative.Models.UrlType>
struct List_1_t3511628569;
// System.Collections.Generic.List`1<SA.IOSNative.Gestures.ForceTouchMenuItem>
struct List_1_t1755798996;
// IOSNativeSettings
struct IOSNativeSettings_t547170227;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IOSNativeSettings
struct  IOSNativeSettings_t547170227  : public ScriptableObject_t1975622470
{
public:
	// System.Boolean IOSNativeSettings::EnableGameCenterAPI
	bool ___EnableGameCenterAPI_3;
	// System.Boolean IOSNativeSettings::EnableInAppsAPI
	bool ___EnableInAppsAPI_4;
	// System.Boolean IOSNativeSettings::EnableCameraAPI
	bool ___EnableCameraAPI_5;
	// System.Boolean IOSNativeSettings::EnableSocialSharingAPI
	bool ___EnableSocialSharingAPI_6;
	// System.Boolean IOSNativeSettings::EnablePickerAPI
	bool ___EnablePickerAPI_7;
	// System.Boolean IOSNativeSettings::EnableMediaPlayerAPI
	bool ___EnableMediaPlayerAPI_8;
	// System.Boolean IOSNativeSettings::EnableReplayKit
	bool ___EnableReplayKit_9;
	// System.Boolean IOSNativeSettings::EnableCloudKit
	bool ___EnableCloudKit_10;
	// System.Boolean IOSNativeSettings::EnableSoomla
	bool ___EnableSoomla_11;
	// System.Boolean IOSNativeSettings::EnableGestureAPI
	bool ___EnableGestureAPI_12;
	// System.Boolean IOSNativeSettings::EnableForceTouchAPI
	bool ___EnableForceTouchAPI_13;
	// System.Boolean IOSNativeSettings::EnablePushNotificationsAPI
	bool ___EnablePushNotificationsAPI_14;
	// System.Boolean IOSNativeSettings::EnableContactsAPI
	bool ___EnableContactsAPI_15;
	// System.Boolean IOSNativeSettings::EnableAppEventsAPI
	bool ___EnableAppEventsAPI_16;
	// System.Boolean IOSNativeSettings::EnableUserNotificationsAPI
	bool ___EnableUserNotificationsAPI_17;
	// System.Boolean IOSNativeSettings::EnablePermissionAPI
	bool ___EnablePermissionAPI_18;
	// System.String IOSNativeSettings::AppleId
	String_t* ___AppleId_19;
	// System.Int32 IOSNativeSettings::ToolbarIndex
	int32_t ___ToolbarIndex_20;
	// System.Boolean IOSNativeSettings::ExpandMoreActionsMenu
	bool ___ExpandMoreActionsMenu_21;
	// System.Boolean IOSNativeSettings::ExpandModulesSettings
	bool ___ExpandModulesSettings_22;
	// System.Boolean IOSNativeSettings::InAppsEditorTesting
	bool ___InAppsEditorTesting_23;
	// System.Boolean IOSNativeSettings::CheckInternetBeforeLoadRequest
	bool ___CheckInternetBeforeLoadRequest_24;
	// SA.IOSNative.StoreKit.TransactionsHandlingMode IOSNativeSettings::TransactionsHandlingMode
	int32_t ___TransactionsHandlingMode_25;
	// System.Collections.Generic.List`1<System.String> IOSNativeSettings::DefaultStoreProductsView
	List_1_t1398341365 * ___DefaultStoreProductsView_26;
	// System.Collections.Generic.List`1<SA.IOSNative.StoreKit.Product> IOSNativeSettings::InAppProducts
	List_1_t1080793967 * ___InAppProducts_27;
	// System.Boolean IOSNativeSettings::ShowStoreKitProducts
	bool ___ShowStoreKitProducts_28;
	// System.Collections.Generic.List`1<GK_Leaderboard> IOSNativeSettings::Leaderboards
	List_1_t3820534894 * ___Leaderboards_29;
	// System.Collections.Generic.List`1<GK_AchievementTemplate> IOSNativeSettings::Achievements
	List_1_t1665273372 * ___Achievements_30;
	// System.Boolean IOSNativeSettings::UseGCRequestCaching
	bool ___UseGCRequestCaching_31;
	// System.Boolean IOSNativeSettings::UsePPForAchievements
	bool ___UsePPForAchievements_32;
	// System.Boolean IOSNativeSettings::AutoLoadUsersSmallImages
	bool ___AutoLoadUsersSmallImages_33;
	// System.Boolean IOSNativeSettings::AutoLoadUsersBigImages
	bool ___AutoLoadUsersBigImages_34;
	// System.Boolean IOSNativeSettings::ShowLeaderboards
	bool ___ShowLeaderboards_35;
	// System.Boolean IOSNativeSettings::ShowAchievementsParams
	bool ___ShowAchievementsParams_36;
	// System.Boolean IOSNativeSettings::AdEditorTesting
	bool ___AdEditorTesting_37;
	// System.Int32 IOSNativeSettings::EditorFillRateIndex
	int32_t ___EditorFillRateIndex_38;
	// System.Int32 IOSNativeSettings::EditorFillRate
	int32_t ___EditorFillRate_39;
	// System.Int32 IOSNativeSettings::MaxImageLoadSize
	int32_t ___MaxImageLoadSize_40;
	// System.Single IOSNativeSettings::JPegCompressionRate
	float ___JPegCompressionRate_41;
	// IOSGalleryLoadImageFormat IOSNativeSettings::GalleryImageFormat
	int32_t ___GalleryImageFormat_42;
	// System.Int32 IOSNativeSettings::RPK_iPadViewType
	int32_t ___RPK_iPadViewType_43;
	// System.String IOSNativeSettings::CameraUsageDescription
	String_t* ___CameraUsageDescription_44;
	// System.String IOSNativeSettings::PhotoLibraryUsageDescription
	String_t* ___PhotoLibraryUsageDescription_45;
	// System.String IOSNativeSettings::AppleMusicUsageDescription
	String_t* ___AppleMusicUsageDescription_46;
	// System.String IOSNativeSettings::ContactsUsageDescription
	String_t* ___ContactsUsageDescription_47;
	// System.Collections.Generic.List`1<SA.IOSNative.Models.UrlType> IOSNativeSettings::UrlTypes
	List_1_t3511628569 * ___UrlTypes_48;
	// System.Collections.Generic.List`1<SA.IOSNative.Models.UrlType> IOSNativeSettings::ApplicationQueriesSchemes
	List_1_t3511628569 * ___ApplicationQueriesSchemes_49;
	// System.Collections.Generic.List`1<SA.IOSNative.Gestures.ForceTouchMenuItem> IOSNativeSettings::ForceTouchMenu
	List_1_t1755798996 * ___ForceTouchMenu_50;
	// System.Boolean IOSNativeSettings::DisablePluginLogs
	bool ___DisablePluginLogs_51;
	// System.String IOSNativeSettings::SoomlaDownloadLink
	String_t* ___SoomlaDownloadLink_52;
	// System.String IOSNativeSettings::SoomlaDocsLink
	String_t* ___SoomlaDocsLink_53;
	// System.String IOSNativeSettings::SoomlaGameKey
	String_t* ___SoomlaGameKey_54;
	// System.String IOSNativeSettings::SoomlaEnvKey
	String_t* ___SoomlaEnvKey_55;
	// System.Boolean IOSNativeSettings::OneSignalEnabled
	bool ___OneSignalEnabled_56;
	// System.String IOSNativeSettings::OneSignalDocsLink
	String_t* ___OneSignalDocsLink_57;

public:
	inline static int32_t get_offset_of_EnableGameCenterAPI_3() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___EnableGameCenterAPI_3)); }
	inline bool get_EnableGameCenterAPI_3() const { return ___EnableGameCenterAPI_3; }
	inline bool* get_address_of_EnableGameCenterAPI_3() { return &___EnableGameCenterAPI_3; }
	inline void set_EnableGameCenterAPI_3(bool value)
	{
		___EnableGameCenterAPI_3 = value;
	}

	inline static int32_t get_offset_of_EnableInAppsAPI_4() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___EnableInAppsAPI_4)); }
	inline bool get_EnableInAppsAPI_4() const { return ___EnableInAppsAPI_4; }
	inline bool* get_address_of_EnableInAppsAPI_4() { return &___EnableInAppsAPI_4; }
	inline void set_EnableInAppsAPI_4(bool value)
	{
		___EnableInAppsAPI_4 = value;
	}

	inline static int32_t get_offset_of_EnableCameraAPI_5() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___EnableCameraAPI_5)); }
	inline bool get_EnableCameraAPI_5() const { return ___EnableCameraAPI_5; }
	inline bool* get_address_of_EnableCameraAPI_5() { return &___EnableCameraAPI_5; }
	inline void set_EnableCameraAPI_5(bool value)
	{
		___EnableCameraAPI_5 = value;
	}

	inline static int32_t get_offset_of_EnableSocialSharingAPI_6() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___EnableSocialSharingAPI_6)); }
	inline bool get_EnableSocialSharingAPI_6() const { return ___EnableSocialSharingAPI_6; }
	inline bool* get_address_of_EnableSocialSharingAPI_6() { return &___EnableSocialSharingAPI_6; }
	inline void set_EnableSocialSharingAPI_6(bool value)
	{
		___EnableSocialSharingAPI_6 = value;
	}

	inline static int32_t get_offset_of_EnablePickerAPI_7() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___EnablePickerAPI_7)); }
	inline bool get_EnablePickerAPI_7() const { return ___EnablePickerAPI_7; }
	inline bool* get_address_of_EnablePickerAPI_7() { return &___EnablePickerAPI_7; }
	inline void set_EnablePickerAPI_7(bool value)
	{
		___EnablePickerAPI_7 = value;
	}

	inline static int32_t get_offset_of_EnableMediaPlayerAPI_8() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___EnableMediaPlayerAPI_8)); }
	inline bool get_EnableMediaPlayerAPI_8() const { return ___EnableMediaPlayerAPI_8; }
	inline bool* get_address_of_EnableMediaPlayerAPI_8() { return &___EnableMediaPlayerAPI_8; }
	inline void set_EnableMediaPlayerAPI_8(bool value)
	{
		___EnableMediaPlayerAPI_8 = value;
	}

	inline static int32_t get_offset_of_EnableReplayKit_9() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___EnableReplayKit_9)); }
	inline bool get_EnableReplayKit_9() const { return ___EnableReplayKit_9; }
	inline bool* get_address_of_EnableReplayKit_9() { return &___EnableReplayKit_9; }
	inline void set_EnableReplayKit_9(bool value)
	{
		___EnableReplayKit_9 = value;
	}

	inline static int32_t get_offset_of_EnableCloudKit_10() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___EnableCloudKit_10)); }
	inline bool get_EnableCloudKit_10() const { return ___EnableCloudKit_10; }
	inline bool* get_address_of_EnableCloudKit_10() { return &___EnableCloudKit_10; }
	inline void set_EnableCloudKit_10(bool value)
	{
		___EnableCloudKit_10 = value;
	}

	inline static int32_t get_offset_of_EnableSoomla_11() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___EnableSoomla_11)); }
	inline bool get_EnableSoomla_11() const { return ___EnableSoomla_11; }
	inline bool* get_address_of_EnableSoomla_11() { return &___EnableSoomla_11; }
	inline void set_EnableSoomla_11(bool value)
	{
		___EnableSoomla_11 = value;
	}

	inline static int32_t get_offset_of_EnableGestureAPI_12() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___EnableGestureAPI_12)); }
	inline bool get_EnableGestureAPI_12() const { return ___EnableGestureAPI_12; }
	inline bool* get_address_of_EnableGestureAPI_12() { return &___EnableGestureAPI_12; }
	inline void set_EnableGestureAPI_12(bool value)
	{
		___EnableGestureAPI_12 = value;
	}

	inline static int32_t get_offset_of_EnableForceTouchAPI_13() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___EnableForceTouchAPI_13)); }
	inline bool get_EnableForceTouchAPI_13() const { return ___EnableForceTouchAPI_13; }
	inline bool* get_address_of_EnableForceTouchAPI_13() { return &___EnableForceTouchAPI_13; }
	inline void set_EnableForceTouchAPI_13(bool value)
	{
		___EnableForceTouchAPI_13 = value;
	}

	inline static int32_t get_offset_of_EnablePushNotificationsAPI_14() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___EnablePushNotificationsAPI_14)); }
	inline bool get_EnablePushNotificationsAPI_14() const { return ___EnablePushNotificationsAPI_14; }
	inline bool* get_address_of_EnablePushNotificationsAPI_14() { return &___EnablePushNotificationsAPI_14; }
	inline void set_EnablePushNotificationsAPI_14(bool value)
	{
		___EnablePushNotificationsAPI_14 = value;
	}

	inline static int32_t get_offset_of_EnableContactsAPI_15() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___EnableContactsAPI_15)); }
	inline bool get_EnableContactsAPI_15() const { return ___EnableContactsAPI_15; }
	inline bool* get_address_of_EnableContactsAPI_15() { return &___EnableContactsAPI_15; }
	inline void set_EnableContactsAPI_15(bool value)
	{
		___EnableContactsAPI_15 = value;
	}

	inline static int32_t get_offset_of_EnableAppEventsAPI_16() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___EnableAppEventsAPI_16)); }
	inline bool get_EnableAppEventsAPI_16() const { return ___EnableAppEventsAPI_16; }
	inline bool* get_address_of_EnableAppEventsAPI_16() { return &___EnableAppEventsAPI_16; }
	inline void set_EnableAppEventsAPI_16(bool value)
	{
		___EnableAppEventsAPI_16 = value;
	}

	inline static int32_t get_offset_of_EnableUserNotificationsAPI_17() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___EnableUserNotificationsAPI_17)); }
	inline bool get_EnableUserNotificationsAPI_17() const { return ___EnableUserNotificationsAPI_17; }
	inline bool* get_address_of_EnableUserNotificationsAPI_17() { return &___EnableUserNotificationsAPI_17; }
	inline void set_EnableUserNotificationsAPI_17(bool value)
	{
		___EnableUserNotificationsAPI_17 = value;
	}

	inline static int32_t get_offset_of_EnablePermissionAPI_18() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___EnablePermissionAPI_18)); }
	inline bool get_EnablePermissionAPI_18() const { return ___EnablePermissionAPI_18; }
	inline bool* get_address_of_EnablePermissionAPI_18() { return &___EnablePermissionAPI_18; }
	inline void set_EnablePermissionAPI_18(bool value)
	{
		___EnablePermissionAPI_18 = value;
	}

	inline static int32_t get_offset_of_AppleId_19() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___AppleId_19)); }
	inline String_t* get_AppleId_19() const { return ___AppleId_19; }
	inline String_t** get_address_of_AppleId_19() { return &___AppleId_19; }
	inline void set_AppleId_19(String_t* value)
	{
		___AppleId_19 = value;
		Il2CppCodeGenWriteBarrier(&___AppleId_19, value);
	}

	inline static int32_t get_offset_of_ToolbarIndex_20() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___ToolbarIndex_20)); }
	inline int32_t get_ToolbarIndex_20() const { return ___ToolbarIndex_20; }
	inline int32_t* get_address_of_ToolbarIndex_20() { return &___ToolbarIndex_20; }
	inline void set_ToolbarIndex_20(int32_t value)
	{
		___ToolbarIndex_20 = value;
	}

	inline static int32_t get_offset_of_ExpandMoreActionsMenu_21() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___ExpandMoreActionsMenu_21)); }
	inline bool get_ExpandMoreActionsMenu_21() const { return ___ExpandMoreActionsMenu_21; }
	inline bool* get_address_of_ExpandMoreActionsMenu_21() { return &___ExpandMoreActionsMenu_21; }
	inline void set_ExpandMoreActionsMenu_21(bool value)
	{
		___ExpandMoreActionsMenu_21 = value;
	}

	inline static int32_t get_offset_of_ExpandModulesSettings_22() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___ExpandModulesSettings_22)); }
	inline bool get_ExpandModulesSettings_22() const { return ___ExpandModulesSettings_22; }
	inline bool* get_address_of_ExpandModulesSettings_22() { return &___ExpandModulesSettings_22; }
	inline void set_ExpandModulesSettings_22(bool value)
	{
		___ExpandModulesSettings_22 = value;
	}

	inline static int32_t get_offset_of_InAppsEditorTesting_23() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___InAppsEditorTesting_23)); }
	inline bool get_InAppsEditorTesting_23() const { return ___InAppsEditorTesting_23; }
	inline bool* get_address_of_InAppsEditorTesting_23() { return &___InAppsEditorTesting_23; }
	inline void set_InAppsEditorTesting_23(bool value)
	{
		___InAppsEditorTesting_23 = value;
	}

	inline static int32_t get_offset_of_CheckInternetBeforeLoadRequest_24() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___CheckInternetBeforeLoadRequest_24)); }
	inline bool get_CheckInternetBeforeLoadRequest_24() const { return ___CheckInternetBeforeLoadRequest_24; }
	inline bool* get_address_of_CheckInternetBeforeLoadRequest_24() { return &___CheckInternetBeforeLoadRequest_24; }
	inline void set_CheckInternetBeforeLoadRequest_24(bool value)
	{
		___CheckInternetBeforeLoadRequest_24 = value;
	}

	inline static int32_t get_offset_of_TransactionsHandlingMode_25() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___TransactionsHandlingMode_25)); }
	inline int32_t get_TransactionsHandlingMode_25() const { return ___TransactionsHandlingMode_25; }
	inline int32_t* get_address_of_TransactionsHandlingMode_25() { return &___TransactionsHandlingMode_25; }
	inline void set_TransactionsHandlingMode_25(int32_t value)
	{
		___TransactionsHandlingMode_25 = value;
	}

	inline static int32_t get_offset_of_DefaultStoreProductsView_26() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___DefaultStoreProductsView_26)); }
	inline List_1_t1398341365 * get_DefaultStoreProductsView_26() const { return ___DefaultStoreProductsView_26; }
	inline List_1_t1398341365 ** get_address_of_DefaultStoreProductsView_26() { return &___DefaultStoreProductsView_26; }
	inline void set_DefaultStoreProductsView_26(List_1_t1398341365 * value)
	{
		___DefaultStoreProductsView_26 = value;
		Il2CppCodeGenWriteBarrier(&___DefaultStoreProductsView_26, value);
	}

	inline static int32_t get_offset_of_InAppProducts_27() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___InAppProducts_27)); }
	inline List_1_t1080793967 * get_InAppProducts_27() const { return ___InAppProducts_27; }
	inline List_1_t1080793967 ** get_address_of_InAppProducts_27() { return &___InAppProducts_27; }
	inline void set_InAppProducts_27(List_1_t1080793967 * value)
	{
		___InAppProducts_27 = value;
		Il2CppCodeGenWriteBarrier(&___InAppProducts_27, value);
	}

	inline static int32_t get_offset_of_ShowStoreKitProducts_28() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___ShowStoreKitProducts_28)); }
	inline bool get_ShowStoreKitProducts_28() const { return ___ShowStoreKitProducts_28; }
	inline bool* get_address_of_ShowStoreKitProducts_28() { return &___ShowStoreKitProducts_28; }
	inline void set_ShowStoreKitProducts_28(bool value)
	{
		___ShowStoreKitProducts_28 = value;
	}

	inline static int32_t get_offset_of_Leaderboards_29() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___Leaderboards_29)); }
	inline List_1_t3820534894 * get_Leaderboards_29() const { return ___Leaderboards_29; }
	inline List_1_t3820534894 ** get_address_of_Leaderboards_29() { return &___Leaderboards_29; }
	inline void set_Leaderboards_29(List_1_t3820534894 * value)
	{
		___Leaderboards_29 = value;
		Il2CppCodeGenWriteBarrier(&___Leaderboards_29, value);
	}

	inline static int32_t get_offset_of_Achievements_30() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___Achievements_30)); }
	inline List_1_t1665273372 * get_Achievements_30() const { return ___Achievements_30; }
	inline List_1_t1665273372 ** get_address_of_Achievements_30() { return &___Achievements_30; }
	inline void set_Achievements_30(List_1_t1665273372 * value)
	{
		___Achievements_30 = value;
		Il2CppCodeGenWriteBarrier(&___Achievements_30, value);
	}

	inline static int32_t get_offset_of_UseGCRequestCaching_31() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___UseGCRequestCaching_31)); }
	inline bool get_UseGCRequestCaching_31() const { return ___UseGCRequestCaching_31; }
	inline bool* get_address_of_UseGCRequestCaching_31() { return &___UseGCRequestCaching_31; }
	inline void set_UseGCRequestCaching_31(bool value)
	{
		___UseGCRequestCaching_31 = value;
	}

	inline static int32_t get_offset_of_UsePPForAchievements_32() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___UsePPForAchievements_32)); }
	inline bool get_UsePPForAchievements_32() const { return ___UsePPForAchievements_32; }
	inline bool* get_address_of_UsePPForAchievements_32() { return &___UsePPForAchievements_32; }
	inline void set_UsePPForAchievements_32(bool value)
	{
		___UsePPForAchievements_32 = value;
	}

	inline static int32_t get_offset_of_AutoLoadUsersSmallImages_33() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___AutoLoadUsersSmallImages_33)); }
	inline bool get_AutoLoadUsersSmallImages_33() const { return ___AutoLoadUsersSmallImages_33; }
	inline bool* get_address_of_AutoLoadUsersSmallImages_33() { return &___AutoLoadUsersSmallImages_33; }
	inline void set_AutoLoadUsersSmallImages_33(bool value)
	{
		___AutoLoadUsersSmallImages_33 = value;
	}

	inline static int32_t get_offset_of_AutoLoadUsersBigImages_34() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___AutoLoadUsersBigImages_34)); }
	inline bool get_AutoLoadUsersBigImages_34() const { return ___AutoLoadUsersBigImages_34; }
	inline bool* get_address_of_AutoLoadUsersBigImages_34() { return &___AutoLoadUsersBigImages_34; }
	inline void set_AutoLoadUsersBigImages_34(bool value)
	{
		___AutoLoadUsersBigImages_34 = value;
	}

	inline static int32_t get_offset_of_ShowLeaderboards_35() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___ShowLeaderboards_35)); }
	inline bool get_ShowLeaderboards_35() const { return ___ShowLeaderboards_35; }
	inline bool* get_address_of_ShowLeaderboards_35() { return &___ShowLeaderboards_35; }
	inline void set_ShowLeaderboards_35(bool value)
	{
		___ShowLeaderboards_35 = value;
	}

	inline static int32_t get_offset_of_ShowAchievementsParams_36() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___ShowAchievementsParams_36)); }
	inline bool get_ShowAchievementsParams_36() const { return ___ShowAchievementsParams_36; }
	inline bool* get_address_of_ShowAchievementsParams_36() { return &___ShowAchievementsParams_36; }
	inline void set_ShowAchievementsParams_36(bool value)
	{
		___ShowAchievementsParams_36 = value;
	}

	inline static int32_t get_offset_of_AdEditorTesting_37() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___AdEditorTesting_37)); }
	inline bool get_AdEditorTesting_37() const { return ___AdEditorTesting_37; }
	inline bool* get_address_of_AdEditorTesting_37() { return &___AdEditorTesting_37; }
	inline void set_AdEditorTesting_37(bool value)
	{
		___AdEditorTesting_37 = value;
	}

	inline static int32_t get_offset_of_EditorFillRateIndex_38() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___EditorFillRateIndex_38)); }
	inline int32_t get_EditorFillRateIndex_38() const { return ___EditorFillRateIndex_38; }
	inline int32_t* get_address_of_EditorFillRateIndex_38() { return &___EditorFillRateIndex_38; }
	inline void set_EditorFillRateIndex_38(int32_t value)
	{
		___EditorFillRateIndex_38 = value;
	}

	inline static int32_t get_offset_of_EditorFillRate_39() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___EditorFillRate_39)); }
	inline int32_t get_EditorFillRate_39() const { return ___EditorFillRate_39; }
	inline int32_t* get_address_of_EditorFillRate_39() { return &___EditorFillRate_39; }
	inline void set_EditorFillRate_39(int32_t value)
	{
		___EditorFillRate_39 = value;
	}

	inline static int32_t get_offset_of_MaxImageLoadSize_40() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___MaxImageLoadSize_40)); }
	inline int32_t get_MaxImageLoadSize_40() const { return ___MaxImageLoadSize_40; }
	inline int32_t* get_address_of_MaxImageLoadSize_40() { return &___MaxImageLoadSize_40; }
	inline void set_MaxImageLoadSize_40(int32_t value)
	{
		___MaxImageLoadSize_40 = value;
	}

	inline static int32_t get_offset_of_JPegCompressionRate_41() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___JPegCompressionRate_41)); }
	inline float get_JPegCompressionRate_41() const { return ___JPegCompressionRate_41; }
	inline float* get_address_of_JPegCompressionRate_41() { return &___JPegCompressionRate_41; }
	inline void set_JPegCompressionRate_41(float value)
	{
		___JPegCompressionRate_41 = value;
	}

	inline static int32_t get_offset_of_GalleryImageFormat_42() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___GalleryImageFormat_42)); }
	inline int32_t get_GalleryImageFormat_42() const { return ___GalleryImageFormat_42; }
	inline int32_t* get_address_of_GalleryImageFormat_42() { return &___GalleryImageFormat_42; }
	inline void set_GalleryImageFormat_42(int32_t value)
	{
		___GalleryImageFormat_42 = value;
	}

	inline static int32_t get_offset_of_RPK_iPadViewType_43() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___RPK_iPadViewType_43)); }
	inline int32_t get_RPK_iPadViewType_43() const { return ___RPK_iPadViewType_43; }
	inline int32_t* get_address_of_RPK_iPadViewType_43() { return &___RPK_iPadViewType_43; }
	inline void set_RPK_iPadViewType_43(int32_t value)
	{
		___RPK_iPadViewType_43 = value;
	}

	inline static int32_t get_offset_of_CameraUsageDescription_44() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___CameraUsageDescription_44)); }
	inline String_t* get_CameraUsageDescription_44() const { return ___CameraUsageDescription_44; }
	inline String_t** get_address_of_CameraUsageDescription_44() { return &___CameraUsageDescription_44; }
	inline void set_CameraUsageDescription_44(String_t* value)
	{
		___CameraUsageDescription_44 = value;
		Il2CppCodeGenWriteBarrier(&___CameraUsageDescription_44, value);
	}

	inline static int32_t get_offset_of_PhotoLibraryUsageDescription_45() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___PhotoLibraryUsageDescription_45)); }
	inline String_t* get_PhotoLibraryUsageDescription_45() const { return ___PhotoLibraryUsageDescription_45; }
	inline String_t** get_address_of_PhotoLibraryUsageDescription_45() { return &___PhotoLibraryUsageDescription_45; }
	inline void set_PhotoLibraryUsageDescription_45(String_t* value)
	{
		___PhotoLibraryUsageDescription_45 = value;
		Il2CppCodeGenWriteBarrier(&___PhotoLibraryUsageDescription_45, value);
	}

	inline static int32_t get_offset_of_AppleMusicUsageDescription_46() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___AppleMusicUsageDescription_46)); }
	inline String_t* get_AppleMusicUsageDescription_46() const { return ___AppleMusicUsageDescription_46; }
	inline String_t** get_address_of_AppleMusicUsageDescription_46() { return &___AppleMusicUsageDescription_46; }
	inline void set_AppleMusicUsageDescription_46(String_t* value)
	{
		___AppleMusicUsageDescription_46 = value;
		Il2CppCodeGenWriteBarrier(&___AppleMusicUsageDescription_46, value);
	}

	inline static int32_t get_offset_of_ContactsUsageDescription_47() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___ContactsUsageDescription_47)); }
	inline String_t* get_ContactsUsageDescription_47() const { return ___ContactsUsageDescription_47; }
	inline String_t** get_address_of_ContactsUsageDescription_47() { return &___ContactsUsageDescription_47; }
	inline void set_ContactsUsageDescription_47(String_t* value)
	{
		___ContactsUsageDescription_47 = value;
		Il2CppCodeGenWriteBarrier(&___ContactsUsageDescription_47, value);
	}

	inline static int32_t get_offset_of_UrlTypes_48() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___UrlTypes_48)); }
	inline List_1_t3511628569 * get_UrlTypes_48() const { return ___UrlTypes_48; }
	inline List_1_t3511628569 ** get_address_of_UrlTypes_48() { return &___UrlTypes_48; }
	inline void set_UrlTypes_48(List_1_t3511628569 * value)
	{
		___UrlTypes_48 = value;
		Il2CppCodeGenWriteBarrier(&___UrlTypes_48, value);
	}

	inline static int32_t get_offset_of_ApplicationQueriesSchemes_49() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___ApplicationQueriesSchemes_49)); }
	inline List_1_t3511628569 * get_ApplicationQueriesSchemes_49() const { return ___ApplicationQueriesSchemes_49; }
	inline List_1_t3511628569 ** get_address_of_ApplicationQueriesSchemes_49() { return &___ApplicationQueriesSchemes_49; }
	inline void set_ApplicationQueriesSchemes_49(List_1_t3511628569 * value)
	{
		___ApplicationQueriesSchemes_49 = value;
		Il2CppCodeGenWriteBarrier(&___ApplicationQueriesSchemes_49, value);
	}

	inline static int32_t get_offset_of_ForceTouchMenu_50() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___ForceTouchMenu_50)); }
	inline List_1_t1755798996 * get_ForceTouchMenu_50() const { return ___ForceTouchMenu_50; }
	inline List_1_t1755798996 ** get_address_of_ForceTouchMenu_50() { return &___ForceTouchMenu_50; }
	inline void set_ForceTouchMenu_50(List_1_t1755798996 * value)
	{
		___ForceTouchMenu_50 = value;
		Il2CppCodeGenWriteBarrier(&___ForceTouchMenu_50, value);
	}

	inline static int32_t get_offset_of_DisablePluginLogs_51() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___DisablePluginLogs_51)); }
	inline bool get_DisablePluginLogs_51() const { return ___DisablePluginLogs_51; }
	inline bool* get_address_of_DisablePluginLogs_51() { return &___DisablePluginLogs_51; }
	inline void set_DisablePluginLogs_51(bool value)
	{
		___DisablePluginLogs_51 = value;
	}

	inline static int32_t get_offset_of_SoomlaDownloadLink_52() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___SoomlaDownloadLink_52)); }
	inline String_t* get_SoomlaDownloadLink_52() const { return ___SoomlaDownloadLink_52; }
	inline String_t** get_address_of_SoomlaDownloadLink_52() { return &___SoomlaDownloadLink_52; }
	inline void set_SoomlaDownloadLink_52(String_t* value)
	{
		___SoomlaDownloadLink_52 = value;
		Il2CppCodeGenWriteBarrier(&___SoomlaDownloadLink_52, value);
	}

	inline static int32_t get_offset_of_SoomlaDocsLink_53() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___SoomlaDocsLink_53)); }
	inline String_t* get_SoomlaDocsLink_53() const { return ___SoomlaDocsLink_53; }
	inline String_t** get_address_of_SoomlaDocsLink_53() { return &___SoomlaDocsLink_53; }
	inline void set_SoomlaDocsLink_53(String_t* value)
	{
		___SoomlaDocsLink_53 = value;
		Il2CppCodeGenWriteBarrier(&___SoomlaDocsLink_53, value);
	}

	inline static int32_t get_offset_of_SoomlaGameKey_54() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___SoomlaGameKey_54)); }
	inline String_t* get_SoomlaGameKey_54() const { return ___SoomlaGameKey_54; }
	inline String_t** get_address_of_SoomlaGameKey_54() { return &___SoomlaGameKey_54; }
	inline void set_SoomlaGameKey_54(String_t* value)
	{
		___SoomlaGameKey_54 = value;
		Il2CppCodeGenWriteBarrier(&___SoomlaGameKey_54, value);
	}

	inline static int32_t get_offset_of_SoomlaEnvKey_55() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___SoomlaEnvKey_55)); }
	inline String_t* get_SoomlaEnvKey_55() const { return ___SoomlaEnvKey_55; }
	inline String_t** get_address_of_SoomlaEnvKey_55() { return &___SoomlaEnvKey_55; }
	inline void set_SoomlaEnvKey_55(String_t* value)
	{
		___SoomlaEnvKey_55 = value;
		Il2CppCodeGenWriteBarrier(&___SoomlaEnvKey_55, value);
	}

	inline static int32_t get_offset_of_OneSignalEnabled_56() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___OneSignalEnabled_56)); }
	inline bool get_OneSignalEnabled_56() const { return ___OneSignalEnabled_56; }
	inline bool* get_address_of_OneSignalEnabled_56() { return &___OneSignalEnabled_56; }
	inline void set_OneSignalEnabled_56(bool value)
	{
		___OneSignalEnabled_56 = value;
	}

	inline static int32_t get_offset_of_OneSignalDocsLink_57() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227, ___OneSignalDocsLink_57)); }
	inline String_t* get_OneSignalDocsLink_57() const { return ___OneSignalDocsLink_57; }
	inline String_t** get_address_of_OneSignalDocsLink_57() { return &___OneSignalDocsLink_57; }
	inline void set_OneSignalDocsLink_57(String_t* value)
	{
		___OneSignalDocsLink_57 = value;
		Il2CppCodeGenWriteBarrier(&___OneSignalDocsLink_57, value);
	}
};

struct IOSNativeSettings_t547170227_StaticFields
{
public:
	// IOSNativeSettings IOSNativeSettings::instance
	IOSNativeSettings_t547170227 * ___instance_60;

public:
	inline static int32_t get_offset_of_instance_60() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t547170227_StaticFields, ___instance_60)); }
	inline IOSNativeSettings_t547170227 * get_instance_60() const { return ___instance_60; }
	inline IOSNativeSettings_t547170227 ** get_address_of_instance_60() { return &___instance_60; }
	inline void set_instance_60(IOSNativeSettings_t547170227 * value)
	{
		___instance_60 = value;
		Il2CppCodeGenWriteBarrier(&___instance_60, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
