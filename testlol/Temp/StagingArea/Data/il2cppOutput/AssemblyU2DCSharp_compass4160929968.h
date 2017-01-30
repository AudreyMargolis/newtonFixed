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
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// compass
struct  compass_t4160929968  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject compass::ball
	GameObject_t1756533147 * ___ball_2;
	// UnityEngine.GameObject compass::magText
	GameObject_t1756533147 * ___magText_3;
	// UnityEngine.GameObject compass::paddle
	GameObject_t1756533147 * ___paddle_4;
	// UnityEngine.Rigidbody compass::ballrb
	Rigidbody_t4233889191 * ___ballrb_5;

public:
	inline static int32_t get_offset_of_ball_2() { return static_cast<int32_t>(offsetof(compass_t4160929968, ___ball_2)); }
	inline GameObject_t1756533147 * get_ball_2() const { return ___ball_2; }
	inline GameObject_t1756533147 ** get_address_of_ball_2() { return &___ball_2; }
	inline void set_ball_2(GameObject_t1756533147 * value)
	{
		___ball_2 = value;
		Il2CppCodeGenWriteBarrier(&___ball_2, value);
	}

	inline static int32_t get_offset_of_magText_3() { return static_cast<int32_t>(offsetof(compass_t4160929968, ___magText_3)); }
	inline GameObject_t1756533147 * get_magText_3() const { return ___magText_3; }
	inline GameObject_t1756533147 ** get_address_of_magText_3() { return &___magText_3; }
	inline void set_magText_3(GameObject_t1756533147 * value)
	{
		___magText_3 = value;
		Il2CppCodeGenWriteBarrier(&___magText_3, value);
	}

	inline static int32_t get_offset_of_paddle_4() { return static_cast<int32_t>(offsetof(compass_t4160929968, ___paddle_4)); }
	inline GameObject_t1756533147 * get_paddle_4() const { return ___paddle_4; }
	inline GameObject_t1756533147 ** get_address_of_paddle_4() { return &___paddle_4; }
	inline void set_paddle_4(GameObject_t1756533147 * value)
	{
		___paddle_4 = value;
		Il2CppCodeGenWriteBarrier(&___paddle_4, value);
	}

	inline static int32_t get_offset_of_ballrb_5() { return static_cast<int32_t>(offsetof(compass_t4160929968, ___ballrb_5)); }
	inline Rigidbody_t4233889191 * get_ballrb_5() const { return ___ballrb_5; }
	inline Rigidbody_t4233889191 ** get_address_of_ballrb_5() { return &___ballrb_5; }
	inline void set_ballrb_5(Rigidbody_t4233889191 * value)
	{
		___ballrb_5 = value;
		Il2CppCodeGenWriteBarrier(&___ballrb_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
