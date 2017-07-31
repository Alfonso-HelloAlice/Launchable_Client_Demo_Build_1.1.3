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
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.Collections.Generic.List`1<SA.IOSNative.Contacts.PhoneNumber>
struct List_1_t3777443069;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA.IOSNative.Contacts.Contact
struct  Contact_t4178394798  : public Il2CppObject
{
public:
	// System.String SA.IOSNative.Contacts.Contact::GivenName
	String_t* ___GivenName_0;
	// System.String SA.IOSNative.Contacts.Contact::FamilyName
	String_t* ___FamilyName_1;
	// System.Collections.Generic.List`1<System.String> SA.IOSNative.Contacts.Contact::Emails
	List_1_t1398341365 * ___Emails_2;
	// System.Collections.Generic.List`1<SA.IOSNative.Contacts.PhoneNumber> SA.IOSNative.Contacts.Contact::PhoneNumbers
	List_1_t3777443069 * ___PhoneNumbers_3;

public:
	inline static int32_t get_offset_of_GivenName_0() { return static_cast<int32_t>(offsetof(Contact_t4178394798, ___GivenName_0)); }
	inline String_t* get_GivenName_0() const { return ___GivenName_0; }
	inline String_t** get_address_of_GivenName_0() { return &___GivenName_0; }
	inline void set_GivenName_0(String_t* value)
	{
		___GivenName_0 = value;
		Il2CppCodeGenWriteBarrier(&___GivenName_0, value);
	}

	inline static int32_t get_offset_of_FamilyName_1() { return static_cast<int32_t>(offsetof(Contact_t4178394798, ___FamilyName_1)); }
	inline String_t* get_FamilyName_1() const { return ___FamilyName_1; }
	inline String_t** get_address_of_FamilyName_1() { return &___FamilyName_1; }
	inline void set_FamilyName_1(String_t* value)
	{
		___FamilyName_1 = value;
		Il2CppCodeGenWriteBarrier(&___FamilyName_1, value);
	}

	inline static int32_t get_offset_of_Emails_2() { return static_cast<int32_t>(offsetof(Contact_t4178394798, ___Emails_2)); }
	inline List_1_t1398341365 * get_Emails_2() const { return ___Emails_2; }
	inline List_1_t1398341365 ** get_address_of_Emails_2() { return &___Emails_2; }
	inline void set_Emails_2(List_1_t1398341365 * value)
	{
		___Emails_2 = value;
		Il2CppCodeGenWriteBarrier(&___Emails_2, value);
	}

	inline static int32_t get_offset_of_PhoneNumbers_3() { return static_cast<int32_t>(offsetof(Contact_t4178394798, ___PhoneNumbers_3)); }
	inline List_1_t3777443069 * get_PhoneNumbers_3() const { return ___PhoneNumbers_3; }
	inline List_1_t3777443069 ** get_address_of_PhoneNumbers_3() { return &___PhoneNumbers_3; }
	inline void set_PhoneNumbers_3(List_1_t3777443069 * value)
	{
		___PhoneNumbers_3 = value;
		Il2CppCodeGenWriteBarrier(&___PhoneNumbers_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
