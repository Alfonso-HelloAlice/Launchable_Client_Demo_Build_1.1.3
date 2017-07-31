#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Models_Res4287219743.h"

// System.String
struct String_t;
// GK_Player
struct GK_Player_t2782008294;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GK_UserInfoLoadResult
struct  GK_UserInfoLoadResult_t1177841233  : public Result_t4287219743
{
public:
	// System.String GK_UserInfoLoadResult::_playerId
	String_t* ____playerId_1;
	// GK_Player GK_UserInfoLoadResult::_tpl
	GK_Player_t2782008294 * ____tpl_2;

public:
	inline static int32_t get_offset_of__playerId_1() { return static_cast<int32_t>(offsetof(GK_UserInfoLoadResult_t1177841233, ____playerId_1)); }
	inline String_t* get__playerId_1() const { return ____playerId_1; }
	inline String_t** get_address_of__playerId_1() { return &____playerId_1; }
	inline void set__playerId_1(String_t* value)
	{
		____playerId_1 = value;
		Il2CppCodeGenWriteBarrier(&____playerId_1, value);
	}

	inline static int32_t get_offset_of__tpl_2() { return static_cast<int32_t>(offsetof(GK_UserInfoLoadResult_t1177841233, ____tpl_2)); }
	inline GK_Player_t2782008294 * get__tpl_2() const { return ____tpl_2; }
	inline GK_Player_t2782008294 ** get_address_of__tpl_2() { return &____tpl_2; }
	inline void set__tpl_2(GK_Player_t2782008294 * value)
	{
		____tpl_2 = value;
		Il2CppCodeGenWriteBarrier(&____tpl_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
