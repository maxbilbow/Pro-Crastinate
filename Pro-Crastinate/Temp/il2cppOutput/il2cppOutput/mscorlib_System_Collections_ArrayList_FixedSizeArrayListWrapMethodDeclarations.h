﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ArrayList/FixedSizeArrayListWrapper
struct FixedSizeArrayListWrapper_t1360;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t907;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t1236;

// System.Void System.Collections.ArrayList/FixedSizeArrayListWrapper::.ctor(System.Collections.ArrayList)
extern "C" void FixedSizeArrayListWrapper__ctor_m7574 (FixedSizeArrayListWrapper_t1360 * __this, ArrayList_t907 * ___innerList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.ArrayList/FixedSizeArrayListWrapper::get_ErrorMessage()
extern "C" String_t* FixedSizeArrayListWrapper_get_ErrorMessage_m7575 (FixedSizeArrayListWrapper_t1360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/FixedSizeArrayListWrapper::get_Capacity()
extern "C" int32_t FixedSizeArrayListWrapper_get_Capacity_m7576 (FixedSizeArrayListWrapper_t1360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/FixedSizeArrayListWrapper::set_Capacity(System.Int32)
extern "C" void FixedSizeArrayListWrapper_set_Capacity_m7577 (FixedSizeArrayListWrapper_t1360 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/FixedSizeArrayListWrapper::get_IsFixedSize()
extern "C" bool FixedSizeArrayListWrapper_get_IsFixedSize_m7578 (FixedSizeArrayListWrapper_t1360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/FixedSizeArrayListWrapper::Add(System.Object)
extern "C" int32_t FixedSizeArrayListWrapper_Add_m7579 (FixedSizeArrayListWrapper_t1360 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/FixedSizeArrayListWrapper::AddRange(System.Collections.ICollection)
extern "C" void FixedSizeArrayListWrapper_AddRange_m7580 (FixedSizeArrayListWrapper_t1360 * __this, Object_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/FixedSizeArrayListWrapper::Clear()
extern "C" void FixedSizeArrayListWrapper_Clear_m7581 (FixedSizeArrayListWrapper_t1360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/FixedSizeArrayListWrapper::Insert(System.Int32,System.Object)
extern "C" void FixedSizeArrayListWrapper_Insert_m7582 (FixedSizeArrayListWrapper_t1360 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/FixedSizeArrayListWrapper::InsertRange(System.Int32,System.Collections.ICollection)
extern "C" void FixedSizeArrayListWrapper_InsertRange_m7583 (FixedSizeArrayListWrapper_t1360 * __this, int32_t ___index, Object_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/FixedSizeArrayListWrapper::Remove(System.Object)
extern "C" void FixedSizeArrayListWrapper_Remove_m7584 (FixedSizeArrayListWrapper_t1360 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/FixedSizeArrayListWrapper::RemoveAt(System.Int32)
extern "C" void FixedSizeArrayListWrapper_RemoveAt_m7585 (FixedSizeArrayListWrapper_t1360 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;