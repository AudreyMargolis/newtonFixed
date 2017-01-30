#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TutorialController
struct TutorialController_t4038411994;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TutorialPanel
struct  TutorialPanel_t2003402148  : public MonoBehaviour_t1158329972
{
public:
	// TutorialController TutorialPanel::tut
	TutorialController_t4038411994 * ___tut_2;
	// System.Boolean TutorialPanel::moveCamera
	bool ___moveCamera_3;
	// System.Boolean TutorialPanel::hasIndicator
	bool ___hasIndicator_4;
	// UnityEngine.GameObject TutorialPanel::camPosition
	GameObject_t1756533147 * ___camPosition_5;
	// UnityEngine.GameObject TutorialPanel::toIndicate
	GameObject_t1756533147 * ___toIndicate_6;
	// UnityEngine.GameObject TutorialPanel::indicatorSprite
	GameObject_t1756533147 * ___indicatorSprite_7;
	// System.Boolean TutorialPanel::compassVisable
	bool ___compassVisable_8;
	// System.Boolean TutorialPanel::finalPanel
	bool ___finalPanel_9;

public:
	inline static int32_t get_offset_of_tut_2() { return static_cast<int32_t>(offsetof(TutorialPanel_t2003402148, ___tut_2)); }
	inline TutorialController_t4038411994 * get_tut_2() const { return ___tut_2; }
	inline TutorialController_t4038411994 ** get_address_of_tut_2() { return &___tut_2; }
	inline void set_tut_2(TutorialController_t4038411994 * value)
	{
		___tut_2 = value;
		Il2CppCodeGenWriteBarrier(&___tut_2, value);
	}

	inline static int32_t get_offset_of_moveCamera_3() { return static_cast<int32_t>(offsetof(TutorialPanel_t2003402148, ___moveCamera_3)); }
	inline bool get_moveCamera_3() const { return ___moveCamera_3; }
	inline bool* get_address_of_moveCamera_3() { return &___moveCamera_3; }
	inline void set_moveCamera_3(bool value)
	{
		___moveCamera_3 = value;
	}

	inline static int32_t get_offset_of_hasIndicator_4() { return static_cast<int32_t>(offsetof(TutorialPanel_t2003402148, ___hasIndicator_4)); }
	inline bool get_hasIndicator_4() const { return ___hasIndicator_4; }
	inline bool* get_address_of_hasIndicator_4() { return &___hasIndicator_4; }
	inline void set_hasIndicator_4(bool value)
	{
		___hasIndicator_4 = value;
	}

	inline static int32_t get_offset_of_camPosition_5() { return static_cast<int32_t>(offsetof(TutorialPanel_t2003402148, ___camPosition_5)); }
	inline GameObject_t1756533147 * get_camPosition_5() const { return ___camPosition_5; }
	inline GameObject_t1756533147 ** get_address_of_camPosition_5() { return &___camPosition_5; }
	inline void set_camPosition_5(GameObject_t1756533147 * value)
	{
		___camPosition_5 = value;
		Il2CppCodeGenWriteBarrier(&___camPosition_5, value);
	}

	inline static int32_t get_offset_of_toIndicate_6() { return static_cast<int32_t>(offsetof(TutorialPanel_t2003402148, ___toIndicate_6)); }
	inline GameObject_t1756533147 * get_toIndicate_6() const { return ___toIndicate_6; }
	inline GameObject_t1756533147 ** get_address_of_toIndicate_6() { return &___toIndicate_6; }
	inline void set_toIndicate_6(GameObject_t1756533147 * value)
	{
		___toIndicate_6 = value;
		Il2CppCodeGenWriteBarrier(&___toIndicate_6, value);
	}

	inline static int32_t get_offset_of_indicatorSprite_7() { return static_cast<int32_t>(offsetof(TutorialPanel_t2003402148, ___indicatorSprite_7)); }
	inline GameObject_t1756533147 * get_indicatorSprite_7() const { return ___indicatorSprite_7; }
	inline GameObject_t1756533147 ** get_address_of_indicatorSprite_7() { return &___indicatorSprite_7; }
	inline void set_indicatorSprite_7(GameObject_t1756533147 * value)
	{
		___indicatorSprite_7 = value;
		Il2CppCodeGenWriteBarrier(&___indicatorSprite_7, value);
	}

	inline static int32_t get_offset_of_compassVisable_8() { return static_cast<int32_t>(offsetof(TutorialPanel_t2003402148, ___compassVisable_8)); }
	inline bool get_compassVisable_8() const { return ___compassVisable_8; }
	inline bool* get_address_of_compassVisable_8() { return &___compassVisable_8; }
	inline void set_compassVisable_8(bool value)
	{
		___compassVisable_8 = value;
	}

	inline static int32_t get_offset_of_finalPanel_9() { return static_cast<int32_t>(offsetof(TutorialPanel_t2003402148, ___finalPanel_9)); }
	inline bool get_finalPanel_9() const { return ___finalPanel_9; }
	inline bool* get_address_of_finalPanel_9() { return &___finalPanel_9; }
	inline void set_finalPanel_9(bool value)
	{
		___finalPanel_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
