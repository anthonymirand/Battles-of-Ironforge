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

// ObjectHealth
struct ObjectHealth_t9_153;

#include "codegen/il2cpp-codegen.h"

// System.Void ObjectHealth::.ctor()
extern "C" void ObjectHealth__ctor_m9_892 (ObjectHealth_t9_153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHealth::Start()
extern "C" void ObjectHealth_Start_m9_893 (ObjectHealth_t9_153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHealth::Update()
extern "C" void ObjectHealth_Update_m9_894 (ObjectHealth_t9_153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHealth::onAttack(System.Int32)
extern "C" void ObjectHealth_onAttack_m9_895 (ObjectHealth_t9_153 * __this, int32_t ___amount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ObjectHealth::currentHealth()
extern "C" int32_t ObjectHealth_currentHealth_m9_896 (ObjectHealth_t9_153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
