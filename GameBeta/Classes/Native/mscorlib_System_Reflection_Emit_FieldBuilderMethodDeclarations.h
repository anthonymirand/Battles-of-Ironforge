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

// System.Reflection.Emit.FieldBuilder
struct FieldBuilder_t1_288;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t1_158;
// System.Object
struct Object_t;
// System.Reflection.Binder
struct Binder_t1_337;
// System.Globalization.CultureInfo
struct CultureInfo_t1_163;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t1_289;
// System.Exception
struct Exception_t1_33;
// System.Reflection.Module
struct Module_t1_298;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_FieldAttributes.h"
#include "mscorlib_System_RuntimeFieldHandle.h"
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Reflection.FieldAttributes System.Reflection.Emit.FieldBuilder::get_Attributes()
extern "C" int32_t FieldBuilder_get_Attributes_m1_2698 (FieldBuilder_t1_288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.FieldBuilder::get_DeclaringType()
extern "C" Type_t * FieldBuilder_get_DeclaringType_m1_2699 (FieldBuilder_t1_288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeFieldHandle System.Reflection.Emit.FieldBuilder::get_FieldHandle()
extern "C" RuntimeFieldHandle_t1_36  FieldBuilder_get_FieldHandle_m1_2700 (FieldBuilder_t1_288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.FieldBuilder::get_FieldType()
extern "C" Type_t * FieldBuilder_get_FieldType_m1_2701 (FieldBuilder_t1_288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.FieldBuilder::get_Name()
extern "C" String_t* FieldBuilder_get_Name_m1_2702 (FieldBuilder_t1_288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.FieldBuilder::get_ReflectedType()
extern "C" Type_t * FieldBuilder_get_ReflectedType_m1_2703 (FieldBuilder_t1_288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.FieldBuilder::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t1_158* FieldBuilder_GetCustomAttributes_m1_2704 (FieldBuilder_t1_288 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.FieldBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t1_158* FieldBuilder_GetCustomAttributes_m1_2705 (FieldBuilder_t1_288 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.FieldBuilder::GetValue(System.Object)
extern "C" Object_t * FieldBuilder_GetValue_m1_2706 (FieldBuilder_t1_288 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.FieldBuilder::IsDefined(System.Type,System.Boolean)
extern "C" bool FieldBuilder_IsDefined_m1_2707 (FieldBuilder_t1_288 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.FieldBuilder::GetFieldOffset()
extern "C" int32_t FieldBuilder_GetFieldOffset_m1_2708 (FieldBuilder_t1_288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.FieldBuilder::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Globalization.CultureInfo)
extern "C" void FieldBuilder_SetValue_m1_2709 (FieldBuilder_t1_288 * __this, Object_t * ___obj, Object_t * ___val, int32_t ___invokeAttr, Binder_t1_337 * ___binder, CultureInfo_t1_163 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.UnmanagedMarshal System.Reflection.Emit.FieldBuilder::get_UMarshal()
extern "C" UnmanagedMarshal_t1_289 * FieldBuilder_get_UMarshal_m1_2710 (FieldBuilder_t1_288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.FieldBuilder::CreateNotSupportedException()
extern "C" Exception_t1_33 * FieldBuilder_CreateNotSupportedException_m1_2711 (FieldBuilder_t1_288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.FieldBuilder::get_Module()
extern "C" Module_t1_298 * FieldBuilder_get_Module_m1_2712 (FieldBuilder_t1_288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
