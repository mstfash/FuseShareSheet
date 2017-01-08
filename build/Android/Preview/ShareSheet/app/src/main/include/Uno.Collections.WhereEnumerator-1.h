// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Collections/0.42.0/extensions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct WhereEnumerator;}}}

namespace g{
namespace Uno{
namespace Collections{

// internal sealed class WhereEnumerator<T> :599
// {
struct WhereEnumerator_type : uType
{
    ::g::Uno::Collections::IEnumerator1 interface0;
    ::g::Uno::IDisposable interface1;
    ::g::Uno::Collections::IEnumerator interface2;
};

WhereEnumerator_type* WhereEnumerator_typeof();
void WhereEnumerator__ctor__fn(WhereEnumerator* __this, uObject* source, uDelegate* predicate);
void WhereEnumerator__get_Current_fn(WhereEnumerator* __this, uTRef __retval);
void WhereEnumerator__Dispose_fn(WhereEnumerator* __this);
void WhereEnumerator__MoveNext_fn(WhereEnumerator* __this, bool* __retval);
void WhereEnumerator__New1_fn(uType* __type, uObject* source, uDelegate* predicate, WhereEnumerator** __retval);
void WhereEnumerator__Reset_fn(WhereEnumerator* __this);

struct WhereEnumerator : uObject
{
    uTField _current() { return __type->Field(this, 0); }
    uStrong<uDelegate*> _predicate;
    uStrong<uObject*> _source;

    void ctor_(uObject* source, uDelegate* predicate);
    template<class T>
    T Current() { T __retval; return WhereEnumerator__get_Current_fn(this, &__retval), __retval; }
    void Dispose();
    bool MoveNext();
    void Reset();
    static WhereEnumerator* New1(uType* __type, uObject* source, uDelegate* predicate);
};
// }

}}} // ::g::Uno::Collections
