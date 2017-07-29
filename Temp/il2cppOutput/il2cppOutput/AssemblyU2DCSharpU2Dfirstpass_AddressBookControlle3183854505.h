#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_SA_Common_Pattern_Si3666419610.h"

// System.Action
struct Action_t3226471752;
// System.String
struct String_t;
// System.Collections.Generic.List`1<AndroidContactInfo>
struct List_1_t1487793311;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AddressBookController
struct  AddressBookController_t3183854505  : public Singleton_1_t3666419610
{
public:
	// System.Collections.Generic.List`1<AndroidContactInfo> AddressBookController::_contacts
	List_1_t1487793311 * ____contacts_9;

public:
	inline static int32_t get_offset_of__contacts_9() { return static_cast<int32_t>(offsetof(AddressBookController_t3183854505, ____contacts_9)); }
	inline List_1_t1487793311 * get__contacts_9() const { return ____contacts_9; }
	inline List_1_t1487793311 ** get_address_of__contacts_9() { return &____contacts_9; }
	inline void set__contacts_9(List_1_t1487793311 * value)
	{
		____contacts_9 = value;
		Il2CppCodeGenWriteBarrier(&____contacts_9, value);
	}
};

struct AddressBookController_t3183854505_StaticFields
{
public:
	// System.Action AddressBookController::OnContactsLoadedAction
	Action_t3226471752 * ___OnContactsLoadedAction_4;
	// System.Boolean AddressBookController::_isLoaded
	bool ____isLoaded_8;

public:
	inline static int32_t get_offset_of_OnContactsLoadedAction_4() { return static_cast<int32_t>(offsetof(AddressBookController_t3183854505_StaticFields, ___OnContactsLoadedAction_4)); }
	inline Action_t3226471752 * get_OnContactsLoadedAction_4() const { return ___OnContactsLoadedAction_4; }
	inline Action_t3226471752 ** get_address_of_OnContactsLoadedAction_4() { return &___OnContactsLoadedAction_4; }
	inline void set_OnContactsLoadedAction_4(Action_t3226471752 * value)
	{
		___OnContactsLoadedAction_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnContactsLoadedAction_4, value);
	}

	inline static int32_t get_offset_of__isLoaded_8() { return static_cast<int32_t>(offsetof(AddressBookController_t3183854505_StaticFields, ____isLoaded_8)); }
	inline bool get__isLoaded_8() const { return ____isLoaded_8; }
	inline bool* get_address_of__isLoaded_8() { return &____isLoaded_8; }
	inline void set__isLoaded_8(bool value)
	{
		____isLoaded_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
