#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.TextMesh
struct TextMesh_t1641806576;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA_StatusBar
struct  SA_StatusBar_t1378080260  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.TextMesh SA_StatusBar::title
	TextMesh_t1641806576 * ___title_2;
	// UnityEngine.TextMesh SA_StatusBar::shadow
	TextMesh_t1641806576 * ___shadow_3;

public:
	inline static int32_t get_offset_of_title_2() { return static_cast<int32_t>(offsetof(SA_StatusBar_t1378080260, ___title_2)); }
	inline TextMesh_t1641806576 * get_title_2() const { return ___title_2; }
	inline TextMesh_t1641806576 ** get_address_of_title_2() { return &___title_2; }
	inline void set_title_2(TextMesh_t1641806576 * value)
	{
		___title_2 = value;
		Il2CppCodeGenWriteBarrier(&___title_2, value);
	}

	inline static int32_t get_offset_of_shadow_3() { return static_cast<int32_t>(offsetof(SA_StatusBar_t1378080260, ___shadow_3)); }
	inline TextMesh_t1641806576 * get_shadow_3() const { return ___shadow_3; }
	inline TextMesh_t1641806576 ** get_address_of_shadow_3() { return &___shadow_3; }
	inline void set_shadow_3(TextMesh_t1641806576 * value)
	{
		___shadow_3 = value;
		Il2CppCodeGenWriteBarrier(&___shadow_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
