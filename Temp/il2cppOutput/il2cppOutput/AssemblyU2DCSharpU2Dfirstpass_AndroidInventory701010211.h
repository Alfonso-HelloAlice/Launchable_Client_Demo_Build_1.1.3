#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.Dictionary`2<System.String,GooglePurchaseTemplate>
struct Dictionary_2_t229143832;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AndroidInventory
struct  AndroidInventory_t701010211  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,GooglePurchaseTemplate> AndroidInventory::_purchases
	Dictionary_2_t229143832 * ____purchases_0;

public:
	inline static int32_t get_offset_of__purchases_0() { return static_cast<int32_t>(offsetof(AndroidInventory_t701010211, ____purchases_0)); }
	inline Dictionary_2_t229143832 * get__purchases_0() const { return ____purchases_0; }
	inline Dictionary_2_t229143832 ** get_address_of__purchases_0() { return &____purchases_0; }
	inline void set__purchases_0(Dictionary_2_t229143832 * value)
	{
		____purchases_0 = value;
		Il2CppCodeGenWriteBarrier(&____purchases_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
