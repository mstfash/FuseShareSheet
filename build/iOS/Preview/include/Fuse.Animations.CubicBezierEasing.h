// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.Easing.h>
namespace g{namespace Fuse{namespace Animations{struct CubicBezierEasing;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Animations{

// public sealed class CubicBezierEasing :1670
// {
::g::Fuse::Animations::Easing_type* CubicBezierEasing_typeof();
void CubicBezierEasing__ctor_1_fn(CubicBezierEasing* __this);
void CubicBezierEasing__get_C1X_fn(CubicBezierEasing* __this, double* __retval);
void CubicBezierEasing__set_C1X_fn(CubicBezierEasing* __this, double* value);
void CubicBezierEasing__get_C1Y_fn(CubicBezierEasing* __this, double* __retval);
void CubicBezierEasing__set_C1Y_fn(CubicBezierEasing* __this, double* value);
void CubicBezierEasing__get_C2X_fn(CubicBezierEasing* __this, double* __retval);
void CubicBezierEasing__set_C2X_fn(CubicBezierEasing* __this, double* value);
void CubicBezierEasing__get_C2Y_fn(CubicBezierEasing* __this, double* __retval);
void CubicBezierEasing__set_C2Y_fn(CubicBezierEasing* __this, double* value);
void CubicBezierEasing__get_ControlPoints_fn(CubicBezierEasing* __this, ::g::Uno::Float4* __retval);
void CubicBezierEasing__set_ControlPoints_fn(CubicBezierEasing* __this, ::g::Uno::Float4* value);
void CubicBezierEasing__Map_fn(CubicBezierEasing* __this, double* p, double* __retval);
void CubicBezierEasing__New1_fn(CubicBezierEasing** __retval);

struct CubicBezierEasing : ::g::Fuse::Animations::Easing
{
    double _C1X;
    double _C1Y;
    double _C2X;
    double _C2Y;

    void ctor_1();
    double C1X();
    void C1X(double value);
    double C1Y();
    void C1Y(double value);
    double C2X();
    void C2X(double value);
    double C2Y();
    void C2Y(double value);
    ::g::Uno::Float4 ControlPoints();
    void ControlPoints(::g::Uno::Float4 value);
    static CubicBezierEasing* New1();
};
// }

}}} // ::g::Fuse::Animations
