// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/content/splines/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Content.Splines.KeyframedSpline-2.h>
#include <Uno.Float3.h>
namespace g{namespace Uno{namespace Content{namespace Splines{struct LinearSplineFloat3;}}}}
namespace g{namespace Uno{namespace Content{namespace Splines{template<class TData>struct KeyframedSpline__Key;}}}}

namespace g{
namespace Uno{
namespace Content{
namespace Splines{

// public sealed class LinearSplineFloat3 :293
// {
::g::Uno::Content::Splines::Spline_type* LinearSplineFloat3_typeof();
void LinearSplineFloat3__ctor_3_fn(LinearSplineFloat3* __this);
void LinearSplineFloat3__ctor_4_fn(LinearSplineFloat3* __this, uArray* keys1);
void LinearSplineFloat3__New1_fn(LinearSplineFloat3** __retval);
void LinearSplineFloat3__New2_fn(uArray* keys1, LinearSplineFloat3** __retval);
void LinearSplineFloat3__Sample1_fn(LinearSplineFloat3* __this, double* t, ::g::Uno::Float3* result);

struct LinearSplineFloat3 : ::g::Uno::Content::Splines::KeyframedSpline
{
    void ctor_3();
    void ctor_4(uArray* keys1);
    static LinearSplineFloat3* New1();
    static LinearSplineFloat3* New2(uArray* keys1);
};
// }

}}}} // ::g::Uno::Content::Splines
