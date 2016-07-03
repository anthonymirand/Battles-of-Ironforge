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

// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t3_853;
// System.Object
struct Object_t;
// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t3_852;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::.ctor(T)
extern "C" void LinkedListNode_1__ctor_m3_6714_gshared (LinkedListNode_1_t3_853 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedListNode_1__ctor_m3_6714(__this, ___value, method) (( void (*) (LinkedListNode_1_t3_853 *, Object_t *, const MethodInfo*))LinkedListNode_1__ctor_m3_6714_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>,T)
extern "C" void LinkedListNode_1__ctor_m3_6715_gshared (LinkedListNode_1_t3_853 * __this, LinkedList_1_t3_852 * ___list, Object_t * ___value, const MethodInfo* method);
#define LinkedListNode_1__ctor_m3_6715(__this, ___list, ___value, method) (( void (*) (LinkedListNode_1_t3_853 *, LinkedList_1_t3_852 *, Object_t *, const MethodInfo*))LinkedListNode_1__ctor_m3_6715_gshared)(__this, ___list, ___value, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>,T,System.Collections.Generic.LinkedListNode`1<T>,System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedListNode_1__ctor_m3_6716_gshared (LinkedListNode_1_t3_853 * __this, LinkedList_1_t3_852 * ___list, Object_t * ___value, LinkedListNode_1_t3_853 * ___previousNode, LinkedListNode_1_t3_853 * ___nextNode, const MethodInfo* method);
#define LinkedListNode_1__ctor_m3_6716(__this, ___list, ___value, ___previousNode, ___nextNode, method) (( void (*) (LinkedListNode_1_t3_853 *, LinkedList_1_t3_852 *, Object_t *, LinkedListNode_1_t3_853 *, LinkedListNode_1_t3_853 *, const MethodInfo*))LinkedListNode_1__ctor_m3_6716_gshared)(__this, ___list, ___value, ___previousNode, ___nextNode, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::Detach()
extern "C" void LinkedListNode_1_Detach_m3_6717_gshared (LinkedListNode_1_t3_853 * __this, const MethodInfo* method);
#define LinkedListNode_1_Detach_m3_6717(__this, method) (( void (*) (LinkedListNode_1_t3_853 *, const MethodInfo*))LinkedListNode_1_Detach_m3_6717_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::SelfReference(System.Collections.Generic.LinkedList`1<T>)
extern "C" void LinkedListNode_1_SelfReference_m3_6718_gshared (LinkedListNode_1_t3_853 * __this, LinkedList_1_t3_852 * ___list, const MethodInfo* method);
#define LinkedListNode_1_SelfReference_m3_6718(__this, ___list, method) (( void (*) (LinkedListNode_1_t3_853 *, LinkedList_1_t3_852 *, const MethodInfo*))LinkedListNode_1_SelfReference_m3_6718_gshared)(__this, ___list, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::InsertBetween(System.Collections.Generic.LinkedListNode`1<T>,System.Collections.Generic.LinkedListNode`1<T>,System.Collections.Generic.LinkedList`1<T>)
extern "C" void LinkedListNode_1_InsertBetween_m3_6719_gshared (LinkedListNode_1_t3_853 * __this, LinkedListNode_1_t3_853 * ___previousNode, LinkedListNode_1_t3_853 * ___nextNode, LinkedList_1_t3_852 * ___list, const MethodInfo* method);
#define LinkedListNode_1_InsertBetween_m3_6719(__this, ___previousNode, ___nextNode, ___list, method) (( void (*) (LinkedListNode_1_t3_853 *, LinkedListNode_1_t3_853 *, LinkedListNode_1_t3_853 *, LinkedList_1_t3_852 *, const MethodInfo*))LinkedListNode_1_InsertBetween_m3_6719_gshared)(__this, ___previousNode, ___nextNode, ___list, method)
// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::get_List()
extern "C" LinkedList_1_t3_852 * LinkedListNode_1_get_List_m3_6720_gshared (LinkedListNode_1_t3_853 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_List_m3_6720(__this, method) (( LinkedList_1_t3_852 * (*) (LinkedListNode_1_t3_853 *, const MethodInfo*))LinkedListNode_1_get_List_m3_6720_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::get_Next()
extern "C" LinkedListNode_1_t3_853 * LinkedListNode_1_get_Next_m3_6721_gshared (LinkedListNode_1_t3_853 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_Next_m3_6721(__this, method) (( LinkedListNode_1_t3_853 * (*) (LinkedListNode_1_t3_853 *, const MethodInfo*))LinkedListNode_1_get_Next_m3_6721_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::get_Previous()
extern "C" LinkedListNode_1_t3_853 * LinkedListNode_1_get_Previous_m3_6722_gshared (LinkedListNode_1_t3_853 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_Previous_m3_6722(__this, method) (( LinkedListNode_1_t3_853 * (*) (LinkedListNode_1_t3_853 *, const MethodInfo*))LinkedListNode_1_get_Previous_m3_6722_gshared)(__this, method)
// T System.Collections.Generic.LinkedListNode`1<System.Object>::get_Value()
extern "C" Object_t * LinkedListNode_1_get_Value_m3_6723_gshared (LinkedListNode_1_t3_853 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_Value_m3_6723(__this, method) (( Object_t * (*) (LinkedListNode_1_t3_853 *, const MethodInfo*))LinkedListNode_1_get_Value_m3_6723_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::set_Value(T)
extern "C" void LinkedListNode_1_set_Value_m3_6724_gshared (LinkedListNode_1_t3_853 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedListNode_1_set_Value_m3_6724(__this, ___value, method) (( void (*) (LinkedListNode_1_t3_853 *, Object_t *, const MethodInfo*))LinkedListNode_1_set_Value_m3_6724_gshared)(__this, ___value, method)
