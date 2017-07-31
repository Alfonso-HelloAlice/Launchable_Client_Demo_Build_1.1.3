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
// System.Collections.Generic.Dictionary`2<FB_ProfileImageSize,UnityEngine.Texture2D>
struct Dictionary_2_t3631115410;
// System.Action`1<FB_Score>
struct Action_1_t1252640963;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FB_Score
struct  FB_Score_t1450841581  : public Il2CppObject
{
public:
	// System.String FB_Score::UserId
	String_t* ___UserId_0;
	// System.String FB_Score::UserName
	String_t* ___UserName_1;
	// System.String FB_Score::AppId
	String_t* ___AppId_2;
	// System.String FB_Score::AppName
	String_t* ___AppName_3;
	// System.Int32 FB_Score::value
	int32_t ___value_4;
	// System.Collections.Generic.Dictionary`2<FB_ProfileImageSize,UnityEngine.Texture2D> FB_Score::profileImages
	Dictionary_2_t3631115410 * ___profileImages_5;
	// System.Action`1<FB_Score> FB_Score::OnProfileImageLoaded
	Action_1_t1252640963 * ___OnProfileImageLoaded_6;

public:
	inline static int32_t get_offset_of_UserId_0() { return static_cast<int32_t>(offsetof(FB_Score_t1450841581, ___UserId_0)); }
	inline String_t* get_UserId_0() const { return ___UserId_0; }
	inline String_t** get_address_of_UserId_0() { return &___UserId_0; }
	inline void set_UserId_0(String_t* value)
	{
		___UserId_0 = value;
		Il2CppCodeGenWriteBarrier(&___UserId_0, value);
	}

	inline static int32_t get_offset_of_UserName_1() { return static_cast<int32_t>(offsetof(FB_Score_t1450841581, ___UserName_1)); }
	inline String_t* get_UserName_1() const { return ___UserName_1; }
	inline String_t** get_address_of_UserName_1() { return &___UserName_1; }
	inline void set_UserName_1(String_t* value)
	{
		___UserName_1 = value;
		Il2CppCodeGenWriteBarrier(&___UserName_1, value);
	}

	inline static int32_t get_offset_of_AppId_2() { return static_cast<int32_t>(offsetof(FB_Score_t1450841581, ___AppId_2)); }
	inline String_t* get_AppId_2() const { return ___AppId_2; }
	inline String_t** get_address_of_AppId_2() { return &___AppId_2; }
	inline void set_AppId_2(String_t* value)
	{
		___AppId_2 = value;
		Il2CppCodeGenWriteBarrier(&___AppId_2, value);
	}

	inline static int32_t get_offset_of_AppName_3() { return static_cast<int32_t>(offsetof(FB_Score_t1450841581, ___AppName_3)); }
	inline String_t* get_AppName_3() const { return ___AppName_3; }
	inline String_t** get_address_of_AppName_3() { return &___AppName_3; }
	inline void set_AppName_3(String_t* value)
	{
		___AppName_3 = value;
		Il2CppCodeGenWriteBarrier(&___AppName_3, value);
	}

	inline static int32_t get_offset_of_value_4() { return static_cast<int32_t>(offsetof(FB_Score_t1450841581, ___value_4)); }
	inline int32_t get_value_4() const { return ___value_4; }
	inline int32_t* get_address_of_value_4() { return &___value_4; }
	inline void set_value_4(int32_t value)
	{
		___value_4 = value;
	}

	inline static int32_t get_offset_of_profileImages_5() { return static_cast<int32_t>(offsetof(FB_Score_t1450841581, ___profileImages_5)); }
	inline Dictionary_2_t3631115410 * get_profileImages_5() const { return ___profileImages_5; }
	inline Dictionary_2_t3631115410 ** get_address_of_profileImages_5() { return &___profileImages_5; }
	inline void set_profileImages_5(Dictionary_2_t3631115410 * value)
	{
		___profileImages_5 = value;
		Il2CppCodeGenWriteBarrier(&___profileImages_5, value);
	}

	inline static int32_t get_offset_of_OnProfileImageLoaded_6() { return static_cast<int32_t>(offsetof(FB_Score_t1450841581, ___OnProfileImageLoaded_6)); }
	inline Action_1_t1252640963 * get_OnProfileImageLoaded_6() const { return ___OnProfileImageLoaded_6; }
	inline Action_1_t1252640963 ** get_address_of_OnProfileImageLoaded_6() { return &___OnProfileImageLoaded_6; }
	inline void set_OnProfileImageLoaded_6(Action_1_t1252640963 * value)
	{
		___OnProfileImageLoaded_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnProfileImageLoaded_6, value);
	}
};

struct FB_Score_t1450841581_StaticFields
{
public:
	// System.Action`1<FB_Score> FB_Score::<>f__am$cache0
	Action_1_t1252640963 * ___U3CU3Ef__amU24cache0_7;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_7() { return static_cast<int32_t>(offsetof(FB_Score_t1450841581_StaticFields, ___U3CU3Ef__amU24cache0_7)); }
	inline Action_1_t1252640963 * get_U3CU3Ef__amU24cache0_7() const { return ___U3CU3Ef__amU24cache0_7; }
	inline Action_1_t1252640963 ** get_address_of_U3CU3Ef__amU24cache0_7() { return &___U3CU3Ef__amU24cache0_7; }
	inline void set_U3CU3Ef__amU24cache0_7(Action_1_t1252640963 * value)
	{
		___U3CU3Ef__amU24cache0_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
