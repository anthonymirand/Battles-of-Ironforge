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

// System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor
struct ArrayPropertyDescriptor_t3_69;
// System.Type
struct Type_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::.ctor(System.Int32,System.Type)
extern "C" void ArrayPropertyDescriptor__ctor_m3_441 (ArrayPropertyDescriptor_t3_69 * __this, int32_t ___index, Type_t * ___array_type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::get_ComponentType()
extern "C" Type_t * ArrayPropertyDescriptor_get_ComponentType_m3_442 (ArrayPropertyDescriptor_t3_69 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::get_PropertyType()
extern "C" Type_t * ArrayPropertyDescriptor_get_PropertyType_m3_443 (ArrayPropertyDescriptor_t3_69 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::get_IsReadOnly()
extern "C" bool ArrayPropertyDescriptor_get_IsReadOnly_m3_444 (ArrayPropertyDescriptor_t3_69 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::GetValue(System.Object)
extern "C" Object_t * ArrayPropertyDescriptor_GetValue_m3_445 (ArrayPropertyDescriptor_t3_69 * __this, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::SetValue(System.Object,System.Object)
extern "C" void ArrayPropertyDescriptor_SetValue_m3_446 (ArrayPropertyDescriptor_t3_69 * __this, Object_t * ___component, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::ResetValue(System.Object)
extern "C" void ArrayPropertyDescriptor_ResetValue_m3_447 (ArrayPropertyDescriptor_t3_69 * __this, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::CanResetValue(System.Object)
extern "C" bool ArrayPropertyDescriptor_CanResetValue_m3_448 (ArrayPropertyDescriptor_t3_69 * __this, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::ShouldSerializeValue(System.Object)
extern "C" bool ArrayPropertyDescriptor_ShouldSerializeValue_m3_449 (ArrayPropertyDescriptor_t3_69 * __this, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
