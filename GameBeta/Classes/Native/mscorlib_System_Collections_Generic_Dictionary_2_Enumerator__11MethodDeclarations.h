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

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t1_1563;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__11.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m1_10699_gshared (Enumerator_t1_1569 * __this, Dictionary_2_t1_1563 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m1_10699(__this, ___dictionary, method) (( void (*) (Enumerator_t1_1569 *, Dictionary_2_t1_1563 *, const MethodInfo*))Enumerator__ctor_m1_10699_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m1_10700_gshared (Enumerator_t1_1569 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m1_10700(__this, method) (( Object_t * (*) (Enumerator_t1_1569 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m1_10700_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m1_10701_gshared (Enumerator_t1_1569 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m1_10701(__this, method) (( void (*) (Enumerator_t1_1569 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m1_10701_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1_168  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_10702_gshared (Enumerator_t1_1569 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_10702(__this, method) (( DictionaryEntry_t1_168  (*) (Enumerator_t1_1569 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_10702_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_10703_gshared (Enumerator_t1_1569 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_10703(__this, method) (( Object_t * (*) (Enumerator_t1_1569 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_10703_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_10704_gshared (Enumerator_t1_1569 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_10704(__this, method) (( Object_t * (*) (Enumerator_t1_1569 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_10704_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool Enumerator_MoveNext_m1_10705_gshared (Enumerator_t1_1569 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m1_10705(__this, method) (( bool (*) (Enumerator_t1_1569 *, const MethodInfo*))Enumerator_MoveNext_m1_10705_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_Current()
extern "C" KeyValuePair_2_t1_1565  Enumerator_get_Current_m1_10706_gshared (Enumerator_t1_1569 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m1_10706(__this, method) (( KeyValuePair_2_t1_1565  (*) (Enumerator_t1_1569 *, const MethodInfo*))Enumerator_get_Current_m1_10706_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m1_10707_gshared (Enumerator_t1_1569 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m1_10707(__this, method) (( Object_t * (*) (Enumerator_t1_1569 *, const MethodInfo*))Enumerator_get_CurrentKey_m1_10707_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentValue()
extern "C" bool Enumerator_get_CurrentValue_m1_10708_gshared (Enumerator_t1_1569 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m1_10708(__this, method) (( bool (*) (Enumerator_t1_1569 *, const MethodInfo*))Enumerator_get_CurrentValue_m1_10708_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::Reset()
extern "C" void Enumerator_Reset_m1_10709_gshared (Enumerator_t1_1569 * __this, const MethodInfo* method);
#define Enumerator_Reset_m1_10709(__this, method) (( void (*) (Enumerator_t1_1569 *, const MethodInfo*))Enumerator_Reset_m1_10709_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyState()
extern "C" void Enumerator_VerifyState_m1_10710_gshared (Enumerator_t1_1569 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m1_10710(__this, method) (( void (*) (Enumerator_t1_1569 *, const MethodInfo*))Enumerator_VerifyState_m1_10710_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m1_10711_gshared (Enumerator_t1_1569 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m1_10711(__this, method) (( void (*) (Enumerator_t1_1569 *, const MethodInfo*))Enumerator_VerifyCurrent_m1_10711_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::Dispose()
extern "C" void Enumerator_Dispose_m1_10712_gshared (Enumerator_t1_1569 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m1_10712(__this, method) (( void (*) (Enumerator_t1_1569 *, const MethodInfo*))Enumerator_Dispose_m1_10712_gshared)(__this, method)
