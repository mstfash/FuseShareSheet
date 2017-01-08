// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Polygons/0.42.4/collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct LinkedListEnumerable;}}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct LinkedListEnumerator;}}}}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Tesselation{
namespace Collections{

// internal sealed class LinkedListEnumerator<T> :351
// {
struct LinkedListEnumerator_type : uType
{
    ::g::Uno::Collections::IEnumerator1 interface0;
    ::g::Uno::IDisposable interface1;
    ::g::Uno::Collections::IEnumerator interface2;
};

LinkedListEnumerator_type* LinkedListEnumerator_typeof();
void LinkedListEnumerator__ctor__fn(LinkedListEnumerator* __this, void* first, ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable* enumerable);
void LinkedListEnumerator__get_Current_fn(LinkedListEnumerator* __this, uTRef __retval);
void LinkedListEnumerator__Dispose_fn(LinkedListEnumerator* __this);
void LinkedListEnumerator__MoveNext_fn(LinkedListEnumerator* __this, bool* __retval);
void LinkedListEnumerator__New1_fn(uType* __type, void* first, ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable* enumerable, LinkedListEnumerator** __retval);
void LinkedListEnumerator__Reset_fn(LinkedListEnumerator* __this);

struct LinkedListEnumerator : uObject
{
    uTField _current() { return __type->Field(this, 0); }
    uStrong< ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable*> _enumerable;
    uTField _next() { return __type->Field(this, 2); }

    template<class T>
    void ctor_(T first, ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable* enumerable) { LinkedListEnumerator__ctor__fn(this, uConstrain(__type->T(0), first), enumerable); }
    template<class T>
    T Current() { T __retval; return LinkedListEnumerator__get_Current_fn(this, &__retval), __retval; }
    void Dispose();
    bool MoveNext();
    void Reset();
    template<class T>
    static LinkedListEnumerator* New1(uType* __type, T first, ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable* enumerable) { LinkedListEnumerator* __retval; return LinkedListEnumerator__New1_fn(__type, uConstrain(__type->T(0), first), enumerable, &__retval), __retval; }
};
// }

}}}}} // ::g::Fuse::Drawing::Tesselation::Collections
