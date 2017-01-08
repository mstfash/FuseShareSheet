// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/implementation/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Text{struct SinglyLinkedList;}}}
namespace g{namespace Fuse{namespace Text{struct SinglyLinkedList__Enumerator;}}}

namespace g{
namespace Fuse{
namespace Text{

// private sealed class SinglyLinkedList<T>.Enumerator :1199
// {
struct SinglyLinkedList__Enumerator_type : uType
{
    ::g::Uno::Collections::IEnumerator1 interface0;
    ::g::Uno::IDisposable interface1;
    ::g::Uno::Collections::IEnumerator interface2;
};

SinglyLinkedList__Enumerator_type* SinglyLinkedList__Enumerator_typeof();
void SinglyLinkedList__Enumerator__ctor__fn(SinglyLinkedList__Enumerator* __this, ::g::Fuse::Text::SinglyLinkedList* list);
void SinglyLinkedList__Enumerator__get_Current_fn(SinglyLinkedList__Enumerator* __this, uTRef __retval);
void SinglyLinkedList__Enumerator__Dispose_fn(SinglyLinkedList__Enumerator* __this);
void SinglyLinkedList__Enumerator__MoveNext_fn(SinglyLinkedList__Enumerator* __this, bool* __retval);
void SinglyLinkedList__Enumerator__New1_fn(uType* __type, ::g::Fuse::Text::SinglyLinkedList* list, SinglyLinkedList__Enumerator** __retval);
void SinglyLinkedList__Enumerator__Reset_fn(SinglyLinkedList__Enumerator* __this);

struct SinglyLinkedList__Enumerator : uObject
{
    uStrong< ::g::Fuse::Text::SinglyLinkedList*> _beforeHead;
    uStrong< ::g::Fuse::Text::SinglyLinkedList*> _current;

    void ctor_(::g::Fuse::Text::SinglyLinkedList* list);
    template<class T>
    T Current() { T __retval; return SinglyLinkedList__Enumerator__get_Current_fn(this, &__retval), __retval; }
    void Dispose();
    bool MoveNext();
    void Reset();
    static SinglyLinkedList__Enumerator* New1(uType* __type, ::g::Fuse::Text::SinglyLinkedList* list);
};
// }

}}} // ::g::Fuse::Text
