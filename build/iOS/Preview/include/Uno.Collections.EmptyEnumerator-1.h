// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Collections/0.42.0/extensions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct EmptyEnumerator;}}}

namespace g{
namespace Uno{
namespace Collections{

// internal sealed class EmptyEnumerator<T> :13
// {
struct EmptyEnumerator_type : uType
{
    ::g::Uno::Collections::IEnumerator1 interface0;
    ::g::Uno::IDisposable interface1;
    ::g::Uno::Collections::IEnumerator interface2;
};

EmptyEnumerator_type* EmptyEnumerator_typeof();
void EmptyEnumerator__ctor__fn(EmptyEnumerator* __this);
void EmptyEnumerator__get_Current_fn(EmptyEnumerator* __this, uTRef __retval);
void EmptyEnumerator__Dispose_fn(EmptyEnumerator* __this);
void EmptyEnumerator__MoveNext_fn(EmptyEnumerator* __this, bool* __retval);
void EmptyEnumerator__New1_fn(uType* __type, EmptyEnumerator** __retval);
void EmptyEnumerator__Reset_fn(EmptyEnumerator* __this);

struct EmptyEnumerator : uObject
{
    void ctor_();
    template<class T>
    T Current() { T __retval; return EmptyEnumerator__get_Current_fn(this, &__retval), __retval; }
    void Dispose();
    bool MoveNext();
    void Reset();
    static EmptyEnumerator* New1(uType* __type);
};
// }

}}} // ::g::Uno::Collections
