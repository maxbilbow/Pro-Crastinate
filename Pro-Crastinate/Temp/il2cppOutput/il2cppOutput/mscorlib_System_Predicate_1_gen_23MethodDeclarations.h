﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UI.Selectable>
struct Predicate_1_t2254;
// System.Object
struct Object_t;
// UnityEngine.UI.Selectable
struct Selectable_t343;
// System.IAsyncResult
struct IAsyncResult_t381;
// System.AsyncCallback
struct AsyncCallback_t382;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<UnityEngine.UI.Selectable>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_6MethodDeclarations.h"
#define Predicate_1__ctor_m15846(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2254 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m11336_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UI.Selectable>::Invoke(T)
#define Predicate_1_Invoke_m15847(__this, ___obj, method) (( bool (*) (Predicate_1_t2254 *, Selectable_t343 *, const MethodInfo*))Predicate_1_Invoke_m11337_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UI.Selectable>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m15848(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2254 *, Selectable_t343 *, AsyncCallback_t382 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m11338_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UI.Selectable>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m15849(__this, ___result, method) (( bool (*) (Predicate_1_t2254 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m11339_gshared)(__this, ___result, method)