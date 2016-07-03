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

// System.WeakReference
struct WeakReference_t1_498;
// System.Object
struct Object_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.WeakReference::.ctor()
extern "C" void WeakReference__ctor_m1_5933 (WeakReference_t1_498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::.ctor(System.Object)
extern "C" void WeakReference__ctor_m1_5934 (WeakReference_t1_498 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::.ctor(System.Object,System.Boolean)
extern "C" void WeakReference__ctor_m1_5935 (WeakReference_t1_498 * __this, Object_t * ___target, bool ___trackResurrection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WeakReference__ctor_m1_5936 (WeakReference_t1_498 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::AllocateHandle(System.Object)
extern "C" void WeakReference_AllocateHandle_m1_5937 (WeakReference_t1_498 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.WeakReference::get_IsAlive()
extern "C" bool WeakReference_get_IsAlive_m1_5938 (WeakReference_t1_498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.WeakReference::get_Target()
extern "C" Object_t * WeakReference_get_Target_m1_5939 (WeakReference_t1_498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.WeakReference::get_TrackResurrection()
extern "C" bool WeakReference_get_TrackResurrection_m1_5940 (WeakReference_t1_498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::Finalize()
extern "C" void WeakReference_Finalize_m1_5941 (WeakReference_t1_498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WeakReference_GetObjectData_m1_5942 (WeakReference_t1_498 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
