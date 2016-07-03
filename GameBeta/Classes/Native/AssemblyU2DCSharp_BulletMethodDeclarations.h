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

// Bullet
struct Bullet_t9_1;
// UnityEngine.Collider
struct Collider_t5_130;

#include "codegen/il2cpp-codegen.h"

// System.Void Bullet::.ctor()
extern "C" void Bullet__ctor_m9_0 (Bullet_t9_1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bullet::Update()
extern "C" void Bullet_Update_m9_1 (Bullet_t9_1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bullet::FixedUpdate()
extern "C" void Bullet_FixedUpdate_m9_2 (Bullet_t9_1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bullet::OnTriggerEnter(UnityEngine.Collider)
extern "C" void Bullet_OnTriggerEnter_m9_3 (Bullet_t9_1 * __this, Collider_t5_130 * ___co, const MethodInfo* method) IL2CPP_METHOD_ATTR;
