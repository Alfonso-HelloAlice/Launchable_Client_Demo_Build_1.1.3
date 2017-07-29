#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Models_Res4287219743.h"

// System.Collections.Generic.List`1<MP_MediaItem>
struct List_1_t3394744161;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MP_MediaPickerResult
struct  MP_MediaPickerResult_t2204006871  : public Result_t4287219743
{
public:
	// System.Collections.Generic.List`1<MP_MediaItem> MP_MediaPickerResult::_SelectedmediaItems
	List_1_t3394744161 * ____SelectedmediaItems_1;

public:
	inline static int32_t get_offset_of__SelectedmediaItems_1() { return static_cast<int32_t>(offsetof(MP_MediaPickerResult_t2204006871, ____SelectedmediaItems_1)); }
	inline List_1_t3394744161 * get__SelectedmediaItems_1() const { return ____SelectedmediaItems_1; }
	inline List_1_t3394744161 ** get_address_of__SelectedmediaItems_1() { return &____SelectedmediaItems_1; }
	inline void set__SelectedmediaItems_1(List_1_t3394744161 * value)
	{
		____SelectedmediaItems_1 = value;
		Il2CppCodeGenWriteBarrier(&____SelectedmediaItems_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
