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
// CamFollow
struct CamFollow_t2983292430;
// GameManager
struct GameManager_t2252321495;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TutorialController
struct  TutorialController_t4038411994  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject TutorialController::mainCam
	GameObject_t1756533147 * ___mainCam_2;
	// CamFollow TutorialController::camScript
	CamFollow_t2983292430 * ___camScript_3;
	// GameManager TutorialController::gm
	GameManager_t2252321495 * ___gm_4;
	// UnityEngine.GameObject TutorialController::paddle
	GameObject_t1756533147 * ___paddle_5;
	// UnityEngine.GameObject[] TutorialController::tutorialPanels
	GameObjectU5BU5D_t3057952154* ___tutorialPanels_6;
	// UnityEngine.GameObject TutorialController::compassText
	GameObject_t1756533147 * ___compassText_7;
	// UnityEngine.GameObject TutorialController::compassImage
	GameObject_t1756533147 * ___compassImage_8;
	// UnityEngine.Color TutorialController::visableColor
	Color_t2020392075  ___visableColor_9;
	// UnityEngine.Color TutorialController::inVisColor
	Color_t2020392075  ___inVisColor_10;
	// System.Int32 TutorialController::tutorialLength
	int32_t ___tutorialLength_11;
	// System.Boolean TutorialController::noControl
	bool ___noControl_12;

public:
	inline static int32_t get_offset_of_mainCam_2() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___mainCam_2)); }
	inline GameObject_t1756533147 * get_mainCam_2() const { return ___mainCam_2; }
	inline GameObject_t1756533147 ** get_address_of_mainCam_2() { return &___mainCam_2; }
	inline void set_mainCam_2(GameObject_t1756533147 * value)
	{
		___mainCam_2 = value;
		Il2CppCodeGenWriteBarrier(&___mainCam_2, value);
	}

	inline static int32_t get_offset_of_camScript_3() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___camScript_3)); }
	inline CamFollow_t2983292430 * get_camScript_3() const { return ___camScript_3; }
	inline CamFollow_t2983292430 ** get_address_of_camScript_3() { return &___camScript_3; }
	inline void set_camScript_3(CamFollow_t2983292430 * value)
	{
		___camScript_3 = value;
		Il2CppCodeGenWriteBarrier(&___camScript_3, value);
	}

	inline static int32_t get_offset_of_gm_4() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___gm_4)); }
	inline GameManager_t2252321495 * get_gm_4() const { return ___gm_4; }
	inline GameManager_t2252321495 ** get_address_of_gm_4() { return &___gm_4; }
	inline void set_gm_4(GameManager_t2252321495 * value)
	{
		___gm_4 = value;
		Il2CppCodeGenWriteBarrier(&___gm_4, value);
	}

	inline static int32_t get_offset_of_paddle_5() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___paddle_5)); }
	inline GameObject_t1756533147 * get_paddle_5() const { return ___paddle_5; }
	inline GameObject_t1756533147 ** get_address_of_paddle_5() { return &___paddle_5; }
	inline void set_paddle_5(GameObject_t1756533147 * value)
	{
		___paddle_5 = value;
		Il2CppCodeGenWriteBarrier(&___paddle_5, value);
	}

	inline static int32_t get_offset_of_tutorialPanels_6() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___tutorialPanels_6)); }
	inline GameObjectU5BU5D_t3057952154* get_tutorialPanels_6() const { return ___tutorialPanels_6; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_tutorialPanels_6() { return &___tutorialPanels_6; }
	inline void set_tutorialPanels_6(GameObjectU5BU5D_t3057952154* value)
	{
		___tutorialPanels_6 = value;
		Il2CppCodeGenWriteBarrier(&___tutorialPanels_6, value);
	}

	inline static int32_t get_offset_of_compassText_7() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___compassText_7)); }
	inline GameObject_t1756533147 * get_compassText_7() const { return ___compassText_7; }
	inline GameObject_t1756533147 ** get_address_of_compassText_7() { return &___compassText_7; }
	inline void set_compassText_7(GameObject_t1756533147 * value)
	{
		___compassText_7 = value;
		Il2CppCodeGenWriteBarrier(&___compassText_7, value);
	}

	inline static int32_t get_offset_of_compassImage_8() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___compassImage_8)); }
	inline GameObject_t1756533147 * get_compassImage_8() const { return ___compassImage_8; }
	inline GameObject_t1756533147 ** get_address_of_compassImage_8() { return &___compassImage_8; }
	inline void set_compassImage_8(GameObject_t1756533147 * value)
	{
		___compassImage_8 = value;
		Il2CppCodeGenWriteBarrier(&___compassImage_8, value);
	}

	inline static int32_t get_offset_of_visableColor_9() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___visableColor_9)); }
	inline Color_t2020392075  get_visableColor_9() const { return ___visableColor_9; }
	inline Color_t2020392075 * get_address_of_visableColor_9() { return &___visableColor_9; }
	inline void set_visableColor_9(Color_t2020392075  value)
	{
		___visableColor_9 = value;
	}

	inline static int32_t get_offset_of_inVisColor_10() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___inVisColor_10)); }
	inline Color_t2020392075  get_inVisColor_10() const { return ___inVisColor_10; }
	inline Color_t2020392075 * get_address_of_inVisColor_10() { return &___inVisColor_10; }
	inline void set_inVisColor_10(Color_t2020392075  value)
	{
		___inVisColor_10 = value;
	}

	inline static int32_t get_offset_of_tutorialLength_11() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___tutorialLength_11)); }
	inline int32_t get_tutorialLength_11() const { return ___tutorialLength_11; }
	inline int32_t* get_address_of_tutorialLength_11() { return &___tutorialLength_11; }
	inline void set_tutorialLength_11(int32_t value)
	{
		___tutorialLength_11 = value;
	}

	inline static int32_t get_offset_of_noControl_12() { return static_cast<int32_t>(offsetof(TutorialController_t4038411994, ___noControl_12)); }
	inline bool get_noControl_12() const { return ___noControl_12; }
	inline bool* get_address_of_noControl_12() { return &___noControl_12; }
	inline void set_noControl_12(bool value)
	{
		___noControl_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
