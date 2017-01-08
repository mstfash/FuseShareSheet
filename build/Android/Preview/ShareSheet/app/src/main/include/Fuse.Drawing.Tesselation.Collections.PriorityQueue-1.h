// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Polygons/0.42.4/collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct PriorityQueue;}}}}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Tesselation{
namespace Collections{

// internal abstract class PriorityQueue<PQkey> :497
// {
struct PriorityQueue_type : uType
{
    void(*fp_Leq1)(::g::Fuse::Drawing::Tesselation::Collections::PriorityQueue*, void*, void*, bool*);
};

PriorityQueue_type* PriorityQueue_typeof();
void PriorityQueue__ctor__fn(PriorityQueue* __this, void* maxValue);
void PriorityQueue__Dequeue_fn(PriorityQueue* __this, uTRef __retval);
void PriorityQueue__Enqueue_fn(PriorityQueue* __this, void* newKey);
void PriorityQueue__EnsureCapacity_fn(PriorityQueue* __this);
void PriorityQueue__HeapIncreaseKey_fn(PriorityQueue* __this, int* i, void* key);
void PriorityQueue__get_IsEmpty_fn(PriorityQueue* __this, bool* __retval);
void PriorityQueue__Left_fn(PriorityQueue* __this, int* i, int* __retval);
void PriorityQueue__Leq_fn(PriorityQueue* __this, int* ai, int* bi, bool* __retval);
void PriorityQueue__MaxHeapify_fn(PriorityQueue* __this, int* i);
void PriorityQueue__Parent_fn(PriorityQueue* __this, int* i, int* __retval);
void PriorityQueue__get_Peek_fn(PriorityQueue* __this, uTRef __retval);
void PriorityQueue__Remove_fn(PriorityQueue* __this, void* item);
void PriorityQueue__RemoveAt_fn(PriorityQueue* __this, int* index);
void PriorityQueue__Right_fn(PriorityQueue* __this, int* i, int* __retval);
void PriorityQueue__Swap_fn(PriorityQueue* __this, int* a, int* b);

struct PriorityQueue : uObject
{
    uStrong<uArray*> _elements;
    uTField _maxValue() { return __type->Field(this, 1); }
    int _used;

    template<class PQkey>
    void ctor_(PQkey maxValue) { PriorityQueue__ctor__fn(this, uConstrain(__type->GetBase(PriorityQueue_typeof())->T(0), maxValue)); }
    template<class PQkey>
    PQkey Dequeue() { PQkey __retval; return PriorityQueue__Dequeue_fn(this, &__retval), __retval; }
    template<class PQkey>
    void Enqueue(PQkey newKey) { PriorityQueue__Enqueue_fn(this, uConstrain(__type->GetBase(PriorityQueue_typeof())->T(0), newKey)); }
    void EnsureCapacity();
    template<class PQkey>
    void HeapIncreaseKey(int i, PQkey key) { PriorityQueue__HeapIncreaseKey_fn(this, &i, uConstrain(__type->GetBase(PriorityQueue_typeof())->T(0), key)); }
    bool IsEmpty();
    int Left(int i);
    bool Leq(int ai, int bi);
    template<class PQkey>
    bool Leq1(PQkey a, PQkey b) { bool __retval; return (((PriorityQueue_type*)__type)->fp_Leq1)(this, uConstrain(__type->GetBase(PriorityQueue_typeof())->T(0), a), uConstrain(__type->GetBase(PriorityQueue_typeof())->T(0), b), &__retval), __retval; }
    void Leq1_ex(void* a, void* b, bool* __retval) { (((PriorityQueue_type*)__type)->fp_Leq1)(this, a, b, __retval); }
    void MaxHeapify(int i);
    int Parent(int i);
    template<class PQkey>
    PQkey Peek() { PQkey __retval; return PriorityQueue__get_Peek_fn(this, &__retval), __retval; }
    template<class PQkey>
    void Remove(PQkey item) { PriorityQueue__Remove_fn(this, uConstrain(__type->GetBase(PriorityQueue_typeof())->T(0), item)); }
    void RemoveAt(int index);
    int Right(int i);
    void Swap(int a, int b);
};
// }

}}}}} // ::g::Fuse::Drawing::Tesselation::Collections
