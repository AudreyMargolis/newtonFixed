#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ColliderFolllow
struct  ColliderFolllow_t1769155885  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject ColliderFolllow::ball
	GameObject_t1756533147 * ___ball_2;

public:
	inline static int32_t get_offset_of_ball_2() { return static_cast<int32_t>(offsetof(ColliderFolllow_t1769155885, ___ball_2)); }
	inline GameObject_t1756533147 * get_ball_2() const { return ___ball_2; }
	inline GameObject_t1756533147 ** get_address_of_ball_2() { return &___ball_2; }
	inline void set_ball_2(GameObject_t1756533147 * value)
	{
		___ball_2 = value;
		Il2CppCodeGenWriteBarrier(&___ball_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
