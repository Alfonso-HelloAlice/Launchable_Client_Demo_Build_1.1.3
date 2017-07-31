#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Pattern_Si1280725141.h"

// System.Action`1<AN_PackageCheckResult>
struct Action_1_t3497215137;
// System.Action`1<System.String>
struct Action_1_t1831019615;
// System.Action`1<AN_Locale>
struct Action_1_t4218522104;
// System.Action`1<System.String[]>
struct Action_1_t1444185354;
// System.Action`1<AN_NetworkInfo>
struct Action_1_t49592952;
// System.Action`1<AN_RefreshTokenResult>
struct Action_1_t2445530995;
// System.Action`1<AN_AccessTokenResult>
struct Action_1_t1168409844;
// System.Action`1<AN_DeviceCodeResult>
struct Action_1_t3331381100;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AndroidNativeUtility
struct  AndroidNativeUtility_t798160036  : public Singleton_1_t1280725141
{
public:
	// System.String AndroidNativeUtility::_redirectUrl
	String_t* ____redirectUrl_14;
	// System.String AndroidNativeUtility::_clientId
	String_t* ____clientId_15;
	// System.String AndroidNativeUtility::_clientSecret
	String_t* ____clientSecret_16;

public:
	inline static int32_t get_offset_of__redirectUrl_14() { return static_cast<int32_t>(offsetof(AndroidNativeUtility_t798160036, ____redirectUrl_14)); }
	inline String_t* get__redirectUrl_14() const { return ____redirectUrl_14; }
	inline String_t** get_address_of__redirectUrl_14() { return &____redirectUrl_14; }
	inline void set__redirectUrl_14(String_t* value)
	{
		____redirectUrl_14 = value;
		Il2CppCodeGenWriteBarrier(&____redirectUrl_14, value);
	}

	inline static int32_t get_offset_of__clientId_15() { return static_cast<int32_t>(offsetof(AndroidNativeUtility_t798160036, ____clientId_15)); }
	inline String_t* get__clientId_15() const { return ____clientId_15; }
	inline String_t** get_address_of__clientId_15() { return &____clientId_15; }
	inline void set__clientId_15(String_t* value)
	{
		____clientId_15 = value;
		Il2CppCodeGenWriteBarrier(&____clientId_15, value);
	}

	inline static int32_t get_offset_of__clientSecret_16() { return static_cast<int32_t>(offsetof(AndroidNativeUtility_t798160036, ____clientSecret_16)); }
	inline String_t* get__clientSecret_16() const { return ____clientSecret_16; }
	inline String_t** get_address_of__clientSecret_16() { return &____clientSecret_16; }
	inline void set__clientSecret_16(String_t* value)
	{
		____clientSecret_16 = value;
		Il2CppCodeGenWriteBarrier(&____clientSecret_16, value);
	}
};

