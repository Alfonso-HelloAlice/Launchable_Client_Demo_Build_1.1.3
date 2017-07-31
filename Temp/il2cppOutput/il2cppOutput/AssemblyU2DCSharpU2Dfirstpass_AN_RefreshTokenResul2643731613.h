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

// AN_RefreshTokenResult
struct  AN_RefreshTokenResult_t2643731613  : public Result_t4287219743
{
public:
	// System.String AN_RefreshTokenResult::_accessToken
	String_t* ____accessToken_1;
	// System.String AN_RefreshTokenResult::_refreshToken
	String_t* ____refreshToken_2;
	// System.String AN_RefreshTokenResult::_tokenType
	String_t* ____tokenType_3;
	// System.Int64 AN_RefreshTokenResult::_expiresIn
	int64_t ____expiresIn_4;

public:
	inline static int32_t get_offset_of__accessToken_1() { return static_cast<int32_t>(offsetof(AN_RefreshTokenResult_t2643731613, ____accessToken_1)); }
	inline String_t* get__accessToken_1() const { return ____accessToken_1; }
	inline String_t** get_address_of__accessToken_1() { return &____accessToken_1; }
	inline void set__accessToken_1(String_t* value)
	{
		____accessToken_1 = value;
		Il2CppCodeGenWriteBarrier(&____accessToken_1, value);
	}

	inline static int32_t get_offset_of__refreshToken_2() { return static_cast<int32_t>(offsetof(AN_RefreshTokenResult_t2643731613, ____refreshToken_2)); }
	inline String_t* get__refreshToken_2() const { return ____refreshToken_2; }
	inline String_t** get_address_of__refreshToken_2() { return &____refreshToken_2; }
	inline void set__refreshToken_2(String_t* value)
	{
		____refreshToken_2 = value;
		Il2CppCodeGenWriteBarrier(&____refreshToken_2, value);
	}

	inline static int32_t get_offset_of__tokenType_3() { return static_cast<int32_t>(offsetof(AN_RefreshTokenResult_t2643731613, ____tokenType_3)); }
	inline String_t* get__tokenType_3() const { return ____tokenType_3; }
	inline String_t** get_address_of__tokenType_3() { return &____tokenType_3; }
	inline void set__tokenType_3(String_t* value)
	{
		____tokenType_3 = value;
		Il2CppCodeGenWriteBarrier(&____tokenType_3, value);
	}

	inline static int32_t get_offset_of__expiresIn_4() { return static_cast<int32_t>(offsetof(AN_RefreshTokenResult_t2643731613, ____expiresIn_4)); }
	inline int64_t get__expiresIn_4() const { return ____expiresIn_4; }
	inline int64_t* get_address_of__expiresIn_4() { return &____expiresIn_4; }
	inline void set__expiresIn_4(int64_t value)
	{
		____expiresIn_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
