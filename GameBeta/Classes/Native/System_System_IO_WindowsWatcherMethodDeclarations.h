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

// System.IO.WindowsWatcher
struct WindowsWatcher_t3_292;
// System.IO.IFileWatcher
struct IFileWatcher_t3_268;
// System.IO.FileSystemWatcher
struct FileSystemWatcher_t3_251;

#include "codegen/il2cpp-codegen.h"

// System.Void System.IO.WindowsWatcher::.ctor()
extern "C" void WindowsWatcher__ctor_m3_2214 (WindowsWatcher_t3_292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.WindowsWatcher::GetInstance(System.IO.IFileWatcher&)
extern "C" bool WindowsWatcher_GetInstance_m3_2215 (Object_t * __this /* static, unused */, Object_t ** ___watcher, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.WindowsWatcher::StartDispatching(System.IO.FileSystemWatcher)
extern "C" void WindowsWatcher_StartDispatching_m3_2216 (WindowsWatcher_t3_292 * __this, FileSystemWatcher_t3_251 * ___fsw, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.WindowsWatcher::StopDispatching(System.IO.FileSystemWatcher)
extern "C" void WindowsWatcher_StopDispatching_m3_2217 (WindowsWatcher_t3_292 * __this, FileSystemWatcher_t3_251 * ___fsw, const MethodInfo* method) IL2CPP_METHOD_ATTR;
