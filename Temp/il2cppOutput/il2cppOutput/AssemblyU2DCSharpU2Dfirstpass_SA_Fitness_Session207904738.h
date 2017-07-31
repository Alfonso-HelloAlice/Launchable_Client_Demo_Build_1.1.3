#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// SA.Fitness.Activity
struct Activity_t2329090511;
// System.Collections.Generic.List`1<SA.Fitness.DataSet>
struct List_1_t3888316170;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Fitness.Session
struct  Session_t207904738  : public Il2CppObject
{
public:
	// System.String SA.Fitness.Session::Id
	String_t* ___Id_0;
	// System.Int64 SA.Fitness.Session::StartTime
	int64_t ___StartTime_1;
	// System.Int64 SA.Fitness.Session::EndTime
	int64_t ___EndTime_2;
	// System.String SA.Fitness.Session::Name
	String_t* ___Name_3;
	// System.String SA.Fitness.Session::Description
	String_t* ___Description_4;
	// System.String SA.Fitness.Session::AppPackageName
	String_t* ___AppPackageName_5;
	// SA.Fitness.Activity SA.Fitness.Session::Activity
	Activity_t2329090511 * ___Activity_6;
	// System.Collections.Generic.List`1<SA.Fitness.DataSet> SA.Fitness.Session::dataSets
	List_1_t3888316170 * ___dataSets_7;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(Session_t207904738, ___Id_0)); }
	inline String_t* get_Id_0() const { return ___Id_0; }
	inline String_t** get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(String_t* value)
	{
		___Id_0 = value;
		Il2CppCodeGenWriteBarrier(&___Id_0, value);
	}

	inline static int32_t get_offset_of_StartTime_1() { return static_cast<int32_t>(offsetof(Session_t207904738, ___StartTime_1)); }
	inline int64_t get_StartTime_1() const { return ___StartTime_1; }
	inline int64_t* get_address_of_StartTime_1() { return &___StartTime_1; }
	inline void set_StartTime_1(int64_t value)
	{
		___StartTime_1 = value;
	}

	inline static int32_t get_offset_of_EndTime_2() { return static_cast<int32_t>(offsetof(Session_t207904738, ___EndTime_2)); }
	inline int64_t get_EndTime_2() const { return ___EndTime_2; }
	inline int64_t* get_address_of_EndTime_2() { return &___EndTime_2; }
	inline void set_EndTime_2(int64_t value)
	{
		___EndTime_2 = value;
	}

	inline static int32_t get_offset_of_Name_3() { return static_cast<int32_t>(offsetof(Session_t207904738, ___Name_3)); }
	inline String_t* get_Name_3() const { return ___Name_3; }
	inline String_t** get_address_of_Name_3() { return &___Name_3; }
	inline void set_Name_3(String_t* value)
	{
		___Name_3 = value;
		Il2CppCodeGenWriteBarrier(&___Name_3, value);
	}

	inline static int32_t get_offset_of_Description_4() { return static_cast<int32_t>(offsetof(Session_t207904738, ___Description_4)); }
	inline String_t* get_Description_4() const { return ___Description_4; }
	inline String_t** get_address_of_Description_4() { return &___Description_4; }
	inline void set_Description_4(String_t* value)
	{
		___Description_4 = value;
		Il2CppCodeGenWriteBarrier(&___Description_4, value);
	}

	inline static int32_t get_offset_of_AppPackageName_5() { return static_cast<int32_t>(offsetof(Session_t207904738, ___AppPackageName_5)); }
	inline String_t* get_AppPackageName_5() const { return ___AppPackageName_5; }
	inline String_t** get_address_of_AppPackageName_5() { return &___AppPackageName_5; }
	inline void set_AppPackageName_5(String_t* value)
	{
		___AppPackageName_5 = value;
		Il2CppCodeGenWriteBarrier(&___AppPackageName_5, value);
	}

	inline static int32_t get_offset_of_Activity_6() { return static_cast<int32_t>(offsetof(Session_t207904738, ___Activity_6)); }
	inline Activity_t2329090511 * get_Activity_6() const { return ___Activity_6; }
	inline Activity_t2329090511 ** get_address_of_Activity_6() { return &___Activity_6; }
	inline void set_Activity_6(Activity_t2329090511 * value)
	{
		___Activity_6 = value;
		Il2CppCodeGenWriteBarrier(&___Activity_6, value);
	}

	inline static int32_t get_offset_of_dataSets_7() { return static_cast<int32_t>(offsetof(Session_t207904738, ___dataSets_7)); }
	inline List_1_t3888316170 * get_dataSets_7() const { return ___dataSets_7; }
	inline List_1_t3888316170 ** get_address_of_dataSets_7() { return &___dataSets_7; }
	inline void set_dataSets_7(List_1_t3888316170 * value)
	{
		___dataSets_7 = value;
		Il2CppCodeGenWriteBarrier(&___dataSets_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
