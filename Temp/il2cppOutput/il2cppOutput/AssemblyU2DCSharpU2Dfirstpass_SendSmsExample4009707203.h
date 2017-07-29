#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SendSmsExample
struct  SendSmsExample_t4009707203  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text SendSmsExample::smsBody
	Text_t356221433 * ___smsBody_2;
	// UnityEngine.UI.Text SendSmsExample::reciever
	Text_t356221433 * ___reciever_3;

public:
	inline static int32_t get_offset_of_smsBody_2() { return static_cast<int32_t>(offsetof(SendSmsExample_t4009707203, ___smsBody_2)); }
	inline Text_t356221433 * get_smsBody_2() const { return ___smsBody_2; }
	inline Text_t356221433 ** get_address_of_smsBody_2() { return &___smsBody_2; }
	inline void set_smsBody_2(Text_t356221433 * value)
	{
		___smsBody_2 = value;
		Il2CppCodeGenWriteBarrier(&___smsBody_2, value);
	}

	inline static int32_t get_offset_of_reciever_3() { return static_cast<int32_t>(offsetof(SendSmsExample_t4009707203, ___reciever_3)); }
	inline Text_t356221433 * get_reciever_3() const { return ___reciever_3; }
	inline Text_t356221433 ** get_address_of_reciever_3() { return &___reciever_3; }
	inline void set_reciever_3(Text_t356221433 * value)
	{
		___reciever_3 = value;
		Il2CppCodeGenWriteBarrier(&___reciever_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
