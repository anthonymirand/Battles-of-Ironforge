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

// System.ComponentModel.DesignerAttribute
struct DesignerAttribute_t3_112;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.DesignerAttribute::.ctor(System.String)
extern "C" void DesignerAttribute__ctor_m3_680 (DesignerAttribute_t3_112 * __this, String_t* ___designerTypeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.DesignerAttribute::.ctor(System.Type)
extern "C" void DesignerAttribute__ctor_m3_681 (DesignerAttribute_t3_112 * __this, Type_t * ___designerType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.DesignerAttribute::.ctor(System.String,System.Type)
extern "C" void DesignerAttribute__ctor_m3_682 (DesignerAttribute_t3_112 * __this, String_t* ___designerTypeName, Type_t * ___designerBaseType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.DesignerAttribute::.ctor(System.Type,System.Type)
extern "C" void DesignerAttribute__ctor_m3_683 (DesignerAttribute_t3_112 * __this, Type_t * ___designerType, Type_t * ___designerBaseType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.DesignerAttribute::.ctor(System.String,System.String)
extern "C" void DesignerAttribute__ctor_m3_684 (DesignerAttribute_t3_112 * __this, String_t* ___designerTypeName, String_t* ___designerBaseTypeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.DesignerAttribute::get_DesignerBaseTypeName()
extern "C" String_t* DesignerAttribute_get_DesignerBaseTypeName_m3_685 (DesignerAttribute_t3_112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.DesignerAttribute::get_DesignerTypeName()
extern "C" String_t* DesignerAttribute_get_DesignerTypeName_m3_686 (DesignerAttribute_t3_112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.DesignerAttribute::get_TypeId()
extern "C" Object_t * DesignerAttribute_get_TypeId_m3_687 (DesignerAttribute_t3_112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.DesignerAttribute::Equals(System.Object)
extern "C" bool DesignerAttribute_Equals_m3_688 (DesignerAttribute_t3_112 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.DesignerAttribute::GetHashCode()
extern "C" int32_t DesignerAttribute_GetHashCode_m3_689 (DesignerAttribute_t3_112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