struct AndroidNativeUtility_t798160036_StaticFields
{
public:
	// System.Action`1<AN_PackageCheckResult> AndroidNativeUtility::OnPackageCheckResult
	Action_1_t3497215137 * ___OnPackageCheckResult_4;
	// System.Action`1<System.String> AndroidNativeUtility::OnAndroidIdLoaded
	Action_1_t1831019615 * ___OnAndroidIdLoaded_5;
	// System.Action`1<System.String> AndroidNativeUtility::InternalStoragePathLoaded
	Action_1_t1831019615 * ___InternalStoragePathLoaded_6;
	// System.Action`1<System.String> AndroidNativeUtility::ExternalStoragePathLoaded
	Action_1_t1831019615 * ___ExternalStoragePathLoaded_7;
	// System.Action`1<AN_Locale> AndroidNativeUtility::LocaleInfoLoaded
	Action_1_t4218522104 * ___LocaleInfoLoaded_8;
	// System.Action`1<System.String[]> AndroidNativeUtility::ActionDevicePackagesListLoaded
	Action_1_t1444185354 * ___ActionDevicePackagesListLoaded_9;
	// System.Action`1<AN_NetworkInfo> AndroidNativeUtility::ActionNetworkInfoLoaded
	Action_1_t49592952 * ___ActionNetworkInfoLoaded_10;
	// System.Action`1<AN_RefreshTokenResult> AndroidNativeUtility::OnOAuthRefreshTokenLoaded
	Action_1_t2445530995 * ___OnOAuthRefreshTokenLoaded_11;
	// System.Action`1<AN_AccessTokenResult> AndroidNativeUtility::OnOAuthAccessTokenLoaded
	Action_1_t1168409844 * ___OnOAuthAccessTokenLoaded_12;
	// System.Action`1<AN_DeviceCodeResult> AndroidNativeUtility::OnDeviceCodeLoaded
	Action_1_t3331381100 * ___OnDeviceCodeLoaded_13;

public:
	inline static int32_t get_offset_of_OnPackageCheckResult_4() { return static_cast<int32_t>(offsetof(AndroidNativeUtility_t798160036_StaticFields, ___OnPackageCheckResult_4)); }
	inline Action_1_t3497215137 * get_OnPackageCheckResult_4() const { return ___OnPackageCheckResult_4; }
	inline Action_1_t3497215137 ** get_address_of_OnPackageCheckResult_4() { return &___OnPackageCheckResult_4; }
	inline void set_OnPackageCheckResult_4(Action_1_t3497215137 * value)
	{
		___OnPackageCheckResult_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnPackageCheckResult_4, value);
	}

	inline static int32_t get_offset_of_OnAndroidIdLoaded_5() { return static_cast<int32_t>(offsetof(AndroidNativeUtility_t798160036_StaticFields, ___OnAndroidIdLoaded_5)); }
	inline Action_1_t1831019615 * get_OnAndroidIdLoaded_5() const { return ___OnAndroidIdLoaded_5; }
	inline Action_1_t1831019615 ** get_address_of_OnAndroidIdLoaded_5() { return &___OnAndroidIdLoaded_5; }
	inline void set_OnAndroidIdLoaded_5(Action_1_t1831019615 * value)
	{
		___OnAndroidIdLoaded_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnAndroidIdLoaded_5, value);
	}

	inline static int32_t get_offset_of_InternalStoragePathLoaded_6() { return static_cast<int32_t>(offsetof(AndroidNativeUtility_t798160036_StaticFields, ___InternalStoragePathLoaded_6)); }
	inline Action_1_t1831019615 * get_InternalStoragePathLoaded_6() const { return ___InternalStoragePathLoaded_6; }
	inline Action_1_t1831019615 ** get_address_of_InternalStoragePathLoaded_6() { return &___InternalStoragePathLoaded_6; }
	inline void set_InternalStoragePathLoaded_6(Action_1_t1831019615 * value)
	{
		___InternalStoragePathLoaded_6 = value;
		Il2CppCodeGenWriteBarrier(&___InternalStoragePathLoaded_6, value);
	}

	inline static int32_t get_offset_of_ExternalStoragePathLoaded_7() { return static_cast<int32_t>(offsetof(AndroidNativeUtility_t798160036_StaticFields, ___ExternalStoragePathLoaded_7)); }
	inline Action_1_t1831019615 * get_ExternalStoragePathLoaded_7() const { return ___ExternalStoragePathLoaded_7; }
	inline Action_1_t1831019615 ** get_address_of_ExternalStoragePathLoaded_7() { return &___ExternalStoragePathLoaded_7; }
	inline void set_ExternalStoragePathLoaded_7(Action_1_t1831019615 * value)
	{
		___ExternalStoragePathLoaded_7 = value;
		Il2CppCodeGenWriteBarrier(&___ExternalStoragePathLoaded_7, value);
	}

	inline static int32_t get_offset_of_LocaleInfoLoaded_8() { return static_cast<int32_t>(offsetof(AndroidNativeUtility_t798160036_StaticFields, ___LocaleInfoLoaded_8)); }
	inline Action_1_t4218522104 * get_LocaleInfoLoaded_8() const { return ___LocaleInfoLoaded_8; }
	inline Action_1_t4218522104 ** get_address_of_LocaleInfoLoaded_8() { return &___LocaleInfoLoaded_8; }
	inline void set_LocaleInfoLoaded_8(Action_1_t4218522104 * value)
	{
		___LocaleInfoLoaded_8 = value;
		Il2CppCodeGenWriteBarrier(&___LocaleInfoLoaded_8, value);
	}

	inline static int32_t get_offset_of_ActionDevicePackagesListLoaded_9() { return static_cast<int32_t>(offsetof(AndroidNativeUtility_t798160036_StaticFields, ___ActionDevicePackagesListLoaded_9)); }
	inline Action_1_t1444185354 * get_ActionDevicePackagesListLoaded_9() const { return ___ActionDevicePackagesListLoaded_9; }
	inline Action_1_t1444185354 ** get_address_of_ActionDevicePackagesListLoaded_9() { return &___ActionDevicePackagesListLoaded_9; }
	inline void set_ActionDevicePackagesListLoaded_9(Action_1_t1444185354 * value)
	{
		___ActionDevicePackagesListLoaded_9 = value;
		Il2CppCodeGenWriteBarrier(&___ActionDevicePackagesListLoaded_9, value);
	}

	inline static int32_t get_offset_of_ActionNetworkInfoLoaded_10() { return static_cast<int32_t>(offsetof(AndroidNativeUtility_t798160036_StaticFields, ___ActionNetworkInfoLoaded_10)); }
	inline Action_1_t49592952 * get_ActionNetworkInfoLoaded_10() const { return ___ActionNetworkInfoLoaded_10; }
	inline Action_1_t49592952 ** get_address_of_ActionNetworkInfoLoaded_10() { return &___ActionNetworkInfoLoaded_10; }
	inline void set_ActionNetworkInfoLoaded_10(Action_1_t49592952 * value)
	{
		___ActionNetworkInfoLoaded_10 = value;
		Il2CppCodeGenWriteBarrier(&___ActionNetworkInfoLoaded_10, value);
	}

	inline static int32_t get_offset_of_OnOAuthRefreshTokenLoaded_11() { return static_cast<int32_t>(offsetof(AndroidNativeUtility_t798160036_StaticFields, ___OnOAuthRefreshTokenLoaded_11)); }
	inline Action_1_t2445530995 * get_OnOAuthRefreshTokenLoaded_11() const { return ___OnOAuthRefreshTokenLoaded_11; }
	inline Action_1_t2445530995 ** get_address_of_OnOAuthRefreshTokenLoaded_11() { return &___OnOAuthRefreshTokenLoaded_11; }
	inline void set_OnOAuthRefreshTokenLoaded_11(Action_1_t2445530995 * value)
	{
		___OnOAuthRefreshTokenLoaded_11 = value;
		Il2CppCodeGenWriteBarrier(&___OnOAuthRefreshTokenLoaded_11, value);
	}

	inline static int32_t get_offset_of_OnOAuthAccessTokenLoaded_12() { return static_cast<int32_t>(offsetof(AndroidNativeUtility_t798160036_StaticFields, ___OnOAuthAccessTokenLoaded_12)); }
	inline Action_1_t1168409844 * get_OnOAuthAccessTokenLoaded_12() const { return ___OnOAuthAccessTokenLoaded_12; }
	inline Action_1_t1168409844 ** get_address_of_OnOAuthAccessTokenLoaded_12() { return &___OnOAuthAccessTokenLoaded_12; }
	inline void set_OnOAuthAccessTokenLoaded_12(Action_1_t1168409844 * value)
	{
		___OnOAuthAccessTokenLoaded_12 = value;
		Il2CppCodeGenWriteBarrier(&___OnOAuthAccessTokenLoaded_12, value);
	}

	inline static int32_t get_offset_of_OnDeviceCodeLoaded_13() { return static_cast<int32_t>(offsetof(AndroidNativeUtility_t798160036_StaticFields, ___OnDeviceCodeLoaded_13)); }
	inline Action_1_t3331381100 * get_OnDeviceCodeLoaded_13() const { return ___OnDeviceCodeLoaded_13; }
	inline Action_1_t3331381100 ** get_address_of_OnDeviceCodeLoaded_13() { return &___OnDeviceCodeLoaded_13; }
	inline void set_OnDeviceCodeLoaded_13(Action_1_t3331381100 * value)
	{
		___OnDeviceCodeLoaded_13 = value;
		Il2CppCodeGenWriteBarrier(&___OnDeviceCodeLoaded_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
