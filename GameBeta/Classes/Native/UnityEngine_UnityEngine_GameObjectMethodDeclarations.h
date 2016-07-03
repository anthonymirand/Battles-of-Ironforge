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

// UnityEngine.GameObject
struct GameObject_t5_113;
// System.String
struct String_t;
// System.Type[]
struct TypeU5BU5D_t1_31;
// UnityEngine.Component
struct Component_t5_28;
// System.Type
struct Type_t;
// System.Array
struct Array_t;
// System.Object
struct Object_t;
// UnityEngine.Transform
struct Transform_t5_83;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t5_330;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_PrimitiveType.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_SendMessageOptions.h"

// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C" void GameObject__ctor_m5_1078 (GameObject_t5_113 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::.ctor()
extern "C" void GameObject__ctor_m5_1079 (GameObject_t5_113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::.ctor(System.String,System.Type[])
extern "C" void GameObject__ctor_m5_1080 (GameObject_t5_113 * __this, String_t* ___name, TypeU5BU5D_t1_31* ___components, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
extern "C" GameObject_t5_113 * GameObject_CreatePrimitive_m5_1081 (Object_t * __this /* static, unused */, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
extern "C" Component_t5_28 * GameObject_GetComponent_m5_1082 (GameObject_t5_113 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)
extern "C" void GameObject_GetComponentFastPath_m5_1083 (GameObject_t5_113 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponentInChildren(System.Type)
extern "C" Component_t5_28 * GameObject_GetComponentInChildren_m5_1084 (GameObject_t5_113 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponentInParent(System.Type)
extern "C" Component_t5_28 * GameObject_GetComponentInParent_m5_1085 (GameObject_t5_113 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
extern "C" Array_t * GameObject_GetComponentsInternal_m5_1086 (GameObject_t5_113 * __this, Type_t * ___type, bool ___useSearchTypeAsArrayReturnType, bool ___recursive, bool ___includeInactive, bool ___reverse, Object_t * ___resultList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" Transform_t5_83 * GameObject_get_transform_m5_1087 (GameObject_t5_113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GameObject::get_layer()
extern "C" int32_t GameObject_get_layer_m5_1088 (GameObject_t5_113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
extern "C" void GameObject_set_layer_m5_1089 (GameObject_t5_113 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C" void GameObject_SetActive_m5_1090 (GameObject_t5_113 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
extern "C" bool GameObject_get_activeSelf_m5_1091 (GameObject_t5_113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
extern "C" bool GameObject_get_activeInHierarchy_m5_1092 (GameObject_t5_113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GameObject::get_tag()
extern "C" String_t* GameObject_get_tag_m5_1093 (GameObject_t5_113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::set_tag(System.String)
extern "C" void GameObject_set_tag_m5_1094 (GameObject_t5_113 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
extern "C" GameObject_t5_113 * GameObject_FindGameObjectWithTag_m5_1095 (Object_t * __this /* static, unused */, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
extern "C" GameObjectU5BU5D_t5_330* GameObject_FindGameObjectsWithTag_m5_1096 (Object_t * __this /* static, unused */, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C" void GameObject_SendMessage_m5_1097 (GameObject_t5_113 * __this, String_t* ___methodName, Object_t * ___value, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SendMessage(System.String)
extern "C" void GameObject_SendMessage_m5_1098 (GameObject_t5_113 * __this, String_t* ___methodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::BroadcastMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C" void GameObject_BroadcastMessage_m5_1099 (GameObject_t5_113 * __this, String_t* ___methodName, Object_t * ___parameter, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::BroadcastMessage(System.String)
extern "C" void GameObject_BroadcastMessage_m5_1100 (GameObject_t5_113 * __this, String_t* ___methodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::BroadcastMessage(System.String,UnityEngine.SendMessageOptions)
extern "C" void GameObject_BroadcastMessage_m5_1101 (GameObject_t5_113 * __this, String_t* ___methodName, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)
extern "C" Component_t5_28 * GameObject_Internal_AddComponentWithType_m5_1102 (GameObject_t5_113 * __this, Type_t * ___componentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
extern "C" Component_t5_28 * GameObject_AddComponent_m5_1103 (GameObject_t5_113 * __this, Type_t * ___componentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)
extern "C" void GameObject_Internal_CreateGameObject_m5_1104 (Object_t * __this /* static, unused */, GameObject_t5_113 * ___mono, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C" GameObject_t5_113 * GameObject_Find_m5_1105 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
