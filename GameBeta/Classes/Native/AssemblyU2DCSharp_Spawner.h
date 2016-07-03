#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Collider
struct Collider_t5_130;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t1_1188;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t6_19;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t5_83;
// UnityEngine.GameObject
struct GameObject_t5_113;
// UnityEngine.UI.Text
struct Text_t7_63;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Spawner
struct  Spawner_t9_156  : public MonoBehaviour_t5_106
{
	// UnityEngine.Collider Spawner::mSpawningCollider
	Collider_t5_130 * ___mSpawningCollider_2;
	// Vuforia.TrackableBehaviour Spawner::mTrackableBehaviour
	TrackableBehaviour_t6_19 * ___mTrackableBehaviour_5;
	// System.Boolean Spawner::hasSelected
	bool ___hasSelected_6;
	// UnityEngine.Transform Spawner::selectedObject
	Transform_t5_83 * ___selectedObject_9;
	// UnityEngine.Transform Spawner::enemyObject
	Transform_t5_83 * ___enemyObject_10;
	// UnityEngine.GameObject Spawner::redSide
	GameObject_t5_113 * ___redSide_11;
	// UnityEngine.GameObject Spawner::blueSide
	GameObject_t5_113 * ___blueSide_12;
	// UnityEngine.GameObject Spawner::messageCanvas
	GameObject_t5_113 * ___messageCanvas_13;
	// UnityEngine.GameObject Spawner::redTower
	GameObject_t5_113 * ___redTower_14;
	// UnityEngine.GameObject Spawner::blueTower
	GameObject_t5_113 * ___blueTower_15;
	// UnityEngine.UI.Text Spawner::messageText
	Text_t7_63 * ___messageText_16;
};
struct Spawner_t9_156_StaticFields{
	// System.Collections.Generic.List`1<UnityEngine.Transform> Spawner::redClones
	List_1_t1_1188 * ___redClones_3;
	// System.Collections.Generic.List`1<UnityEngine.Transform> Spawner::blueClones
	List_1_t1_1188 * ___blueClones_4;
	// System.String Spawner::hasMoveEnded
	String_t* ___hasMoveEnded_7;
	// System.String Spawner::hasAttackEnded
	String_t* ___hasAttackEnded_8;
	// System.String Spawner::hasSpawned
	String_t* ___hasSpawned_17;
};
