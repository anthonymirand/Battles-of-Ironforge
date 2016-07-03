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

// UnityEngine.Collision
struct Collision_t5_131;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t5_133;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.Vector3 UnityEngine.Collision::get_relativeVelocity()
extern "C" Vector3_t5_68  Collision_get_relativeVelocity_m5_1265 (Collision_t5_131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ContactPoint[] UnityEngine.Collision::get_contacts()
extern "C" ContactPointU5BU5D_t5_133* Collision_get_contacts_m5_1266 (Collision_t5_131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
