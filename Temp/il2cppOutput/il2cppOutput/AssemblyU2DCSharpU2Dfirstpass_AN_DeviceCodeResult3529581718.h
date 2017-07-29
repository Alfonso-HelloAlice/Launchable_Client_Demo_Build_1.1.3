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

// AN_DeviceCodeResult
struct  AN_DeviceCodeResult_t3529581718  : public Result_t4287219743
{
public:
	// System.String AN_DeviceCodeResult::_deviceCode
	String_t* ____deviceCode_1;
	// System.String AN_DeviceCodeResult::_userCode
	String_t* ____userCode_2;
	// System.String AN_DeviceCodeResult::_verificationUrl
	String_t* ____verificationUrl_3;
	// System.Int64 AN_DeviceCodeResult::_expiresIn
	int64_t ____expiresIn_4;
	// System.Int64 AN_DeviceCodeResult::_interval
	int64_t ____interval_5;

public:
	inline static int32_t get_offset_of__deviceCode_1() { return static_cast<int32_t>(offsetof(AN_DeviceCodeResult_t3529581718, ____deviceCode_1)); }
	inline String_t* get__deviceCode_1() const { return ____deviceCode_1; }
	inline String_t** get_address_of__deviceCode_1() { return &____deviceCode_1; }
	inline void set__deviceCode_1(String_t* value)
	{
		____deviceCode_1 = value;
		Il2CppCodeGenWriteBarrier(&____deviceCode_1, value);
	}

	inline static int32_t get_offset_of__userCode_2() { return static_cast<int32_t>(offsetof(AN_DeviceCodeResult_t3529581718, ____userCode_2)); }
	inline String_t* get__userCode_2() const { return ____userCode_2; }
	inline String_t** get_address_of__userCode_2() { return &____userCode_2; }
	inline void set__userCode_2(String_t* value)
	{
		____userCode_2 = value;
		Il2CppCodeGenWriteBarrier(&____userCode_2, value);
	}

	inline static int32_t get_offset_of__verificationUrl_3() { return static_cast<int32_t>(offsetof(AN_DeviceCodeResult_t3529581718, ____verificationUrl_3)); }
	inline String_t* get__verificationUrl_3() const { return ____verificationUrl_3; }
	inline String_t** get_address_of__verificationUrl_3() { return &____verificationUrl_3; }
	inline void set__verificationUrl_3(String_t* value)
	{
		____verificationUrl_3 = value;
		Il2CppCodeGenWriteBarrier(&____verificationUrl_3, value);
	}

	inline static int32_t get_offset_of__expiresIn_4() { return static_cast<int32_t>(offsetof(AN_DeviceCodeResult_t3529581718, ____expiresIn_4)); }
	inline int64_t get__expiresIn_4() const { return ____expiresIn_4; }
	inline int64_t* get_address_of__expiresIn_4() { return &____expiresIn_4; }
	inline void set__expiresIn_4(int64_t value)
	{
		____expiresIn_4 = value;
	}

	inline static int32_t get_offset_of__interval_5() { return static_cast<int32_t>(offsetof(AN_DeviceCodeResult_t3529581718, ____interval_5)); }
	inline int64_t get__interval_5() const { return ____interval_5; }
	inline int64_t* get_address_of__interval_5() { return &____interval_5; }
	inline void set__interval_5(int64_t value)
	{
		____interval_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
