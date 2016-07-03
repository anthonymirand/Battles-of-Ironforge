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

// System.ComponentModel.EditorAttribute
struct EditorAttribute_t3_119;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.EditorAttribute::.ctor()
extern "C" void EditorAttribute__ctor_m3_723 (EditorAttribute_t3_119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.EditorAttribute::.ctor(System.String,System.String)
extern "C" void EditorAttribute__ctor_m3_724 (EditorAttribute_t3_119 * __this, String_t* ___typeName, String_t* ___baseTypeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.EditorAttribute::.ctor(System.String,System.Type)
extern "C" void EditorAttribute__ctor_m3_725 (EditorAttribute_t3_119 * __this, String_t* ___typeName, Type_t * ___baseType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.EditorAttribute::.ctor(System.Type,System.Type)
extern "C" void EditorAttribute__ctor_m3_726 (EditorAttribute_t3_119 * __this, Type_t * ___type, Type_t * ___baseType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.EditorAttribute::get_EditorBaseTypeName()
extern "C" String_t* EditorAttribute_get_EditorBaseTypeName_m3_727 (EditorAttribute_t3_119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.EditorAttribute::get_EditorTypeName()
extern "C" String_t* EditorAttribute_get_EditorTypeName_m3_728 (EditorAttribute_t3_119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.EditorAttribute::get_TypeId()
extern "C" Object_t * EditorAttribute_get_TypeId_m3_729 (EditorAttribute_t3_119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.EditorAttribute::Equals(System.Object)
extern "C" bool EditorAttribute_Equals_m3_730 (EditorAttribute_t3_119 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.EditorAttribute::GetHashCode()
extern "C" int32_t EditorAttribute_GetHashCode_m3_731 (EditorAttribute_t3_119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
