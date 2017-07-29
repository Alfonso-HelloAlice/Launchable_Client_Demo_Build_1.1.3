#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SA_IOSDeploy_iOSLibr3492773810.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.IOSDeploy.Lib
struct  Lib_t360384209  : public Il2CppObject
{
public:
	// System.Boolean SA.IOSDeploy.Lib::IsOpen
	bool ___IsOpen_0;
	// SA.IOSDeploy.iOSLibrary SA.IOSDeploy.Lib::Type
	int32_t ___Type_1;
	// System.Boolean SA.IOSDeploy.Lib::IsOptional
	bool ___IsOptional_2;

public:
	inline static int32_t get_offset_of_IsOpen_0() { return static_cast<int32_t>(offsetof(Lib_t360384209, ___IsOpen_0)); }
	inline bool get_IsOpen_0() const { return ___IsOpen_0; }
	inline bool* get_address_of_IsOpen_0() { return &___IsOpen_0; }
	inline void set_IsOpen_0(bool value)
	{
		___IsOpen_0 = value;
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(Lib_t360384209, ___Type_1)); }
	inline int32_t get_Type_1() const { return ___Type_1; }
	inline int32_t* get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(int32_t value)
	{
		___Type_1 = value;
	}

	inline static int32_t get_offset_of_IsOptional_2() { return static_cast<int32_t>(offsetof(Lib_t360384209, ___IsOptional_2)); }
	inline bool get_IsOptional_2() const { return ___IsOptional_2; }
	inline bool* get_address_of_IsOptional_2() { return &___IsOptional_2; }
	inline void set_IsOptional_2(bool value)
	{
		___IsOptional_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
