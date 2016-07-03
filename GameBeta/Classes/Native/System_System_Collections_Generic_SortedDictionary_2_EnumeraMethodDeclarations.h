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

// System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>
struct SortedDictionary_2_t3_861;
// System.Object
struct Object_t;
// System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>
struct Node_t3_865;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Collections_Generic_SortedDictionary_2_Enumera.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"

// System.Void System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.SortedDictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m3_6891_gshared (Enumerator_t3_868 * __this, SortedDictionary_2_t3_861 * ___dic, const MethodInfo* method);
#define Enumerator__ctor_m3_6891(__this, ___dic, method) (( void (*) (Enumerator_t3_868 *, SortedDictionary_2_t3_861 *, const MethodInfo*))Enumerator__ctor_m3_6891_gshared)(__this, ___dic, method)
// System.Collections.DictionaryEntry System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1_168  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m3_6892_gshared (Enumerator_t3_868 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m3_6892(__this, method) (( DictionaryEntry_t1_168  (*) (Enumerator_t3_868 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m3_6892_gshared)(__this, method)
// System.Object System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m3_6893_gshared (Enumerator_t3_868 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m3_6893(__this, method) (( Object_t * (*) (Enumerator_t3_868 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m3_6893_gshared)(__this, method)
// System.Object System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m3_6894_gshared (Enumerator_t3_868 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m3_6894(__this, method) (( Object_t * (*) (Enumerator_t3_868 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m3_6894_gshared)(__this, method)
// System.Object System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m3_6895_gshared (Enumerator_t3_868 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m3_6895(__this, method) (( Object_t * (*) (Enumerator_t3_868 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m3_6895_gshared)(__this, method)
// System.Void System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m3_6896_gshared (Enumerator_t3_868 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m3_6896(__this, method) (( void (*) (Enumerator_t3_868 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m3_6896_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1_1328  Enumerator_get_Current_m3_6897_gshared (Enumerator_t3_868 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m3_6897(__this, method) (( KeyValuePair_2_t1_1328  (*) (Enumerator_t3_868 *, const MethodInfo*))Enumerator_get_Current_m3_6897_gshared)(__this, method)
// System.Boolean System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m3_6898_gshared (Enumerator_t3_868 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m3_6898(__this, method) (( bool (*) (Enumerator_t3_868 *, const MethodInfo*))Enumerator_MoveNext_m3_6898_gshared)(__this, method)
// System.Void System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m3_6899_gshared (Enumerator_t3_868 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m3_6899(__this, method) (( void (*) (Enumerator_t3_868 *, const MethodInfo*))Enumerator_Dispose_m3_6899_gshared)(__this, method)
// System.Collections.Generic.SortedDictionary`2/Node<TKey,TValue> System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::get_CurrentNode()
extern "C" Node_t3_865 * Enumerator_get_CurrentNode_m3_6900_gshared (Enumerator_t3_868 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentNode_m3_6900(__this, method) (( Node_t3_865 * (*) (Enumerator_t3_868 *, const MethodInfo*))Enumerator_get_CurrentNode_m3_6900_gshared)(__this, method)
