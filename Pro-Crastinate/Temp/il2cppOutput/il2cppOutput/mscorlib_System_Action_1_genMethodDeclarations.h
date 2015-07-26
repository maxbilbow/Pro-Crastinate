﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Boolean>
struct Action_1_t145;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t381;
// System.AsyncCallback
struct AsyncCallback_t382;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m973_gshared (Action_1_t145 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m973(__this, ___object, ___method, method) (( void (*) (Action_1_t145 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m973_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Boolean>::Invoke(T)
extern "C" void Action_1_Invoke_m3984_gshared (Action_1_t145 * __this, bool ___obj, const MethodInfo* method);
#define Action_1_Invoke_m3984(__this, ___obj, method) (( void (*) (Action_1_t145 *, bool, const MethodInfo*))Action_1_Invoke_m3984_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m11115_gshared (Action_1_t145 * __this, bool ___obj, AsyncCallback_t382 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m11115(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t145 *, bool, AsyncCallback_t382 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m11115_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m11116_gshared (Action_1_t145 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m11116(__this, ___result, method) (( void (*) (Action_1_t145 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m11116_gshared)(__this, ___result, method)