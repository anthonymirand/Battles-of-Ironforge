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

// System.ComponentModel.CustomTypeDescriptor
struct CustomTypeDescriptor_t3_102;
// System.ComponentModel.ICustomTypeDescriptor
struct ICustomTypeDescriptor_t3_103;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t3_76;
// System.String
struct String_t;
// System.ComponentModel.TypeConverter
struct TypeConverter_t3_83;
// System.ComponentModel.EventDescriptor
struct EventDescriptor_t3_124;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t3_70;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.ComponentModel.EventDescriptorCollection
struct EventDescriptorCollection_t3_125;
// System.Attribute[]
struct AttributeU5BU5D_t1_937;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t3_158;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.CustomTypeDescriptor::.ctor()
extern "C" void CustomTypeDescriptor__ctor_m3_608 (CustomTypeDescriptor_t3_102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.CustomTypeDescriptor::.ctor(System.ComponentModel.ICustomTypeDescriptor)
extern "C" void CustomTypeDescriptor__ctor_m3_609 (CustomTypeDescriptor_t3_102 * __this, Object_t * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.CustomTypeDescriptor::GetAttributes()
extern "C" AttributeCollection_t3_76 * CustomTypeDescriptor_GetAttributes_m3_610 (CustomTypeDescriptor_t3_102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.CustomTypeDescriptor::GetClassName()
extern "C" String_t* CustomTypeDescriptor_GetClassName_m3_611 (CustomTypeDescriptor_t3_102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.CustomTypeDescriptor::GetComponentName()
extern "C" String_t* CustomTypeDescriptor_GetComponentName_m3_612 (CustomTypeDescriptor_t3_102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter System.ComponentModel.CustomTypeDescriptor::GetConverter()
extern "C" TypeConverter_t3_83 * CustomTypeDescriptor_GetConverter_m3_613 (CustomTypeDescriptor_t3_102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptor System.ComponentModel.CustomTypeDescriptor::GetDefaultEvent()
extern "C" EventDescriptor_t3_124 * CustomTypeDescriptor_GetDefaultEvent_m3_614 (CustomTypeDescriptor_t3_102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.CustomTypeDescriptor::GetDefaultProperty()
extern "C" PropertyDescriptor_t3_70 * CustomTypeDescriptor_GetDefaultProperty_m3_615 (CustomTypeDescriptor_t3_102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.CustomTypeDescriptor::GetEditor(System.Type)
extern "C" Object_t * CustomTypeDescriptor_GetEditor_m3_616 (CustomTypeDescriptor_t3_102 * __this, Type_t * ___editorBaseType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.CustomTypeDescriptor::GetEvents()
extern "C" EventDescriptorCollection_t3_125 * CustomTypeDescriptor_GetEvents_m3_617 (CustomTypeDescriptor_t3_102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.CustomTypeDescriptor::GetEvents(System.Attribute[])
extern "C" EventDescriptorCollection_t3_125 * CustomTypeDescriptor_GetEvents_m3_618 (CustomTypeDescriptor_t3_102 * __this, AttributeU5BU5D_t1_937* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.CustomTypeDescriptor::GetProperties()
extern "C" PropertyDescriptorCollection_t3_158 * CustomTypeDescriptor_GetProperties_m3_619 (CustomTypeDescriptor_t3_102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.CustomTypeDescriptor::GetProperties(System.Attribute[])
extern "C" PropertyDescriptorCollection_t3_158 * CustomTypeDescriptor_GetProperties_m3_620 (CustomTypeDescriptor_t3_102 * __this, AttributeU5BU5D_t1_937* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.CustomTypeDescriptor::GetPropertyOwner(System.ComponentModel.PropertyDescriptor)
extern "C" Object_t * CustomTypeDescriptor_GetPropertyOwner_m3_621 (CustomTypeDescriptor_t3_102 * __this, PropertyDescriptor_t3_70 * ___pd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
