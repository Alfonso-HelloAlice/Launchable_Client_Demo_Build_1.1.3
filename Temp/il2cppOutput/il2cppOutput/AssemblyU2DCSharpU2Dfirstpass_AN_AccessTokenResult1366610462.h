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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AN_AccessTokenResult
struct  AN_AccessTokenResult_t1366610462  : public Result_t4287219743
{
public:
	// System.String AN_AccessTokenResult::_accessToken
	String_t* ____accessToken_1;
	// System.String AN_AccessTokenResult::_tokenType
	String_t* ____tokenType_2;
	// System.Int64 AN_AccessTokenResult::_expiresIn
	int64_t ____expiresIn_3;

public:
	inline static int32_t get_offset_of__accessToken_1() { return static_cast<int32_t>(offsetof(AN_AccessTokenResult_t1366610462, ____accessToken_1)); }
	inline String_t* get__accessToken_1() const { return ____accessToken_1; }
	inline String_t** get_address_of__accessToken_1() { return &____accessToken_1; }
	inline void set__accessToken_1(String_t* value)
	{
		____accessToken_1 = value;
		Il2CppCodeGenWriteBarrier(&____accessToken_1, value);
	}

	inline static int32_t get_offset_of__tokenType_2() { return static_cast<int32_t>(offsetof(AN_AccessTokenResult_t1366610462, ____tokenType_2)); }
	inline String_t* get__tokenType_2() const { return ____tokenType_2; }
	inline String_t** get_address_of__tokenType_2() { return &____tokenType_2; }
	inline void set__tokenType_2(String_t* value)
	{
		____tokenType_2 = value;
		Il2CppCodeGenWriteBarrier(&____tokenType_2, value);
	}

	inline static int32_t get_offset_of__expiresIn_3() { return static_cast<int32_t>(offsetof(AN_AccessTokenResult_t1366610462, ____expiresIn_3)); }
	inline int64_t get__expiresIn_3() const { return ____expiresIn_3; }
	inline int64_t* get_address_of__expiresIn_3() { return &____expiresIn_3; }
	inline void set__expiresIn_3(int64_t value)
	{
		____expiresIn_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
