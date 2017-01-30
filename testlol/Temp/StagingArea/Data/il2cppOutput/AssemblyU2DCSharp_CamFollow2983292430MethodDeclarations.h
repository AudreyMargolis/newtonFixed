#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// CamFollow
struct CamFollow_t2983292430;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void CamFollow::.ctor()
extern "C"  void CamFollow__ctor_m1648462833 (CamFollow_t2983292430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CamFollow::Start()
extern "C"  void CamFollow_Start_m1475401513 (CamFollow_t2983292430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CamFollow::Update()
extern "C"  void CamFollow_Update_m2311398764 (CamFollow_t2983292430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CamFollow::TutorialMoveUpdate(UnityEngine.Transform)
extern "C"  void CamFollow_TutorialMoveUpdate_m513507016 (CamFollow_t2983292430 * __this, Transform_t3275118058 * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator CamFollow::MoveFunction(UnityEngine.GameObject)
extern "C"  Il2CppObject * CamFollow_MoveFunction_m3348897606 (CamFollow_t2983292430 * __this, GameObject_t1756533147 * ___lerpTarget0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator CamFollow::ToBall()
extern "C"  Il2CppObject * CamFollow_ToBall_m3745836811 (CamFollow_t2983292430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator CamFollow::TutMoveFunction(UnityEngine.Transform)
extern "C"  Il2CppObject * CamFollow_TutMoveFunction_m583266010 (CamFollow_t2983292430 * __this, Transform_t3275118058 * ___lerpTarget0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
