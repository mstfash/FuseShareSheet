// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Paths/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Drawing{struct BezierOp;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Drawing{

// public static class BezierOp :1306
// {
uClassType* BezierOp_typeof();
void BezierOp___Solve_fn(double* a_, double* b_, double* c_, bool* s, double* __retval);
void BezierOp__A_fn(double* p0, double* p1, double* p2, double* p3, double* __retval);
void BezierOp__B_fn(double* p0, double* p1, double* p2, double* __retval);
void BezierOp__bezierSpline_fn(double* p0, double* p1, double* p2, double* p3, double* t, double* __retval);
void BezierOp__C_fn(double* p0, double* p1, double* __retval);
void BezierOp__Determinant_fn(double* a, double* b, double* c, double* __retval);
void BezierOp__GetRect_fn(::g::Uno::Float2* p1, ::g::Uno::Float2* c1, ::g::Uno::Float2* c2, ::g::Uno::Float2* p2, ::g::Uno::Rect* __retval);
void BezierOp__Solve_fn(double* a, double* b, double* c, uArray** __retval);

struct BezierOp : uObject
{
    static double _Solve(double a_, double b_, double c_, bool s);
    static double A(double p0, double p1, double p2, double p3);
    static double B(double p0, double p1, double p2);
    static double bezierSpline(double p0, double p1, double p2, double p3, double t);
    static double C(double p0, double p1);
    static double Determinant(double a, double b, double c);
    static ::g::Uno::Rect GetRect(::g::Uno::Float2 p1, ::g::Uno::Float2 c1, ::g::Uno::Float2 c2, ::g::Uno::Float2 p2);
    static uArray* Solve(double a, double b, double c);
};
// }

}}} // ::g::Fuse::Drawing
