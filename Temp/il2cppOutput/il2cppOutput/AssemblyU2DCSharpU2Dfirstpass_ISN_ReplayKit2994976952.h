#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Pattern_Si3477542057.h"

// System.Action`1<SA.Common.Models.Result>
struct Action_1_t4089019125;
// System.Action`1<ReplayKitVideoShareResult>
struct Action_1_t2564752916;
// System.Action`1<SA.Common.Models.Error>
struct Action_1_t247007156;
// System.Action`1<System.Boolean>
struct Action_1_t3627374100;
// System.Action
struct Action_t3226471752;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ISN_ReplayKit
struct  ISN_ReplayKit_t2994976952  : public Singleton_1_t3477542057
{
public:
	// System.Boolean ISN_ReplayKit::_IsRecodingAvailableToShare
	bool ____IsRecodingAvailableToShare_10;

public:
	inline static int32_t get_offset_of__IsRecodingAvailableToShare_10() { return static_cast<int32_t>(offsetof(ISN_ReplayKit_t2994976952, ____IsRecodingAvailableToShare_10)); }
	inline bool get__IsRecodingAvailableToShare_10() const { return ____IsRecodingAvailableToShare_10; }
	inline bool* get_address_of__IsRecodingAvailableToShare_10() { return &____IsRecodingAvailableToShare_10; }
	inline void set__IsRecodingAvailableToShare_10(bool value)
	{
		____IsRecodingAvailableToShare_10 = value;
	}
};

struct ISN_ReplayKit_t2994976952_StaticFields
{
public:
	// System.Action`1<SA.Common.Models.Result> ISN_ReplayKit::ActionRecordStarted
	Action_1_t4089019125 * ___ActionRecordStarted_4;
	// System.Action`1<SA.Common.Models.Result> ISN_ReplayKit::ActionRecordStoped
	Action_1_t4089019125 * ___ActionRecordStoped_5;
	// System.Action`1<ReplayKitVideoShareResult> ISN_ReplayKit::ActionShareDialogFinished
	Action_1_t2564752916 * ___ActionShareDialogFinished_6;
	// System.Action`1<SA.Common.Models.Error> ISN_ReplayKit::ActionRecordInterrupted
	Action_1_t247007156 * ___ActionRecordInterrupted_7;
	// System.Action`1<System.Boolean> ISN_ReplayKit::ActionRecorderDidChangeAvailability
	Action_1_t3627374100 * ___ActionRecorderDidChangeAvailability_8;
	// System.Action ISN_ReplayKit::ActionRecordDiscard
	Action_t3226471752 * ___ActionRecordDiscard_9;

public:
	inline static int32_t get_offset_of_ActionRecordStarted_4() { return static_cast<int32_t>(offsetof(ISN_ReplayKit_t2994976952_StaticFields, ___ActionRecordStarted_4)); }
	inline Action_1_t4089019125 * get_ActionRecordStarted_4() const { return ___ActionRecordStarted_4; }
	inline Action_1_t4089019125 ** get_address_of_ActionRecordStarted_4() { return &___ActionRecordStarted_4; }
	inline void set_ActionRecordStarted_4(Action_1_t4089019125 * value)
	{
		___ActionRecordStarted_4 = value;
		Il2CppCodeGenWriteBarrier(&___ActionRecordStarted_4, value);
	}

	inline static int32_t get_offset_of_ActionRecordStoped_5() { return static_cast<int32_t>(offsetof(ISN_ReplayKit_t2994976952_StaticFields, ___ActionRecordStoped_5)); }
	inline Action_1_t4089019125 * get_ActionRecordStoped_5() const { return ___ActionRecordStoped_5; }
	inline Action_1_t4089019125 ** get_address_of_ActionRecordStoped_5() { return &___ActionRecordStoped_5; }
	inline void set_ActionRecordStoped_5(Action_1_t4089019125 * value)
	{
		___ActionRecordStoped_5 = value;
		Il2CppCodeGenWriteBarrier(&___ActionRecordStoped_5, value);
	}

	inline static int32_t get_offset_of_ActionShareDialogFinished_6() { return static_cast<int32_t>(offsetof(ISN_ReplayKit_t2994976952_StaticFields, ___ActionShareDialogFinished_6)); }
	inline Action_1_t2564752916 * get_ActionShareDialogFinished_6() const { return ___ActionShareDialogFinished_6; }
	inline Action_1_t2564752916 ** get_address_of_ActionShareDialogFinished_6() { return &___ActionShareDialogFinished_6; }
	inline void set_ActionShareDialogFinished_6(Action_1_t2564752916 * value)
	{
		___ActionShareDialogFinished_6 = value;
		Il2CppCodeGenWriteBarrier(&___ActionShareDialogFinished_6, value);
	}

	inline static int32_t get_offset_of_ActionRecordInterrupted_7() { return static_cast<int32_t>(offsetof(ISN_ReplayKit_t2994976952_StaticFields, ___ActionRecordInterrupted_7)); }
	inline Action_1_t247007156 * get_ActionRecordInterrupted_7() const { return ___ActionRecordInterrupted_7; }
	inline Action_1_t247007156 ** get_address_of_ActionRecordInterrupted_7() { return &___ActionRecordInterrupted_7; }
	inline void set_ActionRecordInterrupted_7(Action_1_t247007156 * value)
	{
		___ActionRecordInterrupted_7 = value;
		Il2CppCodeGenWriteBarrier(&___ActionRecordInterrupted_7, value);
	}

	inline static int32_t get_offset_of_ActionRecorderDidChangeAvailability_8() { return static_cast<int32_t>(offsetof(ISN_ReplayKit_t2994976952_StaticFields, ___ActionRecorderDidChangeAvailability_8)); }
	inline Action_1_t3627374100 * get_ActionRecorderDidChangeAvailability_8() const { return ___ActionRecorderDidChangeAvailability_8; }
	inline Action_1_t3627374100 ** get_address_of_ActionRecorderDidChangeAvailability_8() { return &___ActionRecorderDidChangeAvailability_8; }
	inline void set_ActionRecorderDidChangeAvailability_8(Action_1_t3627374100 * value)
	{
		___ActionRecorderDidChangeAvailability_8 = value;
		Il2CppCodeGenWriteBarrier(&___ActionRecorderDidChangeAvailability_8, value);
	}

	inline static int32_t get_offset_of_ActionRecordDiscard_9() { return static_cast<int32_t>(offsetof(ISN_ReplayKit_t2994976952_StaticFields, ___ActionRecordDiscard_9)); }
	inline Action_t3226471752 * get_ActionRecordDiscard_9() const { return ___ActionRecordDiscard_9; }
	inline Action_t3226471752 ** get_address_of_ActionRecordDiscard_9() { return &___ActionRecordDiscard_9; }
	inline void set_ActionRecordDiscard_9(Action_t3226471752 * value)
	{
		___ActionRecordDiscard_9 = value;
		Il2CppCodeGenWriteBarrier(&___ActionRecordDiscard_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
