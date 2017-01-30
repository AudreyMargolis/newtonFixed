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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Goal
struct  Goal_t3771281099  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Goal::scoreMod
	float ___scoreMod_2;
	// System.Boolean Goal::scored
	bool ___scored_3;
	// UnityEngine.AudioSource Goal::audio
	AudioSource_t1135106623 * ___audio_4;

public:
	inline static int32_t get_offset_of_scoreMod_2() { return static_cast<int32_t>(offsetof(Goal_t3771281099, ___scoreMod_2)); }
	inline float get_scoreMod_2() const { return ___scoreMod_2; }
	inline float* get_address_of_scoreMod_2() { return &___scoreMod_2; }
	inline void set_scoreMod_2(float value)
	{
		___scoreMod_2 = value;
	}

	inline static int32_t get_offset_of_scored_3() { return static_cast<int32_t>(offsetof(Goal_t3771281099, ___scored_3)); }
	inline bool get_scored_3() const { return ___scored_3; }
	inline bool* get_address_of_scored_3() { return &___scored_3; }
	inline void set_scored_3(bool value)
	{
		___scored_3 = value;
	}

	inline static int32_t get_offset_of_audio_4() { return static_cast<int32_t>(offsetof(Goal_t3771281099, ___audio_4)); }
	inline AudioSource_t1135106623 * get_audio_4() const { return ___audio_4; }
	inline AudioSource_t1135106623 ** get_address_of_audio_4() { return &___audio_4; }
	inline void set_audio_4(AudioSource_t1135106623 * value)
	{
		___audio_4 = value;
		Il2CppCodeGenWriteBarrier(&___audio_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
