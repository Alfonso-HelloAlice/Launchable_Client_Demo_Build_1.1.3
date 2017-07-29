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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PackageAppInfo
struct  PackageAppInfo_t260912591  : public MonoBehaviour_t1158329972
{
public:
	// System.String PackageAppInfo::versionName
	String_t* ___versionName_2;
	// System.String PackageAppInfo::versionCode
	String_t* ___versionCode_3;
	// System.String PackageAppInfo::packageName
	String_t* ___packageName_4;
	// System.String PackageAppInfo::sharedUserId
	String_t* ___sharedUserId_5;
	// System.String PackageAppInfo::sharedUserLabel
	String_t* ___sharedUserLabel_6;
	// System.Int64 PackageAppInfo::lastUpdateTime
	int64_t ___lastUpdateTime_7;

public:
	inline static int32_t get_offset_of_versionName_2() { return static_cast<int32_t>(offsetof(PackageAppInfo_t260912591, ___versionName_2)); }
	inline String_t* get_versionName_2() const { return ___versionName_2; }
	inline String_t** get_address_of_versionName_2() { return &___versionName_2; }
	inline void set_versionName_2(String_t* value)
	{
		___versionName_2 = value;
		Il2CppCodeGenWriteBarrier(&___versionName_2, value);
	}

	inline static int32_t get_offset_of_versionCode_3() { return static_cast<int32_t>(offsetof(PackageAppInfo_t260912591, ___versionCode_3)); }
	inline String_t* get_versionCode_3() const { return ___versionCode_3; }
	inline String_t** get_address_of_versionCode_3() { return &___versionCode_3; }
	inline void set_versionCode_3(String_t* value)
	{
		___versionCode_3 = value;
		Il2CppCodeGenWriteBarrier(&___versionCode_3, value);
	}

	inline static int32_t get_offset_of_packageName_4() { return static_cast<int32_t>(offsetof(PackageAppInfo_t260912591, ___packageName_4)); }
	inline String_t* get_packageName_4() const { return ___packageName_4; }
	inline String_t** get_address_of_packageName_4() { return &___packageName_4; }
	inline void set_packageName_4(String_t* value)
	{
		___packageName_4 = value;
		Il2CppCodeGenWriteBarrier(&___packageName_4, value);
	}

	inline static int32_t get_offset_of_sharedUserId_5() { return static_cast<int32_t>(offsetof(PackageAppInfo_t260912591, ___sharedUserId_5)); }
	inline String_t* get_sharedUserId_5() const { return ___sharedUserId_5; }
	inline String_t** get_address_of_sharedUserId_5() { return &___sharedUserId_5; }
	inline void set_sharedUserId_5(String_t* value)
	{
		___sharedUserId_5 = value;
		Il2CppCodeGenWriteBarrier(&___sharedUserId_5, value);
	}

	inline static int32_t get_offset_of_sharedUserLabel_6() { return static_cast<int32_t>(offsetof(PackageAppInfo_t260912591, ___sharedUserLabel_6)); }
	inline String_t* get_sharedUserLabel_6() const { return ___sharedUserLabel_6; }
	inline String_t** get_address_of_sharedUserLabel_6() { return &___sharedUserLabel_6; }
	inline void set_sharedUserLabel_6(String_t* value)
	{
		___sharedUserLabel_6 = value;
		Il2CppCodeGenWriteBarrier(&___sharedUserLabel_6, value);
	}

	inline static int32_t get_offset_of_lastUpdateTime_7() { return static_cast<int32_t>(offsetof(PackageAppInfo_t260912591, ___lastUpdateTime_7)); }
	inline int64_t get_lastUpdateTime_7() const { return ___lastUpdateTime_7; }
	inline int64_t* get_address_of_lastUpdateTime_7() { return &___lastUpdateTime_7; }
	inline void set_lastUpdateTime_7(int64_t value)
	{
		___lastUpdateTime_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
