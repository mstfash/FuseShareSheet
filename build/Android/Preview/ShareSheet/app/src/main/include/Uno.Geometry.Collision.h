// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Geometry/0.42.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Geometry{struct Box;}}}
namespace g{namespace Uno{namespace Geometry{struct Collision;}}}
namespace g{namespace Uno{namespace Geometry{struct Ray;}}}
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Uno{
namespace Geometry{

// public static class Collision :42
// {
uClassType* Collision_typeof();
void Collision__ClosestPointOnSegmentToPoint_fn(::g::Uno::Float3* segment1, ::g::Uno::Float3* segment2, ::g::Uno::Float3* point, ::g::Uno::Float3* result);
void Collision__RayIntersectsBox_fn(::g::Uno::Geometry::Ray* ray, ::g::Uno::Geometry::Box* box, float* distance, bool* __retval);

struct Collision : uObject
{
    static void ClosestPointOnSegmentToPoint(::g::Uno::Float3 segment1, ::g::Uno::Float3 segment2, ::g::Uno::Float3 point, ::g::Uno::Float3* result);
    static bool RayIntersectsBox(::g::Uno::Geometry::Ray ray, ::g::Uno::Geometry::Box box, float* distance);
};
// }

}}} // ::g::Uno::Geometry
