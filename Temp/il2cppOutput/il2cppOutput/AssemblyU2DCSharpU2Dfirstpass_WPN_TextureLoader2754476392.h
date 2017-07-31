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
// System.Action`1<UnityEngine.Texture2D>
struct Action_1_t3344795111;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WPN_TextureLoader
struct  WPN_TextureLoader_t2754476392  : public MonoBehaviour_t1158329972
{
public:
	// System.String WPN_TextureLoader::_url
	String_t* ____url_2;
	// System.Action`1<UnityEngine.Texture2D> WPN_TextureLoader::TextureLoaded
	Action_1_t3344795111 * ___TextureLoaded_3;

public:
	inline static int32_t get_offset_of__url_2() { return static_cast<int32_t>(offsetof(WPN_TextureLoader_t2754476392, ____url_2)); }
	inline String_t* get__url_2() const { return ____url_2; }
	inline String_t** get_address_of__url_2() { return &____url_2; }
	inline void set__url_2(String_t* value)
	{
		____url_2 = value;
		Il2CppCodeGenWriteBarrier(&____url_2, value);
	}

	inline static int32_t get_offset_of_TextureLoaded_3() { return static_cast<int32_t>(offsetof(WPN_TextureLoader_t2754476392, ___TextureLoaded_3)); }
	inline Action_1_t3344795111 * get_TextureLoaded_3() const { return ___TextureLoaded_3; }
	inline Action_1_t3344795111 ** get_address_of_TextureLoaded_3() { return &___TextureLoaded_3; }
	inline void set_TextureLoaded_3(Action_1_t3344795111 * value)
	{
		___TextureLoaded_3 = value;
		Il2CppCodeGenWriteBarrier(&___TextureLoaded_3, value);
	}
};

struct WPN_TextureLoader_t2754476392_StaticFields
{
public:
	// System.Action`1<UnityEngine.Texture2D> WPN_TextureLoader::<>f__am$cache0
	Action_1_t3344795111 * ___U3CU3Ef__amU24cache0_4;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_4() { return static_cast<int32_t>(offsetof(WPN_TextureLoader_t2754476392_StaticFields, ___U3CU3Ef__amU24cache0_4)); }
	inline Action_1_t3344795111 * get_U3CU3Ef__amU24cache0_4() const { return ___U3CU3Ef__amU24cache0_4; }
	inline Action_1_t3344795111 ** get_address_of_U3CU3Ef__amU24cache0_4() { return &___U3CU3Ef__amU24cache0_4; }
	inline void set_U3CU3Ef__amU24cache0_4(Action_1_t3344795111 * value)
	{
		___U3CU3Ef__amU24cache0_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
