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

// System.ComponentModel.MemberDescriptor
struct MemberDescriptor_t3_55;
// System.String
struct String_t;
// System.Attribute[]
struct AttributeU5BU5D_t1_937;
// System.Collections.IList
struct IList_t1_429;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t3_76;
// System.Object
struct Object_t;
// System.ComponentModel.ISite
struct ISite_t3_95;
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type[]
struct TypeU5BU5D_t1_31;
// System.Collections.IComparer
struct IComparer_t1_180;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.MemberDescriptor::.ctor(System.String,System.Attribute[])
extern "C" void MemberDescriptor__ctor_m3_945 (MemberDescriptor_t3_55 * __this, String_t* ___name, AttributeU5BU5D_t1_937* ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MemberDescriptor::.ctor(System.ComponentModel.MemberDescriptor,System.Attribute[])
extern "C" void MemberDescriptor__ctor_m3_946 (MemberDescriptor_t3_55 * __this, MemberDescriptor_t3_55 * ___reference, AttributeU5BU5D_t1_937* ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MemberDescriptor::.ctor(System.String)
extern "C" void MemberDescriptor__ctor_m3_947 (MemberDescriptor_t3_55 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MemberDescriptor::.ctor(System.ComponentModel.MemberDescriptor)
extern "C" void MemberDescriptor__ctor_m3_948 (MemberDescriptor_t3_55 * __this, MemberDescriptor_t3_55 * ___reference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute[] System.ComponentModel.MemberDescriptor::get_AttributeArray()
extern "C" AttributeU5BU5D_t1_937* MemberDescriptor_get_AttributeArray_m3_949 (MemberDescriptor_t3_55 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MemberDescriptor::set_AttributeArray(System.Attribute[])
extern "C" void MemberDescriptor_set_AttributeArray_m3_950 (MemberDescriptor_t3_55 * __this, AttributeU5BU5D_t1_937* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MemberDescriptor::FillAttributes(System.Collections.IList)
extern "C" void MemberDescriptor_FillAttributes_m3_951 (MemberDescriptor_t3_55 * __this, Object_t * ___attributeList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::get_Attributes()
extern "C" AttributeCollection_t3_76 * MemberDescriptor_get_Attributes_m3_952 (MemberDescriptor_t3_55 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::CreateAttributeCollection()
extern "C" AttributeCollection_t3_76 * MemberDescriptor_CreateAttributeCollection_m3_953 (MemberDescriptor_t3_55 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.MemberDescriptor::get_Category()
extern "C" String_t* MemberDescriptor_get_Category_m3_954 (MemberDescriptor_t3_55 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.MemberDescriptor::get_Description()
extern "C" String_t* MemberDescriptor_get_Description_m3_955 (MemberDescriptor_t3_55 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MemberDescriptor::get_DesignTimeOnly()
extern "C" bool MemberDescriptor_get_DesignTimeOnly_m3_956 (MemberDescriptor_t3_55 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.MemberDescriptor::get_DisplayName()
extern "C" String_t* MemberDescriptor_get_DisplayName_m3_957 (MemberDescriptor_t3_55 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.MemberDescriptor::get_Name()
extern "C" String_t* MemberDescriptor_get_Name_m3_958 (MemberDescriptor_t3_55 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MemberDescriptor::get_IsBrowsable()
extern "C" bool MemberDescriptor_get_IsBrowsable_m3_959 (MemberDescriptor_t3_55 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.MemberDescriptor::get_NameHashCode()
extern "C" int32_t MemberDescriptor_get_NameHashCode_m3_960 (MemberDescriptor_t3_55 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.MemberDescriptor::GetHashCode()
extern "C" int32_t MemberDescriptor_GetHashCode_m3_961 (MemberDescriptor_t3_55 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MemberDescriptor::Equals(System.Object)
extern "C" bool MemberDescriptor_Equals_m3_962 (MemberDescriptor_t3_55 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ISite System.ComponentModel.MemberDescriptor::GetSite(System.Object)
extern "C" Object_t * MemberDescriptor_GetSite_m3_963 (Object_t * __this /* static, unused */, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.MemberDescriptor::GetInvokee(System.Type,System.Object)
extern "C" Object_t * MemberDescriptor_GetInvokee_m3_964 (Object_t * __this /* static, unused */, Type_t * ___componentClass, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.MemberDescriptor::GetInvocationTarget(System.Type,System.Object)
extern "C" Object_t * MemberDescriptor_GetInvocationTarget_m3_965 (MemberDescriptor_t3_55 * __this, Type_t * ___type, Object_t * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.ComponentModel.MemberDescriptor::FindMethod(System.Type,System.String,System.Type[],System.Type)
extern "C" MethodInfo_t * MemberDescriptor_FindMethod_m3_966 (Object_t * __this /* static, unused */, Type_t * ___componentClass, String_t* ___name, TypeU5BU5D_t1_31* ___args, Type_t * ___returnType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.ComponentModel.MemberDescriptor::FindMethod(System.Type,System.String,System.Type[],System.Type,System.Boolean)
extern "C" MethodInfo_t * MemberDescriptor_FindMethod_m3_967 (Object_t * __this /* static, unused */, Type_t * ___componentClass, String_t* ___name, TypeU5BU5D_t1_31* ___args, Type_t * ___returnType, bool ___publicOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IComparer System.ComponentModel.MemberDescriptor::get_DefaultComparer()
extern "C" Object_t * MemberDescriptor_get_DefaultComparer_m3_968 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
