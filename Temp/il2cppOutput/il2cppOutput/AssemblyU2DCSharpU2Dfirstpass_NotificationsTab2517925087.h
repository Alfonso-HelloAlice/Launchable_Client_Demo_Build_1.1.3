#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_FeatureTab2349790125.h"

// UnityEngine.Texture2D
struct Texture2D_t3542995729;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NotificationsTab
struct  NotificationsTab_t2517925087  : public FeatureTab_t2349790125
{
public:
	// UnityEngine.Texture2D NotificationsTab::bigPicture
	Texture2D_t3542995729 * ___bigPicture_2;
	// System.Int32 NotificationsTab::LastNotificationId
	int32_t ___LastNotificationId_3;

public:
	inline static int32_t get_offset_of_bigPicture_2() { return static_cast<int32_t>(offsetof(NotificationsTab_t2517925087, ___bigPicture_2)); }
	inline Texture2D_t3542995729 * get_bigPicture_2() const { return ___bigPicture_2; }
	inline Texture2D_t3542995729 ** get_address_of_bigPicture_2() { return &___bigPicture_2; }
	inline void set_bigPicture_2(Texture2D_t3542995729 * value)
	{
		___bigPicture_2 = value;
		Il2CppCodeGenWriteBarrier(&___bigPicture_2, value);
	}

	inline static int32_t get_offset_of_LastNotificationId_3() { return static_cast<int32_t>(offsetof(NotificationsTab_t2517925087, ___LastNotificationId_3)); }
	inline int32_t get_LastNotificationId_3() const { return ___LastNotificationId_3; }
	inline int32_t* get_address_of_LastNotificationId_3() { return &___LastNotificationId_3; }
	inline void set_LastNotificationId_3(int32_t value)
	{
		___LastNotificationId_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
