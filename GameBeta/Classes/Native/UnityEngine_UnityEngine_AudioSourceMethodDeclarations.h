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

// UnityEngine.AudioSource
struct AudioSource_t5_162;
// UnityEngine.AudioClip
struct AudioClip_t5_159;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.AudioSource::set_volume(System.Single)
extern "C" void AudioSource_set_volume_m5_1404 (AudioSource_t5_162 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
extern "C" void AudioSource_set_pitch_m5_1405 (AudioSource_t5_162 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
extern "C" AudioClip_t5_159 * AudioSource_get_clip_m5_1406 (AudioSource_t5_162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
extern "C" void AudioSource_set_clip_m5_1407 (AudioSource_t5_162 * __this, AudioClip_t5_159 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play(System.UInt64)
extern "C" void AudioSource_Play_m5_1408 (AudioSource_t5_162 * __this, uint64_t ___delay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play()
extern "C" void AudioSource_Play_m5_1409 (AudioSource_t5_162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayDelayed(System.Single)
extern "C" void AudioSource_PlayDelayed_m5_1410 (AudioSource_t5_162 * __this, float ___delay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Stop()
extern "C" void AudioSource_Stop_m5_1411 (AudioSource_t5_162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Pause()
extern "C" void AudioSource_Pause_m5_1412 (AudioSource_t5_162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_Pause(UnityEngine.AudioSource)
extern "C" void AudioSource_INTERNAL_CALL_Pause_m5_1413 (Object_t * __this /* static, unused */, AudioSource_t5_162 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::UnPause()
extern "C" void AudioSource_UnPause_m5_1414 (AudioSource_t5_162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_UnPause(UnityEngine.AudioSource)
extern "C" void AudioSource_INTERNAL_CALL_UnPause_m5_1415 (Object_t * __this /* static, unused */, AudioSource_t5_162 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
extern "C" bool AudioSource_get_isPlaying_m5_1416 (AudioSource_t5_162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
extern "C" void AudioSource_PlayOneShot_m5_1417 (AudioSource_t5_162 * __this, AudioClip_t5_159 * ___clip, float ___volumeScale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
extern "C" void AudioSource_PlayOneShot_m5_1418 (AudioSource_t5_162 * __this, AudioClip_t5_159 * ___clip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
extern "C" void AudioSource_set_loop_m5_1419 (AudioSource_t5_162 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_playOnAwake(System.Boolean)
extern "C" void AudioSource_set_playOnAwake_m5_1420 (AudioSource_t5_162 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_spatialBlend(System.Single)
extern "C" void AudioSource_set_spatialBlend_m5_1421 (AudioSource_t5_162 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_bypassReverbZones(System.Boolean)
extern "C" void AudioSource_set_bypassReverbZones_m5_1422 (AudioSource_t5_162 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_mute(System.Boolean)
extern "C" void AudioSource_set_mute_m5_1423 (AudioSource_t5_162 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
