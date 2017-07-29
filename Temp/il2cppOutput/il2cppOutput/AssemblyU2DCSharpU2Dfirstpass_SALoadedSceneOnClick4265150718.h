#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SAOnClickAction650504801.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SALoadedSceneOnClick
struct  SALoadedSceneOnClick_t4265150718  : public SAOnClickAction_t650504801
{
public:
	// System.String SALoadedSceneOnClick::levelName
	String_t* ___levelName_2;

public:
	inline static int32_t get_offset_of_levelName_2() { return static_cast<int32_t>(offsetof(SALoadedSceneOnClick_t4265150718, ___levelName_2)); }
	inline String_t* get_levelName_2() const { return ___levelName_2; }
	inline String_t** get_address_of_levelName_2() { return &___levelName_2; }
	inline void set_levelName_2(String_t* value)
	{
		___levelName_2 = value;
		Il2CppCodeGenWriteBarrier(&___levelName_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
