﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Stack/Enumerator
struct Enumerator_t1376;
// System.Object
struct Object_t;
// System.Collections.Stack
struct Stack_t784;

// System.Void System.Collections.Stack/Enumerator::.ctor(System.Collections.Stack)
extern "C" void Enumerator__ctor_m7778 (Enumerator_t1376 * __this, Stack_t784 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Stack/Enumerator::get_Current()
extern "C" Object_t * Enumerator_get_Current_m7779 (Enumerator_t1376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Stack/Enumerator::MoveNext()
extern "C" bool Enumerator_MoveNext_m7780 (Enumerator_t1376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;