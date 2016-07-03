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

// UnityStandardAssets.Utility.WaypointCircuit
struct WaypointCircuit_t10_97;
// UnityEngine.Transform[]
struct TransformU5BU5D_t5_368;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Wa_0.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityStandardAssets.Utility.WaypointCircuit::.ctor()
extern "C" void WaypointCircuit__ctor_m10_419 (WaypointCircuit_t10_97 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Utility.WaypointCircuit::get_Length()
extern "C" float WaypointCircuit_get_Length_m10_420 (WaypointCircuit_t10_97 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::set_Length(System.Single)
extern "C" void WaypointCircuit_set_Length_m10_421 (WaypointCircuit_t10_97 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform[] UnityStandardAssets.Utility.WaypointCircuit::get_Waypoints()
extern "C" TransformU5BU5D_t5_368* WaypointCircuit_get_Waypoints_m10_422 (WaypointCircuit_t10_97 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::Awake()
extern "C" void WaypointCircuit_Awake_m10_423 (WaypointCircuit_t10_97 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointCircuit::GetRoutePoint(System.Single)
extern "C" RoutePoint_t10_98  WaypointCircuit_GetRoutePoint_m10_424 (WaypointCircuit_t10_97 * __this, float ___dist, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::GetRoutePosition(System.Single)
extern "C" Vector3_t5_68  WaypointCircuit_GetRoutePosition_m10_425 (WaypointCircuit_t10_97 * __this, float ___dist, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::CatmullRom(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" Vector3_t5_68  WaypointCircuit_CatmullRom_m10_426 (WaypointCircuit_t10_97 * __this, Vector3_t5_68  ___p0, Vector3_t5_68  ___p1, Vector3_t5_68  ___p2, Vector3_t5_68  ___p3, float ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::CachePositionsAndDistances()
extern "C" void WaypointCircuit_CachePositionsAndDistances_m10_427 (WaypointCircuit_t10_97 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::OnDrawGizmos()
extern "C" void WaypointCircuit_OnDrawGizmos_m10_428 (WaypointCircuit_t10_97 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::OnDrawGizmosSelected()
extern "C" void WaypointCircuit_OnDrawGizmosSelected_m10_429 (WaypointCircuit_t10_97 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::DrawGizmos(System.Boolean)
extern "C" void WaypointCircuit_DrawGizmos_m10_430 (WaypointCircuit_t10_97 * __this, bool ___selected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
