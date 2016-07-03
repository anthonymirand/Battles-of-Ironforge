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

// System.ComponentModel.Component
struct Component_t3_93;
// System.EventHandler
struct EventHandler_t1_275;
// System.ComponentModel.ISite
struct ISite_t3_95;
// System.ComponentModel.IContainer
struct IContainer_t3_810;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t3_94;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.Component::.ctor()
extern "C" void Component__ctor_m3_577 (Component_t3_93 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Component::add_Disposed(System.EventHandler)
extern "C" void Component_add_Disposed_m3_578 (Component_t3_93 * __this, EventHandler_t1_275 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Component::remove_Disposed(System.EventHandler)
extern "C" void Component_remove_Disposed_m3_579 (Component_t3_93 * __this, EventHandler_t1_275 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.Component::get_CanRaiseEvents()
extern "C" bool Component_get_CanRaiseEvents_m3_580 (Component_t3_93 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ISite System.ComponentModel.Component::get_Site()
extern "C" Object_t * Component_get_Site_m3_581 (Component_t3_93 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Component::set_Site(System.ComponentModel.ISite)
extern "C" void Component_set_Site_m3_582 (Component_t3_93 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.IContainer System.ComponentModel.Component::get_Container()
extern "C" Object_t * Component_get_Container_m3_583 (Component_t3_93 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.Component::get_DesignMode()
extern "C" bool Component_get_DesignMode_m3_584 (Component_t3_93 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventHandlerList System.ComponentModel.Component::get_Events()
extern "C" EventHandlerList_t3_94 * Component_get_Events_m3_585 (Component_t3_93 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Component::Finalize()
extern "C" void Component_Finalize_m3_586 (Component_t3_93 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Component::Dispose()
extern "C" void Component_Dispose_m3_587 (Component_t3_93 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Component::Dispose(System.Boolean)
extern "C" void Component_Dispose_m3_588 (Component_t3_93 * __this, bool ___release_all, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.Component::GetService(System.Type)
extern "C" Object_t * Component_GetService_m3_589 (Component_t3_93 * __this, Type_t * ___service, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.Component::ToString()
extern "C" String_t* Component_ToString_m3_590 (Component_t3_93 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
