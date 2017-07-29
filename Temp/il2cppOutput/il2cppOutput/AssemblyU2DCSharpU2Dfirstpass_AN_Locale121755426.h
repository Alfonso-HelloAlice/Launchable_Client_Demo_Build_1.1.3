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

// AN_Locale
struct  AN_Locale_t121755426  : public Il2CppObject
{
public:
	// System.String AN_Locale::CountryCode
	String_t* ___CountryCode_0;
	// System.String AN_Locale::DisplayCountry
	String_t* ___DisplayCountry_1;
	// System.String AN_Locale::LanguageCode
	String_t* ___LanguageCode_2;
	// System.String AN_Locale::DisplayLanguage
	String_t* ___DisplayLanguage_3;

public:
	inline static int32_t get_offset_of_CountryCode_0() { return static_cast<int32_t>(offsetof(AN_Locale_t121755426, ___CountryCode_0)); }
	inline String_t* get_CountryCode_0() const { return ___CountryCode_0; }
	inline String_t** get_address_of_CountryCode_0() { return &___CountryCode_0; }
	inline void set_CountryCode_0(String_t* value)
	{
		___CountryCode_0 = value;
		Il2CppCodeGenWriteBarrier(&___CountryCode_0, value);
	}

	inline static int32_t get_offset_of_DisplayCountry_1() { return static_cast<int32_t>(offsetof(AN_Locale_t121755426, ___DisplayCountry_1)); }
	inline String_t* get_DisplayCountry_1() const { return ___DisplayCountry_1; }
	inline String_t** get_address_of_DisplayCountry_1() { return &___DisplayCountry_1; }
	inline void set_DisplayCountry_1(String_t* value)
	{
		___DisplayCountry_1 = value;
		Il2CppCodeGenWriteBarrier(&___DisplayCountry_1, value);
	}

	inline static int32_t get_offset_of_LanguageCode_2() { return static_cast<int32_t>(offsetof(AN_Locale_t121755426, ___LanguageCode_2)); }
	inline String_t* get_LanguageCode_2() const { return ___LanguageCode_2; }
	inline String_t** get_address_of_LanguageCode_2() { return &___LanguageCode_2; }
	inline void set_LanguageCode_2(String_t* value)
	{
		___LanguageCode_2 = value;
		Il2CppCodeGenWriteBarrier(&___LanguageCode_2, value);
	}

	inline static int32_t get_offset_of_DisplayLanguage_3() { return static_cast<int32_t>(offsetof(AN_Locale_t121755426, ___DisplayLanguage_3)); }
	inline String_t* get_DisplayLanguage_3() const { return ___DisplayLanguage_3; }
	inline String_t** get_address_of_DisplayLanguage_3() { return &___DisplayLanguage_3; }
	inline void set_DisplayLanguage_3(String_t* value)
	{
		___DisplayLanguage_3 = value;
		Il2CppCodeGenWriteBarrier(&___DisplayLanguage_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
