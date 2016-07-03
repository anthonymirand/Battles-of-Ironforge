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

// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Nullable_1_gen_0.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" void Nullable_1__ctor_m1_6024_gshared (Nullable_1_t1_880 * __this, TimeSpan_t1_218  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m1_6024(__this, ___value, method) (( void (*) (Nullable_1_t1_880 *, TimeSpan_t1_218 , const MethodInfo*))Nullable_1__ctor_m1_6024_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m1_6025_gshared (Nullable_1_t1_880 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m1_6025(__this, method) (( bool (*) (Nullable_1_t1_880 *, const MethodInfo*))Nullable_1_get_HasValue_m1_6025_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t1_218  Nullable_1_get_Value_m1_6026_gshared (Nullable_1_t1_880 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m1_6026(__this, method) (( TimeSpan_t1_218  (*) (Nullable_1_t1_880 *, const MethodInfo*))Nullable_1_get_Value_m1_6026_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m1_8207_gshared (Nullable_1_t1_880 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m1_8207(__this, ___other, method) (( bool (*) (Nullable_1_t1_880 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m1_8207_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m1_8208_gshared (Nullable_1_t1_880 * __this, Nullable_1_t1_880  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m1_8208(__this, ___other, method) (( bool (*) (Nullable_1_t1_880 *, Nullable_1_t1_880 , const MethodInfo*))Nullable_1_Equals_m1_8208_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m1_8209_gshared (Nullable_1_t1_880 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m1_8209(__this, method) (( int32_t (*) (Nullable_1_t1_880 *, const MethodInfo*))Nullable_1_GetHashCode_m1_8209_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m1_8210_gshared (Nullable_1_t1_880 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m1_8210(__this, method) (( String_t* (*) (Nullable_1_t1_880 *, const MethodInfo*))Nullable_1_ToString_m1_8210_gshared)(__this, method)
