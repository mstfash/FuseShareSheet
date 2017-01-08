// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/common/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{struct ImmutableList;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// public sealed class ImmutableList<T> :146
// {
struct ImmutableList_type : uType
{
    ::g::Uno::Collections::IEnumerable interface0;
};

ImmutableList_type* ImmutableList_typeof();
void ImmutableList__ctor__fn(ImmutableList* __this, uArray* array);
void ImmutableList__Add_fn(ImmutableList* __this, void* element, ImmutableList** __retval);
void ImmutableList__get_Count_fn(ImmutableList* __this, int* __retval);
void ImmutableList__get_Empty_fn(uType* __type, ImmutableList** __retval);
void ImmutableList__Get_fn(ImmutableList* __this, int* i, uTRef __retval);
void ImmutableList__GetEnumerator_fn(ImmutableList* __this, uObject** __retval);
void ImmutableList__InsertRange_fn(ImmutableList* __this, int* index, uObject* items, ImmutableList** __retval);
void ImmutableList__get_Item_fn(ImmutableList* __this, int* i, uTRef __retval);
void ImmutableList__New1_fn(uType* __type, uArray* array, ImmutableList** __retval);
void ImmutableList__Replace_fn(ImmutableList* __this, void* element, void* replacement, ImmutableList** __retval);

struct ImmutableList : uObject
{
    uStrong<uArray*> _array;

    void ctor_(uArray* array);
    template<class T>
    ImmutableList* Add(T element) { ImmutableList* __retval; return ImmutableList__Add_fn(this, uConstrain(__type->T(0), element), &__retval), __retval; }
    int Count();
    template<class T>
    T Get(int i) { T __retval; return ImmutableList__Get_fn(this, &i, &__retval), __retval; }
    uObject* GetEnumerator();
    ImmutableList* InsertRange(int index, uObject* items);
    template<class T>
    T Item(int i) { T __retval; return ImmutableList__get_Item_fn(this, &i, &__retval), __retval; }
    template<class T>
    ImmutableList* Replace(T element, T replacement) { ImmutableList* __retval; return ImmutableList__Replace_fn(this, uConstrain(__type->T(0), element), uConstrain(__type->T(0), replacement), &__retval), __retval; }
    static ImmutableList* New1(uType* __type, uArray* array);
    static ImmutableList* Empty(uType* __type);
};
// }

}}} // ::g::Outracks::Simulator
