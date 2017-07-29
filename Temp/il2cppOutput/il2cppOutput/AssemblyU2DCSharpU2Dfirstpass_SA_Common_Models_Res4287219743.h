#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// SA.Common.Models.Error
struct Error_t445207774;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Common.Models.Result
struct  Result_t4287219743  : public Il2CppObject
{
public:
	// SA.Common.Models.Error SA.Common.Models.Result::_Error
	Error_t445207774 * ____Error_0;

public:
	inline static int32_t get_offset_of__Error_0() { return static_cast<int32_t>(offsetof(Result_t4287219743, ____Error_0)); }
	inline Error_t445207774 * get__Error_0() const { return ____Error_0; }
	inline Error_t445207774 ** get_address_of__Error_0() { return &____Error_0; }
	inline void set__Error_0(Error_t445207774 * value)
	{
		____Error_0 = value;
		Il2CppCodeGenWriteBarrier(&____Error_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
