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

// System.Reflection.Assembly/ResourceCloseHandler
struct ResourceCloseHandler_t1_317;
// System.Reflection.Module
struct Module_t1_298;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t1_105;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Reflection.Assembly/ResourceCloseHandler::.ctor(System.Reflection.Module)
extern "C" void ResourceCloseHandler__ctor_m1_2915 (ResourceCloseHandler_t1_317 * __this, Module_t1_298 * ___module, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Assembly/ResourceCloseHandler::OnClose(System.Object,System.EventArgs)
extern "C" void ResourceCloseHandler_OnClose_m1_2916 (ResourceCloseHandler_t1_317 * __this, Object_t * ___sender, EventArgs_t1_105 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
