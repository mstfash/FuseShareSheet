// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Polygons/0.42.4/collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Float2.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{struct NonConsecutiveEnumerator;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal sealed class NonConsecutiveEnumerator :421
// {
struct NonConsecutiveEnumerator_type : uType
{
    ::g::Uno::Collections::IEnumerator1 interface0;
    ::g::Uno::IDisposable interface1;
    ::g::Uno::Collections::IEnumerator interface2;
};

NonConsecutiveEnumerator_type* NonConsecutiveEnumerator_typeof();
void NonConsecutiveEnumerator__ctor__fn(NonConsecutiveEnumerator* __this, uObject* source);
void NonConsecutiveEnumerator__get_Current_fn(NonConsecutiveEnumerator* __this, ::g::Uno::Float2* __retval);
void NonConsecutiveEnumerator__Dispose_fn(NonConsecutiveEnumerator* __this);
void NonConsecutiveEnumerator__MoveNext_fn(NonConsecutiveEnumerator* __this, bool* __retval);
void NonConsecutiveEnumerator__New1_fn(uObject* source, NonConsecutiveEnumerator** __retval);
void NonConsecutiveEnumerator__Reset_fn(NonConsecutiveEnumerator* __this);

struct NonConsecutiveEnumerator : uObject
{
    ::g::Uno::Float2 _current;
    ::g::Uno::Float2 _first;
    bool _hasCurrent;
    uStrong<uObject*> _source;

    void ctor_(uObject* source);
    ::g::Uno::Float2 Current();
    void Dispose();
    bool MoveNext();
    void Reset();
    static NonConsecutiveEnumerator* New1(uObject* source);
};
// }

}}} // ::g::Fuse::Drawing
