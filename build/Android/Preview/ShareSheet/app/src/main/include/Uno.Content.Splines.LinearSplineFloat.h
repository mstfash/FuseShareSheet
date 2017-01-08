// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/content/splines/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Content.Splines.KeyframedSpline-2.h>
#include <Uno.Float.h>
namespace g{namespace Uno{namespace Content{namespace Splines{struct LinearSplineFloat;}}}}
namespace g{namespace Uno{namespace Content{namespace Splines{template<class TData>struct KeyframedSpline__Key;}}}}

namespace g{
namespace Uno{
namespace Content{
namespace Splines{

// public sealed class LinearSplineFloat :236
// {
::g::Uno::Content::Splines::Spline_type* LinearSplineFloat_typeof();
void LinearSplineFloat__ctor_3_fn(LinearSplineFloat* __this);
void LinearSplineFloat__ctor_4_fn(LinearSplineFloat* __this, uArray* keys1);
void LinearSplineFloat__New1_fn(LinearSplineFloat** __retval);
void LinearSplineFloat__New2_fn(uArray* keys1, LinearSplineFloat** __retval);
void LinearSplineFloat__Sample1_fn(LinearSplineFloat* __this, double* t, float* result);

struct LinearSplineFloat : ::g::Uno::Content::Splines::KeyframedSpline
{
    void ctor_3();
    void ctor_4(uArray* keys1);
    static LinearSplineFloat* New1();
    static LinearSplineFloat* New2(uArray* keys1);
};
// }

}}}} // ::g::Uno::Content::Splines
