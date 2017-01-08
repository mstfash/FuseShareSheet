// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/implementation/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Text{struct SinglyLinkedList;}}}

namespace g{
namespace Fuse{
namespace Text{

// internal sealed class SinglyLinkedList<T> :1171
// {
struct SinglyLinkedList_type : uType
{
    ::g::Uno::Collections::IEnumerable interface0;
};

SinglyLinkedList_type* SinglyLinkedList_typeof();
void SinglyLinkedList__ctor__fn(SinglyLinkedList* __this, void* value, SinglyLinkedList* next);
void SinglyLinkedList__FromEnumerable_fn(uType* __type, uObject* xs, SinglyLinkedList** __retval);
void SinglyLinkedList__GetEnumerator_fn(SinglyLinkedList* __this, uObject** __retval);
void SinglyLinkedList__New1_fn(uType* __type, void* value, SinglyLinkedList* next, SinglyLinkedList** __retval);
void SinglyLinkedList__get_Value_fn(SinglyLinkedList* __this, uTRef __retval);
void SinglyLinkedList__set_Value_fn(SinglyLinkedList* __this, void* value);

struct SinglyLinkedList : uObject
{
    uStrong<SinglyLinkedList*> Next;
    uTField _Value() { return __type->Field(this, 1); }

    template<class T>
    void ctor_(T value, SinglyLinkedList* next) { SinglyLinkedList__ctor__fn(this, uConstrain(__type->T(0), value), next); }
    uObject* GetEnumerator();
    template<class T>
    T Value() { T __retval; return SinglyLinkedList__get_Value_fn(this, &__retval), __retval; }
    template<class T>
    void Value(T value) { SinglyLinkedList__set_Value_fn(this, uConstrain(__type->T(0), value)); }
    static SinglyLinkedList* FromEnumerable(uType* __type, uObject* xs);
    template<class T>
    static SinglyLinkedList* New1(uType* __type, T value, SinglyLinkedList* next) { SinglyLinkedList* __retval; return SinglyLinkedList__New1_fn(__type, uConstrain(__type->T(0), value), next, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Text
