// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Collections/0.42.0/extensions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct WhereEnumerable;}}}

namespace g{
namespace Uno{
namespace Collections{

// internal sealed class WhereEnumerable<T> :582
// {
struct WhereEnumerable_type : uType
{
    ::g::Uno::Collections::IEnumerable interface0;
};

WhereEnumerable_type* WhereEnumerable_typeof();
void WhereEnumerable__ctor__fn(WhereEnumerable* __this, uObject* source, uDelegate* predicate);
void WhereEnumerable__GetEnumerator_fn(WhereEnumerable* __this, uObject** __retval);
void WhereEnumerable__New1_fn(uType* __type, uObject* source, uDelegate* predicate, WhereEnumerable** __retval);

struct WhereEnumerable : uObject
{
    uStrong<uDelegate*> _predicate;
    uStrong<uObject*> _source;

    void ctor_(uObject* source, uDelegate* predicate);
    uObject* GetEnumerator();
    static WhereEnumerable* New1(uType* __type, uObject* source, uDelegate* predicate);
};
// }

}}} // ::g::Uno::Collections
