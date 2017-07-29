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
// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GK_PlayerSignatureResult
struct  GK_PlayerSignatureResult_t13769479  : public Result_t4287219743
{
public:
	// System.String GK_PlayerSignatureResult::_PublicKeyUrl
	String_t* ____PublicKeyUrl_1;
	// System.Byte[] GK_PlayerSignatureResult::_Signature
	ByteU5BU5D_t3397334013* ____Signature_2;
	// System.Byte[] GK_PlayerSignatureResult::_Salt
	ByteU5BU5D_t3397334013* ____Salt_3;
	// System.Int64 GK_PlayerSignatureResult::_Timestamp
	int64_t ____Timestamp_4;

public:
	inline static int32_t get_offset_of__PublicKeyUrl_1() { return static_cast<int32_t>(offsetof(GK_PlayerSignatureResult_t13769479, ____PublicKeyUrl_1)); }
	inline String_t* get__PublicKeyUrl_1() const { return ____PublicKeyUrl_1; }
	inline String_t** get_address_of__PublicKeyUrl_1() { return &____PublicKeyUrl_1; }
	inline void set__PublicKeyUrl_1(String_t* value)
	{
		____PublicKeyUrl_1 = value;
		Il2CppCodeGenWriteBarrier(&____PublicKeyUrl_1, value);
	}

	inline static int32_t get_offset_of__Signature_2() { return static_cast<int32_t>(offsetof(GK_PlayerSignatureResult_t13769479, ____Signature_2)); }
	inline ByteU5BU5D_t3397334013* get__Signature_2() const { return ____Signature_2; }
	inline ByteU5BU5D_t3397334013** get_address_of__Signature_2() { return &____Signature_2; }
	inline void set__Signature_2(ByteU5BU5D_t3397334013* value)
	{
		____Signature_2 = value;
		Il2CppCodeGenWriteBarrier(&____Signature_2, value);
	}

	inline static int32_t get_offset_of__Salt_3() { return static_cast<int32_t>(offsetof(GK_PlayerSignatureResult_t13769479, ____Salt_3)); }
	inline ByteU5BU5D_t3397334013* get__Salt_3() const { return ____Salt_3; }
	inline ByteU5BU5D_t3397334013** get_address_of__Salt_3() { return &____Salt_3; }
	inline void set__Salt_3(ByteU5BU5D_t3397334013* value)
	{
		____Salt_3 = value;
		Il2CppCodeGenWriteBarrier(&____Salt_3, value);
	}

	inline static int32_t get_offset_of__Timestamp_4() { return static_cast<int32_t>(offsetof(GK_PlayerSignatureResult_t13769479, ____Timestamp_4)); }
	inline int64_t get__Timestamp_4() const { return ____Timestamp_4; }
	inline int64_t* get_address_of__Timestamp_4() { return &____Timestamp_4; }
	inline void set__Timestamp_4(int64_t value)
	{
		____Timestamp_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
