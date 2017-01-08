// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Paths/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Drawing{struct EllipseFactory;}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal static class EllipseFactory :96
// {
uClassType* EllipseFactory_typeof();
void EllipseFactory__AppendTo_fn(::g::Fuse::Drawing::PathGeometry* self, ::g::Uno::Float2* Radius, ::g::Fuse::Drawing::PathGeometry** __retval);

struct EllipseFactory : uObject
{
    static ::g::Fuse::Drawing::PathGeometry* AppendTo(::g::Fuse::Drawing::PathGeometry* self, ::g::Uno::Float2 Radius);
};
// }

}}} // ::g::Fuse::Drawing
