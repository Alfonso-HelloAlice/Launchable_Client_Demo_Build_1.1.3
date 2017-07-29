#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_FB_PermissionStatus2970074352.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FB_Permission
struct  FB_Permission_t1872772122  : public Il2CppObject
{
public:
	// System.String FB_Permission::_Name
	String_t* ____Name_0;
	// FB_PermissionStatus FB_Permission::_Status
	int32_t ____Status_1;

public:
	inline static int32_t get_offset_of__Name_0() { return static_cast<int32_t>(offsetof(FB_Permission_t1872772122, ____Name_0)); }
	inline String_t* get__Name_0() const { return ____Name_0; }
	inline String_t** get_address_of__Name_0() { return &____Name_0; }
	inline void set__Name_0(String_t* value)
	{
		____Name_0 = value;
		Il2CppCodeGenWriteBarrier(&____Name_0, value);
	}

	inline static int32_t get_offset_of__Status_1() { return static_cast<int32_t>(offsetof(FB_Permission_t1872772122, ____Status_1)); }
	inline int32_t get__Status_1() const { return ____Status_1; }
	inline int32_t* get_address_of__Status_1() { return &____Status_1; }
	inline void set__Status_1(int32_t value)
	{
		____Status_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
