// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Geometry/0.42.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Geometry{struct Triangle2D;}}}

namespace g{
namespace Uno{
namespace Geometry{

// public sealed class Triangle2D :1795
// {
uType* Triangle2D_typeof();
void Triangle2D__ctor__fn(Triangle2D* __this, ::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* c);
void Triangle2D__New1_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* c, Triangle2D** __retval);

struct Triangle2D : uObject
{
    ::g::Uno::Float2 A;
    ::g::Uno::Float2 B;
    ::g::Uno::Float2 C;

    void ctor_(::g::Uno::Float2 a, ::g::Uno::Float2 b, ::g::Uno::Float2 c);
    static Triangle2D* New1(::g::Uno::Float2 a, ::g::Uno::Float2 b, ::g::Uno::Float2 c);
};
// }

}}} // ::g::Uno::Geometry
