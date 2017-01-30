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

// UnityEngine.ContactPoint
struct ContactPoint_t1376425630;
struct ContactPoint_t1376425630_marshaled_pinvoke;
struct ContactPoint_t1376425630_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ContactPoint1376425630.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.Vector3 UnityEngine.ContactPoint::get_point()
extern "C"  Vector3_t2243707580  ContactPoint_get_point_m371381516 (ContactPoint_t1376425630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.ContactPoint::get_normal()
extern "C"  Vector3_t2243707580  ContactPoint_get_normal_m91778337 (ContactPoint_t1376425630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ContactPoint_t1376425630;
struct ContactPoint_t1376425630_marshaled_pinvoke;

extern "C" void ContactPoint_t1376425630_marshal_pinvoke(const ContactPoint_t1376425630& unmarshaled, ContactPoint_t1376425630_marshaled_pinvoke& marshaled);
extern "C" void ContactPoint_t1376425630_marshal_pinvoke_back(const ContactPoint_t1376425630_marshaled_pinvoke& marshaled, ContactPoint_t1376425630& unmarshaled);
extern "C" void ContactPoint_t1376425630_marshal_pinvoke_cleanup(ContactPoint_t1376425630_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ContactPoint_t1376425630;
struct ContactPoint_t1376425630_marshaled_com;

extern "C" void ContactPoint_t1376425630_marshal_com(const ContactPoint_t1376425630& unmarshaled, ContactPoint_t1376425630_marshaled_com& marshaled);
extern "C" void ContactPoint_t1376425630_marshal_com_back(const ContactPoint_t1376425630_marshaled_com& marshaled, ContactPoint_t1376425630& unmarshaled);
extern "C" void ContactPoint_t1376425630_marshal_com_cleanup(ContactPoint_t1376425630_marshaled_com& marshaled);
