#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SAOnClickAction650504801.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SASendMessageOnClick
struct  SASendMessageOnClick_t243868668  : public SAOnClickAction_t650504801
{
public:
	// UnityEngine.GameObject SASendMessageOnClick::Reciver
	GameObject_t1756533147 * ___Reciver_2;
	// System.String SASendMessageOnClick::MethodName
	String_t* ___MethodName_3;

public:
	inline static int32_t get_offset_of_Reciver_2() { return static_cast<int32_t>(offsetof(SASendMessageOnClick_t243868668, ___Reciver_2)); }
	inline GameObject_t1756533147 * get_Reciver_2() const { return ___Reciver_2; }
	inline GameObject_t1756533147 ** get_address_of_Reciver_2() { return &___Reciver_2; }
	inline void set_Reciver_2(GameObject_t1756533147 * value)
	{
		___Reciver_2 = value;
		Il2CppCodeGenWriteBarrier(&___Reciver_2, value);
	}

	inline static int32_t get_offset_of_MethodName_3() { return static_cast<int32_t>(offsetof(SASendMessageOnClick_t243868668, ___MethodName_3)); }
	inline String_t* get_MethodName_3() const { return ___MethodName_3; }
	inline String_t** get_address_of_MethodName_3() { return &___MethodName_3; }
	inline void set_MethodName_3(String_t* value)
	{
		___MethodName_3 = value;
		Il2CppCodeGenWriteBarrier(&___MethodName_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
