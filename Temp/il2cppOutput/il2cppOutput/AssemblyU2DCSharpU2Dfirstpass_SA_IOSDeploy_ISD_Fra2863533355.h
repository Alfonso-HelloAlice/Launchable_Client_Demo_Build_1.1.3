#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Collections.Generic.List`1<SA.IOSDeploy.Framework>
struct List_1_t3392069394;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.IOSDeploy.ISD_FrameworkHandler
struct  ISD_FrameworkHandler_t2863533355  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct ISD_FrameworkHandler_t2863533355_StaticFields
{
public:
	// System.Collections.Generic.List`1<SA.IOSDeploy.Framework> SA.IOSDeploy.ISD_FrameworkHandler::_DefaultFrameworks
	List_1_t3392069394 * ____DefaultFrameworks_2;

public:
	inline static int32_t get_offset_of__DefaultFrameworks_2() { return static_cast<int32_t>(offsetof(ISD_FrameworkHandler_t2863533355_StaticFields, ____DefaultFrameworks_2)); }
	inline List_1_t3392069394 * get__DefaultFrameworks_2() const { return ____DefaultFrameworks_2; }
	inline List_1_t3392069394 ** get_address_of__DefaultFrameworks_2() { return &____DefaultFrameworks_2; }
	inline void set__DefaultFrameworks_2(List_1_t3392069394 * value)
	{
		____DefaultFrameworks_2 = value;
		Il2CppCodeGenWriteBarrier(&____DefaultFrameworks_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
