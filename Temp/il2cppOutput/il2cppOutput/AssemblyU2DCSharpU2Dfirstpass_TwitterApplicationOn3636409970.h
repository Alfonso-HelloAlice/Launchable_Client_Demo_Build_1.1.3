#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Pattern_Si4118975075.h"

// System.Action
struct Action_t3226471752;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TwitterApplicationOnlyToken
struct  TwitterApplicationOnlyToken_t3636409970  : public Singleton_1_t4118975075
{
public:
	// System.Action TwitterApplicationOnlyToken::ActionComplete
	Action_t3226471752 * ___ActionComplete_4;
	// System.String TwitterApplicationOnlyToken::_currentToken
	String_t* ____currentToken_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> TwitterApplicationOnlyToken::Headers
	Dictionary_2_t3943999495 * ___Headers_9;

public:
	inline static int32_t get_offset_of_ActionComplete_4() { return static_cast<int32_t>(offsetof(TwitterApplicationOnlyToken_t3636409970, ___ActionComplete_4)); }
	inline Action_t3226471752 * get_ActionComplete_4() const { return ___ActionComplete_4; }
	inline Action_t3226471752 ** get_address_of_ActionComplete_4() { return &___ActionComplete_4; }
	inline void set_ActionComplete_4(Action_t3226471752 * value)
	{
		___ActionComplete_4 = value;
		Il2CppCodeGenWriteBarrier(&___ActionComplete_4, value);
	}

	inline static int32_t get_offset_of__currentToken_5() { return static_cast<int32_t>(offsetof(TwitterApplicationOnlyToken_t3636409970, ____currentToken_5)); }
	inline String_t* get__currentToken_5() const { return ____currentToken_5; }
	inline String_t** get_address_of__currentToken_5() { return &____currentToken_5; }
	inline void set__currentToken_5(String_t* value)
	{
		____currentToken_5 = value;
		Il2CppCodeGenWriteBarrier(&____currentToken_5, value);
	}

	inline static int32_t get_offset_of_Headers_9() { return static_cast<int32_t>(offsetof(TwitterApplicationOnlyToken_t3636409970, ___Headers_9)); }
	inline Dictionary_2_t3943999495 * get_Headers_9() const { return ___Headers_9; }
	inline Dictionary_2_t3943999495 ** get_address_of_Headers_9() { return &___Headers_9; }
	inline void set_Headers_9(Dictionary_2_t3943999495 * value)
	{
		___Headers_9 = value;
		Il2CppCodeGenWriteBarrier(&___Headers_9, value);
	}
};

struct TwitterApplicationOnlyToken_t3636409970_StaticFields
{
public:
	// System.Action TwitterApplicationOnlyToken::<>f__am$cache0
	Action_t3226471752 * ___U3CU3Ef__amU24cache0_10;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_10() { return static_cast<int32_t>(offsetof(TwitterApplicationOnlyToken_t3636409970_StaticFields, ___U3CU3Ef__amU24cache0_10)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cache0_10() const { return ___U3CU3Ef__amU24cache0_10; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cache0_10() { return &___U3CU3Ef__amU24cache0_10; }
	inline void set_U3CU3Ef__amU24cache0_10(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cache0_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
