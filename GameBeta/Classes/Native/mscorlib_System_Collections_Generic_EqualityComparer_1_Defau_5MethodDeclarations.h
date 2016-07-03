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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t1_1425;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m1_8225_gshared (DefaultComparer_t1_1425 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m1_8225(__this, method) (( void (*) (DefaultComparer_t1_1425 *, const MethodInfo*))DefaultComparer__ctor_m1_8225_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m1_8226_gshared (DefaultComparer_t1_1425 * __this, Guid_t1_775  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m1_8226(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1_1425 *, Guid_t1_775 , const MethodInfo*))DefaultComparer_GetHashCode_m1_8226_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m1_8227_gshared (DefaultComparer_t1_1425 * __this, Guid_t1_775  ___x, Guid_t1_775  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m1_8227(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1_1425 *, Guid_t1_775 , Guid_t1_775 , const MethodInfo*))DefaultComparer_Equals_m1_8227_gshared)(__this, ___x, ___y, method)
