#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ISN_InterfaceIdiom3178386526.h"

// ISN_Device
struct ISN_Device_t2325020285;
// System.String
struct String_t;
// ISN_DeviceGUID
struct ISN_DeviceGUID_t1787531836;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ISN_Device
struct  ISN_Device_t2325020285  : public Il2CppObject
{
public:
	// System.String ISN_Device::_Name
	String_t* ____Name_1;
	// System.String ISN_Device::_SystemName
	String_t* ____SystemName_2;
	// System.String ISN_Device::_Model
	String_t* ____Model_3;
	// System.String ISN_Device::_LocalizedModel
	String_t* ____LocalizedModel_4;
	// System.String ISN_Device::_SystemVersion
	String_t* ____SystemVersion_5;
	// System.Int32 ISN_Device::_MajorSystemVersion
	int32_t ____MajorSystemVersion_6;
	// System.String ISN_Device::_PreferredLanguage_ISO639_1
	String_t* ____PreferredLanguage_ISO639_1_7;
	// ISN_InterfaceIdiom ISN_Device::_InterfaceIdiom
	int32_t ____InterfaceIdiom_8;
	// ISN_DeviceGUID ISN_Device::_GUID
	ISN_DeviceGUID_t1787531836 * ____GUID_9;

public:
	inline static int32_t get_offset_of__Name_1() { return static_cast<int32_t>(offsetof(ISN_Device_t2325020285, ____Name_1)); }
	inline String_t* get__Name_1() const { return ____Name_1; }
	inline String_t** get_address_of__Name_1() { return &____Name_1; }
	inline void set__Name_1(String_t* value)
	{
		____Name_1 = value;
		Il2CppCodeGenWriteBarrier(&____Name_1, value);
	}

	inline static int32_t get_offset_of__SystemName_2() { return static_cast<int32_t>(offsetof(ISN_Device_t2325020285, ____SystemName_2)); }
	inline String_t* get__SystemName_2() const { return ____SystemName_2; }
	inline String_t** get_address_of__SystemName_2() { return &____SystemName_2; }
	inline void set__SystemName_2(String_t* value)
	{
		____SystemName_2 = value;
		Il2CppCodeGenWriteBarrier(&____SystemName_2, value);
	}

	inline static int32_t get_offset_of__Model_3() { return static_cast<int32_t>(offsetof(ISN_Device_t2325020285, ____Model_3)); }
	inline String_t* get__Model_3() const { return ____Model_3; }
	inline String_t** get_address_of__Model_3() { return &____Model_3; }
	inline void set__Model_3(String_t* value)
	{
		____Model_3 = value;
		Il2CppCodeGenWriteBarrier(&____Model_3, value);
	}

	inline static int32_t get_offset_of__LocalizedModel_4() { return static_cast<int32_t>(offsetof(ISN_Device_t2325020285, ____LocalizedModel_4)); }
	inline String_t* get__LocalizedModel_4() const { return ____LocalizedModel_4; }
	inline String_t** get_address_of__LocalizedModel_4() { return &____LocalizedModel_4; }
	inline void set__LocalizedModel_4(String_t* value)
	{
		____LocalizedModel_4 = value;
		Il2CppCodeGenWriteBarrier(&____LocalizedModel_4, value);
	}

	inline static int32_t get_offset_of__SystemVersion_5() { return static_cast<int32_t>(offsetof(ISN_Device_t2325020285, ____SystemVersion_5)); }
	inline String_t* get__SystemVersion_5() const { return ____SystemVersion_5; }
	inline String_t** get_address_of__SystemVersion_5() { return &____SystemVersion_5; }
	inline void set__SystemVersion_5(String_t* value)
	{
		____SystemVersion_5 = value;
		Il2CppCodeGenWriteBarrier(&____SystemVersion_5, value);
	}

	inline static int32_t get_offset_of__MajorSystemVersion_6() { return static_cast<int32_t>(offsetof(ISN_Device_t2325020285, ____MajorSystemVersion_6)); }
	inline int32_t get__MajorSystemVersion_6() const { return ____MajorSystemVersion_6; }
	inline int32_t* get_address_of__MajorSystemVersion_6() { return &____MajorSystemVersion_6; }
	inline void set__MajorSystemVersion_6(int32_t value)
	{
		____MajorSystemVersion_6 = value;
	}

	inline static int32_t get_offset_of__PreferredLanguage_ISO639_1_7() { return static_cast<int32_t>(offsetof(ISN_Device_t2325020285, ____PreferredLanguage_ISO639_1_7)); }
	inline String_t* get__PreferredLanguage_ISO639_1_7() const { return ____PreferredLanguage_ISO639_1_7; }
	inline String_t** get_address_of__PreferredLanguage_ISO639_1_7() { return &____PreferredLanguage_ISO639_1_7; }
	inline void set__PreferredLanguage_ISO639_1_7(String_t* value)
	{
		____PreferredLanguage_ISO639_1_7 = value;
		Il2CppCodeGenWriteBarrier(&____PreferredLanguage_ISO639_1_7, value);
	}

	inline static int32_t get_offset_of__InterfaceIdiom_8() { return static_cast<int32_t>(offsetof(ISN_Device_t2325020285, ____InterfaceIdiom_8)); }
	inline int32_t get__InterfaceIdiom_8() const { return ____InterfaceIdiom_8; }
	inline int32_t* get_address_of__InterfaceIdiom_8() { return &____InterfaceIdiom_8; }
	inline void set__InterfaceIdiom_8(int32_t value)
	{
		____InterfaceIdiom_8 = value;
	}

	inline static int32_t get_offset_of__GUID_9() { return static_cast<int32_t>(offsetof(ISN_Device_t2325020285, ____GUID_9)); }
	inline ISN_DeviceGUID_t1787531836 * get__GUID_9() const { return ____GUID_9; }
	inline ISN_DeviceGUID_t1787531836 ** get_address_of__GUID_9() { return &____GUID_9; }
	inline void set__GUID_9(ISN_DeviceGUID_t1787531836 * value)
	{
		____GUID_9 = value;
		Il2CppCodeGenWriteBarrier(&____GUID_9, value);
	}
};

struct ISN_Device_t2325020285_StaticFields
{
public:
	// ISN_Device ISN_Device::_CurrentDevice
	ISN_Device_t2325020285 * ____CurrentDevice_0;

public:
	inline static int32_t get_offset_of__CurrentDevice_0() { return static_cast<int32_t>(offsetof(ISN_Device_t2325020285_StaticFields, ____CurrentDevice_0)); }
	inline ISN_Device_t2325020285 * get__CurrentDevice_0() const { return ____CurrentDevice_0; }
	inline ISN_Device_t2325020285 ** get_address_of__CurrentDevice_0() { return &____CurrentDevice_0; }
	inline void set__CurrentDevice_0(ISN_Device_t2325020285 * value)
	{
		____CurrentDevice_0 = value;
		Il2CppCodeGenWriteBarrier(&____CurrentDevice_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
