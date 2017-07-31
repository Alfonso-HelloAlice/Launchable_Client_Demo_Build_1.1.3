#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Models_Res4287219743.h"

// System.Collections.Generic.List`1<SA.IOSNative.Contacts.Contact>
struct List_1_t3547515930;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.IOSNative.Contacts.ContactsResult
struct  ContactsResult_t1045731284  : public Result_t4287219743
{
public:
	// System.Collections.Generic.List`1<SA.IOSNative.Contacts.Contact> SA.IOSNative.Contacts.ContactsResult::_Contacts
	List_1_t3547515930 * ____Contacts_1;

public:
	inline static int32_t get_offset_of__Contacts_1() { return static_cast<int32_t>(offsetof(ContactsResult_t1045731284, ____Contacts_1)); }
	inline List_1_t3547515930 * get__Contacts_1() const { return ____Contacts_1; }
	inline List_1_t3547515930 ** get_address_of__Contacts_1() { return &____Contacts_1; }
	inline void set__Contacts_1(List_1_t3547515930 * value)
	{
		____Contacts_1 = value;
		Il2CppCodeGenWriteBarrier(&____Contacts_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
