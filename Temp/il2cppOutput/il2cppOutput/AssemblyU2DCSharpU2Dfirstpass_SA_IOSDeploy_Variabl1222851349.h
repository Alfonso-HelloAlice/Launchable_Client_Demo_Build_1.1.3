#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// SA.IOSDeploy.Variable
struct Variable_t1157765046;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.IOSDeploy.VariableId
struct  VariableId_t1222851349  : public Il2CppObject
{
public:
	// SA.IOSDeploy.Variable SA.IOSDeploy.VariableId::VariableValue
	Variable_t1157765046 * ___VariableValue_0;
	// System.String SA.IOSDeploy.VariableId::uniqueIdKey
	String_t* ___uniqueIdKey_1;

public:
	inline static int32_t get_offset_of_VariableValue_0() { return static_cast<int32_t>(offsetof(VariableId_t1222851349, ___VariableValue_0)); }
	inline Variable_t1157765046 * get_VariableValue_0() const { return ___VariableValue_0; }
	inline Variable_t1157765046 ** get_address_of_VariableValue_0() { return &___VariableValue_0; }
	inline void set_VariableValue_0(Variable_t1157765046 * value)
	{
		___VariableValue_0 = value;
		Il2CppCodeGenWriteBarrier(&___VariableValue_0, value);
	}

	inline static int32_t get_offset_of_uniqueIdKey_1() { return static_cast<int32_t>(offsetof(VariableId_t1222851349, ___uniqueIdKey_1)); }
	inline String_t* get_uniqueIdKey_1() const { return ___uniqueIdKey_1; }
	inline String_t** get_address_of_uniqueIdKey_1() { return &___uniqueIdKey_1; }
	inline void set_uniqueIdKey_1(String_t* value)
	{
		___uniqueIdKey_1 = value;
		Il2CppCodeGenWriteBarrier(&___uniqueIdKey_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
