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

// CardboardAudioSource
struct CardboardAudioSource_t9_16;
// UnityEngine.AudioClip
struct AudioClip_t5_159;
// System.Single[]
struct SingleU5BU5D_t1_870;

#include "codegen/il2cpp-codegen.h"

// System.Void CardboardAudioSource::.ctor()
extern "C" void CardboardAudioSource__ctor_m9_86 (CardboardAudioSource_t9_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip CardboardAudioSource::get_clip()
extern "C" AudioClip_t5_159 * CardboardAudioSource_get_clip_m9_87 (CardboardAudioSource_t9_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::set_clip(UnityEngine.AudioClip)
extern "C" void CardboardAudioSource_set_clip_m9_88 (CardboardAudioSource_t9_16 * __this, AudioClip_t5_159 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardboardAudioSource::get_isPlaying()
extern "C" bool CardboardAudioSource_get_isPlaying_m9_89 (CardboardAudioSource_t9_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardboardAudioSource::get_loop()
extern "C" bool CardboardAudioSource_get_loop_m9_90 (CardboardAudioSource_t9_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::set_loop(System.Boolean)
extern "C" void CardboardAudioSource_set_loop_m9_91 (CardboardAudioSource_t9_16 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardboardAudioSource::get_mute()
extern "C" bool CardboardAudioSource_get_mute_m9_92 (CardboardAudioSource_t9_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::set_mute(System.Boolean)
extern "C" void CardboardAudioSource_set_mute_m9_93 (CardboardAudioSource_t9_16 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CardboardAudioSource::get_pitch()
extern "C" float CardboardAudioSource_get_pitch_m9_94 (CardboardAudioSource_t9_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::set_pitch(System.Single)
extern "C" void CardboardAudioSource_set_pitch_m9_95 (CardboardAudioSource_t9_16 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CardboardAudioSource::get_volume()
extern "C" float CardboardAudioSource_get_volume_m9_96 (CardboardAudioSource_t9_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::set_volume(System.Single)
extern "C" void CardboardAudioSource_set_volume_m9_97 (CardboardAudioSource_t9_16 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CardboardAudioSource::get_maxDistance()
extern "C" float CardboardAudioSource_get_maxDistance_m9_98 (CardboardAudioSource_t9_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::set_maxDistance(System.Single)
extern "C" void CardboardAudioSource_set_maxDistance_m9_99 (CardboardAudioSource_t9_16 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CardboardAudioSource::get_minDistance()
extern "C" float CardboardAudioSource_get_minDistance_m9_100 (CardboardAudioSource_t9_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::set_minDistance(System.Single)
extern "C" void CardboardAudioSource_set_minDistance_m9_101 (CardboardAudioSource_t9_16 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::Awake()
extern "C" void CardboardAudioSource_Awake_m9_102 (CardboardAudioSource_t9_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::OnEnable()
extern "C" void CardboardAudioSource_OnEnable_m9_103 (CardboardAudioSource_t9_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::Start()
extern "C" void CardboardAudioSource_Start_m9_104 (CardboardAudioSource_t9_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::OnDisable()
extern "C" void CardboardAudioSource_OnDisable_m9_105 (CardboardAudioSource_t9_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::OnDestroy()
extern "C" void CardboardAudioSource_OnDestroy_m9_106 (CardboardAudioSource_t9_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::Update()
extern "C" void CardboardAudioSource_Update_m9_107 (CardboardAudioSource_t9_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::OnAudioFilterRead(System.Single[],System.Int32)
extern "C" void CardboardAudioSource_OnAudioFilterRead_m9_108 (CardboardAudioSource_t9_16 * __this, SingleU5BU5D_t1_870* ___data, int32_t ___channels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::Pause()
extern "C" void CardboardAudioSource_Pause_m9_109 (CardboardAudioSource_t9_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::Play()
extern "C" void CardboardAudioSource_Play_m9_110 (CardboardAudioSource_t9_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::PlayDelayed(System.Single)
extern "C" void CardboardAudioSource_PlayDelayed_m9_111 (CardboardAudioSource_t9_16 * __this, float ___delay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::PlayOneShot(UnityEngine.AudioClip)
extern "C" void CardboardAudioSource_PlayOneShot_m9_112 (CardboardAudioSource_t9_16 * __this, AudioClip_t5_159 * ___clip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
extern "C" void CardboardAudioSource_PlayOneShot_m9_113 (CardboardAudioSource_t9_16 * __this, AudioClip_t5_159 * ___clip, float ___volume, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::Stop()
extern "C" void CardboardAudioSource_Stop_m9_114 (CardboardAudioSource_t9_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::UnPause()
extern "C" void CardboardAudioSource_UnPause_m9_115 (CardboardAudioSource_t9_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardboardAudioSource::InitializeSource()
extern "C" bool CardboardAudioSource_InitializeSource_m9_116 (CardboardAudioSource_t9_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::ShutdownSource()
extern "C" void CardboardAudioSource_ShutdownSource_m9_117 (CardboardAudioSource_t9_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::OnValidate()
extern "C" void CardboardAudioSource_OnValidate_m9_118 (CardboardAudioSource_t9_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::OnDrawGizmosSelected()
extern "C" void CardboardAudioSource_OnDrawGizmosSelected_m9_119 (CardboardAudioSource_t9_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudioSource::DrawDirectivityGizmo(System.Int32)
extern "C" void CardboardAudioSource_DrawDirectivityGizmo_m9_120 (CardboardAudioSource_t9_16 * __this, int32_t ___resolution, const MethodInfo* method) IL2CPP_METHOD_ATTR;
