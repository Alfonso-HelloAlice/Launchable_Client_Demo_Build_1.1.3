#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_MNT_RoomState2227363886.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Collections.Generic.List`1<MNT_PlayerTemplate>
struct List_1_t1912998185;
// System.Action`1<MNT_RoomState>
struct Action_1_t2029163268;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MNT_Room
struct  MNT_Room_t1077194713  : public Il2CppObject
{
public:
	// System.Int32 MNT_Room::_size
	int32_t ____size_0;
	// System.Byte[] MNT_Room::_info
	ByteU5BU5D_t3397334013* ____info_1;
	// MNT_RoomState MNT_Room::_State
	int32_t ____State_2;
	// System.Collections.Generic.List`1<MNT_PlayerTemplate> MNT_Room::_Players
	List_1_t1912998185 * ____Players_3;
	// System.Action`1<MNT_RoomState> MNT_Room::MNT_RoomStateChangedAction
	Action_1_t2029163268 * ___MNT_RoomStateChangedAction_4;

public:
	inline static int32_t get_offset_of__size_0() { return static_cast<int32_t>(offsetof(MNT_Room_t1077194713, ____size_0)); }
	inline int32_t get__size_0() const { return ____size_0; }
	inline int32_t* get_address_of__size_0() { return &____size_0; }
	inline void set__size_0(int32_t value)
	{
		____size_0 = value;
	}

	inline static int32_t get_offset_of__info_1() { return static_cast<int32_t>(offsetof(MNT_Room_t1077194713, ____info_1)); }
	inline ByteU5BU5D_t3397334013* get__info_1() const { return ____info_1; }
	inline ByteU5BU5D_t3397334013** get_address_of__info_1() { return &____info_1; }
	inline void set__info_1(ByteU5BU5D_t3397334013* value)
	{
		____info_1 = value;
		Il2CppCodeGenWriteBarrier(&____info_1, value);
	}

	inline static int32_t get_offset_of__State_2() { return static_cast<int32_t>(offsetof(MNT_Room_t1077194713, ____State_2)); }
	inline int32_t get__State_2() const { return ____State_2; }
	inline int32_t* get_address_of__State_2() { return &____State_2; }
	inline void set__State_2(int32_t value)
	{
		____State_2 = value;
	}

	inline static int32_t get_offset_of__Players_3() { return static_cast<int32_t>(offsetof(MNT_Room_t1077194713, ____Players_3)); }
	inline List_1_t1912998185 * get__Players_3() const { return ____Players_3; }
	inline List_1_t1912998185 ** get_address_of__Players_3() { return &____Players_3; }
	inline void set__Players_3(List_1_t1912998185 * value)
	{
		____Players_3 = value;
		Il2CppCodeGenWriteBarrier(&____Players_3, value);
	}

	inline static int32_t get_offset_of_MNT_RoomStateChangedAction_4() { return static_cast<int32_t>(offsetof(MNT_Room_t1077194713, ___MNT_RoomStateChangedAction_4)); }
	inline Action_1_t2029163268 * get_MNT_RoomStateChangedAction_4() const { return ___MNT_RoomStateChangedAction_4; }
	inline Action_1_t2029163268 ** get_address_of_MNT_RoomStateChangedAction_4() { return &___MNT_RoomStateChangedAction_4; }
	inline void set_MNT_RoomStateChangedAction_4(Action_1_t2029163268 * value)
	{
		___MNT_RoomStateChangedAction_4 = value;
		Il2CppCodeGenWriteBarrier(&___MNT_RoomStateChangedAction_4, value);
	}
};

struct MNT_Room_t1077194713_StaticFields
{
public:
	// System.Action`1<MNT_RoomState> MNT_Room::<>f__am$cache0
	Action_1_t2029163268 * ___U3CU3Ef__amU24cache0_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_5() { return static_cast<int32_t>(offsetof(MNT_Room_t1077194713_StaticFields, ___U3CU3Ef__amU24cache0_5)); }
	inline Action_1_t2029163268 * get_U3CU3Ef__amU24cache0_5() const { return ___U3CU3Ef__amU24cache0_5; }
	inline Action_1_t2029163268 ** get_address_of_U3CU3Ef__amU24cache0_5() { return &___U3CU3Ef__amU24cache0_5; }
	inline void set_U3CU3Ef__amU24cache0_5(Action_1_t2029163268 * value)
	{
		___U3CU3Ef__amU24cache0_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
