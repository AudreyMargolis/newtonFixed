#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MainMenu
struct  MainMenu_t4009084430  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] MainMenu::levelPanels
	GameObjectU5BU5D_t3057952154* ___levelPanels_2;
	// UnityEngine.AudioClip MainMenu::prevMenu
	AudioClip_t1932558630 * ___prevMenu_3;
	// UnityEngine.AudioClip MainMenu::nextMenu
	AudioClip_t1932558630 * ___nextMenu_4;
	// UnityEngine.AudioClip MainMenu::buttonClick
	AudioClip_t1932558630 * ___buttonClick_5;
	// UnityEngine.AudioSource MainMenu::audio
	AudioSource_t1135106623 * ___audio_6;
	// System.Int32 MainMenu::currentPanel
	int32_t ___currentPanel_7;

public:
	inline static int32_t get_offset_of_levelPanels_2() { return static_cast<int32_t>(offsetof(MainMenu_t4009084430, ___levelPanels_2)); }
	inline GameObjectU5BU5D_t3057952154* get_levelPanels_2() const { return ___levelPanels_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_levelPanels_2() { return &___levelPanels_2; }
	inline void set_levelPanels_2(GameObjectU5BU5D_t3057952154* value)
	{
		___levelPanels_2 = value;
		Il2CppCodeGenWriteBarrier(&___levelPanels_2, value);
	}

	inline static int32_t get_offset_of_prevMenu_3() { return static_cast<int32_t>(offsetof(MainMenu_t4009084430, ___prevMenu_3)); }
	inline AudioClip_t1932558630 * get_prevMenu_3() const { return ___prevMenu_3; }
	inline AudioClip_t1932558630 ** get_address_of_prevMenu_3() { return &___prevMenu_3; }
	inline void set_prevMenu_3(AudioClip_t1932558630 * value)
	{
		___prevMenu_3 = value;
		Il2CppCodeGenWriteBarrier(&___prevMenu_3, value);
	}

	inline static int32_t get_offset_of_nextMenu_4() { return static_cast<int32_t>(offsetof(MainMenu_t4009084430, ___nextMenu_4)); }
	inline AudioClip_t1932558630 * get_nextMenu_4() const { return ___nextMenu_4; }
	inline AudioClip_t1932558630 ** get_address_of_nextMenu_4() { return &___nextMenu_4; }
	inline void set_nextMenu_4(AudioClip_t1932558630 * value)
	{
		___nextMenu_4 = value;
		Il2CppCodeGenWriteBarrier(&___nextMenu_4, value);
	}

	inline static int32_t get_offset_of_buttonClick_5() { return static_cast<int32_t>(offsetof(MainMenu_t4009084430, ___buttonClick_5)); }
	inline AudioClip_t1932558630 * get_buttonClick_5() const { return ___buttonClick_5; }
	inline AudioClip_t1932558630 ** get_address_of_buttonClick_5() { return &___buttonClick_5; }
	inline void set_buttonClick_5(AudioClip_t1932558630 * value)
	{
		___buttonClick_5 = value;
		Il2CppCodeGenWriteBarrier(&___buttonClick_5, value);
	}

	inline static int32_t get_offset_of_audio_6() { return static_cast<int32_t>(offsetof(MainMenu_t4009084430, ___audio_6)); }
	inline AudioSource_t1135106623 * get_audio_6() const { return ___audio_6; }
	inline AudioSource_t1135106623 ** get_address_of_audio_6() { return &___audio_6; }
	inline void set_audio_6(AudioSource_t1135106623 * value)
	{
		___audio_6 = value;
		Il2CppCodeGenWriteBarrier(&___audio_6, value);
	}

	inline static int32_t get_offset_of_currentPanel_7() { return static_cast<int32_t>(offsetof(MainMenu_t4009084430, ___currentPanel_7)); }
	inline int32_t get_currentPanel_7() const { return ___currentPanel_7; }
	inline int32_t* get_address_of_currentPanel_7() { return &___currentPanel_7; }
	inline void set_currentPanel_7(int32_t value)
	{
		___currentPanel_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
