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

// System.Collections.Generic.Dictionary`2<System.String,GoogleMobileAdBanner>
struct Dictionary_2_t3238598220;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AdMobBanner
struct  AdMobBanner_t1822688259  : public MonoBehaviour_t1158329972
{
public:
	// GADBannerSize AdMobBanner::size
	int32_t ___size_2;
	// UnityEngine.TextAnchor AdMobBanner::anchor
	int32_t ___anchor_3;

public:
	inline static int32_t get_offset_of_size_2() { return static_cast<int32_t>(offsetof(AdMobBanner_t1822688259, ___size_2)); }
	inline int32_t get_size_2() const { return ___size_2; }
	inline int32_t* get_address_of_size_2() { return &___size_2; }
	inline void set_size_2(int32_t value)
	{
		___size_2 = value;
	}

	inline static int32_t get_offset_of_anchor_3() { return static_cast<int32_t>(offsetof(AdMobBanner_t1822688259, ___anchor_3)); }
	inline int32_t get_anchor_3() const { return ___anchor_3; }
	inline int32_t* get_address_of_anchor_3() { return &___anchor_3; }
	inline void set_anchor_3(int32_t value)
	{
		___anchor_3 = value;
	}
};

struct AdMobBanner_t1822688259_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,GoogleMobileAdBanner> AdMobBanner::_registerdBanners
	Dictionary_2_t3238598220 * ____registerdBanners_4;

public:
	inline static int32_t get_offset_of__registerdBanners_4() { return static_cast<int32_t>(offsetof(AdMobBanner_t1822688259_StaticFields, ____registerdBanners_4)); }
	inline Dictionary_2_t3238598220 * get__registerdBanners_4() const { return ____registerdBanners_4; }
	inline Dictionary_2_t3238598220 ** get_address_of__registerdBanners_4() { return &____registerdBanners_4; }
	inline void set__registerdBanners_4(Dictionary_2_t3238598220 * value)
	{
		____registerdBanners_4 = value;
		Il2CppCodeGenWriteBarrier(&____registerdBanners_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
