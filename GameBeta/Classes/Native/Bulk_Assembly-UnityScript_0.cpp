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

// AnimationScrollTexture
struct AnimationScrollTexture_t8_1;
// UnityEngine.Renderer
struct Renderer_t5_33;
// System.Object
struct Object_t;
// AnimationSpriteSheet
struct AnimationSpriteSheet_t8_2;
// DeadTime
struct DeadTime_t8_3;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E.h"
#include "AssemblyU2DUnityScript_U3CModuleU3EMethodDeclarations.h"
#include "AssemblyU2DUnityScript_AnimationScrollTexture.h"
#include "AssemblyU2DUnityScript_AnimationScrollTextureMethodDeclarations.h"
#include "mscorlib_System_Void.h"
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "mscorlib_System_Single.h"
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
#include "UnityEngine_UnityEngine_RendererMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component.h"
#include "UnityEngine_UnityEngine_Renderer.h"
#include "UnityEngine_UnityEngine_Material.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "AssemblyU2DUnityScript_AnimationSpriteSheet.h"
#include "AssemblyU2DUnityScript_AnimationSpriteSheetMethodDeclarations.h"
#include "mscorlib_System_Int32.h"
#include "mscorlib_System_String.h"
#include "AssemblyU2DUnityScript_DeadTime.h"
#include "AssemblyU2DUnityScript_DeadTimeMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject.h"
#include "UnityEngine_UnityEngine_Object.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m5_2179_gshared (Component_t5_28 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m5_2179(__this, method) (( Object_t * (*) (Component_t5_28 *, const MethodInfo*))Component_GetComponent_TisObject_t_m5_2179_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
#define Component_GetComponent_TisRenderer_t5_33_m5_2183(__this, method) (( Renderer_t5_33 * (*) (Component_t5_28 *, const MethodInfo*))Component_GetComponent_TisObject_t_m5_2179_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AnimationScrollTexture::.ctor()
extern "C" void AnimationScrollTexture__ctor_m8_0 (AnimationScrollTexture_t8_1 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m5_988(__this, /*hidden argument*/NULL);
		__this->___Speed_2 = (0.25f);
		return;
	}
}
// System.Void AnimationScrollTexture::FixedUpdate()
extern const MethodInfo* Component_GetComponent_TisRenderer_t5_33_m5_2183_MethodInfo_var;
extern "C" void AnimationScrollTexture_FixedUpdate_m8_1 (AnimationScrollTexture_t8_1 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRenderer_t5_33_m5_2183_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483920);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = Time_get_time_m5_1179(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = (__this->___Speed_2);
		V_0 = ((float)((float)L_0*(float)((-L_1))));
		Renderer_t5_33 * L_2 = Component_GetComponent_TisRenderer_t5_33_m5_2183(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t5_33_m5_2183_MethodInfo_var);
		NullCheck(L_2);
		Material_t5_40 * L_3 = Renderer_get_material_m5_174(L_2, /*hidden argument*/NULL);
		float L_4 = V_0;
		Vector2_t5_67  L_5 = {0};
		Vector2__ctor_m5_394(&L_5, (((float)((float)0))), L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Material_set_mainTextureOffset_m5_757(L_3, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AnimationScrollTexture::Main()
extern "C" void AnimationScrollTexture_Main_m8_2 (AnimationScrollTexture_t8_1 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void AnimationSpriteSheet::.ctor()
extern "C" void AnimationSpriteSheet__ctor_m8_3 (AnimationSpriteSheet_t8_2 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m5_988(__this, /*hidden argument*/NULL);
		__this->___uvX_2 = 4;
		__this->___uvY_3 = 2;
		__this->___fps_4 = (24.0f);
		return;
	}
}
// System.Void AnimationSpriteSheet::Update()
extern const MethodInfo* Component_GetComponent_TisRenderer_t5_33_m5_2183_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral4504;
extern "C" void AnimationSpriteSheet_Update_m8_4 (AnimationSpriteSheet_t8_2 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRenderer_t5_33_m5_2183_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483920);
		_stringLiteral4504 = il2cpp_codegen_string_literal_from_index(4504);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Vector2_t5_67  V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Vector2_t5_67  V_4 = {0};
	{
		float L_0 = Time_get_time_m5_1179(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = (__this->___fps_4);
		V_0 = (((int32_t)((int32_t)((float)((float)L_0*(float)L_1)))));
		int32_t L_2 = V_0;
		int32_t L_3 = (__this->___uvX_2);
		int32_t L_4 = (__this->___uvY_3);
		V_0 = ((int32_t)((int32_t)L_2%(int32_t)((int32_t)((int32_t)L_3*(int32_t)L_4))));
		int32_t L_5 = (__this->___uvX_2);
		int32_t L_6 = (__this->___uvY_3);
		Vector2_t5_67  L_7 = {0};
		Vector2__ctor_m5_394(&L_7, ((float)((float)(1.0f)/(float)(((float)((float)L_5))))), ((float)((float)(1.0f)/(float)(((float)((float)L_6))))), /*hidden argument*/NULL);
		V_1 = L_7;
		int32_t L_8 = V_0;
		int32_t L_9 = (__this->___uvX_2);
		V_2 = ((int32_t)((int32_t)L_8%(int32_t)L_9));
		int32_t L_10 = V_0;
		int32_t L_11 = (__this->___uvX_2);
		V_3 = ((int32_t)((int32_t)L_10/(int32_t)L_11));
		int32_t L_12 = V_2;
		float L_13 = ((&V_1)->___x_1);
		float L_14 = ((&V_1)->___y_2);
		int32_t L_15 = V_3;
		float L_16 = ((&V_1)->___y_2);
		Vector2_t5_67  L_17 = {0};
		Vector2__ctor_m5_394(&L_17, ((float)((float)(((float)((float)L_12)))*(float)L_13)), ((float)((float)((float)((float)(1.0f)-(float)L_14))-(float)((float)((float)(((float)((float)L_15)))*(float)L_16)))), /*hidden argument*/NULL);
		V_4 = L_17;
		Renderer_t5_33 * L_18 = Component_GetComponent_TisRenderer_t5_33_m5_2183(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t5_33_m5_2183_MethodInfo_var);
		NullCheck(L_18);
		Material_t5_40 * L_19 = Renderer_get_material_m5_174(L_18, /*hidden argument*/NULL);
		Vector2_t5_67  L_20 = V_4;
		NullCheck(L_19);
		Material_SetTextureOffset_m5_770(L_19, _stringLiteral4504, L_20, /*hidden argument*/NULL);
		Renderer_t5_33 * L_21 = Component_GetComponent_TisRenderer_t5_33_m5_2183(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t5_33_m5_2183_MethodInfo_var);
		NullCheck(L_21);
		Material_t5_40 * L_22 = Renderer_get_material_m5_174(L_21, /*hidden argument*/NULL);
		Vector2_t5_67  L_23 = V_1;
		NullCheck(L_22);
		Material_SetTextureScale_m5_772(L_22, _stringLiteral4504, L_23, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AnimationSpriteSheet::Main()
extern "C" void AnimationSpriteSheet_Main_m8_5 (AnimationSpriteSheet_t8_2 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void DeadTime::.ctor()
extern "C" void DeadTime__ctor_m8_6 (DeadTime_t8_3 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m5_988(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DeadTime::Awake()
extern "C" void DeadTime_Awake_m8_7 (DeadTime_t8_3 * __this, const MethodInfo* method)
{
	{
		GameObject_t5_113 * L_0 = Component_get_gameObject_m5_1062(__this, /*hidden argument*/NULL);
		float L_1 = (__this->___deadTime_2);
		Object_Destroy_m5_1035(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DeadTime::Main()
extern "C" void DeadTime_Main_m8_8 (DeadTime_t8_3 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
