#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Texture2D>
struct Dictionary_2_t1162807695;
// System.String
struct String_t;
// System.Action`1<UnityEngine.Texture2D>
struct Action_1_t3344795111;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Common.Models.WWWTextureLoader
struct  WWWTextureLoader_t499142963  : public MonoBehaviour_t1158329972
{
public:
	// System.String SA.Common.Models.WWWTextureLoader::_url
	String_t* ____url_3;
	// System.Action`1<UnityEngine.Texture2D> SA.Common.Models.WWWTextureLoader::OnLoad
	Action_1_t3344795111 * ___OnLoad_4;

public:
	inline static int32_t get_offset_of__url_3() { return static_cast<int32_t>(offsetof(WWWTextureLoader_t499142963, ____url_3)); }
	inline String_t* get__url_3() const { return ____url_3; }
	inline String_t** get_address_of__url_3() { return &____url_3; }
	inline void set__url_3(String_t* value)
	{
		____url_3 = value;
		Il2CppCodeGenWriteBarrier(&____url_3, value);
	}

	inline static int32_t get_offset_of_OnLoad_4() { return static_cast<int32_t>(offsetof(WWWTextureLoader_t499142963, ___OnLoad_4)); }
	inline Action_1_t3344795111 * get_OnLoad_4() const { return ___OnLoad_4; }
	inline Action_1_t3344795111 ** get_address_of_OnLoad_4() { return &___OnLoad_4; }
	inline void set_OnLoad_4(Action_1_t3344795111 * value)
	{
		___OnLoad_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnLoad_4, value);
	}
};

struct WWWTextureLoader_t499142963_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Texture2D> SA.Common.Models.WWWTextureLoader::LocalCache
	Dictionary_2_t1162807695 * ___LocalCache_2;
	// System.Action`1<UnityEngine.Texture2D> SA.Common.Models.WWWTextureLoader::<>f__am$cache0
	Action_1_t3344795111 * ___U3CU3Ef__amU24cache0_5;

public:
	inline static int32_t get_offset_of_LocalCache_2() { return static_cast<int32_t>(offsetof(WWWTextureLoader_t499142963_StaticFields, ___LocalCache_2)); }
	inline Dictionary_2_t1162807695 * get_LocalCache_2() const { return ___LocalCache_2; }
	inline Dictionary_2_t1162807695 ** get_address_of_LocalCache_2() { return &___LocalCache_2; }
	inline void set_LocalCache_2(Dictionary_2_t1162807695 * value)
	{
		___LocalCache_2 = value;
		Il2CppCodeGenWriteBarrier(&___LocalCache_2, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_5() { return static_cast<int32_t>(offsetof(WWWTextureLoader_t499142963_StaticFields, ___U3CU3Ef__amU24cache0_5)); }
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
