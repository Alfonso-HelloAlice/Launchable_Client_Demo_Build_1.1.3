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

// GP_AppInvite
struct  GP_AppInvite_t1121244750  : public Il2CppObject
{
public:
	// System.String GP_AppInvite::_Id
	String_t* ____Id_0;
	// System.String GP_AppInvite::_DeepLink
	String_t* ____DeepLink_1;
	// System.Boolean GP_AppInvite::_IsOpenedFromPlayStore
	bool ____IsOpenedFromPlayStore_2;

public:
	inline static int32_t get_offset_of__Id_0() { return static_cast<int32_t>(offsetof(GP_AppInvite_t1121244750, ____Id_0)); }
	inline String_t* get__Id_0() const { return ____Id_0; }
	inline String_t** get_address_of__Id_0() { return &____Id_0; }
	inline void set__Id_0(String_t* value)
	{
		____Id_0 = value;
		Il2CppCodeGenWriteBarrier(&____Id_0, value);
	}

	inline static int32_t get_offset_of__DeepLink_1() { return static_cast<int32_t>(offsetof(GP_AppInvite_t1121244750, ____DeepLink_1)); }
	inline String_t* get__DeepLink_1() const { return ____DeepLink_1; }
	inline String_t** get_address_of__DeepLink_1() { return &____DeepLink_1; }
	inline void set__DeepLink_1(String_t* value)
	{
		____DeepLink_1 = value;
		Il2CppCodeGenWriteBarrier(&____DeepLink_1, value);
	}

	inline static int32_t get_offset_of__IsOpenedFromPlayStore_2() { return static_cast<int32_t>(offsetof(GP_AppInvite_t1121244750, ____IsOpenedFromPlayStore_2)); }
	inline bool get__IsOpenedFromPlayStore_2() const { return ____IsOpenedFromPlayStore_2; }
	inline bool* get_address_of__IsOpenedFromPlayStore_2() { return &____IsOpenedFromPlayStore_2; }
	inline void set__IsOpenedFromPlayStore_2(bool value)
	{
		____IsOpenedFromPlayStore_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
