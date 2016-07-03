#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t5_113;
// UnityEngine.UI.Text
struct Text_t7_63;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t5_330;
// UnityEngine.Animator
struct Animator_t5_178;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// FTsample_ClickToSpawn
struct  FTsample_ClickToSpawn_t9_52  : public MonoBehaviour_t5_106
{
	// UnityEngine.GameObject FTsample_ClickToSpawn::camObject
	GameObject_t5_113 * ___camObject_2;
	// UnityEngine.GameObject FTsample_ClickToSpawn::lightObject
	GameObject_t5_113 * ___lightObject_3;
	// UnityEngine.GameObject FTsample_ClickToSpawn::robotObject
	GameObject_t5_113 * ___robotObject_4;
	// UnityEngine.UI.Text FTsample_ClickToSpawn::prefabName
	Text_t7_63 * ___prefabName_5;
	// UnityEngine.GameObject[] FTsample_ClickToSpawn::particlePrefab
	GameObjectU5BU5D_t5_330* ___particlePrefab_6;
	// System.Int32 FTsample_ClickToSpawn::particleNum
	int32_t ___particleNum_7;
	// UnityEngine.GameObject FTsample_ClickToSpawn::effectPrefab
	GameObject_t5_113 * ___effectPrefab_8;
	// System.Boolean FTsample_ClickToSpawn::checkEffect
	bool ___checkEffect_9;
	// System.Boolean FTsample_ClickToSpawn::checkChara
	bool ___checkChara_10;
	// System.Boolean FTsample_ClickToSpawn::checkLight
	bool ___checkLight_11;
	// System.Boolean FTsample_ClickToSpawn::checkCamera
	bool ___checkCamera_12;
	// UnityEngine.Animator FTsample_ClickToSpawn::camAnim
	Animator_t5_178 * ___camAnim_13;
};
