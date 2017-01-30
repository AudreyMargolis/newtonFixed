#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "AssemblyU2DCSharp_MySingleton_1_gen3292186448.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t2252321495  : public MySingleton_1_t3292186448
{
public:
	// UnityEngine.UI.Text GameManager::forceText
	Text_t356221433 * ___forceText_4;
	// UnityEngine.UI.Text GameManager::chargeText
	Text_t356221433 * ___chargeText_5;
	// UnityEngine.UI.Text GameManager::pauseText
	Text_t356221433 * ___pauseText_6;
	// UnityEngine.UI.Text GameManager::winText
	Text_t356221433 * ___winText_7;
	// UnityEngine.UI.Image GameManager::chargeFill
	Image_t2042527209 * ___chargeFill_8;
	// System.Int32 GameManager::gamescore
	int32_t ___gamescore_9;
	// System.Single GameManager::lvlscore
	float ___lvlscore_10;
	// System.Int32 GameManager::lvlCharges
	int32_t ___lvlCharges_11;
	// System.Int32 GameManager::lvlPauses
	int32_t ___lvlPauses_12;
	// System.Int32 GameManager::bonusCharges
	int32_t ___bonusCharges_13;
	// System.Int32 GameManager::bonusPauses
	int32_t ___bonusPauses_14;
	// System.Int32 GameManager::startCharge
	int32_t ___startCharge_15;
	// System.Int32 GameManager::startPause
	int32_t ___startPause_16;
	// System.Int32 GameManager::maxForce
	int32_t ___maxForce_17;
	// UnityEngine.GameObject GameManager::forceUI
	GameObject_t1756533147 * ___forceUI_18;
	// UnityEngine.GameObject GameManager::chargeUI
	GameObject_t1756533147 * ___chargeUI_19;
	// UnityEngine.GameObject GameManager::chargeUIBar
	GameObject_t1756533147 * ___chargeUIBar_20;
	// UnityEngine.GameObject GameManager::pauseUI
	GameObject_t1756533147 * ___pauseUI_21;
	// UnityEngine.GameObject GameManager::winUI
	GameObject_t1756533147 * ___winUI_22;
	// UnityEngine.GameObject GameManager::paddle
	GameObject_t1756533147 * ___paddle_23;
	// System.Boolean GameManager::playerControl
	bool ___playerControl_24;
	// System.Boolean GameManager::tutorialMode
	bool ___tutorialMode_25;
	// System.Boolean GameManager::isPlaying
	bool ___isPlaying_26;

public:
	inline static int32_t get_offset_of_forceText_4() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___forceText_4)); }
	inline Text_t356221433 * get_forceText_4() const { return ___forceText_4; }
	inline Text_t356221433 ** get_address_of_forceText_4() { return &___forceText_4; }
	inline void set_forceText_4(Text_t356221433 * value)
	{
		___forceText_4 = value;
		Il2CppCodeGenWriteBarrier(&___forceText_4, value);
	}

	inline static int32_t get_offset_of_chargeText_5() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___chargeText_5)); }
	inline Text_t356221433 * get_chargeText_5() const { return ___chargeText_5; }
	inline Text_t356221433 ** get_address_of_chargeText_5() { return &___chargeText_5; }
	inline void set_chargeText_5(Text_t356221433 * value)
	{
		___chargeText_5 = value;
		Il2CppCodeGenWriteBarrier(&___chargeText_5, value);
	}

	inline static int32_t get_offset_of_pauseText_6() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___pauseText_6)); }
	inline Text_t356221433 * get_pauseText_6() const { return ___pauseText_6; }
	inline Text_t356221433 ** get_address_of_pauseText_6() { return &___pauseText_6; }
	inline void set_pauseText_6(Text_t356221433 * value)
	{
		___pauseText_6 = value;
		Il2CppCodeGenWriteBarrier(&___pauseText_6, value);
	}

	inline static int32_t get_offset_of_winText_7() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___winText_7)); }
	inline Text_t356221433 * get_winText_7() const { return ___winText_7; }
	inline Text_t356221433 ** get_address_of_winText_7() { return &___winText_7; }
	inline void set_winText_7(Text_t356221433 * value)
	{
		___winText_7 = value;
		Il2CppCodeGenWriteBarrier(&___winText_7, value);
	}

	inline static int32_t get_offset_of_chargeFill_8() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___chargeFill_8)); }
	inline Image_t2042527209 * get_chargeFill_8() const { return ___chargeFill_8; }
	inline Image_t2042527209 ** get_address_of_chargeFill_8() { return &___chargeFill_8; }
	inline void set_chargeFill_8(Image_t2042527209 * value)
	{
		___chargeFill_8 = value;
		Il2CppCodeGenWriteBarrier(&___chargeFill_8, value);
	}

	inline static int32_t get_offset_of_gamescore_9() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___gamescore_9)); }
	inline int32_t get_gamescore_9() const { return ___gamescore_9; }
	inline int32_t* get_address_of_gamescore_9() { return &___gamescore_9; }
	inline void set_gamescore_9(int32_t value)
	{
		___gamescore_9 = value;
	}

	inline static int32_t get_offset_of_lvlscore_10() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___lvlscore_10)); }
	inline float get_lvlscore_10() const { return ___lvlscore_10; }
	inline float* get_address_of_lvlscore_10() { return &___lvlscore_10; }
	inline void set_lvlscore_10(float value)
	{
		___lvlscore_10 = value;
	}

	inline static int32_t get_offset_of_lvlCharges_11() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___lvlCharges_11)); }
	inline int32_t get_lvlCharges_11() const { return ___lvlCharges_11; }
	inline int32_t* get_address_of_lvlCharges_11() { return &___lvlCharges_11; }
	inline void set_lvlCharges_11(int32_t value)
	{
		___lvlCharges_11 = value;
	}

	inline static int32_t get_offset_of_lvlPauses_12() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___lvlPauses_12)); }
	inline int32_t get_lvlPauses_12() const { return ___lvlPauses_12; }
	inline int32_t* get_address_of_lvlPauses_12() { return &___lvlPauses_12; }
	inline void set_lvlPauses_12(int32_t value)
	{
		___lvlPauses_12 = value;
	}

	inline static int32_t get_offset_of_bonusCharges_13() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___bonusCharges_13)); }
	inline int32_t get_bonusCharges_13() const { return ___bonusCharges_13; }
	inline int32_t* get_address_of_bonusCharges_13() { return &___bonusCharges_13; }
	inline void set_bonusCharges_13(int32_t value)
	{
		___bonusCharges_13 = value;
	}

	inline static int32_t get_offset_of_bonusPauses_14() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___bonusPauses_14)); }
	inline int32_t get_bonusPauses_14() const { return ___bonusPauses_14; }
	inline int32_t* get_address_of_bonusPauses_14() { return &___bonusPauses_14; }
	inline void set_bonusPauses_14(int32_t value)
	{
		___bonusPauses_14 = value;
	}

	inline static int32_t get_offset_of_startCharge_15() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___startCharge_15)); }
	inline int32_t get_startCharge_15() const { return ___startCharge_15; }
	inline int32_t* get_address_of_startCharge_15() { return &___startCharge_15; }
	inline void set_startCharge_15(int32_t value)
	{
		___startCharge_15 = value;
	}

	inline static int32_t get_offset_of_startPause_16() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___startPause_16)); }
	inline int32_t get_startPause_16() const { return ___startPause_16; }
	inline int32_t* get_address_of_startPause_16() { return &___startPause_16; }
	inline void set_startPause_16(int32_t value)
	{
		___startPause_16 = value;
	}

	inline static int32_t get_offset_of_maxForce_17() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___maxForce_17)); }
	inline int32_t get_maxForce_17() const { return ___maxForce_17; }
	inline int32_t* get_address_of_maxForce_17() { return &___maxForce_17; }
	inline void set_maxForce_17(int32_t value)
	{
		___maxForce_17 = value;
	}

	inline static int32_t get_offset_of_forceUI_18() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___forceUI_18)); }
	inline GameObject_t1756533147 * get_forceUI_18() const { return ___forceUI_18; }
	inline GameObject_t1756533147 ** get_address_of_forceUI_18() { return &___forceUI_18; }
	inline void set_forceUI_18(GameObject_t1756533147 * value)
	{
		___forceUI_18 = value;
		Il2CppCodeGenWriteBarrier(&___forceUI_18, value);
	}

	inline static int32_t get_offset_of_chargeUI_19() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___chargeUI_19)); }
	inline GameObject_t1756533147 * get_chargeUI_19() const { return ___chargeUI_19; }
	inline GameObject_t1756533147 ** get_address_of_chargeUI_19() { return &___chargeUI_19; }
	inline void set_chargeUI_19(GameObject_t1756533147 * value)
	{
		___chargeUI_19 = value;
		Il2CppCodeGenWriteBarrier(&___chargeUI_19, value);
	}

	inline static int32_t get_offset_of_chargeUIBar_20() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___chargeUIBar_20)); }
	inline GameObject_t1756533147 * get_chargeUIBar_20() const { return ___chargeUIBar_20; }
	inline GameObject_t1756533147 ** get_address_of_chargeUIBar_20() { return &___chargeUIBar_20; }
	inline void set_chargeUIBar_20(GameObject_t1756533147 * value)
	{
		___chargeUIBar_20 = value;
		Il2CppCodeGenWriteBarrier(&___chargeUIBar_20, value);
	}

	inline static int32_t get_offset_of_pauseUI_21() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___pauseUI_21)); }
	inline GameObject_t1756533147 * get_pauseUI_21() const { return ___pauseUI_21; }
	inline GameObject_t1756533147 ** get_address_of_pauseUI_21() { return &___pauseUI_21; }
	inline void set_pauseUI_21(GameObject_t1756533147 * value)
	{
		___pauseUI_21 = value;
		Il2CppCodeGenWriteBarrier(&___pauseUI_21, value);
	}

	inline static int32_t get_offset_of_winUI_22() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___winUI_22)); }
	inline GameObject_t1756533147 * get_winUI_22() const { return ___winUI_22; }
	inline GameObject_t1756533147 ** get_address_of_winUI_22() { return &___winUI_22; }
	inline void set_winUI_22(GameObject_t1756533147 * value)
	{
		___winUI_22 = value;
		Il2CppCodeGenWriteBarrier(&___winUI_22, value);
	}

	inline static int32_t get_offset_of_paddle_23() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___paddle_23)); }
	inline GameObject_t1756533147 * get_paddle_23() const { return ___paddle_23; }
	inline GameObject_t1756533147 ** get_address_of_paddle_23() { return &___paddle_23; }
	inline void set_paddle_23(GameObject_t1756533147 * value)
	{
		___paddle_23 = value;
		Il2CppCodeGenWriteBarrier(&___paddle_23, value);
	}

	inline static int32_t get_offset_of_playerControl_24() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___playerControl_24)); }
	inline bool get_playerControl_24() const { return ___playerControl_24; }
	inline bool* get_address_of_playerControl_24() { return &___playerControl_24; }
	inline void set_playerControl_24(bool value)
	{
		___playerControl_24 = value;
	}

	inline static int32_t get_offset_of_tutorialMode_25() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___tutorialMode_25)); }
	inline bool get_tutorialMode_25() const { return ___tutorialMode_25; }
	inline bool* get_address_of_tutorialMode_25() { return &___tutorialMode_25; }
	inline void set_tutorialMode_25(bool value)
	{
		___tutorialMode_25 = value;
	}

	inline static int32_t get_offset_of_isPlaying_26() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___isPlaying_26)); }
	inline bool get_isPlaying_26() const { return ___isPlaying_26; }
	inline bool* get_address_of_isPlaying_26() { return &___isPlaying_26; }
	inline void set_isPlaying_26(bool value)
	{
		___isPlaying_26 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
