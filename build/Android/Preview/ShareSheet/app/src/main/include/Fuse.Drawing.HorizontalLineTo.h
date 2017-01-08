// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Paths/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.LineTo.h>
namespace g{namespace Fuse{namespace Drawing{struct HorizontalLineTo;}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal sealed class HorizontalLineTo :1261
// {
::g::Fuse::Drawing::PathGeometry_type* HorizontalLineTo_typeof();
void HorizontalLineTo__ctor_3_fn(HorizontalLineTo* __this, ::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* lastPosition, float* x);
void HorizontalLineTo__New4_fn(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* lastPosition, float* x, HorizontalLineTo** __retval);
void HorizontalLineTo__Serialize_fn(HorizontalLineTo* __this, uString** __retval);

struct HorizontalLineTo : ::g::Fuse::Drawing::LineTo
{
    float _x;

    void ctor_3(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 lastPosition, float x);
    static HorizontalLineTo* New4(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 lastPosition, float x);
};
// }

}}} // ::g::Fuse::Drawing
