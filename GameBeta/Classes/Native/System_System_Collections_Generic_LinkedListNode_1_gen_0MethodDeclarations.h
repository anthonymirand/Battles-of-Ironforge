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

// System.Collections.Generic.LinkedListNode`1<System.Int32>
struct LinkedListNode_1_t3_850;
// System.Collections.Generic.LinkedList`1<System.Int32>
struct LinkedList_1_t3_849;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.Generic.LinkedListNode`1<System.Int32>::.ctor(T)
extern "C" void LinkedListNode_1__ctor_m3_7138_gshared (LinkedListNode_1_t3_850 * __this, int32_t ___value, const MethodInfo* method);
#define LinkedListNode_1__ctor_m3_7138(__this, ___value, method) (( void (*) (LinkedListNode_1_t3_850 *, int32_t, const MethodInfo*))LinkedListNode_1__ctor_m3_7138_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Int32>::.ctor(System.Collections.Generic.LinkedList`1<T>,T)
extern "C" void LinkedListNode_1__ctor_m3_7139_gshared (LinkedListNode_1_t3_850 * __this, LinkedList_1_t3_849 * ___list, int32_t ___value, const MethodInfo* method);
#define LinkedListNode_1__ctor_m3_7139(__this, ___list, ___value, method) (( void (*) (LinkedListNode_1_t3_850 *, LinkedList_1_t3_849 *, int32_t, const MethodInfo*))LinkedListNode_1__ctor_m3_7139_gshared)(__this, ___list, ___value, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Int32>::.ctor(System.Collections.Generic.LinkedList`1<T>,T,System.Collections.Generic.LinkedListNode`1<T>,System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedListNode_1__ctor_m3_7140_gshared (LinkedListNode_1_t3_850 * __this, LinkedList_1_t3_849 * ___list, int32_t ___value, LinkedListNode_1_t3_850 * ___previousNode, LinkedListNode_1_t3_850 * ___nextNode, const MethodInfo* method);
#define LinkedListNode_1__ctor_m3_7140(__this, ___list, ___value, ___previousNode, ___nextNode, method) (( void (*) (LinkedListNode_1_t3_850 *, LinkedList_1_t3_849 *, int32_t, LinkedListNode_1_t3_850 *, LinkedListNode_1_t3_850 *, const MethodInfo*))LinkedListNode_1__ctor_m3_7140_gshared)(__this, ___list, ___value, ___previousNode, ___nextNode, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Int32>::Detach()
extern "C" void LinkedListNode_1_Detach_m3_7141_gshared (LinkedListNode_1_t3_850 * __this, const MethodInfo* method);
#define LinkedListNode_1_Detach_m3_7141(__this, method) (( void (*) (LinkedListNode_1_t3_850 *, const MethodInfo*))LinkedListNode_1_Detach_m3_7141_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Int32>::SelfReference(System.Collections.Generic.LinkedList`1<T>)
extern "C" void LinkedListNode_1_SelfReference_m3_7142_gshared (LinkedListNode_1_t3_850 * __this, LinkedList_1_t3_849 * ___list, const MethodInfo* method);
#define LinkedListNode_1_SelfReference_m3_7142(__this, ___list, method) (( void (*) (LinkedListNode_1_t3_850 *, LinkedList_1_t3_849 *, const MethodInfo*))LinkedListNode_1_SelfReference_m3_7142_gshared)(__this, ___list, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Int32>::InsertBetween(System.Collections.Generic.LinkedListNode`1<T>,System.Collections.Generic.LinkedListNode`1<T>,System.Collections.Generic.LinkedList`1<T>)
extern "C" void LinkedListNode_1_InsertBetween_m3_7143_gshared (LinkedListNode_1_t3_850 * __this, LinkedListNode_1_t3_850 * ___previousNode, LinkedListNode_1_t3_850 * ___nextNode, LinkedList_1_t3_849 * ___list, const MethodInfo* method);
#define LinkedListNode_1_InsertBetween_m3_7143(__this, ___previousNode, ___nextNode, ___list, method) (( void (*) (LinkedListNode_1_t3_850 *, LinkedListNode_1_t3_850 *, LinkedListNode_1_t3_850 *, LinkedList_1_t3_849 *, const MethodInfo*))LinkedListNode_1_InsertBetween_m3_7143_gshared)(__this, ___previousNode, ___nextNode, ___list, method)
// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1<System.Int32>::get_List()
extern "C" LinkedList_1_t3_849 * LinkedListNode_1_get_List_m3_7144_gshared (LinkedListNode_1_t3_850 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_List_m3_7144(__this, method) (( LinkedList_1_t3_849 * (*) (LinkedListNode_1_t3_850 *, const MethodInfo*))LinkedListNode_1_get_List_m3_7144_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1<System.Int32>::get_Next()
extern "C" LinkedListNode_1_t3_850 * LinkedListNode_1_get_Next_m3_6673_gshared (LinkedListNode_1_t3_850 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_Next_m3_6673(__this, method) (( LinkedListNode_1_t3_850 * (*) (LinkedListNode_1_t3_850 *, const MethodInfo*))LinkedListNode_1_get_Next_m3_6673_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1<System.Int32>::get_Previous()
extern "C" LinkedListNode_1_t3_850 * LinkedListNode_1_get_Previous_m3_7145_gshared (LinkedListNode_1_t3_850 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_Previous_m3_7145(__this, method) (( LinkedListNode_1_t3_850 * (*) (LinkedListNode_1_t3_850 *, const MethodInfo*))LinkedListNode_1_get_Previous_m3_7145_gshared)(__this, method)
// T System.Collections.Generic.LinkedListNode`1<System.Int32>::get_Value()
extern "C" int32_t LinkedListNode_1_get_Value_m3_6672_gshared (LinkedListNode_1_t3_850 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_Value_m3_6672(__this, method) (( int32_t (*) (LinkedListNode_1_t3_850 *, const MethodInfo*))LinkedListNode_1_get_Value_m3_6672_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Int32>::set_Value(T)
extern "C" void LinkedListNode_1_set_Value_m3_7146_gshared (LinkedListNode_1_t3_850 * __this, int32_t ___value, const MethodInfo* method);
#define LinkedListNode_1_set_Value_m3_7146(__this, ___value, method) (( void (*) (LinkedListNode_1_t3_850 *, int32_t, const MethodInfo*))LinkedListNode_1_set_Value_m3_7146_gshared)(__this, ___value, method)
