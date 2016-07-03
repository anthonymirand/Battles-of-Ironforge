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

// System.Net.UploadFileCompletedEventArgs
struct UploadFileCompletedEventArgs_t3_615;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.Exception
struct Exception_t1_33;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.UploadFileCompletedEventArgs::.ctor(System.Byte[],System.Exception,System.Boolean,System.Object)
extern "C" void UploadFileCompletedEventArgs__ctor_m3_4891 (UploadFileCompletedEventArgs_t3_615 * __this, ByteU5BU5D_t1_72* ___result, Exception_t1_33 * ___error, bool ___cancelled, Object_t * ___userState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.UploadFileCompletedEventArgs::get_Result()
extern "C" ByteU5BU5D_t1_72* UploadFileCompletedEventArgs_get_Result_m3_4892 (UploadFileCompletedEventArgs_t3_615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
