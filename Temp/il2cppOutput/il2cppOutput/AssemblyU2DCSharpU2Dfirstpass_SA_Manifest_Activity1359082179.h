#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Manifest_BaseTemp3675092023.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.Manifest.ActivityTemplate
struct  ActivityTemplate_t1359082179  : public BaseTemplate_t3675092023
{
public:
	// System.Boolean SA.Manifest.ActivityTemplate::IsOpen
	bool ___IsOpen_2;
	// System.Int32 SA.Manifest.ActivityTemplate::_id
	int32_t ____id_3;
	// System.Boolean SA.Manifest.ActivityTemplate::_isLauncher
	bool ____isLauncher_4;
	// System.String SA.Manifest.ActivityTemplate::_name
	String_t* ____name_5;

public:
	inline static int32_t get_offset_of_IsOpen_2() { return static_cast<int32_t>(offsetof(ActivityTemplate_t1359082179, ___IsOpen_2)); }
	inline bool get_IsOpen_2() const { return ___IsOpen_2; }
	inline bool* get_address_of_IsOpen_2() { return &___IsOpen_2; }
	inline void set_IsOpen_2(bool value)
	{
		___IsOpen_2 = value;
	}

	inline static int32_t get_offset_of__id_3() { return static_cast<int32_t>(offsetof(ActivityTemplate_t1359082179, ____id_3)); }
	inline int32_t get__id_3() const { return ____id_3; }
	inline int32_t* get_address_of__id_3() { return &____id_3; }
	inline void set__id_3(int32_t value)
	{
		____id_3 = value;
	}

	inline static int32_t get_offset_of__isLauncher_4() { return static_cast<int32_t>(offsetof(ActivityTemplate_t1359082179, ____isLauncher_4)); }
	inline bool get__isLauncher_4() const { return ____isLauncher_4; }
	inline bool* get_address_of__isLauncher_4() { return &____isLauncher_4; }
	inline void set__isLauncher_4(bool value)
	{
		____isLauncher_4 = value;
	}

	inline static int32_t get_offset_of__name_5() { return static_cast<int32_t>(offsetof(ActivityTemplate_t1359082179, ____name_5)); }
	inline String_t* get__name_5() const { return ____name_5; }
	inline String_t** get_address_of__name_5() { return &____name_5; }
	inline void set__name_5(String_t* value)
	{
		____name_5 = value;
		Il2CppCodeGenWriteBarrier(&____name_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
