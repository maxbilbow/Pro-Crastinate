﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>
struct EqualityComparer_1_t2624;
// System.Object
struct Object_t;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::.ctor()
extern "C" void EqualityComparer_1__ctor_m20200_gshared (EqualityComparer_1_t2624 * __this, const MethodInfo* method);
#define EqualityComparer_1__ctor_m20200(__this, method) (( void (*) (EqualityComparer_1_t2624 *, const MethodInfo*))EqualityComparer_1__ctor_m20200_gshared)(__this, method)
// System.Void System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::.cctor()
extern "C" void EqualityComparer_1__cctor_m20201_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define EqualityComparer_1__cctor_m20201(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))EqualityComparer_1__cctor_m20201_gshared)(__this /* static, unused */, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m20202_gshared (EqualityComparer_1_t2624 * __this, Object_t * ___obj, const MethodInfo* method);
#define EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m20202(__this, ___obj, method) (( int32_t (*) (EqualityComparer_1_t2624 *, Object_t *, const MethodInfo*))EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m20202_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m20203_gshared (EqualityComparer_1_t2624 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method);
#define EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m20203(__this, ___x, ___y, method) (( bool (*) (EqualityComparer_1_t2624 *, Object_t *, Object_t *, const MethodInfo*))EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m20203_gshared)(__this, ___x, ___y, method)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::get_Default()
extern "C" EqualityComparer_1_t2624 * EqualityComparer_1_get_Default_m20204_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define EqualityComparer_1_get_Default_m20204(__this /* static, unused */, method) (( EqualityComparer_1_t2624 * (*) (Object_t * /* static, unused */, const MethodInfo*))EqualityComparer_1_get_Default_m20204_gshared)(__this /* static, unused */, method)