#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BallSoundsAndEffects
struct  BallSoundsAndEffects_t2192437320  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioSource BallSoundsAndEffects::audio
	AudioSource_t1135106623 * ___audio_2;
	// UnityEngine.GameObject BallSoundsAndEffects::sparkMid
	GameObject_t1756533147 * ___sparkMid_3;
	// UnityEngine.GameObject BallSoundsAndEffects::sparkHigh
	GameObject_t1756533147 * ___sparkHigh_4;

public:
	inline static int32_t get_offset_of_audio_2() { return static_cast<int32_t>(offsetof(BallSoundsAndEffects_t2192437320, ___audio_2)); }
	inline AudioSource_t1135106623 * get_audio_2() const { return ___audio_2; }
	inline AudioSource_t1135106623 ** get_address_of_audio_2() { return &___audio_2; }
	inline void set_audio_2(AudioSource_t1135106623 * value)
	{
		___audio_2 = value;
		Il2CppCodeGenWriteBarrier(&___audio_2, value);
	}

	inline static int32_t get_offset_of_sparkMid_3() { return static_cast<int32_t>(offsetof(BallSoundsAndEffects_t2192437320, ___sparkMid_3)); }
	inline GameObject_t1756533147 * get_sparkMid_3() const { return ___sparkMid_3; }
	inline GameObject_t1756533147 ** get_address_of_sparkMid_3() { return &___sparkMid_3; }
	inline void set_sparkMid_3(GameObject_t1756533147 * value)
	{
		___sparkMid_3 = value;
		Il2CppCodeGenWriteBarrier(&___sparkMid_3, value);
	}

	inline static int32_t get_offset_of_sparkHigh_4() { return static_cast<int32_t>(offsetof(BallSoundsAndEffects_t2192437320, ___sparkHigh_4)); }
	inline GameObject_t1756533147 * get_sparkHigh_4() const { return ___sparkHigh_4; }
	inline GameObject_t1756533147 ** get_address_of_sparkHigh_4() { return &___sparkHigh_4; }
	inline void set_sparkHigh_4(GameObject_t1756533147 * value)
	{
		___sparkHigh_4 = value;
		Il2CppCodeGenWriteBarrier(&___sparkHigh_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
