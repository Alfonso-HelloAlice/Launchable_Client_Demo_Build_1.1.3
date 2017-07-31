#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_FB_RequestActionType2205998668.h"
#include "AssemblyU2DCSharpU2Dfirstpass_FB_AppRequestState1209389490.h"
#include "mscorlib_System_DateTime693205669.h"

// System.String
struct String_t;
// FB_Object
struct FB_Object_t1438399806;
// System.Action`1<FB_Result>
struct Action_1_t640047754;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FB_AppRequest
struct  FB_AppRequest_t501312625  : public Il2CppObject
{
public:
	// System.String FB_AppRequest::Id
	String_t* ___Id_0;
	// System.String FB_AppRequest::ApplicationId
	String_t* ___ApplicationId_1;
	// System.String FB_AppRequest::Message
	String_t* ___Message_2;
	// FB_RequestActionType FB_AppRequest::ActionType
	int32_t ___ActionType_3;
	// FB_AppRequestState FB_AppRequest::State
	int32_t ___State_4;
	// System.String FB_AppRequest::FromId
	String_t* ___FromId_5;
	// System.String FB_AppRequest::FromName
	String_t* ___FromName_6;
	// System.DateTime FB_AppRequest::CreatedTime
	DateTime_t693205669  ___CreatedTime_7;
	// System.String FB_AppRequest::CreatedTimeString
	String_t* ___CreatedTimeString_8;
	// System.String FB_AppRequest::Data
	String_t* ___Data_9;
	// FB_Object FB_AppRequest::Object
	FB_Object_t1438399806 * ___Object_10;
	// System.Action`1<FB_Result> FB_AppRequest::OnDeleteRequestFinished
	Action_1_t640047754 * ___OnDeleteRequestFinished_11;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(FB_AppRequest_t501312625, ___Id_0)); }
	inline String_t* get_Id_0() const { return ___Id_0; }
	inline String_t** get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(String_t* value)
	{
		___Id_0 = value;
		Il2CppCodeGenWriteBarrier(&___Id_0, value);
	}

	inline static int32_t get_offset_of_ApplicationId_1() { return static_cast<int32_t>(offsetof(FB_AppRequest_t501312625, ___ApplicationId_1)); }
	inline String_t* get_ApplicationId_1() const { return ___ApplicationId_1; }
	inline String_t** get_address_of_ApplicationId_1() { return &___ApplicationId_1; }
	inline void set_ApplicationId_1(String_t* value)
	{
		___ApplicationId_1 = value;
		Il2CppCodeGenWriteBarrier(&___ApplicationId_1, value);
	}

	inline static int32_t get_offset_of_Message_2() { return static_cast<int32_t>(offsetof(FB_AppRequest_t501312625, ___Message_2)); }
	inline String_t* get_Message_2() const { return ___Message_2; }
	inline String_t** get_address_of_Message_2() { return &___Message_2; }
	inline void set_Message_2(String_t* value)
	{
		___Message_2 = value;
		Il2CppCodeGenWriteBarrier(&___Message_2, value);
	}

	inline static int32_t get_offset_of_ActionType_3() { return static_cast<int32_t>(offsetof(FB_AppRequest_t501312625, ___ActionType_3)); }
	inline int32_t get_ActionType_3() const { return ___ActionType_3; }
	inline int32_t* get_address_of_ActionType_3() { return &___ActionType_3; }
	inline void set_ActionType_3(int32_t value)
	{
		___ActionType_3 = value;
	}

	inline static int32_t get_offset_of_State_4() { return static_cast<int32_t>(offsetof(FB_AppRequest_t501312625, ___State_4)); }
	inline int32_t get_State_4() const { return ___State_4; }
	inline int32_t* get_address_of_State_4() { return &___State_4; }
	inline void set_State_4(int32_t value)
	{
		___State_4 = value;
	}

	inline static int32_t get_offset_of_FromId_5() { return static_cast<int32_t>(offsetof(FB_AppRequest_t501312625, ___FromId_5)); }
	inline String_t* get_FromId_5() const { return ___FromId_5; }
	inline String_t** get_address_of_FromId_5() { return &___FromId_5; }
	inline void set_FromId_5(String_t* value)
	{
		___FromId_5 = value;
		Il2CppCodeGenWriteBarrier(&___FromId_5, value);
	}

	inline static int32_t get_offset_of_FromName_6() { return static_cast<int32_t>(offsetof(FB_AppRequest_t501312625, ___FromName_6)); }
	inline String_t* get_FromName_6() const { return ___FromName_6; }
	inline String_t** get_address_of_FromName_6() { return &___FromName_6; }
	inline void set_FromName_6(String_t* value)
	{
		___FromName_6 = value;
		Il2CppCodeGenWriteBarrier(&___FromName_6, value);
	}

	inline static int32_t get_offset_of_CreatedTime_7() { return static_cast<int32_t>(offsetof(FB_AppRequest_t501312625, ___CreatedTime_7)); }
	inline DateTime_t693205669  get_CreatedTime_7() const { return ___CreatedTime_7; }
	inline DateTime_t693205669 * get_address_of_CreatedTime_7() { return &___CreatedTime_7; }
	inline void set_CreatedTime_7(DateTime_t693205669  value)
	{
		___CreatedTime_7 = value;
	}

	inline static int32_t get_offset_of_CreatedTimeString_8() { return static_cast<int32_t>(offsetof(FB_AppRequest_t501312625, ___CreatedTimeString_8)); }
	inline String_t* get_CreatedTimeString_8() const { return ___CreatedTimeString_8; }
	inline String_t** get_address_of_CreatedTimeString_8() { return &___CreatedTimeString_8; }
	inline void set_CreatedTimeString_8(String_t* value)
	{
		___CreatedTimeString_8 = value;
		Il2CppCodeGenWriteBarrier(&___CreatedTimeString_8, value);
	}

	inline static int32_t get_offset_of_Data_9() { return static_cast<int32_t>(offsetof(FB_AppRequest_t501312625, ___Data_9)); }
	inline String_t* get_Data_9() const { return ___Data_9; }
	inline String_t** get_address_of_Data_9() { return &___Data_9; }
	inline void set_Data_9(String_t* value)
	{
		___Data_9 = value;
		Il2CppCodeGenWriteBarrier(&___Data_9, value);
	}

	inline static int32_t get_offset_of_Object_10() { return static_cast<int32_t>(offsetof(FB_AppRequest_t501312625, ___Object_10)); }
	inline FB_Object_t1438399806 * get_Object_10() const { return ___Object_10; }
	inline FB_Object_t1438399806 ** get_address_of_Object_10() { return &___Object_10; }
	inline void set_Object_10(FB_Object_t1438399806 * value)
	{
		___Object_10 = value;
		Il2CppCodeGenWriteBarrier(&___Object_10, value);
	}

	inline static int32_t get_offset_of_OnDeleteRequestFinished_11() { return static_cast<int32_t>(offsetof(FB_AppRequest_t501312625, ___OnDeleteRequestFinished_11)); }
	inline Action_1_t640047754 * get_OnDeleteRequestFinished_11() const { return ___OnDeleteRequestFinished_11; }
	inline Action_1_t640047754 ** get_address_of_OnDeleteRequestFinished_11() { return &___OnDeleteRequestFinished_11; }
	inline void set_OnDeleteRequestFinished_11(Action_1_t640047754 * value)
	{
		___OnDeleteRequestFinished_11 = value;
		Il2CppCodeGenWriteBarrier(&___OnDeleteRequestFinished_11, value);
	}
};

struct FB_AppRequest_t501312625_StaticFields
{
public:
	// System.Action`1<FB_Result> FB_AppRequest::<>f__am$cache0
	Action_1_t640047754 * ___U3CU3Ef__amU24cache0_12;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_12() { return static_cast<int32_t>(offsetof(FB_AppRequest_t501312625_StaticFields, ___U3CU3Ef__amU24cache0_12)); }
	inline Action_1_t640047754 * get_U3CU3Ef__amU24cache0_12() const { return ___U3CU3Ef__amU24cache0_12; }
	inline Action_1_t640047754 ** get_address_of_U3CU3Ef__amU24cache0_12() { return &___U3CU3Ef__amU24cache0_12; }
	inline void set_U3CU3Ef__amU24cache0_12(Action_1_t640047754 * value)
	{
		___U3CU3Ef__amU24cache0_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
