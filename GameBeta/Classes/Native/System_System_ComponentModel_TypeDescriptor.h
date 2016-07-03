#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Object_t;
// System.Collections.ArrayList
struct ArrayList_t1_114;
// System.ComponentModel.IComNativeDescriptorHandler
struct IComNativeDescriptorHandler_t3_185;
// System.Collections.Hashtable
struct Hashtable_t1_173;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>>
struct Dictionary_2_t1_938;
// System.Collections.Generic.Dictionary`2<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>>
struct Dictionary_2_t1_939;
// System.EventHandler
struct EventHandler_t1_275;
// System.ComponentModel.RefreshEventHandler
struct RefreshEventHandler_t3_184;

#include "mscorlib_System_Object.h"

// System.ComponentModel.TypeDescriptor
struct  TypeDescriptor_t3_183  : public Object_t
{
};
struct TypeDescriptor_t3_183_StaticFields{
	// System.Object System.ComponentModel.TypeDescriptor::creatingDefaultConverters
	Object_t * ___creatingDefaultConverters_0;
	// System.Collections.ArrayList System.ComponentModel.TypeDescriptor::defaultConverters
	ArrayList_t1_114 * ___defaultConverters_1;
	// System.ComponentModel.IComNativeDescriptorHandler System.ComponentModel.TypeDescriptor::descriptorHandler
	Object_t * ___descriptorHandler_2;
	// System.Collections.Hashtable System.ComponentModel.TypeDescriptor::componentTable
	Hashtable_t1_173 * ___componentTable_3;
	// System.Collections.Hashtable System.ComponentModel.TypeDescriptor::typeTable
	Hashtable_t1_173 * ___typeTable_4;
	// System.Collections.Hashtable System.ComponentModel.TypeDescriptor::editors
	Hashtable_t1_173 * ___editors_5;
	// System.Object System.ComponentModel.TypeDescriptor::typeDescriptionProvidersLock
	Object_t * ___typeDescriptionProvidersLock_6;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>> System.ComponentModel.TypeDescriptor::typeDescriptionProviders
	Dictionary_2_t1_938 * ___typeDescriptionProviders_7;
	// System.Object System.ComponentModel.TypeDescriptor::componentDescriptionProvidersLock
	Object_t * ___componentDescriptionProvidersLock_8;
	// System.Collections.Generic.Dictionary`2<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>> System.ComponentModel.TypeDescriptor::componentDescriptionProviders
	Dictionary_2_t1_939 * ___componentDescriptionProviders_9;
	// System.EventHandler System.ComponentModel.TypeDescriptor::onDispose
	EventHandler_t1_275 * ___onDispose_10;
	// System.ComponentModel.RefreshEventHandler System.ComponentModel.TypeDescriptor::Refreshed
	RefreshEventHandler_t3_184 * ___Refreshed_11;
};
