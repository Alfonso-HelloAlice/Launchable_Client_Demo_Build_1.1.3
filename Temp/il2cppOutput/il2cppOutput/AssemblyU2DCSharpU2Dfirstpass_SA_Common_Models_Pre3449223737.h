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
// System.Action`1<UnityEngine.GameObject>
struct Action_1_t1558332529;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Common.Models.PrefabAsyncLoader
struct  PrefabAsyncLoader_t3449223737  : public MonoBehaviour_t1158329972
{
public:
	// System.String SA.Common.Models.PrefabAsyncLoader::PrefabPath
	String_t* ___PrefabPath_2;
	// System.Action`1<UnityEngine.GameObject> SA.Common.Models.PrefabAsyncLoader::ObjectLoadedAction
	Action_1_t1558332529 * ___ObjectLoadedAction_3;

public:
	inline static int32_t get_offset_of_PrefabPath_2() { return static_cast<int32_t>(offsetof(PrefabAsyncLoader_t3449223737, ___PrefabPath_2)); }
	inline String_t* get_PrefabPath_2() const { return ___PrefabPath_2; }
	inline String_t** get_address_of_PrefabPath_2() { return &___PrefabPath_2; }
	inline void set_PrefabPath_2(String_t* value)
	{
		___PrefabPath_2 = value;
		Il2CppCodeGenWriteBarrier(&___PrefabPath_2, value);
	}

	inline static int32_t get_offset_of_ObjectLoadedAction_3() { return static_cast<int32_t>(offsetof(PrefabAsyncLoader_t3449223737, ___ObjectLoadedAction_3)); }
	inline Action_1_t1558332529 * get_ObjectLoadedAction_3() const { return ___ObjectLoadedAction_3; }
	inline Action_1_t1558332529 ** get_address_of_ObjectLoadedAction_3() { return &___ObjectLoadedAction_3; }
	inline void set_ObjectLoadedAction_3(Action_1_t1558332529 * value)
	{
		___ObjectLoadedAction_3 = value;
		Il2CppCodeGenWriteBarrier(&___ObjectLoadedAction_3, value);
	}
};

struct PrefabAsyncLoader_t3449223737_StaticFields
{
public:
	// System.Action`1<UnityEngine.GameObject> SA.Common.Models.PrefabAsyncLoader::<>f__am$cache0
	Action_1_t1558332529 * ___U3CU3Ef__amU24cache0_4;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_4() { return static_cast<int32_t>(offsetof(PrefabAsyncLoader_t3449223737_StaticFields, ___U3CU3Ef__amU24cache0_4)); }
	inline Action_1_t1558332529 * get_U3CU3Ef__amU24cache0_4() const { return ___U3CU3Ef__amU24cache0_4; }
	inline Action_1_t1558332529 ** get_address_of_U3CU3Ef__amU24cache0_4() { return &___U3CU3Ef__amU24cache0_4; }
	inline void set_U3CU3Ef__amU24cache0_4(Action_1_t1558332529 * value)
	{
		___U3CU3Ef__amU24cache0_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
