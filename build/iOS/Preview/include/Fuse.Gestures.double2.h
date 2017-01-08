// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/rangecontrols/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Gestures{struct double2;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Gestures{

// internal struct double2 :13
// {
uStructType* double2_typeof();
void double2__ctor__fn(double2* __this, double* x, double* y);
void double2__ctor_1_fn(double2* __this, ::g::Uno::Float2* v);
void double2__get_AsFloat2_fn(double2* __this, ::g::Uno::Float2* __retval);
void double2__New1_fn(double* x, double* y, double2* __retval);
void double2__New2_fn(::g::Uno::Float2* v, double2* __retval);

struct double2
{
    double X;
    double Y;

    void ctor_(double x, double y);
    void ctor_1(::g::Uno::Float2 v);
    ::g::Uno::Float2 AsFloat2();
};

double2 double2__New1(double x, double y);
double2 double2__New2(::g::Uno::Float2 v);
// }

}}} // ::g::Fuse::Gestures
