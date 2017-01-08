// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/content/splines/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Content.Splines.KeyframedSpline-2.h>
#include <Uno.Float2.h>
namespace g{namespace Uno{namespace Content{namespace Splines{struct LinearSplineFloat2;}}}}
namespace g{namespace Uno{namespace Content{namespace Splines{template<class TData>struct KeyframedSpline__Key;}}}}

namespace g{
namespace Uno{
namespace Content{
namespace Splines{

// public sealed class LinearSplineFloat2 :264
// {
::g::Uno::Content::Splines::Spline_type* LinearSplineFloat2_typeof();
void LinearSplineFloat2__ctor_3_fn(LinearSplineFloat2* __this);
void LinearSplineFloat2__ctor_4_fn(LinearSplineFloat2* __this, uArray* keys1);
void LinearSplineFloat2__New1_fn(LinearSplineFloat2** __retval);
void LinearSplineFloat2__New2_fn(uArray* keys1, LinearSplineFloat2** __retval);
void LinearSplineFloat2__Sample1_fn(LinearSplineFloat2* __this, double* t, ::g::Uno::Float2* result);

struct LinearSplineFloat2 : ::g::Uno::Content::Splines::KeyframedSpline
{
    void ctor_3();
    void ctor_4(uArray* keys1);
    static LinearSplineFloat2* New1();
    static LinearSplineFloat2* New2(uArray* keys1);
};
// }

}}}} // ::g::Uno::Content::Splines
