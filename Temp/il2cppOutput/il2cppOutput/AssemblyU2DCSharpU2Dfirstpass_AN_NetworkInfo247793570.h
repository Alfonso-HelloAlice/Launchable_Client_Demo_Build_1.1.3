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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AN_NetworkInfo
struct  AN_NetworkInfo_t247793570  : public Il2CppObject
{
public:
	// System.String AN_NetworkInfo::IpAddress
	String_t* ___IpAddress_0;
	// System.String AN_NetworkInfo::MacAddress
	String_t* ___MacAddress_1;
	// System.String AN_NetworkInfo::SubnetMask
	String_t* ___SubnetMask_2;
	// System.String AN_NetworkInfo::SSID
	String_t* ___SSID_3;
	// System.String AN_NetworkInfo::BSSID
	String_t* ___BSSID_4;
	// System.Int32 AN_NetworkInfo::LinkSpeed
	int32_t ___LinkSpeed_5;
	// System.Int32 AN_NetworkInfo::NetworkId
	int32_t ___NetworkId_6;

public:
	inline static int32_t get_offset_of_IpAddress_0() { return static_cast<int32_t>(offsetof(AN_NetworkInfo_t247793570, ___IpAddress_0)); }
	inline String_t* get_IpAddress_0() const { return ___IpAddress_0; }
	inline String_t** get_address_of_IpAddress_0() { return &___IpAddress_0; }
	inline void set_IpAddress_0(String_t* value)
	{
		___IpAddress_0 = value;
		Il2CppCodeGenWriteBarrier(&___IpAddress_0, value);
	}

	inline static int32_t get_offset_of_MacAddress_1() { return static_cast<int32_t>(offsetof(AN_NetworkInfo_t247793570, ___MacAddress_1)); }
	inline String_t* get_MacAddress_1() const { return ___MacAddress_1; }
	inline String_t** get_address_of_MacAddress_1() { return &___MacAddress_1; }
	inline void set_MacAddress_1(String_t* value)
	{
		___MacAddress_1 = value;
		Il2CppCodeGenWriteBarrier(&___MacAddress_1, value);
	}

	inline static int32_t get_offset_of_SubnetMask_2() { return static_cast<int32_t>(offsetof(AN_NetworkInfo_t247793570, ___SubnetMask_2)); }
	inline String_t* get_SubnetMask_2() const { return ___SubnetMask_2; }
	inline String_t** get_address_of_SubnetMask_2() { return &___SubnetMask_2; }
	inline void set_SubnetMask_2(String_t* value)
	{
		___SubnetMask_2 = value;
		Il2CppCodeGenWriteBarrier(&___SubnetMask_2, value);
	}

	inline static int32_t get_offset_of_SSID_3() { return static_cast<int32_t>(offsetof(AN_NetworkInfo_t247793570, ___SSID_3)); }
	inline String_t* get_SSID_3() const { return ___SSID_3; }
	inline String_t** get_address_of_SSID_3() { return &___SSID_3; }
	inline void set_SSID_3(String_t* value)
	{
		___SSID_3 = value;
		Il2CppCodeGenWriteBarrier(&___SSID_3, value);
	}

	inline static int32_t get_offset_of_BSSID_4() { return static_cast<int32_t>(offsetof(AN_NetworkInfo_t247793570, ___BSSID_4)); }
	inline String_t* get_BSSID_4() const { return ___BSSID_4; }
	inline String_t** get_address_of_BSSID_4() { return &___BSSID_4; }
	inline void set_BSSID_4(String_t* value)
	{
		___BSSID_4 = value;
		Il2CppCodeGenWriteBarrier(&___BSSID_4, value);
	}

	inline static int32_t get_offset_of_LinkSpeed_5() { return static_cast<int32_t>(offsetof(AN_NetworkInfo_t247793570, ___LinkSpeed_5)); }
	inline int32_t get_LinkSpeed_5() const { return ___LinkSpeed_5; }
	inline int32_t* get_address_of_LinkSpeed_5() { return &___LinkSpeed_5; }
	inline void set_LinkSpeed_5(int32_t value)
	{
		___LinkSpeed_5 = value;
	}

	inline static int32_t get_offset_of_NetworkId_6() { return static_cast<int32_t>(offsetof(AN_NetworkInfo_t247793570, ___NetworkId_6)); }
	inline int32_t get_NetworkId_6() const { return ___NetworkId_6; }
	inline int32_t* get_address_of_NetworkId_6() { return &___NetworkId_6; }
	inline void set_NetworkId_6(int32_t value)
	{
		___NetworkId_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
