// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Collections/0.42.0/extensions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct UnionEnumerable;}}}

namespace g{
namespace Uno{
namespace Collections{

// internal sealed class UnionEnumerable<T> :514
// {
struct UnionEnumerable_type : uType
{
    ::g::Uno::Collections::IEnumerable interface0;
};

UnionEnumerable_type* UnionEnumerable_typeof();
void UnionEnumerable__ctor__fn(UnionEnumerable* __this, uObject* first, uObject* second);
void UnionEnumerable__GetEnumerator_fn(UnionEnumerable* __this, uObject** __retval);
void UnionEnumerable__New1_fn(uType* __type, uObject* first, uObject* second, UnionEnumerable** __retval);

struct UnionEnumerable : uObject
{
    uStrong<uObject*> _first;
    uStrong<uObject*> _second;

    void ctor_(uObject* first, uObject* second);
    uObject* GetEnumerator();
    static UnionEnumerable* New1(uType* __type, uObject* first, uObject* second);
};
// }

}}} // ::g::Uno::Collections
