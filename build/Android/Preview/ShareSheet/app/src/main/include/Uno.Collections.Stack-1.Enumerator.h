// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct Stack;}}}

namespace g{
namespace Uno{
namespace Collections{

// public struct Stack<T>.Enumerator :1535
// {
struct Stack__Enumerator_type : uStructType
{
    ::g::Uno::Collections::IEnumerator1 interface0;
    ::g::Uno::IDisposable interface1;
    ::g::Uno::Collections::IEnumerator interface2;
};

Stack__Enumerator_type* Stack__Enumerator_typeof();
void Stack__Enumerator__ctor__fn(uTRef __this, uType* __type, ::g::Uno::Collections::Stack* source);
void Stack__Enumerator__get_Current_fn(uTRef __this, uType* __type, uTRef __retval);
void Stack__Enumerator__Dispose_fn(uTRef __this, uType* __type);
void Stack__Enumerator__MoveNext_fn(uTRef __this, uType* __type, bool* __retval);
void Stack__Enumerator__New1_fn(uType* __type, ::g::Uno::Collections::Stack* source, uTRef __retval);
void Stack__Enumerator__UnoCollectionsIEnumeratorReset_fn(uTRef __this, uType* __type);

template<class T>
struct Stack__Enumerator
{
    uStrong< ::g::Uno::Collections::Stack*> _source;
    int _version;
    int _iterator;
    T _current;

    void ctor_(uType* __type, ::g::Uno::Collections::Stack* source) { Stack__Enumerator__ctor__fn(this, __type, source); }
    T Current(uType* __type) { T __retval; return Stack__Enumerator__get_Current_fn(this, __type, &__retval), __retval; }
    void Dispose(uType* __type) { Stack__Enumerator__Dispose_fn(this, __type); }
    bool MoveNext(uType* __type) { bool __retval; return Stack__Enumerator__MoveNext_fn(this, __type, &__retval), __retval; }
};

template<class T>
Stack__Enumerator<T> Stack__Enumerator__New1(uType* __type, ::g::Uno::Collections::Stack* source) { Stack__Enumerator<T> __retval; return Stack__Enumerator__New1_fn(__type, source, &__retval), __retval; }
// }

}}} // ::g::Uno::Collections
