// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.PriorityQueueItem-1.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Collections{struct PriorityQueue;}}}

namespace g{
namespace Uno{
namespace Collections{

// internal sealed class PriorityQueue<T> :1312
// {
uType* PriorityQueue_typeof();
void PriorityQueue__ctor__fn(PriorityQueue* __this, int* type);
void PriorityQueue__Add_fn(PriorityQueue* __this, void* value, float* priority);
void PriorityQueue__get_Count_fn(PriorityQueue* __this, int* __retval);
void PriorityQueue__get_Empty_fn(PriorityQueue* __this, bool* __retval);
void PriorityQueue__LowerBound_fn(PriorityQueue* __this, float* priority, int* __retval);
void PriorityQueue__New1_fn(uType* __type, int* type, PriorityQueue** __retval);
void PriorityQueue__PopTop_fn(PriorityQueue* __this, uTRef __retval);
void PriorityQueue__Remove_fn(PriorityQueue* __this, void* value);
void PriorityQueue__UpperBound_fn(PriorityQueue* __this, float* priority, int* __retval);

struct PriorityQueue : uObject
{
    uStrong< ::g::Uno::Collections::List*> _items;
    int _type;

    void ctor_(int type);
    template<class T>
    void Add(T value, float priority) { PriorityQueue__Add_fn(this, uConstrain(__type->T(0), value), &priority); }
    int Count();
    bool Empty();
    int LowerBound(float priority);
    template<class T>
    T PopTop() { T __retval; return PriorityQueue__PopTop_fn(this, &__retval), __retval; }
    template<class T>
    void Remove(T value) { PriorityQueue__Remove_fn(this, uConstrain(__type->T(0), value)); }
    int UpperBound(float priority);
    static PriorityQueue* New1(uType* __type, int type);
};
// }

}}} // ::g::Uno::Collections
