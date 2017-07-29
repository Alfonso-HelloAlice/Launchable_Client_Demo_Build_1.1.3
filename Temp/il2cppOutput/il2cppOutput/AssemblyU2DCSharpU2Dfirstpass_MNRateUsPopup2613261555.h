#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_MNPopup3166308983.h"

// MNPopup/MNPopupAction
struct MNPopupAction_t2249655003;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MNRateUsPopup
struct  MNRateUsPopup_t2613261555  : public MNPopup_t3166308983
{
public:
	// MNPopup/MNPopupAction MNRateUsPopup::remindListener
	MNPopupAction_t2249655003 * ___remindListener_6;
	// MNPopup/MNPopupAction MNRateUsPopup::declineListener
	MNPopupAction_t2249655003 * ___declineListener_7;
	// MNPopup/MNPopupAction MNRateUsPopup::rateUsListener
	MNPopupAction_t2249655003 * ___rateUsListener_8;
	// System.String MNRateUsPopup::appleId
	String_t* ___appleId_9;

public:
	inline static int32_t get_offset_of_remindListener_6() { return static_cast<int32_t>(offsetof(MNRateUsPopup_t2613261555, ___remindListener_6)); }
	inline MNPopupAction_t2249655003 * get_remindListener_6() const { return ___remindListener_6; }
	inline MNPopupAction_t2249655003 ** get_address_of_remindListener_6() { return &___remindListener_6; }
	inline void set_remindListener_6(MNPopupAction_t2249655003 * value)
	{
		___remindListener_6 = value;
		Il2CppCodeGenWriteBarrier(&___remindListener_6, value);
	}

	inline static int32_t get_offset_of_declineListener_7() { return static_cast<int32_t>(offsetof(MNRateUsPopup_t2613261555, ___declineListener_7)); }
	inline MNPopupAction_t2249655003 * get_declineListener_7() const { return ___declineListener_7; }
	inline MNPopupAction_t2249655003 ** get_address_of_declineListener_7() { return &___declineListener_7; }
	inline void set_declineListener_7(MNPopupAction_t2249655003 * value)
	{
		___declineListener_7 = value;
		Il2CppCodeGenWriteBarrier(&___declineListener_7, value);
	}

	inline static int32_t get_offset_of_rateUsListener_8() { return static_cast<int32_t>(offsetof(MNRateUsPopup_t2613261555, ___rateUsListener_8)); }
	inline MNPopupAction_t2249655003 * get_rateUsListener_8() const { return ___rateUsListener_8; }
	inline MNPopupAction_t2249655003 ** get_address_of_rateUsListener_8() { return &___rateUsListener_8; }
	inline void set_rateUsListener_8(MNPopupAction_t2249655003 * value)
	{
		___rateUsListener_8 = value;
		Il2CppCodeGenWriteBarrier(&___rateUsListener_8, value);
	}

	inline static int32_t get_offset_of_appleId_9() { return static_cast<int32_t>(offsetof(MNRateUsPopup_t2613261555, ___appleId_9)); }
	inline String_t* get_appleId_9() const { return ___appleId_9; }
	inline String_t** get_address_of_appleId_9() { return &___appleId_9; }
	inline void set_appleId_9(String_t* value)
	{
		___appleId_9 = value;
		Il2CppCodeGenWriteBarrier(&___appleId_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
