// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/content/splines/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Content.Splines.KeyframedSpline-2.h>
#include <Uno.Float4x4.h>
namespace g{namespace Uno{namespace Content{namespace Splines{struct LinearSplineFloat4x4;}}}}
namespace g{namespace Uno{namespace Content{namespace Splines{template<class TData>struct KeyframedSpline__Key;}}}}

namespace g{
namespace Uno{
namespace Content{
namespace Splines{

// public sealed class LinearSplineFloat4x4 :351
// {
::g::Uno::Content::Splines::Spline_type* LinearSplineFloat4x4_typeof();
void LinearSplineFloat4x4__ctor_3_fn(LinearSplineFloat4x4* __this);
void LinearSplineFloat4x4__ctor_4_fn(LinearSplineFloat4x4* __this, uArray* keys1);
void LinearSplineFloat4x4__New1_fn(LinearSplineFloat4x4** __retval);
void LinearSplineFloat4x4__New2_fn(uArray* keys1, LinearSplineFloat4x4** __retval);
void LinearSplineFloat4x4__Sample1_fn(LinearSplineFloat4x4* __this, double* t, ::g::Uno::Float4x4* result);

struct LinearSplineFloat4x4 : ::g::Uno::Content::Splines::KeyframedSpline
{
    void ctor_3();
    void ctor_4(uArray* keys1);
    static LinearSplineFloat4x4* New1();
    static LinearSplineFloat4x4* New2(uArray* keys1);
};
// }

}}}} // ::g::Uno::Content::Splines
