#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t5_113;
// UnityEngine.TextMesh
struct TextMesh_t5_189;
// UnityEngine.UI.Text
struct Text_t7_63;
// UnityEngine.UI.Button
struct Button_t7_54;
// UnityEngine.AudioSource
struct AudioSource_t5_162;
// System.Int32[]
struct Int32U5BU5D_t1_161;
// UnityEngine.Transform[]
struct TransformU5BU5D_t5_368;
// UnityEngine.Transform
struct Transform_t5_83;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "AssemblyU2DCSharp_GameController_GameStates.h"

// GameController
struct  GameController_t9_62  : public MonoBehaviour_t5_106
{
	// System.Int32 GameController::cannonDamage
	int32_t ___cannonDamage_2;
	// System.Int32 GameController::crossbowDamage
	int32_t ___crossbowDamage_3;
	// System.String GameController::redURL
	String_t* ___redURL_4;
	// System.String GameController::blueURL
	String_t* ___blueURL_5;
	// UnityEngine.GameObject GameController::canv
	GameObject_t5_113 * ___canv_8;
	// UnityEngine.GameObject GameController::settings
	GameObject_t5_113 * ___settings_9;
	// UnityEngine.GameObject GameController::teamSelect
	GameObject_t5_113 * ___teamSelect_10;
	// UnityEngine.GameObject GameController::redOutline
	GameObject_t5_113 * ___redOutline_11;
	// UnityEngine.GameObject GameController::blueOutline
	GameObject_t5_113 * ___blueOutline_12;
	// UnityEngine.GameObject GameController::reticle
	GameObject_t5_113 * ___reticle_13;
	// UnityEngine.TextMesh GameController::WatchTeam
	TextMesh_t5_189 * ___WatchTeam_14;
	// UnityEngine.UI.Text GameController::reticle_text
	Text_t7_63 * ___reticle_text_17;
	// UnityEngine.GameObject GameController::turnCanvas
	GameObject_t5_113 * ___turnCanvas_18;
	// UnityEngine.UI.Text GameController::turnText
	Text_t7_63 * ___turnText_19;
	// UnityEngine.UI.Button GameController::moveButton
	Button_t7_54 * ___moveButton_20;
	// UnityEngine.UI.Button GameController::attackButton
	Button_t7_54 * ___attackButton_21;
	// UnityEngine.UI.Button GameController::spawnButton
	Button_t7_54 * ___spawnButton_22;
	// UnityEngine.UI.Button GameController::drawButton
	Button_t7_54 * ___drawButton_23;
	// UnityEngine.GameObject GameController::turnLabel
	GameObject_t5_113 * ___turnLabel_24;
	// UnityEngine.UI.Button GameController::forfeitButton
	Button_t7_54 * ___forfeitButton_25;
	// UnityEngine.UI.Button GameController::statsButton
	Button_t7_54 * ___statsButton_26;
	// UnityEngine.GameObject GameController::spawnSelectCanvas
	GameObject_t5_113 * ___spawnSelectCanvas_27;
	// UnityEngine.GameObject GameController::spawnSelectCanvas_Defensive
	GameObject_t5_113 * ___spawnSelectCanvas_Defensive_28;
	// UnityEngine.GameObject GameController::spawnTypeSelect
	GameObject_t5_113 * ___spawnTypeSelect_29;
	// UnityEngine.UI.Text GameController::spawnSelectText
	Text_t7_63 * ___spawnSelectText_30;
	// UnityEngine.UI.Text GameController::spawnSelectText_Offensive
	Text_t7_63 * ___spawnSelectText_Offensive_31;
	// UnityEngine.UI.Text GameController::spawnTypeSelectText
	Text_t7_63 * ___spawnTypeSelectText_32;
	// UnityEngine.UI.Button GameController::cannonButton
	Button_t7_54 * ___cannonButton_33;
	// UnityEngine.UI.Button GameController::catapultButton
	Button_t7_54 * ___catapultButton_34;
	// UnityEngine.UI.Button GameController::wizardButton
	Button_t7_54 * ___wizardButton_35;
	// UnityEngine.UI.Button GameController::troopButton
	Button_t7_54 * ___troopButton_36;
	// UnityEngine.UI.Text GameController::cannonButtonAvailableText
	Text_t7_63 * ___cannonButtonAvailableText_37;
	// UnityEngine.UI.Text GameController::catapultButtonAvailableText
	Text_t7_63 * ___catapultButtonAvailableText_38;
	// UnityEngine.UI.Text GameController::wizardButtonAvailableText
	Text_t7_63 * ___wizardButtonAvailableText_39;
	// UnityEngine.UI.Text GameController::troopButtonAvailableText
	Text_t7_63 * ___troopButtonAvailableText_40;
	// UnityEngine.UI.Button GameController::spawnSelectBackButton
	Button_t7_54 * ___spawnSelectBackButton_41;
	// UnityEngine.UI.Button GameController::woodButton
	Button_t7_54 * ___woodButton_42;
	// UnityEngine.UI.Button GameController::stoneButton
	Button_t7_54 * ___stoneButton_43;
	// UnityEngine.UI.Button GameController::powerUpButton
	Button_t7_54 * ___powerUpButton_44;
	// UnityEngine.UI.Button GameController::powerUpAttackButton
	Button_t7_54 * ___powerUpAttackButton_45;
	// UnityEngine.UI.Button GameController::offensiveButton
	Button_t7_54 * ___offensiveButton_46;
	// UnityEngine.UI.Button GameController::defensiveButton
	Button_t7_54 * ___defensiveButton_47;
	// UnityEngine.UI.Text GameController::woodButtonAvailableText
	Text_t7_63 * ___woodButtonAvailableText_48;
	// UnityEngine.UI.Text GameController::stoneButtonAvailableText
	Text_t7_63 * ___stoneButtonAvailableText_49;
	// UnityEngine.UI.Text GameController::powerUpButtonAvailableText
	Text_t7_63 * ___powerUpButtonAvailableText_50;
	// UnityEngine.UI.Text GameController::powerUpAttackButtonAvailableText
	Text_t7_63 * ___powerUpAttackButtonAvailableText_51;
	// UnityEngine.UI.Button GameController::spawnSelectBackButton_Defensive
	Button_t7_54 * ___spawnSelectBackButton_Defensive_52;
	// UnityEngine.GameObject GameController::unlockCanvas
	GameObject_t5_113 * ___unlockCanvas_53;
	// UnityEngine.UI.Text GameController::unlockText
	Text_t7_63 * ___unlockText_54;
	// UnityEngine.AudioSource GameController::audio
	AudioSource_t5_162 * ___audio_59;
	// System.Int32[] GameController::UnlockedResourcesRed
	Int32U5BU5D_t1_161* ___UnlockedResourcesRed_61;
	// System.Int32[] GameController::UnlockedResourcesBlue
	Int32U5BU5D_t1_161* ___UnlockedResourcesBlue_62;
	// UnityEngine.Transform[] GameController::SpawnablePrefabs
	TransformU5BU5D_t5_368* ___SpawnablePrefabs_63;
	// System.Boolean GameController::redArmed
	bool ___redArmed_67;
	// System.Boolean GameController::blueArmed
	bool ___blueArmed_68;
};
struct GameController_t9_62_StaticFields{
	// System.Int32 GameController::critChance
	int32_t ___critChance_6;
	// System.Int32 GameController::ultra_critChance
	int32_t ___ultra_critChance_7;
	// System.String GameController::teamColor
	String_t* ___teamColor_15;
	// System.String GameController::gameStarted
	String_t* ___gameStarted_16;
	// UnityEngine.Color GameController::red_color
	Color_t5_58  ___red_color_55;
	// UnityEngine.Color GameController::blue_color
	Color_t5_58  ___blue_color_56;
	// UnityEngine.Color GameController::grey_color
	Color_t5_58  ___grey_color_57;
	// System.Int32 GameController::turnCount
	int32_t ___turnCount_58;
	// GameController/GameStates GameController::GameState
	int32_t ___GameState_60;
	// UnityEngine.Transform GameController::spawningObject
	Transform_t5_83 * ___spawningObject_64;
	// System.Boolean GameController::inCoroutine
	bool ___inCoroutine_65;
	// System.Boolean GameController::hitExecuted
	bool ___hitExecuted_66;
};
