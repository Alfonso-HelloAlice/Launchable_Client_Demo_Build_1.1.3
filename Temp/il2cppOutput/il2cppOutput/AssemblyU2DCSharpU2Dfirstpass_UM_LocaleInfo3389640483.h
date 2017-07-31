#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// ISN_Locale
struct ISN_Locale_t2162888085;
// AN_Locale
struct AN_Locale_t121755426;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UM_LocaleInfo
struct  UM_LocaleInfo_t3389640483  : public Il2CppObject
{
public:
	// ISN_Locale UM_LocaleInfo::_IOSLocale
	ISN_Locale_t2162888085 * ____IOSLocale_0;
	// AN_Locale UM_LocaleInfo::_ANLocale
	AN_Locale_t121755426 * ____ANLocale_1;

public:
	inline static int32_t get_offset_of__IOSLocale_0() { return static_cast<int32_t>(offsetof(UM_LocaleInfo_t3389640483, ____IOSLocale_0)); }
	inline ISN_Locale_t2162888085 * get__IOSLocale_0() const { return ____IOSLocale_0; }
	inline ISN_Locale_t2162888085 ** get_address_of__IOSLocale_0() { return &____IOSLocale_0; }
	inline void set__IOSLocale_0(ISN_Locale_t2162888085 * value)
	{
		____IOSLocale_0 = value;
		Il2CppCodeGenWriteBarrier(&____IOSLocale_0, value);
	}

	inline static int32_t get_offset_of__ANLocale_1() { return static_cast<int32_t>(offsetof(UM_LocaleInfo_t3389640483, ____ANLocale_1)); }
	inline AN_Locale_t121755426 * get__ANLocale_1() const { return ____ANLocale_1; }
	inline AN_Locale_t121755426 ** get_address_of__ANLocale_1() { return &____ANLocale_1; }
	inline void set__ANLocale_1(AN_Locale_t121755426 * value)
	{
		____ANLocale_1 = value;
		Il2CppCodeGenWriteBarrier(&____ANLocale_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
