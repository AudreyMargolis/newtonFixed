#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// System.Object
struct Il2CppObject;
// CamFollow
struct CamFollow_t2983292430;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CamFollow/<TutMoveFunction>c__Iterator3
struct  U3CTutMoveFunctionU3Ec__Iterator3_t542009221  : public Il2CppObject
{
public:
	// System.Single CamFollow/<TutMoveFunction>c__Iterator3::<timeSinceStarted>__0
	float ___U3CtimeSinceStartedU3E__0_0;
	// UnityEngine.Transform CamFollow/<TutMoveFunction>c__Iterator3::lerpTarget
	Transform_t3275118058 * ___lerpTarget_1;
	// System.Int32 CamFollow/<TutMoveFunction>c__Iterator3::$PC
	int32_t ___U24PC_2;
	// System.Object CamFollow/<TutMoveFunction>c__Iterator3::$current
	Il2CppObject * ___U24current_3;
	// UnityEngine.Transform CamFollow/<TutMoveFunction>c__Iterator3::<$>lerpTarget
	Transform_t3275118058 * ___U3CU24U3ElerpTarget_4;
	// CamFollow CamFollow/<TutMoveFunction>c__Iterator3::<>f__this
	CamFollow_t2983292430 * ___U3CU3Ef__this_5;

public:
	inline static int32_t get_offset_of_U3CtimeSinceStartedU3E__0_0() { return static_cast<int32_t>(offsetof(U3CTutMoveFunctionU3Ec__Iterator3_t542009221, ___U3CtimeSinceStartedU3E__0_0)); }
	inline float get_U3CtimeSinceStartedU3E__0_0() const { return ___U3CtimeSinceStartedU3E__0_0; }
	inline float* get_address_of_U3CtimeSinceStartedU3E__0_0() { return &___U3CtimeSinceStartedU3E__0_0; }
	inline void set_U3CtimeSinceStartedU3E__0_0(float value)
	{
		___U3CtimeSinceStartedU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_lerpTarget_1() { return static_cast<int32_t>(offsetof(U3CTutMoveFunctionU3Ec__Iterator3_t542009221, ___lerpTarget_1)); }
	inline Transform_t3275118058 * get_lerpTarget_1() const { return ___lerpTarget_1; }
	inline Transform_t3275118058 ** get_address_of_lerpTarget_1() { return &___lerpTarget_1; }
	inline void set_lerpTarget_1(Transform_t3275118058 * value)
	{
		___lerpTarget_1 = value;
		Il2CppCodeGenWriteBarrier(&___lerpTarget_1, value);
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CTutMoveFunctionU3Ec__Iterator3_t542009221, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CTutMoveFunctionU3Ec__Iterator3_t542009221, ___U24current_3)); }
	inline Il2CppObject * get_U24current_3() const { return ___U24current_3; }
	inline Il2CppObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(Il2CppObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_3, value);
	}

	inline static int32_t get_offset_of_U3CU24U3ElerpTarget_4() { return static_cast<int32_t>(offsetof(U3CTutMoveFunctionU3Ec__Iterator3_t542009221, ___U3CU24U3ElerpTarget_4)); }
	inline Transform_t3275118058 * get_U3CU24U3ElerpTarget_4() const { return ___U3CU24U3ElerpTarget_4; }
	inline Transform_t3275118058 ** get_address_of_U3CU24U3ElerpTarget_4() { return &___U3CU24U3ElerpTarget_4; }
	inline void set_U3CU24U3ElerpTarget_4(Transform_t3275118058 * value)
	{
		___U3CU24U3ElerpTarget_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3ElerpTarget_4, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_5() { return static_cast<int32_t>(offsetof(U3CTutMoveFunctionU3Ec__Iterator3_t542009221, ___U3CU3Ef__this_5)); }
	inline CamFollow_t2983292430 * get_U3CU3Ef__this_5() const { return ___U3CU3Ef__this_5; }
	inline CamFollow_t2983292430 ** get_address_of_U3CU3Ef__this_5() { return &___U3CU3Ef__this_5; }
	inline void set_U3CU3Ef__this_5(CamFollow_t2983292430 * value)
	{
		___U3CU3Ef__this_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
