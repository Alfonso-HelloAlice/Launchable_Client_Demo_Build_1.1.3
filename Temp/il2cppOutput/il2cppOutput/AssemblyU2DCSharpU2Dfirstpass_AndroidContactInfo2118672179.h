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
// AndroidABEmail
struct AndroidABEmail_t2938164884;
// AndroidABChat
struct AndroidABChat_t2851498654;
// AndroidABAddress
struct AndroidABAddress_t3525326208;
// AndroidABOrganization
struct AndroidABOrganization_t1539209357;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AndroidContactInfo
struct  AndroidContactInfo_t2118672179  : public Il2CppObject
{
public:
	// System.String AndroidContactInfo::name
	String_t* ___name_0;
	// System.String AndroidContactInfo::phone
	String_t* ___phone_1;
	// System.String AndroidContactInfo::note
	String_t* ___note_2;
	// AndroidABEmail AndroidContactInfo::email
	AndroidABEmail_t2938164884 * ___email_3;
	// AndroidABChat AndroidContactInfo::chat
	AndroidABChat_t2851498654 * ___chat_4;
	// AndroidABAddress AndroidContactInfo::address
	AndroidABAddress_t3525326208 * ___address_5;
	// AndroidABOrganization AndroidContactInfo::organization
	AndroidABOrganization_t1539209357 * ___organization_6;
	// UnityEngine.Texture2D AndroidContactInfo::photo
	Texture2D_t3542995729 * ___photo_7;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AndroidContactInfo_t2118672179, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_phone_1() { return static_cast<int32_t>(offsetof(AndroidContactInfo_t2118672179, ___phone_1)); }
	inline String_t* get_phone_1() const { return ___phone_1; }
	inline String_t** get_address_of_phone_1() { return &___phone_1; }
	inline void set_phone_1(String_t* value)
	{
		___phone_1 = value;
		Il2CppCodeGenWriteBarrier(&___phone_1, value);
	}

	inline static int32_t get_offset_of_note_2() { return static_cast<int32_t>(offsetof(AndroidContactInfo_t2118672179, ___note_2)); }
	inline String_t* get_note_2() const { return ___note_2; }
	inline String_t** get_address_of_note_2() { return &___note_2; }
	inline void set_note_2(String_t* value)
	{
		___note_2 = value;
		Il2CppCodeGenWriteBarrier(&___note_2, value);
	}

	inline static int32_t get_offset_of_email_3() { return static_cast<int32_t>(offsetof(AndroidContactInfo_t2118672179, ___email_3)); }
	inline AndroidABEmail_t2938164884 * get_email_3() const { return ___email_3; }
	inline AndroidABEmail_t2938164884 ** get_address_of_email_3() { return &___email_3; }
	inline void set_email_3(AndroidABEmail_t2938164884 * value)
	{
		___email_3 = value;
		Il2CppCodeGenWriteBarrier(&___email_3, value);
	}

	inline static int32_t get_offset_of_chat_4() { return static_cast<int32_t>(offsetof(AndroidContactInfo_t2118672179, ___chat_4)); }
	inline AndroidABChat_t2851498654 * get_chat_4() const { return ___chat_4; }
	inline AndroidABChat_t2851498654 ** get_address_of_chat_4() { return &___chat_4; }
	inline void set_chat_4(AndroidABChat_t2851498654 * value)
	{
		___chat_4 = value;
		Il2CppCodeGenWriteBarrier(&___chat_4, value);
	}

	inline static int32_t get_offset_of_address_5() { return static_cast<int32_t>(offsetof(AndroidContactInfo_t2118672179, ___address_5)); }
	inline AndroidABAddress_t3525326208 * get_address_5() const { return ___address_5; }
	inline AndroidABAddress_t3525326208 ** get_address_of_address_5() { return &___address_5; }
	inline void set_address_5(AndroidABAddress_t3525326208 * value)
	{
		___address_5 = value;
		Il2CppCodeGenWriteBarrier(&___address_5, value);
	}

	inline static int32_t get_offset_of_organization_6() { return static_cast<int32_t>(offsetof(AndroidContactInfo_t2118672179, ___organization_6)); }
	inline AndroidABOrganization_t1539209357 * get_organization_6() const { return ___organization_6; }
	inline AndroidABOrganization_t1539209357 ** get_address_of_organization_6() { return &___organization_6; }
	inline void set_organization_6(AndroidABOrganization_t1539209357 * value)
	{
		___organization_6 = value;
		Il2CppCodeGenWriteBarrier(&___organization_6, value);
	}

	inline static int32_t get_offset_of_photo_7() { return static_cast<int32_t>(offsetof(AndroidContactInfo_t2118672179, ___photo_7)); }
	inline Texture2D_t3542995729 * get_photo_7() const { return ___photo_7; }
	inline Texture2D_t3542995729 ** get_address_of_photo_7() { return &___photo_7; }
	inline void set_photo_7(Texture2D_t3542995729 * value)
	{
		___photo_7 = value;
		Il2CppCodeGenWriteBarrier(&___photo_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
