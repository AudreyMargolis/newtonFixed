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

// WindTrigger
struct WindTrigger_t1196893814;
// UnityEngine.Collider
struct Collider_t3497673348;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider3497673348.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void WindTrigger::.ctor()
extern "C"  void WindTrigger__ctor_m494029383 (WindTrigger_t1196893814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WindTrigger::Start()
extern "C"  void WindTrigger_Start_m638233851 (WindTrigger_t1196893814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WindTrigger::FixedUpdate()
extern "C"  void WindTrigger_FixedUpdate_m2253075258 (WindTrigger_t1196893814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WindTrigger::OnTriggerStay(UnityEngine.Collider)
extern "C"  void WindTrigger_OnTriggerStay_m2050485906 (WindTrigger_t1196893814 * __this, Collider_t3497673348 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator WindTrigger::Wind(UnityEngine.GameObject)
extern "C"  Il2CppObject * WindTrigger_Wind_m3414389781 (WindTrigger_t1196893814 * __this, GameObject_t1756533147 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
