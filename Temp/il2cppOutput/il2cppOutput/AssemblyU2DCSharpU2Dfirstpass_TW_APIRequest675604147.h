#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Action`1<TW_APIRequstResult>
struct Action_1_t256950437;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TW_APIRequest
struct  TW_APIRequest_t675604147  : public MonoBehaviour_t1158329972
{
public:
	// System.Action`1<TW_APIRequstResult> TW_APIRequest::ActionComplete
	Action_1_t256950437 * ___ActionComplete_2;
	// System.Boolean TW_APIRequest::IsFirst
	bool ___IsFirst_3;
	// System.String TW_APIRequest::GetParams
	String_t* ___GetParams_4;
	// System.String TW_APIRequest::requestUrl
	String_t* ___requestUrl_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> TW_APIRequest::Headers
	Dictionary_2_t3943999495 * ___Headers_6;

public:
	inline static int32_t get_offset_of_ActionComplete_2() { return static_cast<int32_t>(offsetof(TW_APIRequest_t675604147, ___ActionComplete_2)); }
	inline Action_1_t256950437 * get_ActionComplete_2() const { return ___ActionComplete_2; }
	inline Action_1_t256950437 ** get_address_of_ActionComplete_2() { return &___ActionComplete_2; }
	inline void set_ActionComplete_2(Action_1_t256950437 * value)
	{
		___ActionComplete_2 = value;
		Il2CppCodeGenWriteBarrier(&___ActionComplete_2, value);
	}

	inline static int32_t get_offset_of_IsFirst_3() { return static_cast<int32_t>(offsetof(TW_APIRequest_t675604147, ___IsFirst_3)); }
	inline bool get_IsFirst_3() const { return ___IsFirst_3; }
	inline bool* get_address_of_IsFirst_3() { return &___IsFirst_3; }
	inline void set_IsFirst_3(bool value)
	{
		___IsFirst_3 = value;
	}

	inline static int32_t get_offset_of_GetParams_4() { return static_cast<int32_t>(offsetof(TW_APIRequest_t675604147, ___GetParams_4)); }
	inline String_t* get_GetParams_4() const { return ___GetParams_4; }
	inline String_t** get_address_of_GetParams_4() { return &___GetParams_4; }
	inline void set_GetParams_4(String_t* value)
	{
		___GetParams_4 = value;
		Il2CppCodeGenWriteBarrier(&___GetParams_4, value);
	}

	inline static int32_t get_offset_of_requestUrl_5() { return static_cast<int32_t>(offsetof(TW_APIRequest_t675604147, ___requestUrl_5)); }
	inline String_t* get_requestUrl_5() const { return ___requestUrl_5; }
	inline String_t** get_address_of_requestUrl_5() { return &___requestUrl_5; }
	inline void set_requestUrl_5(String_t* value)
	{
		___requestUrl_5 = value;
		Il2CppCodeGenWriteBarrier(&___requestUrl_5, value);
	}

	inline static int32_t get_offset_of_Headers_6() { return static_cast<int32_t>(offsetof(TW_APIRequest_t675604147, ___Headers_6)); }
	inline Dictionary_2_t3943999495 * get_Headers_6() const { return ___Headers_6; }
	inline Dictionary_2_t3943999495 ** get_address_of_Headers_6() { return &___Headers_6; }
	inline void set_Headers_6(Dictionary_2_t3943999495 * value)
	{
		___Headers_6 = value;
		Il2CppCodeGenWriteBarrier(&___Headers_6, value);
	}
};

struct TW_APIRequest_t675604147_StaticFields
{
public:
	// System.Action`1<TW_APIRequstResult> TW_APIRequest::<>f__am$cache0
	Action_1_t256950437 * ___U3CU3Ef__amU24cache0_7;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_7() { return static_cast<int32_t>(offsetof(TW_APIRequest_t675604147_StaticFields, ___U3CU3Ef__amU24cache0_7)); }
	inline Action_1_t256950437 * get_U3CU3Ef__amU24cache0_7() const { return ___U3CU3Ef__amU24cache0_7; }
	inline Action_1_t256950437 ** get_address_of_U3CU3Ef__amU24cache0_7() { return &___U3CU3Ef__amU24cache0_7; }
	inline void set_U3CU3Ef__amU24cache0_7(Action_1_t256950437 * value)
	{
		___U3CU3Ef__amU24cache0_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
