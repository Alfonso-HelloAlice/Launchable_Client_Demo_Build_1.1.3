#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.SortedDictionary`2<System.String,System.Object>
struct SortedDictionary_2_t1958873150;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.SortedDictionary`2/ValueCollection<System.String,System.Object>
struct  ValueCollection_t1515721873  : public Il2CppObject
{
public:
	// System.Collections.Generic.SortedDictionary`2<TKey,TValue> System.Collections.Generic.SortedDictionary`2/ValueCollection::_dic
	SortedDictionary_2_t1958873150 * ____dic_0;

public:
	inline static int32_t get_offset_of__dic_0() { return static_cast<int32_t>(offsetof(ValueCollection_t1515721873, ____dic_0)); }
	inline SortedDictionary_2_t1958873150 * get__dic_0() const { return ____dic_0; }
	inline SortedDictionary_2_t1958873150 ** get_address_of__dic_0() { return &____dic_0; }
	inline void set__dic_0(SortedDictionary_2_t1958873150 * value)
	{
		____dic_0 = value;
		Il2CppCodeGenWriteBarrier(&____dic_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
