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

// System.Net.OpenReadCompletedEventArgs
struct OpenReadCompletedEventArgs_t3_605;
// System.IO.Stream
struct Stream_t1_226;
// System.Exception
struct Exception_t1_33;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.OpenReadCompletedEventArgs::.ctor(System.IO.Stream,System.Exception,System.Boolean,System.Object)
extern "C" void OpenReadCompletedEventArgs__ctor_m3_4748 (OpenReadCompletedEventArgs_t3_605 * __this, Stream_t1_226 * ___result, Exception_t1_33 * ___error, bool ___cancelled, Object_t * ___userState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.OpenReadCompletedEventArgs::get_Result()
extern "C" Stream_t1_226 * OpenReadCompletedEventArgs_get_Result_m3_4749 (OpenReadCompletedEventArgs_t3_605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
