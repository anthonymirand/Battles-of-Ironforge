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

// Lean.LeanFinger/Snapshot
struct Snapshot_t9_80;
// UnityEngine.Camera
struct Camera_t5_100;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void Lean.LeanFinger/Snapshot::.ctor()
extern "C" void Snapshot__ctor_m9_604 (Snapshot_t9_80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Lean.LeanFinger/Snapshot::GetWorldPosition(System.Single,UnityEngine.Camera)
extern "C" Vector3_t5_68  Snapshot_GetWorldPosition_m9_605 (Snapshot_t9_80 * __this, float ___distance, Camera_t5_100 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
