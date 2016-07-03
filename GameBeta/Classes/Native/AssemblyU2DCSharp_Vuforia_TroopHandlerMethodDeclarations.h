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

// Vuforia.TroopHandler
struct TroopHandler_t9_186;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableBehaviour_.h"

// System.Void Vuforia.TroopHandler::.ctor()
extern "C" void TroopHandler__ctor_m9_1018 (TroopHandler_t9_186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TroopHandler::Start()
extern "C" void TroopHandler_Start_m9_1019 (TroopHandler_t9_186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TroopHandler::OnTrackableStateChanged(Vuforia.TrackableBehaviour/Status,Vuforia.TrackableBehaviour/Status)
extern "C" void TroopHandler_OnTrackableStateChanged_m9_1020 (TroopHandler_t9_186 * __this, int32_t ___previousStatus, int32_t ___newStatus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TroopHandler::OnTrackingFound()
extern "C" void TroopHandler_OnTrackingFound_m9_1021 (TroopHandler_t9_186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TroopHandler::OnTrackingLost()
extern "C" void TroopHandler_OnTrackingLost_m9_1022 (TroopHandler_t9_186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
