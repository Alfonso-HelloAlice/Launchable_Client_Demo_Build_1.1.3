#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SA_Fitness_DataSourc4117739551.h"

// SA.Fitness.DataType
struct DataType_t1476354918;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Fitness.DataSource
struct  DataSource_t3505950919  : public Il2CppObject
{
public:
	// SA.Fitness.DataType SA.Fitness.DataSource::dataType
	DataType_t1476354918 * ___dataType_0;
	// SA.Fitness.DataSourceType SA.Fitness.DataSource::dataSourceType
	int32_t ___dataSourceType_1;
	// System.String SA.Fitness.DataSource::appPackageName
	String_t* ___appPackageName_2;
	// System.String SA.Fitness.DataSource::device
	String_t* ___device_3;
	// System.String SA.Fitness.DataSource::name
	String_t* ___name_4;
	// System.String SA.Fitness.DataSource::streamId
	String_t* ___streamId_5;
	// System.String SA.Fitness.DataSource::streamName
	String_t* ___streamName_6;

public:
	inline static int32_t get_offset_of_dataType_0() { return static_cast<int32_t>(offsetof(DataSource_t3505950919, ___dataType_0)); }
	inline DataType_t1476354918 * get_dataType_0() const { return ___dataType_0; }
	inline DataType_t1476354918 ** get_address_of_dataType_0() { return &___dataType_0; }
	inline void set_dataType_0(DataType_t1476354918 * value)
	{
		___dataType_0 = value;
		Il2CppCodeGenWriteBarrier(&___dataType_0, value);
	}

	inline static int32_t get_offset_of_dataSourceType_1() { return static_cast<int32_t>(offsetof(DataSource_t3505950919, ___dataSourceType_1)); }
	inline int32_t get_dataSourceType_1() const { return ___dataSourceType_1; }
	inline int32_t* get_address_of_dataSourceType_1() { return &___dataSourceType_1; }
	inline void set_dataSourceType_1(int32_t value)
	{
		___dataSourceType_1 = value;
	}

	inline static int32_t get_offset_of_appPackageName_2() { return static_cast<int32_t>(offsetof(DataSource_t3505950919, ___appPackageName_2)); }
	inline String_t* get_appPackageName_2() const { return ___appPackageName_2; }
	inline String_t** get_address_of_appPackageName_2() { return &___appPackageName_2; }
	inline void set_appPackageName_2(String_t* value)
	{
		___appPackageName_2 = value;
		Il2CppCodeGenWriteBarrier(&___appPackageName_2, value);
	}

	inline static int32_t get_offset_of_device_3() { return static_cast<int32_t>(offsetof(DataSource_t3505950919, ___device_3)); }
	inline String_t* get_device_3() const { return ___device_3; }
	inline String_t** get_address_of_device_3() { return &___device_3; }
	inline void set_device_3(String_t* value)
	{
		___device_3 = value;
		Il2CppCodeGenWriteBarrier(&___device_3, value);
	}

	inline static int32_t get_offset_of_name_4() { return static_cast<int32_t>(offsetof(DataSource_t3505950919, ___name_4)); }
	inline String_t* get_name_4() const { return ___name_4; }
	inline String_t** get_address_of_name_4() { return &___name_4; }
	inline void set_name_4(String_t* value)
	{
		___name_4 = value;
		Il2CppCodeGenWriteBarrier(&___name_4, value);
	}

	inline static int32_t get_offset_of_streamId_5() { return static_cast<int32_t>(offsetof(DataSource_t3505950919, ___streamId_5)); }
	inline String_t* get_streamId_5() const { return ___streamId_5; }
	inline String_t** get_address_of_streamId_5() { return &___streamId_5; }
	inline void set_streamId_5(String_t* value)
	{
		___streamId_5 = value;
		Il2CppCodeGenWriteBarrier(&___streamId_5, value);
	}

	inline static int32_t get_offset_of_streamName_6() { return static_cast<int32_t>(offsetof(DataSource_t3505950919, ___streamName_6)); }
	inline String_t* get_streamName_6() const { return ___streamName_6; }
	inline String_t** get_address_of_streamName_6() { return &___streamName_6; }
	inline void set_streamName_6(String_t* value)
	{
		___streamName_6 = value;
		Il2CppCodeGenWriteBarrier(&___streamName_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
