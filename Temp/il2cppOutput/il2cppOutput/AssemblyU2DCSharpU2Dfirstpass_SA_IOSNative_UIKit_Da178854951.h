#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Action`1<System.DateTime>
struct Action_1_t495005051;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.IOSNative.UIKit.DateTimePicker
struct  DateTimePicker_t178854951  : public Il2CppObject
{
public:

public:
};

struct DateTimePicker_t178854951_StaticFields
{
public:
	// System.Action`1<System.DateTime> SA.IOSNative.UIKit.DateTimePicker::OnPickerClosed
	Action_1_t495005051 * ___OnPickerClosed_0;
	// System.Action`1<System.DateTime> SA.IOSNative.UIKit.DateTimePicker::OnPickerDateChanged
	Action_1_t495005051 * ___OnPickerDateChanged_1;

public:
	inline static int32_t get_offset_of_OnPickerClosed_0() { return static_cast<int32_t>(offsetof(DateTimePicker_t178854951_StaticFields, ___OnPickerClosed_0)); }
	inline Action_1_t495005051 * get_OnPickerClosed_0() const { return ___OnPickerClosed_0; }
	inline Action_1_t495005051 ** get_address_of_OnPickerClosed_0() { return &___OnPickerClosed_0; }
	inline void set_OnPickerClosed_0(Action_1_t495005051 * value)
	{
		___OnPickerClosed_0 = value;
		Il2CppCodeGenWriteBarrier(&___OnPickerClosed_0, value);
	}

	inline static int32_t get_offset_of_OnPickerDateChanged_1() { return static_cast<int32_t>(offsetof(DateTimePicker_t178854951_StaticFields, ___OnPickerDateChanged_1)); }
	inline Action_1_t495005051 * get_OnPickerDateChanged_1() const { return ___OnPickerDateChanged_1; }
	inline Action_1_t495005051 ** get_address_of_OnPickerDateChanged_1() { return &___OnPickerDateChanged_1; }
	inline void set_OnPickerDateChanged_1(Action_1_t495005051 * value)
	{
		___OnPickerDateChanged_1 = value;
		Il2CppCodeGenWriteBarrier(&___OnPickerDateChanged_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
