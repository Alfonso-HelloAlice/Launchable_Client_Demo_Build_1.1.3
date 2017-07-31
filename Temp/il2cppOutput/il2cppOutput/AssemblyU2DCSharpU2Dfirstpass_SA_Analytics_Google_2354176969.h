#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SA_Analytics_Google_1768509661.h"

// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Analytics.Google.Client
struct  Client_t2354176969  : public Il2CppObject
{
public:
	// System.String SA.Analytics.Google.Client::TrackingID
	String_t* ___TrackingID_3;
	// System.String SA.Analytics.Google.Client::ClientID
	String_t* ___ClientID_4;
	// System.String SA.Analytics.Google.Client::AppName
	String_t* ___AppName_5;
	// System.String SA.Analytics.Google.Client::AppVersion
	String_t* ___AppVersion_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> SA.Analytics.Google.Client::Headers
	Dictionary_2_t3943999495 * ___Headers_7;
	// System.String SA.Analytics.Google.Client::DefaultHitData
	String_t* ___DefaultHitData_8;
	// System.Text.StringBuilder SA.Analytics.Google.Client::builder
	StringBuilder_t1221177846 * ___builder_9;
	// SA.Analytics.Google.HitType SA.Analytics.Google.Client::currentHitType
	int32_t ___currentHitType_10;
	// System.String SA.Analytics.Google.Client::DataSendUrl
	String_t* ___DataSendUrl_11;
	// System.String SA.Analytics.Google.Client::lastScreenName
	String_t* ___lastScreenName_12;
	// System.String SA.Analytics.Google.Client::userId
	String_t* ___userId_13;

public:
	inline static int32_t get_offset_of_TrackingID_3() { return static_cast<int32_t>(offsetof(Client_t2354176969, ___TrackingID_3)); }
	inline String_t* get_TrackingID_3() const { return ___TrackingID_3; }
	inline String_t** get_address_of_TrackingID_3() { return &___TrackingID_3; }
	inline void set_TrackingID_3(String_t* value)
	{
		___TrackingID_3 = value;
		Il2CppCodeGenWriteBarrier(&___TrackingID_3, value);
	}

	inline static int32_t get_offset_of_ClientID_4() { return static_cast<int32_t>(offsetof(Client_t2354176969, ___ClientID_4)); }
	inline String_t* get_ClientID_4() const { return ___ClientID_4; }
	inline String_t** get_address_of_ClientID_4() { return &___ClientID_4; }
	inline void set_ClientID_4(String_t* value)
	{
		___ClientID_4 = value;
		Il2CppCodeGenWriteBarrier(&___ClientID_4, value);
	}

	inline static int32_t get_offset_of_AppName_5() { return static_cast<int32_t>(offsetof(Client_t2354176969, ___AppName_5)); }
	inline String_t* get_AppName_5() const { return ___AppName_5; }
	inline String_t** get_address_of_AppName_5() { return &___AppName_5; }
	inline void set_AppName_5(String_t* value)
	{
		___AppName_5 = value;
		Il2CppCodeGenWriteBarrier(&___AppName_5, value);
	}

	inline static int32_t get_offset_of_AppVersion_6() { return static_cast<int32_t>(offsetof(Client_t2354176969, ___AppVersion_6)); }
	inline String_t* get_AppVersion_6() const { return ___AppVersion_6; }
	inline String_t** get_address_of_AppVersion_6() { return &___AppVersion_6; }
	inline void set_AppVersion_6(String_t* value)
	{
		___AppVersion_6 = value;
		Il2CppCodeGenWriteBarrier(&___AppVersion_6, value);
	}

	inline static int32_t get_offset_of_Headers_7() { return static_cast<int32_t>(offsetof(Client_t2354176969, ___Headers_7)); }
	inline Dictionary_2_t3943999495 * get_Headers_7() const { return ___Headers_7; }
	inline Dictionary_2_t3943999495 ** get_address_of_Headers_7() { return &___Headers_7; }
	inline void set_Headers_7(Dictionary_2_t3943999495 * value)
	{
		___Headers_7 = value;
		Il2CppCodeGenWriteBarrier(&___Headers_7, value);
	}

	inline static int32_t get_offset_of_DefaultHitData_8() { return static_cast<int32_t>(offsetof(Client_t2354176969, ___DefaultHitData_8)); }
	inline String_t* get_DefaultHitData_8() const { return ___DefaultHitData_8; }
	inline String_t** get_address_of_DefaultHitData_8() { return &___DefaultHitData_8; }
	inline void set_DefaultHitData_8(String_t* value)
	{
		___DefaultHitData_8 = value;
		Il2CppCodeGenWriteBarrier(&___DefaultHitData_8, value);
	}

	inline static int32_t get_offset_of_builder_9() { return static_cast<int32_t>(offsetof(Client_t2354176969, ___builder_9)); }
	inline StringBuilder_t1221177846 * get_builder_9() const { return ___builder_9; }
	inline StringBuilder_t1221177846 ** get_address_of_builder_9() { return &___builder_9; }
	inline void set_builder_9(StringBuilder_t1221177846 * value)
	{
		___builder_9 = value;
		Il2CppCodeGenWriteBarrier(&___builder_9, value);
	}

	inline static int32_t get_offset_of_currentHitType_10() { return static_cast<int32_t>(offsetof(Client_t2354176969, ___currentHitType_10)); }
	inline int32_t get_currentHitType_10() const { return ___currentHitType_10; }
	inline int32_t* get_address_of_currentHitType_10() { return &___currentHitType_10; }
	inline void set_currentHitType_10(int32_t value)
	{
		___currentHitType_10 = value;
	}

	inline static int32_t get_offset_of_DataSendUrl_11() { return static_cast<int32_t>(offsetof(Client_t2354176969, ___DataSendUrl_11)); }
	inline String_t* get_DataSendUrl_11() const { return ___DataSendUrl_11; }
	inline String_t** get_address_of_DataSendUrl_11() { return &___DataSendUrl_11; }
	inline void set_DataSendUrl_11(String_t* value)
	{
		___DataSendUrl_11 = value;
		Il2CppCodeGenWriteBarrier(&___DataSendUrl_11, value);
	}

	inline static int32_t get_offset_of_lastScreenName_12() { return static_cast<int32_t>(offsetof(Client_t2354176969, ___lastScreenName_12)); }
	inline String_t* get_lastScreenName_12() const { return ___lastScreenName_12; }
	inline String_t** get_address_of_lastScreenName_12() { return &___lastScreenName_12; }
	inline void set_lastScreenName_12(String_t* value)
	{
		___lastScreenName_12 = value;
		Il2CppCodeGenWriteBarrier(&___lastScreenName_12, value);
	}

	inline static int32_t get_offset_of_userId_13() { return static_cast<int32_t>(offsetof(Client_t2354176969, ___userId_13)); }
	inline String_t* get_userId_13() const { return ___userId_13; }
	inline String_t** get_address_of_userId_13() { return &___userId_13; }
	inline void set_userId_13(String_t* value)
	{
		___userId_13 = value;
		Il2CppCodeGenWriteBarrier(&___userId_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
