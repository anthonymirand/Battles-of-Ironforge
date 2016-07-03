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

// System.ComponentModel.ReflectionPropertyDescriptor
struct ReflectionPropertyDescriptor_t3_162;
// System.Type
struct Type_t;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t3_70;
// System.Attribute[]
struct AttributeU5BU5D_t1_937;
// System.String
struct String_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Collections.IList
struct IList_t1_429;
// System.Object
struct Object_t;
// System.ComponentModel.Design.DesignerTransaction
struct DesignerTransaction_t3_60;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.ReflectionPropertyDescriptor::.ctor(System.Type,System.ComponentModel.PropertyDescriptor,System.Attribute[])
extern "C" void ReflectionPropertyDescriptor__ctor_m3_1116 (ReflectionPropertyDescriptor_t3_162 * __this, Type_t * ___componentType, PropertyDescriptor_t3_70 * ___oldPropertyDescriptor, AttributeU5BU5D_t1_937* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionPropertyDescriptor::.ctor(System.Type,System.String,System.Type,System.Attribute[])
extern "C" void ReflectionPropertyDescriptor__ctor_m3_1117 (ReflectionPropertyDescriptor_t3_162 * __this, Type_t * ___componentType, String_t* ___name, Type_t * ___type, AttributeU5BU5D_t1_937* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionPropertyDescriptor::.ctor(System.Reflection.PropertyInfo)
extern "C" void ReflectionPropertyDescriptor__ctor_m3_1118 (ReflectionPropertyDescriptor_t3_162 * __this, PropertyInfo_t * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.ComponentModel.ReflectionPropertyDescriptor::GetPropertyInfo()
extern "C" PropertyInfo_t * ReflectionPropertyDescriptor_GetPropertyInfo_m3_1119 (ReflectionPropertyDescriptor_t3_162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.ReflectionPropertyDescriptor::get_ComponentType()
extern "C" Type_t * ReflectionPropertyDescriptor_get_ComponentType_m3_1120 (ReflectionPropertyDescriptor_t3_162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ReflectionPropertyDescriptor::get_IsReadOnly()
extern "C" bool ReflectionPropertyDescriptor_get_IsReadOnly_m3_1121 (ReflectionPropertyDescriptor_t3_162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.ReflectionPropertyDescriptor::get_PropertyType()
extern "C" Type_t * ReflectionPropertyDescriptor_get_PropertyType_m3_1122 (ReflectionPropertyDescriptor_t3_162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionPropertyDescriptor::FillAttributes(System.Collections.IList)
extern "C" void ReflectionPropertyDescriptor_FillAttributes_m3_1123 (ReflectionPropertyDescriptor_t3_162 * __this, Object_t * ___attributeList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.ReflectionPropertyDescriptor::GetValue(System.Object)
extern "C" Object_t * ReflectionPropertyDescriptor_GetValue_m3_1124 (ReflectionPropertyDescriptor_t3_162 * __this, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.Design.DesignerTransaction System.ComponentModel.ReflectionPropertyDescriptor::CreateTransaction(System.Object,System.String)
extern "C" DesignerTransaction_t3_60 * ReflectionPropertyDescriptor_CreateTransaction_m3_1125 (ReflectionPropertyDescriptor_t3_162 * __this, Object_t * ___obj, String_t* ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionPropertyDescriptor::EndTransaction(System.Object,System.ComponentModel.Design.DesignerTransaction,System.Object,System.Object,System.Boolean)
extern "C" void ReflectionPropertyDescriptor_EndTransaction_m3_1126 (ReflectionPropertyDescriptor_t3_162 * __this, Object_t * ___obj, DesignerTransaction_t3_60 * ___tran, Object_t * ___oldValue, Object_t * ___newValue, bool ___commit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionPropertyDescriptor::InitAccessors()
extern "C" void ReflectionPropertyDescriptor_InitAccessors_m3_1127 (ReflectionPropertyDescriptor_t3_162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionPropertyDescriptor::SetValue(System.Object,System.Object)
extern "C" void ReflectionPropertyDescriptor_SetValue_m3_1128 (ReflectionPropertyDescriptor_t3_162 * __this, Object_t * ___component, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.ComponentModel.ReflectionPropertyDescriptor::FindPropertyMethod(System.Object,System.String)
extern "C" MethodInfo_t * ReflectionPropertyDescriptor_FindPropertyMethod_m3_1129 (ReflectionPropertyDescriptor_t3_162 * __this, Object_t * ___o, String_t* ___method_name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionPropertyDescriptor::ResetValue(System.Object)
extern "C" void ReflectionPropertyDescriptor_ResetValue_m3_1130 (ReflectionPropertyDescriptor_t3_162 * __this, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ReflectionPropertyDescriptor::CanResetValue(System.Object)
extern "C" bool ReflectionPropertyDescriptor_CanResetValue_m3_1131 (ReflectionPropertyDescriptor_t3_162 * __this, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ReflectionPropertyDescriptor::ShouldSerializeValue(System.Object)
extern "C" bool ReflectionPropertyDescriptor_ShouldSerializeValue_m3_1132 (ReflectionPropertyDescriptor_t3_162 * __this, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
