#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SA_IOSDeploy_FlagTyp3672807452.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.IOSDeploy.Flag
struct  Flag_t3592137084  : public Il2CppObject
{
public:
	// System.Boolean SA.IOSDeploy.Flag::IsOpen
	bool ___IsOpen_0;
	// System.String SA.IOSDeploy.Flag::Name
	String_t* ___Name_1;
	// SA.IOSDeploy.FlagType SA.IOSDeploy.Flag::Type
	int32_t ___Type_2;

public:
	inline static int32_t get_offset_of_IsOpen_0() { return static_cast<int32_t>(offsetof(Flag_t3592137084, ___IsOpen_0)); }
	inline bool get_IsOpen_0() const { return ___IsOpen_0; }
	inline bool* get_address_of_IsOpen_0() { return &___IsOpen_0; }
	inline void set_IsOpen_0(bool value)
	{
		___IsOpen_0 = value;
	}

	inline static int32_t get_offset_of_Name_1() { return static_cast<int32_t>(offsetof(Flag_t3592137084, ___Name_1)); }
	inline String_t* get_Name_1() const { return ___Name_1; }
	inline String_t** get_address_of_Name_1() { return &___Name_1; }
	inline void set_Name_1(String_t* value)
	{
		___Name_1 = value;
		Il2CppCodeGenWriteBarrier(&___Name_1, value);
	}

	inline static int32_t get_offset_of_Type_2() { return static_cast<int32_t>(offsetof(Flag_t3592137084, ___Type_2)); }
	inline int32_t get_Type_2() const { return ___Type_2; }
	inline int32_t* get_address_of_Type_2() { return &___Type_2; }
	inline void set_Type_2(int32_t value)
	{
		___Type_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
