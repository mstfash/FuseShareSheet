// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Geometry/0.42.0/curves/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Geometry{struct CubicBezier;}}}
namespace g{namespace Uno{namespace Geometry{struct Vertex;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Uno{
namespace Geometry{

// public sealed class CubicBezier :12
// {
uType* CubicBezier_typeof();
void CubicBezier__ctor__fn(CubicBezier* __this, float* maxError);
void CubicBezier__AddPoint_fn(CubicBezier* __this, float* x, float* y);
void CubicBezier__New1_fn(float* maxError, CubicBezier** __retval);
void CubicBezier__Subdivide_fn(::g::Uno::Float2* p1, ::g::Uno::Float2* p2, ::g::Uno::Float2* p3, ::g::Uno::Float2* p4, float* maxError, uObject** __retval);
void CubicBezier__SubdivideRecursive_fn(CubicBezier* __this, float* x1, float* y1, float* x2, float* y2, float* x3, float* y3, float* x4, float* y4, int* level);

struct CubicBezier : uObject
{
    uStrong< ::g::Uno::Geometry::Vertex*> _head;
    uStrong< ::g::Uno::Geometry::Vertex*> _last;
    float _maxErrorSquared;

    void ctor_(float maxError);
    void AddPoint(float x, float y);
    void SubdivideRecursive(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, int level);
    static CubicBezier* New1(float maxError);
    static uObject* Subdivide(::g::Uno::Float2 p1, ::g::Uno::Float2 p2, ::g::Uno::Float2 p3, ::g::Uno::Float2 p4, float maxError);
};
// }

}}} // ::g::Uno::Geometry
