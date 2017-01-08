// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Paths/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.CurveTo.h>
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry;}}}
namespace g{namespace Fuse{namespace Drawing{struct SmoothCurveTo;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal sealed class SmoothCurveTo :1195
// {
::g::Fuse::Drawing::PathGeometry_type* SmoothCurveTo_typeof();
void SmoothCurveTo__ctor_3_fn(SmoothCurveTo* __this, ::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* lastPosition, ::g::Uno::Float2* lastTangent, ::g::Uno::Float2* controlPointEnd, ::g::Uno::Float2* position);
void SmoothCurveTo__New4_fn(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* lastPosition, ::g::Uno::Float2* lastTangent, ::g::Uno::Float2* controlPointEnd, ::g::Uno::Float2* position, SmoothCurveTo** __retval);
void SmoothCurveTo__Serialize_fn(SmoothCurveTo* __this, uString** __retval);

struct SmoothCurveTo : ::g::Fuse::Drawing::CurveTo
{
    void ctor_3(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 lastPosition, ::g::Uno::Float2 lastTangent, ::g::Uno::Float2 controlPointEnd, ::g::Uno::Float2 position);
    static SmoothCurveTo* New4(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 lastPosition, ::g::Uno::Float2 lastTangent, ::g::Uno::Float2 controlPointEnd, ::g::Uno::Float2 position);
};
// }

}}} // ::g::Fuse::Drawing
