﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<UnityEngine.Color>
struct InvokableCall_1_t2171;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t484;
// System.Object[]
struct ObjectU5BU5D_t146;

// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m14602_gshared (InvokableCall_1_t2171 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m14602(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2171 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m14602_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m14603_gshared (InvokableCall_1_t2171 * __this, UnityAction_1_t484 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m14603(__this, ___callback, method) (( void (*) (InvokableCall_1_t2171 *, UnityAction_1_t484 *, const MethodInfo*))InvokableCall_1__ctor_m14603_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m14604_gshared (InvokableCall_1_t2171 * __this, ObjectU5BU5D_t146* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m14604(__this, ___args, method) (( void (*) (InvokableCall_1_t2171 *, ObjectU5BU5D_t146*, const MethodInfo*))InvokableCall_1_Invoke_m14604_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m14605_gshared (InvokableCall_1_t2171 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m14605(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2171 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m14605_gshared)(__this, ___targetObj, ___method, method)