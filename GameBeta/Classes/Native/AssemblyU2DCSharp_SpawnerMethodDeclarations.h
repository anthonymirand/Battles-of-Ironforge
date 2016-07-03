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

// Spawner
struct Spawner_t9_156;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.String
struct String_t;
// Lean.LeanFinger
struct LeanFinger_t9_67;

#include "codegen/il2cpp-codegen.h"

// System.Void Spawner::.ctor()
extern "C" void Spawner__ctor_m9_907 (Spawner_t9_156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spawner::.cctor()
extern "C" void Spawner__cctor_m9_908 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spawner::Start()
extern "C" void Spawner_Start_m9_909 (Spawner_t9_156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spawner::Update()
extern "C" void Spawner_Update_m9_910 (Spawner_t9_156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spawner::OnEnable()
extern "C" void Spawner_OnEnable_m9_911 (Spawner_t9_156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spawner::OnDisable()
extern "C" void Spawner_OnDisable_m9_912 (Spawner_t9_156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Spawner::ShowMessage(System.String,System.Single)
extern "C" Object_t * Spawner_ShowMessage_m9_913 (Spawner_t9_156 * __this, String_t* ___message, float ___delay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spawner::OnFingerTap(Lean.LeanFinger)
extern "C" void Spawner_OnFingerTap_m9_914 (Spawner_t9_156 * __this, LeanFinger_t9_67 * ___finger, const MethodInfo* method) IL2CPP_METHOD_ATTR;
