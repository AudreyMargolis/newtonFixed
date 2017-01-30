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
// GameManager
struct GameManager_t2252321495;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_CursorMode2224606815.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PaddleBehavior
struct  PaddleBehavior_t3092747674  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 PaddleBehavior::charges
	int32_t ___charges_2;
	// System.Int32 PaddleBehavior::pauses
	int32_t ___pauses_3;
	// System.Single PaddleBehavior::force
	float ___force_4;
	// UnityEngine.GameObject PaddleBehavior::gameManage
	GameObject_t1756533147 * ___gameManage_5;
	// UnityEngine.GameObject PaddleBehavior::ball
	GameObject_t1756533147 * ___ball_6;
	// UnityEngine.GameObject PaddleBehavior::paddleCollider
	GameObject_t1756533147 * ___paddleCollider_7;
	// UnityEngine.GameObject PaddleBehavior::lerpTarget
	GameObject_t1756533147 * ___lerpTarget_8;
	// GameManager PaddleBehavior::gm
	GameManager_t2252321495 * ___gm_9;
	// System.Single PaddleBehavior::rotSpeed
	float ___rotSpeed_10;
	// System.Single PaddleBehavior::lerpSpeed
	float ___lerpSpeed_11;
	// System.Boolean PaddleBehavior::paused
	bool ___paused_12;
	// System.Boolean PaddleBehavior::grabbed
	bool ___grabbed_13;
	// UnityEngine.Vector3 PaddleBehavior::savedVelocity
	Vector3_t2243707580  ___savedVelocity_14;
	// UnityEngine.Vector3 PaddleBehavior::savedAngularVelocity
	Vector3_t2243707580  ___savedAngularVelocity_15;
	// System.Int32 PaddleBehavior::maxForce
	int32_t ___maxForce_16;
	// UnityEngine.Texture2D PaddleBehavior::cursorTexture
	Texture2D_t3542995729 * ___cursorTexture_17;
	// UnityEngine.CursorMode PaddleBehavior::cursorMode
	int32_t ___cursorMode_18;
	// UnityEngine.Vector2 PaddleBehavior::hotSpot
	Vector2_t2243707579  ___hotSpot_19;
	// UnityEngine.GameObject PaddleBehavior::tetherSprite
	GameObject_t1756533147 * ___tetherSprite_20;
	// UnityEngine.GameObject PaddleBehavior::firingSprite
	GameObject_t1756533147 * ___firingSprite_21;
	// UnityEngine.GameObject PaddleBehavior::tempTether
	GameObject_t1756533147 * ___tempTether_22;
	// UnityEngine.GameObject PaddleBehavior::tempFiring
	GameObject_t1756533147 * ___tempFiring_23;
	// System.Boolean PaddleBehavior::isRunning
	bool ___isRunning_24;
	// System.Boolean PaddleBehavior::isFiring
	bool ___isFiring_25;
	// UnityEngine.AudioSource PaddleBehavior::audio1
	AudioSource_t1135106623 * ___audio1_26;
	// UnityEngine.AudioSource PaddleBehavior::audio2
	AudioSource_t1135106623 * ___audio2_27;

