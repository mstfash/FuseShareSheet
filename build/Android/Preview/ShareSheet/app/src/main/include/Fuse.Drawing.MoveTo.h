// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Paths/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.ContourTerminator.h>
namespace g{namespace Fuse{namespace Drawing{struct MoveTo;}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal sealed class MoveTo :1095
// {
::g::Fuse::Drawing::PathGeometry_type* MoveTo_typeof();
void MoveTo__ctor_3_fn(MoveTo* __this, ::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* position);
void MoveTo__New2_fn(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* position, MoveTo** __retval);
void MoveTo__Serialize_fn(MoveTo* __this, uString** __retval);

struct MoveTo : ::g::Fuse::Drawing::ContourTerminator
{
    void ctor_3(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 position);
    static MoveTo* New2(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 position);
};
// }

}}} // ::g::Fuse::Drawing
