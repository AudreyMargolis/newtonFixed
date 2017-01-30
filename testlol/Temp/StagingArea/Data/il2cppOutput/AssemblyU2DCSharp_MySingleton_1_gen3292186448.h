#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameManager
struct GameManager_t2252321495;
// System.Object
struct Il2CppObject;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MySingleton`1<GameManager>
struct  MySingleton_1_t3292186448  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct MySingleton_1_t3292186448_StaticFields
{
public:
	// T modreq(System.Runtime.CompilerServices.IsVolatile) MySingleton`1::_instance
	GameManager_t2252321495 * ____instance_2;
	// System.Object MySingleton`1::_lock
	Il2CppObject * ____lock_3;

public:
	inline static int32_t get_offset_of__instance_2() { return static_cast<int32_t>(offsetof(MySingleton_1_t3292186448_StaticFields, ____instance_2)); }
	inline GameManager_t2252321495 * get__instance_2() const { return ____instance_2; }
	inline GameManager_t2252321495 ** get_address_of__instance_2() { return &____instance_2; }
	inline void set__instance_2(GameManager_t2252321495 * value)
	{
		____instance_2 = value;
		Il2CppCodeGenWriteBarrier(&____instance_2, value);
	}

	inline static int32_t get_offset_of__lock_3() { return static_cast<int32_t>(offsetof(MySingleton_1_t3292186448_StaticFields, ____lock_3)); }
	inline Il2CppObject * get__lock_3() const { return ____lock_3; }
	inline Il2CppObject ** get_address_of__lock_3() { return &____lock_3; }
	inline void set__lock_3(Il2CppObject * value)
	{
		____lock_3 = value;
		Il2CppCodeGenWriteBarrier(&____lock_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
