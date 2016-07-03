#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.ReconstructionBehaviour
struct ReconstructionBehaviour_t9_166;
// Vuforia.PropBehaviour
struct PropBehaviour_t9_167;
// Vuforia.SurfaceBehaviour
struct SurfaceBehaviour_t9_168;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Vuforia.DefaultSmartTerrainEventHandler
struct  DefaultSmartTerrainEventHandler_t9_165  : public MonoBehaviour_t5_106
{
	// Vuforia.ReconstructionBehaviour Vuforia.DefaultSmartTerrainEventHandler::mReconstructionBehaviour
	ReconstructionBehaviour_t9_166 * ___mReconstructionBehaviour_2;
	// Vuforia.PropBehaviour Vuforia.DefaultSmartTerrainEventHandler::PropTemplate
	PropBehaviour_t9_167 * ___PropTemplate_3;
	// Vuforia.SurfaceBehaviour Vuforia.DefaultSmartTerrainEventHandler::SurfaceTemplate
	SurfaceBehaviour_t9_168 * ___SurfaceTemplate_4;
};
