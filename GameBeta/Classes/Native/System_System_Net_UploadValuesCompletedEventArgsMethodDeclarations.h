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

// System.Net.UploadValuesCompletedEventArgs
struct UploadValuesCompletedEventArgs_t3_618;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.Exception
struct Exception_t1_33;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.UploadValuesCompletedEventArgs::.ctor(System.Byte[],System.Exception,System.Boolean,System.Object)
extern "C" void UploadValuesCompletedEventArgs__ctor_m3_4900 (UploadValuesCompletedEventArgs_t3_618 * __this, ByteU5BU5D_t1_72* ___result, Exception_t1_33 * ___error, bool ___cancelled, Object_t * ___userState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.UploadValuesCompletedEventArgs::get_Result()
extern "C" ByteU5BU5D_t1_72* UploadValuesCompletedEventArgs_get_Result_m3_4901 (UploadValuesCompletedEventArgs_t3_618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