public:
	inline static int32_t get_offset_of_charges_2() { return static_cast<int32_t>(offsetof(PaddleBehavior_t3092747674, ___charges_2)); }
	inline int32_t get_charges_2() const { return ___charges_2; }
	inline int32_t* get_address_of_charges_2() { return &___charges_2; }
	inline void set_charges_2(int32_t value)
	{
		___charges_2 = value;
	}

	inline static int32_t get_offset_of_pauses_3() { return static_cast<int32_t>(offsetof(PaddleBehavior_t3092747674, ___pauses_3)); }
	inline int32_t get_pauses_3() const { return ___pauses_3; }
	inline int32_t* get_address_of_pauses_3() { return &___pauses_3; }
	inline void set_pauses_3(int32_t value)
	{
		___pauses_3 = value;
	}

	inline static int32_t get_offset_of_force_4() { return static_cast<int32_t>(offsetof(PaddleBehavior_t3092747674, ___force_4)); }
	inline float get_force_4() const { return ___force_4; }
	inline float* get_address_of_force_4() { return &___force_4; }
	inline void set_force_4(float value)
	{
		___force_4 = value;
	}

	inline static int32_t get_offset_of_gameManage_5() { return static_cast<int32_t>(offsetof(PaddleBehavior_t3092747674, ___gameManage_5)); }
	inline GameObject_t1756533147 * get_gameManage_5() const { return ___gameManage_5; }
	inline GameObject_t1756533147 ** get_address_of_gameManage_5() { return &___gameManage_5; }
	inline void set_gameManage_5(GameObject_t1756533147 * value)
	{
		___gameManage_5 = value;
		Il2CppCodeGenWriteBarrier(&___gameManage_5, value);
	}

	inline static int32_t get_offset_of_ball_6() { return static_cast<int32_t>(offsetof(PaddleBehavior_t3092747674, ___ball_6)); }
	inline GameObject_t1756533147 * get_ball_6() const { return ___ball_6; }
	inline GameObject_t1756533147 ** get_address_of_ball_6() { return &___ball_6; }
	inline void set_ball_6(GameObject_t1756533147 * value)
	{
		___ball_6 = value;
		Il2CppCodeGenWriteBarrier(&___ball_6, value);
	}

	inline static int32_t get_offset_of_paddleCollider_7() { return static_cast<int32_t>(offsetof(PaddleBehavior_t3092747674, ___paddleCollider_7)); }
	inline GameObject_t1756533147 * get_paddleCollider_7() const { return ___paddleCollider_7; }
	inline GameObject_t1756533147 ** get_address_of_paddleCollider_7() { return &___paddleCollider_7; }
	inline void set_paddleCollider_7(GameObject_t1756533147 * value)
	{
		___paddleCollider_7 = value;
		Il2CppCodeGenWriteBarrier(&___paddleCollider_7, value);
	}

	inline static int32_t get_offset_of_lerpTarget_8() { return static_cast<int32_t>(offsetof(PaddleBehavior_t3092747674, ___lerpTarget_8)); }
	inline GameObject_t1756533147 * get_lerpTarget_8() const { return ___lerpTarget_8; }
	inline GameObject_t1756533147 ** get_address_of_lerpTarget_8() { return &___lerpTarget_8; }
	inline void set_lerpTarget_8(GameObject_t1756533147 * value)
	{
		___lerpTarget_8 = value;
		Il2CppCodeGenWriteBarrier(&___lerpTarget_8, value);
	}

	inline static int32_t get_offset_of_gm_9() { return static_cast<int32_t>(offsetof(PaddleBehavior_t3092747674, ___gm_9)); }
	inline GameManager_t2252321495 * get_gm_9() const { return ___gm_9; }
	inline GameManager_t2252321495 ** get_address_of_gm_9() { return &___gm_9; }
	inline void set_gm_9(GameManager_t2252321495 * value)
	{
		___gm_9 = value;
		Il2CppCodeGenWriteBarrier(&___gm_9, value);
	}

	inline static int32_t get_offset_of_rotSpeed_10() { return static_cast<int32_t>(offsetof(PaddleBehavior_t3092747674, ___rotSpeed_10)); }
	inline float get_rotSpeed_10() const { return ___rotSpeed_10; }
	inline float* get_address_of_rotSpeed_10() { return &___rotSpeed_10; }
	inline void set_rotSpeed_10(float value)
	{
		___rotSpeed_10 = value;
	}

	inline static int32_t get_offset_of_lerpSpeed_11() { return static_cast<int32_t>(offsetof(PaddleBehavior_t3092747674, ___lerpSpeed_11)); }
	inline float get_lerpSpeed_11() const { return ___lerpSpeed_11; }
	inline float* get_address_of_lerpSpeed_11() { return &___lerpSpeed_11; }
	inline void set_lerpSpeed_11(float value)
	{
		___lerpSpeed_11 = value;
	}

	inline static int32_t get_offset_of_paused_12() { return static_cast<int32_t>(offsetof(PaddleBehavior_t3092747674, ___paused_12)); }
	inline bool get_paused_12() const { return ___paused_12; }
	inline bool* get_address_of_paused_12() { return &___paused_12; }
	inline void set_paused_12(bool value)
	{
		___paused_12 = value;
	}

	inline static int32_t get_offset_of_grabbed_13() { return static_cast<int32_t>(offsetof(PaddleBehavior_t3092747674, ___grabbed_13)); }
	inline bool get_grabbed_13() const { return ___grabbed_13; }
	inline bool* get_address_of_grabbed_13() { return &___grabbed_13; }
	inline void set_grabbed_13(bool value)
	{
		___grabbed_13 = value;
	}

	inline static int32_t get_offset_of_savedVelocity_14() { return static_cast<int32_t>(offsetof(PaddleBehavior_t3092747674, ___savedVelocity_14)); }
	inline Vector3_t2243707580  get_savedVelocity_14() const { return ___savedVelocity_14; }
	inline Vector3_t2243707580 * get_address_of_savedVelocity_14() { return &___savedVelocity_14; }
	inline void set_savedVelocity_14(Vector3_t2243707580  value)
	{
		___savedVelocity_14 = value;
	}

	inline static int32_t get_offset_of_savedAngularVelocity_15() { return static_cast<int32_t>(offsetof(PaddleBehavior_t3092747674, ___savedAngularVelocity_15)); }
	inline Vector3_t2243707580  get_savedAngularVelocity_15() const { return ___savedAngularVelocity_15; }
	inline Vector3_t2243707580 * get_address_of_savedAngularVelocity_15() { return &___savedAngularVelocity_15; }
	inline void set_savedAngularVelocity_15(Vector3_t2243707580  value)
	{
		___savedAngularVelocity_15 = value;
	}

	inline static int32_t get_offset_of_maxForce_16() { return static_cast<int32_t>(offsetof(PaddleBehavior_t3092747674, ___maxForce_16)); }
	inline int32_t get_maxForce_16() const { return ___maxForce_16; }
	inline int32_t* get_address_of_maxForce_16() { return &___maxForce_16; }
	inline void set_maxForce_16(int32_t value)
	{
		___maxForce_16 = value;
	}

	inline static int32_t get_offset_of_cursorTexture_17() { return static_cast<int32_t>(offsetof(PaddleBehavior_t3092747674, ___cursorTexture_17)); }
	inline Texture2D_t3542995729 * get_cursorTexture_17() const { return ___cursorTexture_17; }
	inline Texture2D_t3542995729 ** get_address_of_cursorTexture_17() { return &___cursorTexture_17; }
	inline void set_cursorTexture_17(Texture2D_t3542995729 * value)
	{
		___cursorTexture_17 = value;
		Il2CppCodeGenWriteBarrier(&___cursorTexture_17, value);
	}

	inline static int32_t get_offset_of_cursorMode_18() { return static_cast<int32_t>(offsetof(PaddleBehavior_t3092747674, ___cursorMode_18)); }
	inline int32_t get_cursorMode_18() const { return ___cursorMode_18; }
	inline int32_t* get_address_of_cursorMode_18() { return &___cursorMode_18; }
	inline void set_cursorMode_18(int32_t value)
	{
		___cursorMode_18 = value;
	}

	inline static int32_t get_offset_of_hotSpot_19() { return static_cast<int32_t>(offsetof(PaddleBehavior_t3092747674, ___hotSpot_19)); }
	inline Vector2_t2243707579  get_hotSpot_19() const { return ___hotSpot_19; }
	inline Vector2_t2243707579 * get_address_of_hotSpot_19() { return &___hotSpot_19; }
	inline void set_hotSpot_19(Vector2_t2243707579  value)
	{
		___hotSpot_19 = value;
	}

	inline static int32_t get_offset_of_tetherSprite_20() { return static_cast<int32_t>(offsetof(PaddleBehavior_t3092747674, ___tetherSprite_20)); }
	inline GameObject_t1756533147 * get_tetherSprite_20() const { return ___tetherSprite_20; }
	inline GameObject_t1756533147 ** get_address_of_tetherSprite_20() { return &___tetherSprite_20; }
	inline void set_tetherSprite_20(GameObject_t1756533147 * value)
	{
		___tetherSprite_20 = value;
		Il2CppCodeGenWriteBarrier(&___tetherSprite_20, value);
	}

	inline static int32_t get_offset_of_firingSprite_21() { return static_cast<int32_t>(offsetof(PaddleBehavior_t3092747674, ___firingSprite_21)); }
	inline GameObject_t1756533147 * get_firingSprite_21() const { return ___firingSprite_21; }
	inline GameObject_t1756533147 ** get_address_of_firingSprite_21() { return &___firingSprite_21; }
	inline void set_firingSprite_21(GameObject_t1756533147 * value)
	{
		___firingSprite_21 = value;
		Il2CppCodeGenWriteBarrier(&___firingSprite_21, value);
	}

	inline static int32_t get_offset_of_tempTether_22() { return static_cast<int32_t>(offsetof(PaddleBehavior_t3092747674, ___tempTether_22)); }
	inline GameObject_t1756533147 * get_tempTether_22() const { return ___tempTether_22; }
	inline GameObject_t1756533147 ** get_address_of_tempTether_22() { return &___tempTether_22; }
	inline void set_tempTether_22(GameObject_t1756533147 * value)
	{
		___tempTether_22 = value;
		Il2CppCodeGenWriteBarrier(&___tempTether_22, value);
	}

	inline static int32_t get_offset_of_tempFiring_23() { return static_cast<int32_t>(offsetof(PaddleBehavior_t3092747674, ___tempFiring_23)); }
	inline GameObject_t1756533147 * get_tempFiring_23() const { return ___tempFiring_23; }
	inline GameObject_t1756533147 ** get_address_of_tempFiring_23() { return &___tempFiring_23; }
	inline void set_tempFiring_23(GameObject_t1756533147 * value)
	{
		___tempFiring_23 = value;
		Il2CppCodeGenWriteBarrier(&___tempFiring_23, value);
	}

	inline static int32_t get_offset_of_isRunning_24() { return static_cast<int32_t>(offsetof(PaddleBehavior_t3092747674, ___isRunning_24)); }
	inline bool get_isRunning_24() const { return ___isRunning_24; }
	inline bool* get_address_of_isRunning_24() { return &___isRunning_24; }
	inline void set_isRunning_24(bool value)
	{
		___isRunning_24 = value;
	}

	inline static int32_t get_offset_of_isFiring_25() { return static_cast<int32_t>(offsetof(PaddleBehavior_t3092747674, ___isFiring_25)); }
	inline bool get_isFiring_25() const { return ___isFiring_25; }
	inline bool* get_address_of_isFiring_25() { return &___isFiring_25; }
	inline void set_isFiring_25(bool value)
	{
		___isFiring_25 = value;
	}

	inline static int32_t get_offset_of_audio1_26() { return static_cast<int32_t>(offsetof(PaddleBehavior_t3092747674, ___audio1_26)); }
	inline AudioSource_t1135106623 * get_audio1_26() const { return ___audio1_26; }
	inline AudioSource_t1135106623 ** get_address_of_audio1_26() { return &___audio1_26; }
	inline void set_audio1_26(AudioSource_t1135106623 * value)
	{
		___audio1_26 = value;
		Il2CppCodeGenWriteBarrier(&___audio1_26, value);
	}

	inline static int32_t get_offset_of_audio2_27() { return static_cast<int32_t>(offsetof(PaddleBehavior_t3092747674, ___audio2_27)); }
	inline AudioSource_t1135106623 * get_audio2_27() const { return ___audio2_27; }
	inline AudioSource_t1135106623 ** get_address_of_audio2_27() { return &___audio2_27; }
	inline void set_audio2_27(AudioSource_t1135106623 * value)
	{
		___audio2_27 = value;
		Il2CppCodeGenWriteBarrier(&___audio2_27, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
