// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Paths/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.Contour.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Float2.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{struct ContourEnumerator;}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal sealed class ContourEnumerator :32
// {
struct ContourEnumerator_type : uType
{
    ::g::Uno::Collections::IEnumerator1 interface0;
    ::g::Uno::IDisposable interface1;
    ::g::Uno::Collections::IEnumerator interface2;
};

ContourEnumerator_type* ContourEnumerator_typeof();
void ContourEnumerator__ctor__fn(ContourEnumerator* __this, ::g::Fuse::Drawing::PathGeometry* head, ::g::Uno::Float2* scale);
void ContourEnumerator__get_Current_fn(ContourEnumerator* __this, ::g::Fuse::Drawing::Contour** __retval);
void ContourEnumerator__Dispose_fn(ContourEnumerator* __this);
void ContourEnumerator__MoveNext_fn(ContourEnumerator* __this, bool* __retval);
void ContourEnumerator__New1_fn(::g::Fuse::Drawing::PathGeometry* head, ::g::Uno::Float2* scale, ContourEnumerator** __retval);
void ContourEnumerator__Reset_fn(ContourEnumerator* __this);

struct ContourEnumerator : uObject
{
    uStrong< ::g::Fuse::Drawing::Contour*> _current;
    uStrong< ::g::Fuse::Drawing::PathGeometry*> _currentHead;
    ::g::Uno::Float2 _scale;

    void ctor_(::g::Fuse::Drawing::PathGeometry* head, ::g::Uno::Float2 scale);
    ::g::Fuse::Drawing::Contour* Current();
    void Dispose();
    bool MoveNext();
    void Reset();
    static ContourEnumerator* New1(::g::Fuse::Drawing::PathGeometry* head, ::g::Uno::Float2 scale);
};
// }

}}} // ::g::Fuse::Drawing
