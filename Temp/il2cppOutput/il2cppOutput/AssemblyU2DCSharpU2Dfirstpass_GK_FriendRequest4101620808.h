#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GK_FriendRequest
struct  GK_FriendRequest_t4101620808  : public Il2CppObject
{
public:
	// System.Int32 GK_FriendRequest::_Id
	int32_t ____Id_0;
	// System.Collections.Generic.List`1<System.String> GK_FriendRequest::_PlayersIds
	List_1_t1398341365 * ____PlayersIds_1;
	// System.Collections.Generic.List`1<System.String> GK_FriendRequest::_Emails
	List_1_t1398341365 * ____Emails_2;

public:
	inline static int32_t get_offset_of__Id_0() { return static_cast<int32_t>(offsetof(GK_FriendRequest_t4101620808, ____Id_0)); }
	inline int32_t get__Id_0() const { return ____Id_0; }
	inline int32_t* get_address_of__Id_0() { return &____Id_0; }
	inline void set__Id_0(int32_t value)
	{
		____Id_0 = value;
	}

	inline static int32_t get_offset_of__PlayersIds_1() { return static_cast<int32_t>(offsetof(GK_FriendRequest_t4101620808, ____PlayersIds_1)); }
	inline List_1_t1398341365 * get__PlayersIds_1() const { return ____PlayersIds_1; }
	inline List_1_t1398341365 ** get_address_of__PlayersIds_1() { return &____PlayersIds_1; }
	inline void set__PlayersIds_1(List_1_t1398341365 * value)
	{
		____PlayersIds_1 = value;
		Il2CppCodeGenWriteBarrier(&____PlayersIds_1, value);
	}

	inline static int32_t get_offset_of__Emails_2() { return static_cast<int32_t>(offsetof(GK_FriendRequest_t4101620808, ____Emails_2)); }
	inline List_1_t1398341365 * get__Emails_2() const { return ____Emails_2; }
	inline List_1_t1398341365 ** get_address_of__Emails_2() { return &____Emails_2; }
	inline void set__Emails_2(List_1_t1398341365 * value)
	{
		____Emails_2 = value;
		Il2CppCodeGenWriteBarrier(&____Emails_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
