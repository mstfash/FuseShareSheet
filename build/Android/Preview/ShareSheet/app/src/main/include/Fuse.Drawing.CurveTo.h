// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Paths/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.PathGeometry.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{namespace Drawing{struct CurveTo;}}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal class CurveTo :1130
// {
::g::Fuse::Drawing::PathGeometry_type* CurveTo_typeof();
void CurveTo__ctor_1_fn(CurveTo* __this);
void CurveTo__ctor_2_fn(CurveTo* __this, ::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* lastPosition, ::g::Uno::Float2* controlPointStart, ::g::Uno::Float2* controlPointEnd, ::g::Uno::Float2* position);
void CurveTo__get_ControlPointEnd_fn(CurveTo* __this, ::g::Uno::Float2* __retval);
void CurveTo__CurveToCtor_fn(CurveTo* __this, ::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* lastPosition, ::g::Uno::Float2* controlPointStart, ::g::Uno::Float2* controlPointEnd, ::g::Uno::Float2* position);
void CurveTo__get_EndTangent_fn(CurveTo* __this, ::g::Uno::Float2* __retval);
void CurveTo__EvaluateLast_fn(CurveTo* __this, uObject** __retval);
void CurveTo__get_HasLastBounds_fn(CurveTo* __this, bool* __retval);
void CurveTo__get_LastBounds_fn(CurveTo* __this, ::g::Uno::Rect* __retval);
void CurveTo__New2_fn(CurveTo** __retval);
void CurveTo__New3_fn(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* lastPosition, ::g::Uno::Float2* controlPointStart, ::g::Uno::Float2* controlPointEnd, ::g::Uno::Float2* position, CurveTo** __retval);
void CurveTo__Serialize_fn(CurveTo* __this, uString** __retval);

struct CurveTo : ::g::Fuse::Drawing::PathGeometry
{
    ::g::Uno::Float2 _controlPointEnd;
    ::g::Uno::Float2 _controlPointStart;
    ::g::Uno::Float2 _lastPosition;

    void ctor_1();
    void ctor_2(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 lastPosition, ::g::Uno::Float2 controlPointStart, ::g::Uno::Float2 controlPointEnd, ::g::Uno::Float2 position);
    ::g::Uno::Float2 ControlPointEnd();
    void CurveToCtor(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 lastPosition, ::g::Uno::Float2 controlPointStart, ::g::Uno::Float2 controlPointEnd, ::g::Uno::Float2 position);
    static CurveTo* New2();
    static CurveTo* New3(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 lastPosition, ::g::Uno::Float2 controlPointStart, ::g::Uno::Float2 controlPointEnd, ::g::Uno::Float2 position);
};
// }

}}} // ::g::Fuse::Drawing
