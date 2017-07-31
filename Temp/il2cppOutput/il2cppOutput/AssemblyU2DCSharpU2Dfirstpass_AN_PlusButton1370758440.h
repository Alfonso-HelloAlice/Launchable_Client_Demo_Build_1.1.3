#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_TextAnchor112990806.h"

// System.Action
struct Action_t3226471752;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AN_PlusButton
struct  AN_PlusButton_t1370758440  : public Il2CppObject
{
public:
	// System.Int32 AN_PlusButton::_ButtonId
	int32_t ____ButtonId_0;
	// UnityEngine.TextAnchor AN_PlusButton::_anchor
	int32_t ____anchor_1;
	// System.Int32 AN_PlusButton::_x
	int32_t ____x_2;
	// System.Int32 AN_PlusButton::_y
	int32_t ____y_3;
	// System.Boolean AN_PlusButton::_IsShowed
	bool ____IsShowed_4;
	// System.Action AN_PlusButton::ButtonClicked
	Action_t3226471752 * ___ButtonClicked_5;

public:
	inline static int32_t get_offset_of__ButtonId_0() { return static_cast<int32_t>(offsetof(AN_PlusButton_t1370758440, ____ButtonId_0)); }
	inline int32_t get__ButtonId_0() const { return ____ButtonId_0; }
	inline int32_t* get_address_of__ButtonId_0() { return &____ButtonId_0; }
	inline void set__ButtonId_0(int32_t value)
	{
		____ButtonId_0 = value;
	}

	inline static int32_t get_offset_of__anchor_1() { return static_cast<int32_t>(offsetof(AN_PlusButton_t1370758440, ____anchor_1)); }
	inline int32_t get__anchor_1() const { return ____anchor_1; }
	inline int32_t* get_address_of__anchor_1() { return &____anchor_1; }
	inline void set__anchor_1(int32_t value)
	{
		____anchor_1 = value;
	}

	inline static int32_t get_offset_of__x_2() { return static_cast<int32_t>(offsetof(AN_PlusButton_t1370758440, ____x_2)); }
	inline int32_t get__x_2() const { return ____x_2; }
	inline int32_t* get_address_of__x_2() { return &____x_2; }
	inline void set__x_2(int32_t value)
	{
		____x_2 = value;
	}

	inline static int32_t get_offset_of__y_3() { return static_cast<int32_t>(offsetof(AN_PlusButton_t1370758440, ____y_3)); }
	inline int32_t get__y_3() const { return ____y_3; }
	inline int32_t* get_address_of__y_3() { return &____y_3; }
	inline void set__y_3(int32_t value)
	{
		____y_3 = value;
	}

	inline static int32_t get_offset_of__IsShowed_4() { return static_cast<int32_t>(offsetof(AN_PlusButton_t1370758440, ____IsShowed_4)); }
	inline bool get__IsShowed_4() const { return ____IsShowed_4; }
	inline bool* get_address_of__IsShowed_4() { return &____IsShowed_4; }
	inline void set__IsShowed_4(bool value)
	{
		____IsShowed_4 = value;
	}

	inline static int32_t get_offset_of_ButtonClicked_5() { return static_cast<int32_t>(offsetof(AN_PlusButton_t1370758440, ___ButtonClicked_5)); }
	inline Action_t3226471752 * get_ButtonClicked_5() const { return ___ButtonClicked_5; }
	inline Action_t3226471752 ** get_address_of_ButtonClicked_5() { return &___ButtonClicked_5; }
	inline void set_ButtonClicked_5(Action_t3226471752 * value)
	{
		___ButtonClicked_5 = value;
		Il2CppCodeGenWriteBarrier(&___ButtonClicked_5, value);
	}
};

struct AN_PlusButton_t1370758440_StaticFields
{
public:
	// System.Int32 AN_PlusButton::_nextId
	int32_t ____nextId_6;
	// System.Action AN_PlusButton::<>f__am$cache0
	Action_t3226471752 * ___U3CU3Ef__amU24cache0_7;

public:
	inline static int32_t get_offset_of__nextId_6() { return static_cast<int32_t>(offsetof(AN_PlusButton_t1370758440_StaticFields, ____nextId_6)); }
	inline int32_t get__nextId_6() const { return ____nextId_6; }
	inline int32_t* get_address_of__nextId_6() { return &____nextId_6; }
	inline void set__nextId_6(int32_t value)
	{
		____nextId_6 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_7() { return static_cast<int32_t>(offsetof(AN_PlusButton_t1370758440_StaticFields, ___U3CU3Ef__amU24cache0_7)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cache0_7() const { return ___U3CU3Ef__amU24cache0_7; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cache0_7() { return &___U3CU3Ef__amU24cache0_7; }
	inline void set_U3CU3Ef__amU24cache0_7(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cache0_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
