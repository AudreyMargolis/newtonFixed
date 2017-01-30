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

// LevelUI
struct  LevelUI_t3261976948  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject LevelUI::winUI
	GameObject_t1756533147 * ___winUI_2;
	// UnityEngine.GameObject LevelUI::scoreUI
	GameObject_t1756533147 * ___scoreUI_3;
	// UnityEngine.GameObject LevelUI::statsPanel
	GameObject_t1756533147 * ___statsPanel_4;

public:
	inline static int32_t get_offset_of_winUI_2() { return static_cast<int32_t>(offsetof(LevelUI_t3261976948, ___winUI_2)); }
	inline GameObject_t1756533147 * get_winUI_2() const { return ___winUI_2; }
	inline GameObject_t1756533147 ** get_address_of_winUI_2() { return &___winUI_2; }
	inline void set_winUI_2(GameObject_t1756533147 * value)
	{
		___winUI_2 = value;
		Il2CppCodeGenWriteBarrier(&___winUI_2, value);
	}

	inline static int32_t get_offset_of_scoreUI_3() { return static_cast<int32_t>(offsetof(LevelUI_t3261976948, ___scoreUI_3)); }
	inline GameObject_t1756533147 * get_scoreUI_3() const { return ___scoreUI_3; }
	inline GameObject_t1756533147 ** get_address_of_scoreUI_3() { return &___scoreUI_3; }
	inline void set_scoreUI_3(GameObject_t1756533147 * value)
	{
		___scoreUI_3 = value;
		Il2CppCodeGenWriteBarrier(&___scoreUI_3, value);
	}

	inline static int32_t get_offset_of_statsPanel_4() { return static_cast<int32_t>(offsetof(LevelUI_t3261976948, ___statsPanel_4)); }
	inline GameObject_t1756533147 * get_statsPanel_4() const { return ___statsPanel_4; }
	inline GameObject_t1756533147 ** get_address_of_statsPanel_4() { return &___statsPanel_4; }
	inline void set_statsPanel_4(GameObject_t1756533147 * value)
	{
		___statsPanel_4 = value;
		Il2CppCodeGenWriteBarrier(&___statsPanel_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
