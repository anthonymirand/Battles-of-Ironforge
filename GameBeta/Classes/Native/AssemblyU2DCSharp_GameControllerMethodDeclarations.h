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

// GameController
struct GameController_t9_62;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// UnityEngine.GameObject
struct GameObject_t5_113;
// System.String
struct String_t;
// UnityEngine.WWW
struct WWW_t5_94;
// UnityEngine.Transform
struct Transform_t5_83;

#include "codegen/il2cpp-codegen.h"

// System.Void GameController::.ctor()
extern "C" void GameController__ctor_m9_503 (GameController_t9_62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::.cctor()
extern "C" void GameController__cctor_m9_504 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::Start()
extern "C" void GameController_Start_m9_505 (GameController_t9_62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameController::ShowCanvas(UnityEngine.GameObject,System.Single)
extern "C" Object_t * GameController_ShowCanvas_m9_506 (GameController_t9_62 * __this, GameObject_t5_113 * ___canvas, float ___delay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::serverChangeTeam(System.String)
extern "C" void GameController_serverChangeTeam_m9_507 (GameController_t9_62 * __this, String_t* ___team, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameController::WaitForRequest(UnityEngine.WWW)
extern "C" Object_t * GameController_WaitForRequest_m9_508 (GameController_t9_62 * __this, WWW_t5_94 * ___www, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::CleanUp()
extern "C" void GameController_CleanUp_m9_509 (GameController_t9_62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::armedCheck()
extern "C" void GameController_armedCheck_m9_510 (GameController_t9_62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameController::onProbability(System.Int32)
extern "C" bool GameController_onProbability_m9_511 (Object_t * __this /* static, unused */, int32_t ___probability, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameController::displayMessageOver(UnityEngine.Transform,System.String)
extern "C" Object_t * GameController_displayMessageOver_m9_512 (Object_t * __this /* static, unused */, Transform_t5_83 * ___displayObject, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameController::critHitEval()
extern "C" String_t* GameController_critHitEval_m9_513 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::onTurnEnd()
extern "C" void GameController_onTurnEnd_m9_514 (GameController_t9_62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameController::onTurnEndDelay(System.Single)
extern "C" Object_t * GameController_onTurnEndDelay_m9_515 (GameController_t9_62 * __this, float ___delay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::Update()
extern "C" void GameController_Update_m9_516 (GameController_t9_62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::onStart()
extern "C" void GameController_onStart_m9_517 (GameController_t9_62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::onSettings()
extern "C" void GameController_onSettings_m9_518 (GameController_t9_62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::onHome()
extern "C" void GameController_onHome_m9_519 (GameController_t9_62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::musicControl(System.Boolean)
extern "C" void GameController_musicControl_m9_520 (GameController_t9_62 * __this, bool ___setting, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::onBlueTeam()
extern "C" void GameController_onBlueTeam_m9_521 (GameController_t9_62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::onRedTeam()
extern "C" void GameController_onRedTeam_m9_522 (GameController_t9_62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::onTurnStart()
extern "C" void GameController_onTurnStart_m9_523 (GameController_t9_62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::hideTurnCanvas()
extern "C" void GameController_hideTurnCanvas_m9_524 (GameController_t9_62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameController::smallDelay()
extern "C" Object_t * GameController_smallDelay_m9_525 (GameController_t9_62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::selectedSpawnObject()
extern "C" void GameController_selectedSpawnObject_m9_526 (GameController_t9_62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::onSpawnSelect()
extern "C" void GameController_onSpawnSelect_m9_527 (GameController_t9_62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::onCannonButton()
extern "C" void GameController_onCannonButton_m9_528 (GameController_t9_62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::onCatapultButton()
extern "C" void GameController_onCatapultButton_m9_529 (GameController_t9_62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::onWizardButton()
extern "C" void GameController_onWizardButton_m9_530 (GameController_t9_62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::onTroopButton()
extern "C" void GameController_onTroopButton_m9_531 (GameController_t9_62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::onWoodButton()
extern "C" void GameController_onWoodButton_m9_532 (GameController_t9_62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::onStoneButton()
extern "C" void GameController_onStoneButton_m9_533 (GameController_t9_62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::onPowerUpButton()
extern "C" void GameController_onPowerUpButton_m9_534 (GameController_t9_62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::onPowerUpAttackButton()
extern "C" void GameController_onPowerUpAttackButton_m9_535 (GameController_t9_62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::onSelectBack()
extern "C" void GameController_onSelectBack_m9_536 (GameController_t9_62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::onSelectBack_Defensive()
extern "C" void GameController_onSelectBack_Defensive_m9_537 (GameController_t9_62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::onSpawnTypeSelect(System.String)
extern "C" void GameController_onSpawnTypeSelect_m9_538 (GameController_t9_62 * __this, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::onMoveSelect()
extern "C" void GameController_onMoveSelect_m9_539 (GameController_t9_62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::onAttackSelect()
extern "C" void GameController_onAttackSelect_m9_540 (GameController_t9_62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::onDrawSelect()
extern "C" void GameController_onDrawSelect_m9_541 (GameController_t9_62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameController::showStats()
extern "C" Object_t * GameController_showStats_m9_542 (GameController_t9_62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::onShowStats()
extern "C" void GameController_onShowStats_m9_543 (GameController_t9_62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
