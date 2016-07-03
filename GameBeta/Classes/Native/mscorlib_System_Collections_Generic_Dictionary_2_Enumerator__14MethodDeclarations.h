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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1_1734;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__14.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m1_12934_gshared (Enumerator_t1_1740 * __this, Dictionary_2_t1_1734 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m1_12934(__this, ___dictionary, method) (( void (*) (Enumerator_t1_1740 *, Dictionary_2_t1_1734 *, const MethodInfo*))Enumerator__ctor_m1_12934_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m1_12935_gshared (Enumerator_t1_1740 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m1_12935(__this, method) (( Object_t * (*) (Enumerator_t1_1740 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m1_12935_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m1_12936_gshared (Enumerator_t1_1740 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m1_12936(__this, method) (( void (*) (Enumerator_t1_1740 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m1_12936_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1_168  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_12937_gshared (Enumerator_t1_1740 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_12937(__this, method) (( DictionaryEntry_t1_168  (*) (Enumerator_t1_1740 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_12937_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_12938_gshared (Enumerator_t1_1740 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_12938(__this, method) (( Object_t * (*) (Enumerator_t1_1740 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_12938_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_12939_gshared (Enumerator_t1_1740 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_12939(__this, method) (( Object_t * (*) (Enumerator_t1_1740 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_12939_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m1_12940_gshared (Enumerator_t1_1740 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m1_12940(__this, method) (( bool (*) (Enumerator_t1_1740 *, const MethodInfo*))Enumerator_MoveNext_m1_12940_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1_1736  Enumerator_get_Current_m1_12941_gshared (Enumerator_t1_1740 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m1_12941(__this, method) (( KeyValuePair_2_t1_1736  (*) (Enumerator_t1_1740 *, const MethodInfo*))Enumerator_get_Current_m1_12941_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m1_12942_gshared (Enumerator_t1_1740 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m1_12942(__this, method) (( int32_t (*) (Enumerator_t1_1740 *, const MethodInfo*))Enumerator_get_CurrentKey_m1_12942_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m1_12943_gshared (Enumerator_t1_1740 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m1_12943(__this, method) (( Object_t * (*) (Enumerator_t1_1740 *, const MethodInfo*))Enumerator_get_CurrentValue_m1_12943_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Reset()
extern "C" void Enumerator_Reset_m1_12944_gshared (Enumerator_t1_1740 * __this, const MethodInfo* method);
#define Enumerator_Reset_m1_12944(__this, method) (( void (*) (Enumerator_t1_1740 *, const MethodInfo*))Enumerator_Reset_m1_12944_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m1_12945_gshared (Enumerator_t1_1740 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m1_12945(__this, method) (( void (*) (Enumerator_t1_1740 *, const MethodInfo*))Enumerator_VerifyState_m1_12945_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m1_12946_gshared (Enumerator_t1_1740 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m1_12946(__this, method) (( void (*) (Enumerator_t1_1740 *, const MethodInfo*))Enumerator_VerifyCurrent_m1_12946_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m1_12947_gshared (Enumerator_t1_1740 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m1_12947(__this, method) (( void (*) (Enumerator_t1_1740 *, const MethodInfo*))Enumerator_Dispose_m1_12947_gshared)(__this, method)
