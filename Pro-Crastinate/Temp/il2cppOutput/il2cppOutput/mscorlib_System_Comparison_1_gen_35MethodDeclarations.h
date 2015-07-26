﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Type>
struct Comparison_1_t2473;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IAsyncResult
struct IAsyncResult_t381;
// System.AsyncCallback
struct AsyncCallback_t382;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Type>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
#define Comparison_1__ctor_m18930(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2473 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m11360_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Type>::Invoke(T,T)
#define Comparison_1_Invoke_m18931(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2473 *, Type_t *, Type_t *, const MethodInfo*))Comparison_1_Invoke_m11361_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Type>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m18932(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2473 *, Type_t *, Type_t *, AsyncCallback_t382 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m11362_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Type>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m18933(__this, ___result, method) (( int32_t (*) (Comparison_1_t2473 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m11363_gshared)(__this, ___result, method)