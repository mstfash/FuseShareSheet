// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct Stack;}}}

namespace g{
namespace Uno{
namespace Collections{

// public sealed class Stack<T> :1509
// {
struct Stack_type : uType
{
    ::g::Uno::Collections::IEnumerable interface0;
};

Stack_type* Stack_typeof();
void Stack__ctor__fn(Stack* __this);
void Stack__ctor_1_fn(Stack* __this, int* capacity);
void Stack__Clear_fn(Stack* __this);
void Stack__Contains_fn(Stack* __this, void* item, bool* __retval);
void Stack__get_Count_fn(Stack* __this, int* __retval);
void Stack__EnsureCapacity_fn(Stack* __this);
void Stack__GetEnumerator_fn(Stack* __this, uObject** __retval);
void Stack__New1_fn(uType* __type, Stack** __retval);
void Stack__New2_fn(uType* __type, int* capacity, Stack** __retval);
void Stack__Peek_fn(Stack* __this, uTRef __retval);
void Stack__Pop_fn(Stack* __this, uTRef __retval);
void Stack__Push_fn(Stack* __this, void* item);

struct Stack : uObject
{
    uStrong<uArray*> _data;
    int _used;
    int _version;

    void ctor_();
    void ctor_1(int capacity);
    void Clear();
    template<class T>
    bool Contains(T item) { bool __retval; return Stack__Contains_fn(this, uConstrain(__type->T(0), item), &__retval), __retval; }
    int Count();
    void EnsureCapacity();
    uObject* GetEnumerator();
    template<class T>
    T Peek() { T __retval; return Stack__Peek_fn(this, &__retval), __retval; }
    template<class T>
    T Pop() { T __retval; return Stack__Pop_fn(this, &__retval), __retval; }
    template<class T>
    void Push(T item) { Stack__Push_fn(this, uConstrain(__type->T(0), item)); }
    static Stack* New1(uType* __type);
    static Stack* New2(uType* __type, int capacity);
};
// }

}}} // ::g::Uno::Collections
