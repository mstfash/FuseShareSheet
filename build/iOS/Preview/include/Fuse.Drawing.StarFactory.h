// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Paths/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry;}}}
namespace g{namespace Fuse{namespace Drawing{struct StarFactory;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal static class StarFactory :1471
// {
uClassType* StarFactory_typeof();
void StarFactory__AppendTo_fn(::g::Fuse::Drawing::PathGeometry* self, int* Points, float* Radius, float* spokeRadius, float* cornerRatio, float* rotation, ::g::Fuse::Drawing::PathGeometry** __retval);

struct StarFactory : uObject
{
    static ::g::Fuse::Drawing::PathGeometry* AppendTo(::g::Fuse::Drawing::PathGeometry* self, int Points, float Radius, float spokeRadius, float cornerRatio, float rotation);
};
// }

}}} // ::g::Fuse::Drawing
