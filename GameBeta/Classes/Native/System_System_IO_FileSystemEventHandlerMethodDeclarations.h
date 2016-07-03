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

// System.IO.FileSystemEventHandler
struct FileSystemEventHandler_t3_265;
// System.Object
struct Object_t;
// System.IO.FileSystemEventArgs
struct FileSystemEventArgs_t3_261;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.IO.FileSystemEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void FileSystemEventHandler__ctor_m3_6555 (FileSystemEventHandler_t3_265 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemEventHandler::Invoke(System.Object,System.IO.FileSystemEventArgs)
extern "C" void FileSystemEventHandler_Invoke_m3_6556 (FileSystemEventHandler_t3_265 * __this, Object_t * ___sender, FileSystemEventArgs_t3_261 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_FileSystemEventHandler_t3_265(Il2CppObject* delegate, Object_t * ___sender, FileSystemEventArgs_t3_261 * ___e);
// System.IAsyncResult System.IO.FileSystemEventHandler::BeginInvoke(System.Object,System.IO.FileSystemEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * FileSystemEventHandler_BeginInvoke_m3_6557 (FileSystemEventHandler_t3_265 * __this, Object_t * ___sender, FileSystemEventArgs_t3_261 * ___e, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void FileSystemEventHandler_EndInvoke_m3_6558 (FileSystemEventHandler_t3_265 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
