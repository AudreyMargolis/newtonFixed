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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// GameManager
struct GameManager_t2252321495;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CamFollow
struct  CamFollow_t2983292430  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject CamFollow::ball
	GameObject_t1756533147 * ___ball_2;
	// UnityEngine.GameObject[] CamFollow::routePoints
	GameObjectU5BU5D_t3057952154* ___routePoints_3;
	// GameManager CamFollow::gm
	GameManager_t2252321495 * ___gm_4;
	// System.Single CamFollow::smooth
	float ___smooth_5;
	// System.Boolean CamFollow::followPLayer
	bool ___followPLayer_6;
	// System.Boolean CamFollow::isRunning
	bool ___isRunning_7;
	// System.Int32 CamFollow::pointPos
	int32_t ___pointPos_8;

public:
	inline static int32_t get_offset_of_ball_2() { return static_cast<int32_t>(offsetof(CamFollow_t2983292430, ___ball_2)); }
	inline GameObject_t1756533147 * get_ball_2() const { return ___ball_2; }
	inline GameObject_t1756533147 ** get_address_of_ball_2() { return &___ball_2; }
	inline void set_ball_2(GameObject_t1756533147 * value)
	{
		___ball_2 = value;
		Il2CppCodeGenWriteBarrier(&___ball_2, value);
	}

	inline static int32_t get_offset_of_routePoints_3() { return static_cast<int32_t>(offsetof(CamFollow_t2983292430, ___routePoints_3)); }
	inline GameObjectU5BU5D_t3057952154* get_routePoints_3() const { return ___routePoints_3; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_routePoints_3() { return &___routePoints_3; }
	inline void set_routePoints_3(GameObjectU5BU5D_t3057952154* value)
	{
		___routePoints_3 = value;
		Il2CppCodeGenWriteBarrier(&___routePoints_3, value);
	}

	inline static int32_t get_offset_of_gm_4() { return static_cast<int32_t>(offsetof(CamFollow_t2983292430, ___gm_4)); }
	inline GameManager_t2252321495 * get_gm_4() const { return ___gm_4; }
	inline GameManager_t2252321495 ** get_address_of_gm_4() { return &___gm_4; }
	inline void set_gm_4(GameManager_t2252321495 * value)
	{
		___gm_4 = value;
		Il2CppCodeGenWriteBarrier(&___gm_4, value);
	}

	inline static int32_t get_offset_of_smooth_5() { return static_cast<int32_t>(offsetof(CamFollow_t2983292430, ___smooth_5)); }
	inline float get_smooth_5() const { return ___smooth_5; }
	inline float* get_address_of_smooth_5() { return &___smooth_5; }
	inline void set_smooth_5(float value)
	{
		___smooth_5 = value;
	}

	inline static int32_t get_offset_of_followPLayer_6() { return static_cast<int32_t>(offsetof(CamFollow_t2983292430, ___followPLayer_6)); }
	inline bool get_followPLayer_6() const { return ___followPLayer_6; }
	inline bool* get_address_of_followPLayer_6() { return &___followPLayer_6; }
	inline void set_followPLayer_6(bool value)
	{
		___followPLayer_6 = value;
	}

	inline static int32_t get_offset_of_isRunning_7() { return static_cast<int32_t>(offsetof(CamFollow_t2983292430, ___isRunning_7)); }
	inline bool get_isRunning_7() const { return ___isRunning_7; }
	inline bool* get_address_of_isRunning_7() { return &___isRunning_7; }
	inline void set_isRunning_7(bool value)
	{
		___isRunning_7 = value;
	}

	inline static int32_t get_offset_of_pointPos_8() { return static_cast<int32_t>(offsetof(CamFollow_t2983292430, ___pointPos_8)); }
	inline int32_t get_pointPos_8() const { return ___pointPos_8; }
	inline int32_t* get_address_of_pointPos_8() { return &___pointPos_8; }
	inline void set_pointPos_8(int32_t value)
	{
		___pointPos_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
