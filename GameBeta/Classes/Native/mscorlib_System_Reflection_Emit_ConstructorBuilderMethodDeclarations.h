#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Reflection.Emit.ConstructorBuilder
struct ConstructorBuilder_t1_280;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t1_283;
// System.Type[]
struct TypeU5BU5D_t1_31;
// System.Type[][]
struct TypeU5BU5DU5BU5D_t1_285;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t1_864;
// System.Object
struct Object_t;
// System.Reflection.Binder
struct Binder_t1_337;
// System.Object[]
struct ObjectU5BU5D_t1_158;
// System.Globalization.CultureInfo
struct CultureInfo_t1_163;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t1_282;
// System.Reflection.Module
struct Module_t1_298;
// System.Exception
struct Exception_t1_33;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MethodAttributes.h"
#include "mscorlib_System_Reflection_CallingConventions.h"
#include "mscorlib_System_Reflection_BindingFlags.h"
#include "mscorlib_System_RuntimeMethodHandle.h"
#include "mscorlib_System_Reflection_Emit_MethodToken.h"

// System.Void System.Reflection.Emit.ConstructorBuilder::.ctor(System.Reflection.Emit.TypeBuilder,System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type[],System.Type[][],System.Type[][])
extern "C" void ConstructorBuilder__ctor_m1_2636 (ConstructorBuilder_t1_280 * __this, TypeBuilder_t1_283 * ___tb, int32_t ___attributes, int32_t ___callingConvention, TypeU5BU5D_t1_31* ___parameterTypes, TypeU5BU5DU5BU5D_t1_285* ___paramModReq, TypeU5BU5DU5BU5D_t1_285* ___paramModOpt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.Emit.ConstructorBuilder::get_CallingConvention()
extern "C" int32_t ConstructorBuilder_get_CallingConvention_m1_2637 (ConstructorBuilder_t1_280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ConstructorBuilder::get_TypeBuilder()
extern "C" TypeBuilder_t1_283 * ConstructorBuilder_get_TypeBuilder_m1_2638 (ConstructorBuilder_t1_280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.ConstructorBuilder::GetParameters()
extern "C" ParameterInfoU5BU5D_t1_864* ConstructorBuilder_GetParameters_m1_2639 (ConstructorBuilder_t1_280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.ConstructorBuilder::GetParametersInternal()
extern "C" ParameterInfoU5BU5D_t1_864* ConstructorBuilder_GetParametersInternal_m1_2640 (ConstructorBuilder_t1_280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ConstructorBuilder::GetParameterCount()
extern "C" int32_t ConstructorBuilder_GetParameterCount_m1_2641 (ConstructorBuilder_t1_280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.ConstructorBuilder::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * ConstructorBuilder_Invoke_m1_2642 (ConstructorBuilder_t1_280 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t1_337 * ___binder, ObjectU5BU5D_t1_158* ___parameters, CultureInfo_t1_163 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.ConstructorBuilder::Invoke(System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * ConstructorBuilder_Invoke_m1_2643 (ConstructorBuilder_t1_280 * __this, int32_t ___invokeAttr, Binder_t1_337 * ___binder, ObjectU5BU5D_t1_158* ___parameters, CultureInfo_t1_163 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.Emit.ConstructorBuilder::get_MethodHandle()
extern "C" RuntimeMethodHandle_t1_807  ConstructorBuilder_get_MethodHandle_m1_2644 (ConstructorBuilder_t1_280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.Emit.ConstructorBuilder::get_Attributes()
extern "C" int32_t ConstructorBuilder_get_Attributes_m1_2645 (ConstructorBuilder_t1_280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ConstructorBuilder::get_ReflectedType()
extern "C" Type_t * ConstructorBuilder_get_ReflectedType_m1_2646 (ConstructorBuilder_t1_280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ConstructorBuilder::get_DeclaringType()
extern "C" Type_t * ConstructorBuilder_get_DeclaringType_m1_2647 (ConstructorBuilder_t1_280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.ConstructorBuilder::get_Name()
extern "C" String_t* ConstructorBuilder_get_Name_m1_2648 (ConstructorBuilder_t1_280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.ConstructorBuilder::IsDefined(System.Type,System.Boolean)
extern "C" bool ConstructorBuilder_IsDefined_m1_2649 (ConstructorBuilder_t1_280 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.ConstructorBuilder::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t1_158* ConstructorBuilder_GetCustomAttributes_m1_2650 (ConstructorBuilder_t1_280 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.ConstructorBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t1_158* ConstructorBuilder_GetCustomAttributes_m1_2651 (ConstructorBuilder_t1_280 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ILGenerator System.Reflection.Emit.ConstructorBuilder::GetILGenerator()
extern "C" ILGenerator_t1_282 * ConstructorBuilder_GetILGenerator_m1_2652 (ConstructorBuilder_t1_280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ILGenerator System.Reflection.Emit.ConstructorBuilder::GetILGenerator(System.Int32)
extern "C" ILGenerator_t1_282 * ConstructorBuilder_GetILGenerator_m1_2653 (ConstructorBuilder_t1_280 * __this, int32_t ___streamSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.MethodToken System.Reflection.Emit.ConstructorBuilder::GetToken()
extern "C" MethodToken_t1_301  ConstructorBuilder_GetToken_m1_2654 (ConstructorBuilder_t1_280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.ConstructorBuilder::get_Module()
extern "C" Module_t1_298 * ConstructorBuilder_get_Module_m1_2655 (ConstructorBuilder_t1_280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.ConstructorBuilder::ToString()
extern "C" String_t* ConstructorBuilder_ToString_m1_2656 (ConstructorBuilder_t1_280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ConstructorBuilder::fixup()
extern "C" void ConstructorBuilder_fixup_m1_2657 (ConstructorBuilder_t1_280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ConstructorBuilder::get_next_table_index(System.Object,System.Int32,System.Boolean)
extern "C" int32_t ConstructorBuilder_get_next_table_index_m1_2658 (ConstructorBuilder_t1_280 * __this, Object_t * ___obj, int32_t ___table, bool ___inc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.ConstructorBuilder::get_IsCompilerContext()
extern "C" bool ConstructorBuilder_get_IsCompilerContext_m1_2659 (ConstructorBuilder_t1_280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.ConstructorBuilder::not_supported()
extern "C" Exception_t1_33 * ConstructorBuilder_not_supported_m1_2660 (ConstructorBuilder_t1_280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.ConstructorBuilder::not_created()
extern "C" Exception_t1_33 * ConstructorBuilder_not_created_m1_2661 (ConstructorBuilder_t1_280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
