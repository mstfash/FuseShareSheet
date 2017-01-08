// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Paths/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry;}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometryExtensions;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Drawing{

// public static class PathGeometryExtensions :286
// {
uClassType* PathGeometryExtensions_typeof();
void PathGeometryExtensions__Circle_fn(::g::Fuse::Drawing::PathGeometry* self, float* Radius, ::g::Fuse::Drawing::PathGeometry** __retval);
void PathGeometryExtensions__Ellipse_fn(::g::Fuse::Drawing::PathGeometry* self, ::g::Uno::Float2* Radius, ::g::Fuse::Drawing::PathGeometry** __retval);
void PathGeometryExtensions__Rectangle_fn(::g::Fuse::Drawing::PathGeometry* self, ::g::Uno::Float2* Size, ::g::Uno::Float4* CornerRadius, ::g::Fuse::Drawing::PathGeometry** __retval);
void PathGeometryExtensions__RegularPolygon_fn(::g::Fuse::Drawing::PathGeometry* self, int* Sides, float* Radius, ::g::Fuse::Drawing::PathGeometry** __retval);
void PathGeometryExtensions__Star_fn(::g::Fuse::Drawing::PathGeometry* self, int* Corners, float* Radius, float* SpokeRadius, float* CornerRatio, float* rotation, ::g::Fuse::Drawing::PathGeometry** __retval);

struct PathGeometryExtensions : uObject
{
    static ::g::Fuse::Drawing::PathGeometry* Circle(::g::Fuse::Drawing::PathGeometry* self, float Radius);
    static ::g::Fuse::Drawing::PathGeometry* Ellipse(::g::Fuse::Drawing::PathGeometry* self, ::g::Uno::Float2 Radius);
    static ::g::Fuse::Drawing::PathGeometry* Rectangle(::g::Fuse::Drawing::PathGeometry* self, ::g::Uno::Float2 Size, ::g::Uno::Float4 CornerRadius);
    static ::g::Fuse::Drawing::PathGeometry* RegularPolygon(::g::Fuse::Drawing::PathGeometry* self, int Sides, float Radius);
    static ::g::Fuse::Drawing::PathGeometry* Star(::g::Fuse::Drawing::PathGeometry* self, int Corners, float Radius, float SpokeRadius, float CornerRatio, float rotation);
};
// }

}}} // ::g::Fuse::Drawing
