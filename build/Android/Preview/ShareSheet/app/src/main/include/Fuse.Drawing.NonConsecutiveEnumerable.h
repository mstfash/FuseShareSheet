// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Polygons/0.42.4/collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{struct NonConsecutiveEnumerable;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal sealed class NonConsecutiveEnumerable :405
// {
struct NonConsecutiveEnumerable_type : uType
{
    ::g::Uno::Collections::IEnumerable interface0;
};

NonConsecutiveEnumerable_type* NonConsecutiveEnumerable_typeof();
void NonConsecutiveEnumerable__ctor__fn(NonConsecutiveEnumerable* __this, uObject* source);
void NonConsecutiveEnumerable__GetEnumerator_fn(NonConsecutiveEnumerable* __this, uObject** __retval);
void NonConsecutiveEnumerable__New1_fn(uObject* source, NonConsecutiveEnumerable** __retval);

struct NonConsecutiveEnumerable : uObject
{
    uStrong<uObject*> _source;

    void ctor_(uObject* source);
    uObject* GetEnumerator();
    static NonConsecutiveEnumerable* New1(uObject* source);
};
// }

}}} // ::g::Fuse::Drawing
