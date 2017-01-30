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

// UnityEngine.Texture2D
struct Texture2D_t3542995729;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Texture2D3542995729.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_CursorMode2224606815.h"
#include "UnityEngine_UnityEngine_CursorLockMode3372615096.h"

// System.Void UnityEngine.Cursor::SetCursor(UnityEngine.Texture2D,UnityEngine.Vector2,UnityEngine.CursorMode)
extern "C"  void Cursor_SetCursor_m3158908179 (Il2CppObject * __this /* static, unused */, Texture2D_t3542995729 * ___texture0, Vector2_t2243707579  ___hotspot1, int32_t ___cursorMode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Cursor::INTERNAL_CALL_SetCursor(UnityEngine.Texture2D,UnityEngine.Vector2&,UnityEngine.CursorMode)
extern "C"  void Cursor_INTERNAL_CALL_SetCursor_m436482520 (Il2CppObject * __this /* static, unused */, Texture2D_t3542995729 * ___texture0, Vector2_t2243707579 * ___hotspot1, int32_t ___cursorMode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CursorLockMode UnityEngine.Cursor::get_lockState()
extern "C"  int32_t Cursor_get_lockState_m90193718 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
