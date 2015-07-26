﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t191;
// System.Object
struct Object_t;
// UnityEngine.Material
struct Material_t190;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Material>
struct IEnumerable_1_t2677;
// UnityEngine.Material[]
struct MaterialU5BU5D_t192;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Material>
struct IEnumerator_1_t2678;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.ICollection`1<UnityEngine.Material>
struct ICollection_1_t2679;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Material>
struct ReadOnlyCollection_1_t2039;
// System.Predicate`1<UnityEngine.Material>
struct Predicate_1_t2040;
// System.Comparison`1<UnityEngine.Material>
struct Comparison_1_t2042;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Material>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_9.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_24MethodDeclarations.h"
#define List_1__ctor_m601(__this, method) (( void (*) (List_1_t191 *, const MethodInfo*))List_1__ctor_m4062_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m12597(__this, ___collection, method) (( void (*) (List_1_t191 *, Object_t*, const MethodInfo*))List_1__ctor_m11141_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::.ctor(System.Int32)
#define List_1__ctor_m12598(__this, ___capacity, method) (( void (*) (List_1_t191 *, int32_t, const MethodInfo*))List_1__ctor_m11143_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::.ctor(T[],System.Int32)
#define List_1__ctor_m12599(__this, ___data, ___size, method) (( void (*) (List_1_t191 *, MaterialU5BU5D_t192*, int32_t, const MethodInfo*))List_1__ctor_m11145_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::.cctor()
#define List_1__cctor_m12600(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11147_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12601(__this, method) (( Object_t* (*) (List_1_t191 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11149_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m12602(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t191 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11151_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m12603(__this, method) (( Object_t * (*) (List_1_t191 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11153_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m12604(__this, ___item, method) (( int32_t (*) (List_1_t191 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m11155_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m12605(__this, ___item, method) (( bool (*) (List_1_t191 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m11157_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m12606(__this, ___item, method) (( int32_t (*) (List_1_t191 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m11159_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m12607(__this, ___index, ___item, method) (( void (*) (List_1_t191 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m11161_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m12608(__this, ___item, method) (( void (*) (List_1_t191 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m11163_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12609(__this, method) (( bool (*) (List_1_t191 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11165_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m12610(__this, method) (( bool (*) (List_1_t191 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m11167_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m12611(__this, method) (( Object_t * (*) (List_1_t191 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11169_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m12612(__this, method) (( bool (*) (List_1_t191 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m11171_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m12613(__this, method) (( bool (*) (List_1_t191 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m11173_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m12614(__this, ___index, method) (( Object_t * (*) (List_1_t191 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m11175_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m12615(__this, ___index, ___value, method) (( void (*) (List_1_t191 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m11177_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Add(T)
#define List_1_Add_m12616(__this, ___item, method) (( void (*) (List_1_t191 *, Material_t190 *, const MethodInfo*))List_1_Add_m11179_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m12617(__this, ___newCount, method) (( void (*) (List_1_t191 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11181_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m12618(__this, ___collection, method) (( void (*) (List_1_t191 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11183_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m12619(__this, ___enumerable, method) (( void (*) (List_1_t191 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11185_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m12620(__this, ___collection, method) (( void (*) (List_1_t191 *, Object_t*, const MethodInfo*))List_1_AddRange_m11187_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Material>::AsReadOnly()
#define List_1_AsReadOnly_m12621(__this, method) (( ReadOnlyCollection_1_t2039 * (*) (List_1_t191 *, const MethodInfo*))List_1_AsReadOnly_m11189_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Clear()
#define List_1_Clear_m12622(__this, method) (( void (*) (List_1_t191 *, const MethodInfo*))List_1_Clear_m11191_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Material>::Contains(T)
#define List_1_Contains_m12623(__this, ___item, method) (( bool (*) (List_1_t191 *, Material_t190 *, const MethodInfo*))List_1_Contains_m11193_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m12624(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t191 *, MaterialU5BU5D_t192*, int32_t, const MethodInfo*))List_1_CopyTo_m11195_gshared)(__this, ___array, ___arrayIndex, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Material>::Exists(System.Predicate`1<T>)
#define List_1_Exists_m12625(__this, ___match, method) (( bool (*) (List_1_t191 *, Predicate_1_t2040 *, const MethodInfo*))List_1_Exists_m11196_gshared)(__this, ___match, method)
// T System.Collections.Generic.List`1<UnityEngine.Material>::Find(System.Predicate`1<T>)
#define List_1_Find_m12626(__this, ___match, method) (( Material_t190 * (*) (List_1_t191 *, Predicate_1_t2040 *, const MethodInfo*))List_1_Find_m11198_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m12627(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2040 *, const MethodInfo*))List_1_CheckMatch_m11200_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Material>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m12628(__this, ___match, method) (( List_1_t191 * (*) (List_1_t191 *, Predicate_1_t2040 *, const MethodInfo*))List_1_FindAll_m11202_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Material>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m12629(__this, ___match, method) (( List_1_t191 * (*) (List_1_t191 *, Predicate_1_t2040 *, const MethodInfo*))List_1_FindAllStackBits_m11204_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Material>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m12630(__this, ___match, method) (( List_1_t191 * (*) (List_1_t191 *, Predicate_1_t2040 *, const MethodInfo*))List_1_FindAllList_m11206_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Material>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m12631(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t191 *, int32_t, int32_t, Predicate_1_t2040 *, const MethodInfo*))List_1_GetIndex_m11208_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Material>::GetEnumerator()
#define List_1_GetEnumerator_m12632(__this, method) (( Enumerator_t2041  (*) (List_1_t191 *, const MethodInfo*))List_1_GetEnumerator_m11209_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Material>::IndexOf(T)
#define List_1_IndexOf_m12633(__this, ___item, method) (( int32_t (*) (List_1_t191 *, Material_t190 *, const MethodInfo*))List_1_IndexOf_m11211_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m12634(__this, ___start, ___delta, method) (( void (*) (List_1_t191 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11213_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m12635(__this, ___index, method) (( void (*) (List_1_t191 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11215_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Insert(System.Int32,T)
#define List_1_Insert_m12636(__this, ___index, ___item, method) (( void (*) (List_1_t191 *, int32_t, Material_t190 *, const MethodInfo*))List_1_Insert_m11217_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m12637(__this, ___collection, method) (( void (*) (List_1_t191 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11219_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Material>::Remove(T)
#define List_1_Remove_m12638(__this, ___item, method) (( bool (*) (List_1_t191 *, Material_t190 *, const MethodInfo*))List_1_Remove_m11221_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Material>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m12639(__this, ___match, method) (( int32_t (*) (List_1_t191 *, Predicate_1_t2040 *, const MethodInfo*))List_1_RemoveAll_m11223_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m12640(__this, ___index, method) (( void (*) (List_1_t191 *, int32_t, const MethodInfo*))List_1_RemoveAt_m11225_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Reverse()
#define List_1_Reverse_m12641(__this, method) (( void (*) (List_1_t191 *, const MethodInfo*))List_1_Reverse_m11227_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Sort()
#define List_1_Sort_m12642(__this, method) (( void (*) (List_1_t191 *, const MethodInfo*))List_1_Sort_m11229_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m12643(__this, ___comparison, method) (( void (*) (List_1_t191 *, Comparison_1_t2042 *, const MethodInfo*))List_1_Sort_m11231_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Material>::ToArray()
#define List_1_ToArray_m12644(__this, method) (( MaterialU5BU5D_t192* (*) (List_1_t191 *, const MethodInfo*))List_1_ToArray_m11232_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::TrimExcess()
#define List_1_TrimExcess_m12645(__this, method) (( void (*) (List_1_t191 *, const MethodInfo*))List_1_TrimExcess_m11234_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Material>::get_Capacity()
#define List_1_get_Capacity_m12646(__this, method) (( int32_t (*) (List_1_t191 *, const MethodInfo*))List_1_get_Capacity_m11236_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m12647(__this, ___value, method) (( void (*) (List_1_t191 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11238_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Material>::get_Count()
#define List_1_get_Count_m12648(__this, method) (( int32_t (*) (List_1_t191 *, const MethodInfo*))List_1_get_Count_m11240_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Material>::get_Item(System.Int32)
#define List_1_get_Item_m12649(__this, ___index, method) (( Material_t190 * (*) (List_1_t191 *, int32_t, const MethodInfo*))List_1_get_Item_m11242_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::set_Item(System.Int32,T)
#define List_1_set_Item_m12650(__this, ___index, ___value, method) (( void (*) (List_1_t191 *, int32_t, Material_t190 *, const MethodInfo*))List_1_set_Item_m11244_gshared)(__this, ___index, ___value, method)