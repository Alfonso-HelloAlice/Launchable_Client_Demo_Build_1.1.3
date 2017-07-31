#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DUnityScriptU2Dfirstpass_U3CModuleU3E3783534214.h"
#include "AssemblyU2DUnityScriptU2Dfirstpass_JSCall1337227025.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityScript_Lang_UnityScript_Lang_Array1396575355.h"
#include "mscorlib_System_Single2076509932.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "mscorlib_System_Int322071877448.h"
#include "AssemblyU2DUnityScriptU2Dfirstpass_JSUseExample4150672372.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// JSCall
struct JSCall_t1337227025;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// UnityEngine.Component
struct Component_t3819376471;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// UnityScript.Lang.Array
struct Array_t1396575355;
// JSUseExample
struct JSUseExample_t4150672372;
// UnityEngine.GameObject
struct GameObject_t1756533147;
extern Il2CppCodeGenString* _stringLiteral3792912575;
extern const uint32_t JSCall_Start_m3272376323_MetadataUsageId;
extern Il2CppClass* GUI_t4082743951_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern Il2CppClass* Array_t1396575355_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral92599612;
extern Il2CppCodeGenString* _stringLiteral2244825756;
extern Il2CppCodeGenString* _stringLiteral2441152439;
extern Il2CppCodeGenString* _stringLiteral4236460060;
extern Il2CppCodeGenString* _stringLiteral878893350;
extern Il2CppCodeGenString* _stringLiteral2864204531;
extern Il2CppCodeGenString* _stringLiteral372029394;
extern const uint32_t JSCall_OnGUI_m1698318881_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral151169660;
extern Il2CppCodeGenString* _stringLiteral132666798;
extern const uint32_t JSUseExample_OnGUI_m3311517772_MetadataUsageId;
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral274951579;
extern const uint32_t JSUseExample_PlayerConnectd_m128726687_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral332160919;
extern const uint32_t JSUseExample_PlayerDisconected_m937705770_MetadataUsageId;




// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m2464341955 (MonoBehaviour_t1158329972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessage(System.String)
extern "C"  void Component_SendMessage_m3615678587 (Component_t3819376471 * __this, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Rect__ctor_m1220545469 (Rect_t3681755626 * __this, float p0, float p1, float p2, float p3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
extern "C"  bool GUI_Button_m3054448581 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  p0, String_t* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessage(System.String,System.Object)
extern "C"  void Component_SendMessage_m913946877 (Component_t3819376471 * __this, String_t* p0, Il2CppObject * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityScript.Lang.Array::.ctor()
extern "C"  void Array__ctor_m4252655432 (Array_t1396575355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityScript.Lang.Array::push(System.Object)
extern "C"  int32_t Array_push_m3845507796 (Array_t1396575355 * __this, Il2CppObject * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityScript.Lang.Array::join(System.String)
extern "C"  String_t* Array_join_m2273326275 (Array_t1396575355 * __this, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1756533147 * Component_get_gameObject_m3105766835 (Component_t3819376471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SendMessage(System.String)
extern "C"  void GameObject_SendMessage_m1177535567 (GameObject_t1756533147 * __this, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m920475918 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void JSCall::.ctor()
extern "C"  void JSCall__ctor_m2208614559 (JSCall_t1337227025 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void JSCall::Start()
extern "C"  void JSCall_Start_m3272376323 (JSCall_t1337227025 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSCall_Start_m3272376323_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Component_SendMessage_m3615678587(__this, _stringLiteral3792912575, /*hidden argument*/NULL);
		return;
	}
}
// System.Void JSCall::OnGUI()
extern "C"  void JSCall_OnGUI_m1698318881 (JSCall_t1337227025 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSCall_OnGUI_m1698318881_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Array_t1396575355 * V_0 = NULL;
	{
		Rect_t3681755626  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Rect__ctor_m1220545469(&L_0, (((float)((float)((int32_t)10)))), (((float)((float)((int32_t)10)))), (((float)((float)((int32_t)150)))), (((float)((float)((int32_t)40)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t4082743951_il2cpp_TypeInfo_var);
		bool L_1 = GUI_Button_m3054448581(NULL /*static, unused*/, L_0, _stringLiteral92599612, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_2 = ((int32_t)100);
		Il2CppObject * L_3 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_2);
		Component_SendMessage_m913946877(__this, _stringLiteral2244825756, L_3, /*hidden argument*/NULL);
	}

IL_0035:
	{
		Rect_t3681755626  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Rect__ctor_m1220545469(&L_4, (((float)((float)((int32_t)10)))), (((float)((float)((int32_t)60)))), (((float)((float)((int32_t)150)))), (((float)((float)((int32_t)40)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t4082743951_il2cpp_TypeInfo_var);
		bool L_5 = GUI_Button_m3054448581(NULL /*static, unused*/, L_4, _stringLiteral2441152439, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_008c;
		}
	}
	{
		Array_t1396575355 * L_6 = (Array_t1396575355 *)il2cpp_codegen_object_new(Array_t1396575355_il2cpp_TypeInfo_var);
		Array__ctor_m4252655432(L_6, /*hidden argument*/NULL);
		V_0 = L_6;
		Array_t1396575355 * L_7 = V_0;
		NullCheck(L_7);
		Array_push_m3845507796(L_7, _stringLiteral4236460060, /*hidden argument*/NULL);
		Array_t1396575355 * L_8 = V_0;
		NullCheck(L_8);
		Array_push_m3845507796(L_8, _stringLiteral878893350, /*hidden argument*/NULL);
		Array_t1396575355 * L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10 = Array_join_m2273326275(L_9, _stringLiteral372029394, /*hidden argument*/NULL);
		Component_SendMessage_m913946877(__this, _stringLiteral2864204531, L_10, /*hidden argument*/NULL);
	}

IL_008c:
	{
		return;
	}
}
// System.Void JSCall::Main()
extern "C"  void JSCall_Main_m587593024 (JSCall_t1337227025 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void JSUseExample::.ctor()
extern "C"  void JSUseExample__ctor_m659646088 (JSUseExample_t4150672372 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void JSUseExample::OnGUI()
extern "C"  void JSUseExample_OnGUI_m3311517772 (JSUseExample_t4150672372 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSUseExample_OnGUI_m3311517772_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rect_t3681755626  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Rect__ctor_m1220545469(&L_0, (((float)((float)((int32_t)10)))), (((float)((float)((int32_t)70)))), (((float)((float)((int32_t)200)))), (((float)((float)((int32_t)70)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t4082743951_il2cpp_TypeInfo_var);
		bool L_1 = GUI_Button_m3054448581(NULL /*static, unused*/, L_0, _stringLiteral151169660, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		GameObject_t1756533147 * L_2 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_SendMessage_m1177535567(L_2, _stringLiteral132666798, /*hidden argument*/NULL);
	}

IL_0033:
	{
		return;
	}
}
// System.Void JSUseExample::PlayerConnectd()
extern "C"  void JSUseExample_PlayerConnectd_m128726687 (JSUseExample_t4150672372 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSUseExample_PlayerConnectd_m128726687_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral274951579, /*hidden argument*/NULL);
		return;
	}
}
// System.Void JSUseExample::PlayerDisconected()
extern "C"  void JSUseExample_PlayerDisconected_m937705770 (JSUseExample_t4150672372 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSUseExample_PlayerDisconected_m937705770_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral332160919, /*hidden argument*/NULL);
		return;
	}
}
// System.Void JSUseExample::Main()
extern "C"  void JSUseExample_Main_m1584512717 (JSUseExample_t4150672372 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
