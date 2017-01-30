#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Renderer
struct Renderer_t257310565;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_WindTrigger_WindDirection3477973962.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WindTrigger
struct  WindTrigger_t1196893814  : public MonoBehaviour_t1158329972
{
public:
	// WindTrigger/WindDirection WindTrigger::windDir
	int32_t ___windDir_2;
	// System.Single WindTrigger::windForce
	float ___windForce_3;
	// System.Boolean WindTrigger::isRunning
	bool ___isRunning_4;
	// System.String WindTrigger::textureName
	String_t* ___textureName_5;
	// UnityEngine.GameObject WindTrigger::plane1
	GameObject_t1756533147 * ___plane1_6;
	// UnityEngine.GameObject WindTrigger::plane2
	GameObject_t1756533147 * ___plane2_7;
	// UnityEngine.Vector2 WindTrigger::uvAnimationRate
	Vector2_t2243707579  ___uvAnimationRate_8;
	// UnityEngine.Vector2 WindTrigger::uvOffset
	Vector2_t2243707579  ___uvOffset_9;
	// System.Single WindTrigger::scrollSpeed
	float ___scrollSpeed_10;
	// UnityEngine.Renderer WindTrigger::myRenderer1
	Renderer_t257310565 * ___myRenderer1_11;
	// UnityEngine.Renderer WindTrigger::myRenderer2
	Renderer_t257310565 * ___myRenderer2_12;

public:
	inline static int32_t get_offset_of_windDir_2() { return static_cast<int32_t>(offsetof(WindTrigger_t1196893814, ___windDir_2)); }
	inline int32_t get_windDir_2() const { return ___windDir_2; }
	inline int32_t* get_address_of_windDir_2() { return &___windDir_2; }
	inline void set_windDir_2(int32_t value)
	{
		___windDir_2 = value;
	}

	inline static int32_t get_offset_of_windForce_3() { return static_cast<int32_t>(offsetof(WindTrigger_t1196893814, ___windForce_3)); }
	inline float get_windForce_3() const { return ___windForce_3; }
	inline float* get_address_of_windForce_3() { return &___windForce_3; }
	inline void set_windForce_3(float value)
	{
		___windForce_3 = value;
	}

	inline static int32_t get_offset_of_isRunning_4() { return static_cast<int32_t>(offsetof(WindTrigger_t1196893814, ___isRunning_4)); }
	inline bool get_isRunning_4() const { return ___isRunning_4; }
	inline bool* get_address_of_isRunning_4() { return &___isRunning_4; }
	inline void set_isRunning_4(bool value)
	{
		___isRunning_4 = value;
	}

	inline static int32_t get_offset_of_textureName_5() { return static_cast<int32_t>(offsetof(WindTrigger_t1196893814, ___textureName_5)); }
	inline String_t* get_textureName_5() const { return ___textureName_5; }
	inline String_t** get_address_of_textureName_5() { return &___textureName_5; }
	inline void set_textureName_5(String_t* value)
	{
		___textureName_5 = value;
		Il2CppCodeGenWriteBarrier(&___textureName_5, value);
	}

	inline static int32_t get_offset_of_plane1_6() { return static_cast<int32_t>(offsetof(WindTrigger_t1196893814, ___plane1_6)); }
	inline GameObject_t1756533147 * get_plane1_6() const { return ___plane1_6; }
	inline GameObject_t1756533147 ** get_address_of_plane1_6() { return &___plane1_6; }
	inline void set_plane1_6(GameObject_t1756533147 * value)
	{
		___plane1_6 = value;
		Il2CppCodeGenWriteBarrier(&___plane1_6, value);
	}

	inline static int32_t get_offset_of_plane2_7() { return static_cast<int32_t>(offsetof(WindTrigger_t1196893814, ___plane2_7)); }
	inline GameObject_t1756533147 * get_plane2_7() const { return ___plane2_7; }
	inline GameObject_t1756533147 ** get_address_of_plane2_7() { return &___plane2_7; }
	inline void set_plane2_7(GameObject_t1756533147 * value)
	{
		___plane2_7 = value;
		Il2CppCodeGenWriteBarrier(&___plane2_7, value);
	}

	inline static int32_t get_offset_of_uvAnimationRate_8() { return static_cast<int32_t>(offsetof(WindTrigger_t1196893814, ___uvAnimationRate_8)); }
	inline Vector2_t2243707579  get_uvAnimationRate_8() const { return ___uvAnimationRate_8; }
	inline Vector2_t2243707579 * get_address_of_uvAnimationRate_8() { return &___uvAnimationRate_8; }
	inline void set_uvAnimationRate_8(Vector2_t2243707579  value)
	{
		___uvAnimationRate_8 = value;
	}

	inline static int32_t get_offset_of_uvOffset_9() { return static_cast<int32_t>(offsetof(WindTrigger_t1196893814, ___uvOffset_9)); }
	inline Vector2_t2243707579  get_uvOffset_9() const { return ___uvOffset_9; }
	inline Vector2_t2243707579 * get_address_of_uvOffset_9() { return &___uvOffset_9; }
	inline void set_uvOffset_9(Vector2_t2243707579  value)
	{
		___uvOffset_9 = value;
	}

	inline static int32_t get_offset_of_scrollSpeed_10() { return static_cast<int32_t>(offsetof(WindTrigger_t1196893814, ___scrollSpeed_10)); }
	inline float get_scrollSpeed_10() const { return ___scrollSpeed_10; }
	inline float* get_address_of_scrollSpeed_10() { return &___scrollSpeed_10; }
	inline void set_scrollSpeed_10(float value)
	{
		___scrollSpeed_10 = value;
	}

	inline static int32_t get_offset_of_myRenderer1_11() { return static_cast<int32_t>(offsetof(WindTrigger_t1196893814, ___myRenderer1_11)); }
	inline Renderer_t257310565 * get_myRenderer1_11() const { return ___myRenderer1_11; }
	inline Renderer_t257310565 ** get_address_of_myRenderer1_11() { return &___myRenderer1_11; }
	inline void set_myRenderer1_11(Renderer_t257310565 * value)
	{
		___myRenderer1_11 = value;
		Il2CppCodeGenWriteBarrier(&___myRenderer1_11, value);
	}

	inline static int32_t get_offset_of_myRenderer2_12() { return static_cast<int32_t>(offsetof(WindTrigger_t1196893814, ___myRenderer2_12)); }
	inline Renderer_t257310565 * get_myRenderer2_12() const { return ___myRenderer2_12; }
	inline Renderer_t257310565 ** get_address_of_myRenderer2_12() { return &___myRenderer2_12; }
	inline void set_myRenderer2_12(Renderer_t257310565 * value)
	{
		___myRenderer2_12 = value;
		Il2CppCodeGenWriteBarrier(&___myRenderer2_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
