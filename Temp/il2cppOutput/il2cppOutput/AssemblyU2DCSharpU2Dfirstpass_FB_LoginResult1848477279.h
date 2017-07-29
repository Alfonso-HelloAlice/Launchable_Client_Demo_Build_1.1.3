#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_FB_Result838248372.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FB_LoginResult
struct  FB_LoginResult_t1848477279  : public FB_Result_t838248372
{
public:
	// System.Boolean FB_LoginResult::_IsCanceled
	bool ____IsCanceled_3;
	// System.String FB_LoginResult::_UserId
	String_t* ____UserId_4;
	// System.String FB_LoginResult::_AccessToken
	String_t* ____AccessToken_5;

public:
	inline static int32_t get_offset_of__IsCanceled_3() { return static_cast<int32_t>(offsetof(FB_LoginResult_t1848477279, ____IsCanceled_3)); }
	inline bool get__IsCanceled_3() const { return ____IsCanceled_3; }
	inline bool* get_address_of__IsCanceled_3() { return &____IsCanceled_3; }
	inline void set__IsCanceled_3(bool value)
	{
		____IsCanceled_3 = value;
	}

	inline static int32_t get_offset_of__UserId_4() { return static_cast<int32_t>(offsetof(FB_LoginResult_t1848477279, ____UserId_4)); }
	inline String_t* get__UserId_4() const { return ____UserId_4; }
	inline String_t** get_address_of__UserId_4() { return &____UserId_4; }
	inline void set__UserId_4(String_t* value)
	{
		____UserId_4 = value;
		Il2CppCodeGenWriteBarrier(&____UserId_4, value);
	}

	inline static int32_t get_offset_of__AccessToken_5() { return static_cast<int32_t>(offsetof(FB_LoginResult_t1848477279, ____AccessToken_5)); }
	inline String_t* get__AccessToken_5() const { return ____AccessToken_5; }
	inline String_t** get_address_of__AccessToken_5() { return &____AccessToken_5; }
	inline void set__AccessToken_5(String_t* value)
	{
		____AccessToken_5 = value;
		Il2CppCodeGenWriteBarrier(&____AccessToken_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
