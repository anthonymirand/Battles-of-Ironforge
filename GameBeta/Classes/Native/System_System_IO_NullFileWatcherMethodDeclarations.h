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

// System.IO.NullFileWatcher
struct NullFileWatcher_t3_287;
// System.IO.FileSystemWatcher
struct FileSystemWatcher_t3_251;
// System.IO.IFileWatcher
struct IFileWatcher_t3_268;

#include "codegen/il2cpp-codegen.h"

// System.Void System.IO.NullFileWatcher::.ctor()
extern "C" void NullFileWatcher__ctor_m3_2190 (NullFileWatcher_t3_287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.NullFileWatcher::StartDispatching(System.IO.FileSystemWatcher)
extern "C" void NullFileWatcher_StartDispatching_m3_2191 (NullFileWatcher_t3_287 * __this, FileSystemWatcher_t3_251 * ___fsw, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.NullFileWatcher::StopDispatching(System.IO.FileSystemWatcher)
extern "C" void NullFileWatcher_StopDispatching_m3_2192 (NullFileWatcher_t3_287 * __this, FileSystemWatcher_t3_251 * ___fsw, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.NullFileWatcher::GetInstance(System.IO.IFileWatcher&)
extern "C" bool NullFileWatcher_GetInstance_m3_2193 (Object_t * __this /* static, unused */, Object_t ** ___watcher, const MethodInfo* method) IL2CPP_METHOD_ATTR;
