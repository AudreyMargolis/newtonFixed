#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FPSDisplay
struct  FPSDisplay_t3952194245  : public MonoBehaviour_t1158329972
{
public:
	// System.Single FPSDisplay::deltaTime
	float ___deltaTime_2;

public:
	inline static int32_t get_offset_of_deltaTime_2() { return static_cast<int32_t>(offsetof(FPSDisplay_t3952194245, ___deltaTime_2)); }
	inline float get_deltaTime_2() const { return ___deltaTime_2; }
	inline float* get_address_of_deltaTime_2() { return &___deltaTime_2; }
	inline void set_deltaTime_2(float value)
	{
		___deltaTime_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
