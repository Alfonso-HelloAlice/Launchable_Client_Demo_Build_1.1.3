﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.SortedDictionary`2<System.String,UnityEditor.XCodeEditor.PBXFileReference>
struct SortedDictionary_2_t2996825808;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.SortedDictionary`2/KeyCollection<System.String,UnityEditor.XCodeEditor.PBXFileReference>
struct  KeyCollection_t3210971421  : public Il2CppObject
{
public:
	// System.Collections.Generic.SortedDictionary`2<TKey,TValue> System.Collections.Generic.SortedDictionary`2/KeyCollection::_dic
	SortedDictionary_2_t2996825808 * ____dic_0;

public:
	inline static int32_t get_offset_of__dic_0() { return static_cast<int32_t>(offsetof(KeyCollection_t3210971421, ____dic_0)); }
	inline SortedDictionary_2_t2996825808 * get__dic_0() const { return ____dic_0; }
	inline SortedDictionary_2_t2996825808 ** get_address_of__dic_0() { return &____dic_0; }
	inline void set__dic_0(SortedDictionary_2_t2996825808 * value)
	{
		____dic_0 = value;
		Il2CppCodeGenWriteBarrier(&____dic_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
