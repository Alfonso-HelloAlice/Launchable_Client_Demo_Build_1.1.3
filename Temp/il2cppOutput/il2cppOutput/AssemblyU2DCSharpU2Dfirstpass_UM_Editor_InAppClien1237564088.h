#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_UM_BaseInAppClient739551207.h"

// UM_InAppProduct
struct UM_InAppProduct_t2355913522;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UM_Editor_InAppClient
struct  UM_Editor_InAppClient_t1237564088  : public UM_BaseInAppClient_t739551207
{
public:
	// System.Single UM_Editor_InAppClient::_RequestsSuccessRate
	float ____RequestsSuccessRate_7;
	// UM_InAppProduct UM_Editor_InAppClient::_CurrentProduct
	UM_InAppProduct_t2355913522 * ____CurrentProduct_8;

public:
	inline static int32_t get_offset_of__RequestsSuccessRate_7() { return static_cast<int32_t>(offsetof(UM_Editor_InAppClient_t1237564088, ____RequestsSuccessRate_7)); }
	inline float get__RequestsSuccessRate_7() const { return ____RequestsSuccessRate_7; }
	inline float* get_address_of__RequestsSuccessRate_7() { return &____RequestsSuccessRate_7; }
	inline void set__RequestsSuccessRate_7(float value)
	{
		____RequestsSuccessRate_7 = value;
	}

	inline static int32_t get_offset_of__CurrentProduct_8() { return static_cast<int32_t>(offsetof(UM_Editor_InAppClient_t1237564088, ____CurrentProduct_8)); }
	inline UM_InAppProduct_t2355913522 * get__CurrentProduct_8() const { return ____CurrentProduct_8; }
	inline UM_InAppProduct_t2355913522 ** get_address_of__CurrentProduct_8() { return &____CurrentProduct_8; }
	inline void set__CurrentProduct_8(UM_InAppProduct_t2355913522 * value)
	{
		____CurrentProduct_8 = value;
		Il2CppCodeGenWriteBarrier(&____CurrentProduct_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
