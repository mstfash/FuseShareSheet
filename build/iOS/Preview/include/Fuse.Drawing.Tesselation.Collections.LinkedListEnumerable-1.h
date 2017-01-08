// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Polygons/0.42.4/collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct LinkedListEnumerable;}}}}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Tesselation{
namespace Collections{

// internal abstract class LinkedListEnumerable<T> :320
// {
struct LinkedListEnumerable_type : uType
{
    ::g::Uno::Collections::IEnumerable interface0;
    void(*fp_GetNext)(::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable*, void*, uTRef);
};

LinkedListEnumerable_type* LinkedListEnumerable_typeof();
void LinkedListEnumerable__ctor__fn(LinkedListEnumerable* __this, void* first);
void LinkedListEnumerable__GetEnumerator_fn(LinkedListEnumerable* __this, uObject** __retval);

struct LinkedListEnumerable : uObject
{
    uTField _first() { return __type->Field(this, 0); }

    template<class T>
    void ctor_(T first) { LinkedListEnumerable__ctor__fn(this, uConstrain(__type->GetBase(LinkedListEnumerable_typeof())->T(0), first)); }
    uObject* GetEnumerator();
    template<class T>
    T GetNext(T current) { T __retval; return (((LinkedListEnumerable_type*)__type)->fp_GetNext)(this, uConstrain(__type->GetBase(LinkedListEnumerable_typeof())->T(0), current), &__retval), __retval; }
    void GetNext_ex(void* current, uTRef __retval) { (((LinkedListEnumerable_type*)__type)->fp_GetNext)(this, current, __retval); }
};
// }

}}}}} // ::g::Fuse::Drawing::Tesselation::Collections
