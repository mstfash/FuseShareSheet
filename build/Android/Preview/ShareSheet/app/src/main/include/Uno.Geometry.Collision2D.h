// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Geometry/0.42.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Geometry{struct Collision2D;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Uno{
namespace Geometry{

// public static class Collision2D :1195
// {
uClassType* Collision2D_typeof();
void Collision2D__AngleBetween_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, float* __retval);
void Collision2D__LineIntersectionPointVector_fn(::g::Uno::Float2* ps1, ::g::Uno::Float2* v1, ::g::Uno::Float2* ps2, ::g::Uno::Float2* v2, ::g::Uno::Float2* __retval);
void Collision2D__TriangleContainsPoint_fn(::g::Uno::Float2* A, ::g::Uno::Float2* B, ::g::Uno::Float2* C, ::g::Uno::Float2* P, bool* __retval);

struct Collision2D : uObject
{
    static float AngleBetween(::g::Uno::Float2 a, ::g::Uno::Float2 b);
    static ::g::Uno::Float2 LineIntersectionPointVector(::g::Uno::Float2 ps1, ::g::Uno::Float2 v1, ::g::Uno::Float2 ps2, ::g::Uno::Float2 v2);
    static bool TriangleContainsPoint(::g::Uno::Float2 A, ::g::Uno::Float2 B, ::g::Uno::Float2 C, ::g::Uno::Float2 P);
};
// }

}}} // ::g::Uno::Geometry
