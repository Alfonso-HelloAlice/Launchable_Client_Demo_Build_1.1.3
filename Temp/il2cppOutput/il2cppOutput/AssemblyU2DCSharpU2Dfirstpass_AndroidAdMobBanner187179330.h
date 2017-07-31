#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharpU2Dfirstpass_GADBannerSize1988135029.h"
#include "UnityEngine_UnityEngine_TextAnchor112990806.h"

// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,GoogleMobileAdBanner>
struct Dictionary_2_t3238598220;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AndroidAdMobBanner
struct  AndroidAdMobBanner_t187179330  : public MonoBehaviour_t1158329972
{
public:
	// System.String AndroidAdMobBanner::BannersUnityId
	String_t* ___BannersUnityId_2;
	// GADBannerSize AndroidAdMobBanner::size
	int32_t ___size_3;
	// UnityEngine.TextAnchor AndroidAdMobBanner::anchor
	int32_t ___anchor_4;

public:
	inline static int32_t get_offset_of_BannersUnityId_2() { return static_cast<int32_t>(offsetof(AndroidAdMobBanner_t187179330, ___BannersUnityId_2)); }
	inline String_t* get_BannersUnityId_2() const { return ___BannersUnityId_2; }
	inline String_t** get_address_of_BannersUnityId_2() { return &___BannersUnityId_2; }
	inline void set_BannersUnityId_2(String_t* value)
	{
		___BannersUnityId_2 = value;
		Il2CppCodeGenWriteBarrier(&___BannersUnityId_2, value);
	}

	inline static int32_t get_offset_of_size_3() { return static_cast<int32_t>(offsetof(AndroidAdMobBanner_t187179330, ___size_3)); }
	inline int32_t get_size_3() const { return ___size_3; }
	inline int32_t* get_address_of_size_3() { return &___size_3; }
	inline void set_size_3(int32_t value)
	{
		___size_3 = value;
	}

	inline static int32_t get_offset_of_anchor_4() { return static_cast<int32_t>(offsetof(AndroidAdMobBanner_t187179330, ___anchor_4)); }
	inline int32_t get_anchor_4() const { return ___anchor_4; }
	inline int32_t* get_address_of_anchor_4() { return &___anchor_4; }
	inline void set_anchor_4(int32_t value)
	{
		___anchor_4 = value;
	}
};

struct AndroidAdMobBanner_t187179330_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,GoogleMobileAdBanner> AndroidAdMobBanner::_refisterdBanners
	Dictionary_2_t3238598220 * ____refisterdBanners_5;

public:
	inline static int32_t get_offset_of__refisterdBanners_5() { return static_cast<int32_t>(offsetof(AndroidAdMobBanner_t187179330_StaticFields, ____refisterdBanners_5)); }
	inline Dictionary_2_t3238598220 * get__refisterdBanners_5() const { return ____refisterdBanners_5; }
	inline Dictionary_2_t3238598220 ** get_address_of__refisterdBanners_5() { return &____refisterdBanners_5; }
	inline void set__refisterdBanners_5(Dictionary_2_t3238598220 * value)
	{
		____refisterdBanners_5 = value;
		Il2CppCodeGenWriteBarrier(&____refisterdBanners_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
