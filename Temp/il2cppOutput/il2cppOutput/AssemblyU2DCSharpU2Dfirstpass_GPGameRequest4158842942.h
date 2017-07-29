#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_GPGameRequestType1088795774.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GPGameRequest
struct  GPGameRequest_t4158842942  : public Il2CppObject
{
public:
	// System.String GPGameRequest::id
	String_t* ___id_0;
	// System.String GPGameRequest::playload
	String_t* ___playload_1;
	// System.Int64 GPGameRequest::expirationTimestamp
	int64_t ___expirationTimestamp_2;
	// System.Int64 GPGameRequest::creationTimestamp
	int64_t ___creationTimestamp_3;
	// System.String GPGameRequest::sender
	String_t* ___sender_4;
	// GPGameRequestType GPGameRequest::type
	int32_t ___type_5;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(GPGameRequest_t4158842942, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier(&___id_0, value);
	}

	inline static int32_t get_offset_of_playload_1() { return static_cast<int32_t>(offsetof(GPGameRequest_t4158842942, ___playload_1)); }
	inline String_t* get_playload_1() const { return ___playload_1; }
	inline String_t** get_address_of_playload_1() { return &___playload_1; }
	inline void set_playload_1(String_t* value)
	{
		___playload_1 = value;
		Il2CppCodeGenWriteBarrier(&___playload_1, value);
	}

	inline static int32_t get_offset_of_expirationTimestamp_2() { return static_cast<int32_t>(offsetof(GPGameRequest_t4158842942, ___expirationTimestamp_2)); }
	inline int64_t get_expirationTimestamp_2() const { return ___expirationTimestamp_2; }
	inline int64_t* get_address_of_expirationTimestamp_2() { return &___expirationTimestamp_2; }
	inline void set_expirationTimestamp_2(int64_t value)
	{
		___expirationTimestamp_2 = value;
	}

	inline static int32_t get_offset_of_creationTimestamp_3() { return static_cast<int32_t>(offsetof(GPGameRequest_t4158842942, ___creationTimestamp_3)); }
	inline int64_t get_creationTimestamp_3() const { return ___creationTimestamp_3; }
	inline int64_t* get_address_of_creationTimestamp_3() { return &___creationTimestamp_3; }
	inline void set_creationTimestamp_3(int64_t value)
	{
		___creationTimestamp_3 = value;
	}

	inline static int32_t get_offset_of_sender_4() { return static_cast<int32_t>(offsetof(GPGameRequest_t4158842942, ___sender_4)); }
	inline String_t* get_sender_4() const { return ___sender_4; }
	inline String_t** get_address_of_sender_4() { return &___sender_4; }
	inline void set_sender_4(String_t* value)
	{
		___sender_4 = value;
		Il2CppCodeGenWriteBarrier(&___sender_4, value);
	}

	inline static int32_t get_offset_of_type_5() { return static_cast<int32_t>(offsetof(GPGameRequest_t4158842942, ___type_5)); }
	inline int32_t get_type_5() const { return ___type_5; }
	inline int32_t* get_address_of_type_5() { return &___type_5; }
	inline void set_type_5(int32_t value)
	{
		___type_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
