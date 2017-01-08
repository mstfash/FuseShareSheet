// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Paths/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.PathGeometry.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{namespace Drawing{struct LineTo;}}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal class LineTo :1216
// {
::g::Fuse::Drawing::PathGeometry_type* LineTo_typeof();
void LineTo__ctor_1_fn(LineTo* __this);
void LineTo__ctor_2_fn(LineTo* __this, ::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* lastPosition, ::g::Uno::Float2* position);
void LineTo__EvaluateLast_fn(LineTo* __this, uObject** __retval);
void LineTo__get_HasLastBounds_fn(LineTo* __this, bool* __retval);
void LineTo__get_LastBounds_fn(LineTo* __this, ::g::Uno::Rect* __retval);
void LineTo__LineToCtor_fn(LineTo* __this, ::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* lastPosition, ::g::Uno::Float2* position);
void LineTo__New2_fn(LineTo** __retval);
void LineTo__New3_fn(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* lastPosition, ::g::Uno::Float2* position, LineTo** __retval);
void LineTo__Serialize_fn(LineTo* __this, uString** __retval);

struct LineTo : ::g::Fuse::Drawing::PathGeometry
{
    ::g::Uno::Float2 _lastPosition;

    void ctor_1();
    void ctor_2(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 lastPosition, ::g::Uno::Float2 position);
    void LineToCtor(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 lastPosition, ::g::Uno::Float2 position);
    static LineTo* New2();
    static LineTo* New3(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 lastPosition, ::g::Uno::Float2 position);
};
// }

}}} // ::g::Fuse::Drawing
