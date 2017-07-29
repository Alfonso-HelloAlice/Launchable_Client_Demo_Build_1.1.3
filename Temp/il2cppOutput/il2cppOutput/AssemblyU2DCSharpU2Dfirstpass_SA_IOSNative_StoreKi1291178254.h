#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// SA.IOSNative.StoreKit.BillingInitChecker/BillingInitListener
struct BillingInitListener_t2208400311;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.IOSNative.StoreKit.BillingInitChecker
struct  BillingInitChecker_t1291178254  : public Il2CppObject
{
public:
	// SA.IOSNative.StoreKit.BillingInitChecker/BillingInitListener SA.IOSNative.StoreKit.BillingInitChecker::_listener
	BillingInitListener_t2208400311 * ____listener_0;

public:
	inline static int32_t get_offset_of__listener_0() { return static_cast<int32_t>(offsetof(BillingInitChecker_t1291178254, ____listener_0)); }
	inline BillingInitListener_t2208400311 * get__listener_0() const { return ____listener_0; }
	inline BillingInitListener_t2208400311 ** get_address_of__listener_0() { return &____listener_0; }
	inline void set__listener_0(BillingInitListener_t2208400311 * value)
	{
		____listener_0 = value;
		Il2CppCodeGenWriteBarrier(&____listener_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
