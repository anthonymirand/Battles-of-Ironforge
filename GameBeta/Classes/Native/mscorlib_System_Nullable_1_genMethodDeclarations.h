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
#include "mscorlib_System_Nullable_1_gen.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.Nullable`1<System.DateTime>::.ctor(T)
extern "C" void Nullable_1__ctor_m1_6009_gshared (Nullable_1_t1_236 * __this, DateTime_t1_128  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m1_6009(__this, ___value, method) (( void (*) (Nullable_1_t1_236 *, DateTime_t1_128 , const MethodInfo*))Nullable_1__ctor_m1_6009_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.DateTime>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m1_6008_gshared (Nullable_1_t1_236 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m1_6008(__this, method) (( bool (*) (Nullable_1_t1_236 *, const MethodInfo*))Nullable_1_get_HasValue_m1_6008_gshared)(__this, method)
// T System.Nullable`1<System.DateTime>::get_Value()
extern "C" DateTime_t1_128  Nullable_1_get_Value_m1_6010_gshared (Nullable_1_t1_236 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m1_6010(__this, method) (( DateTime_t1_128  (*) (Nullable_1_t1_236 *, const MethodInfo*))Nullable_1_get_Value_m1_6010_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.DateTime>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m1_7363_gshared (Nullable_1_t1_236 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m1_7363(__this, ___other, method) (( bool (*) (Nullable_1_t1_236 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m1_7363_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.DateTime>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m1_7364_gshared (Nullable_1_t1_236 * __this, Nullable_1_t1_236  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m1_7364(__this, ___other, method) (( bool (*) (Nullable_1_t1_236 *, Nullable_1_t1_236 , const MethodInfo*))Nullable_1_Equals_m1_7364_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.DateTime>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m1_7365_gshared (Nullable_1_t1_236 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m1_7365(__this, method) (( int32_t (*) (Nullable_1_t1_236 *, const MethodInfo*))Nullable_1_GetHashCode_m1_7365_gshared)(__this, method)
// System.String System.Nullable`1<System.DateTime>::ToString()
extern "C" String_t* Nullable_1_ToString_m1_7366_gshared (Nullable_1_t1_236 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m1_7366(__this, method) (( String_t* (*) (Nullable_1_t1_236 *, const MethodInfo*))Nullable_1_ToString_m1_7366_gshared)(__this, method)
