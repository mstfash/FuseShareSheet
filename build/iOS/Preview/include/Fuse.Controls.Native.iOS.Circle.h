// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.ICircleView.h>
#include <Fuse.Controls.Native.iOS.Shape.h>
#include <Fuse.Controls.Native.IShapeView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct Circle;}}}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal sealed extern class Circle :62
// {
struct Circle_type : ::g::Fuse::Controls::Native::iOS::Shape_type
{
    ::g::Fuse::Controls::Native::ICircleView interface3;
};

Circle_type* Circle_typeof();
void Circle__ctor_2_fn(Circle* __this, ::g::Fuse::Visual* visual);
void Circle__CreatePath_fn(Circle* __this, uObject** __retval);
void Circle__CreateUIBezierPath_fn(float* x, float* y, float* r, float* start, float* end, uObject** __retval);
void Circle__FuseControlsNativeICircleViewset_EffectiveEndAngleDegrees_fn(Circle* __this, float* value);
void Circle__FuseControlsNativeICircleViewset_EndAngleDegrees_fn(Circle* __this, float* value);
void Circle__FuseControlsNativeICircleViewset_StartAngleDegrees_fn(Circle* __this, float* value);
void Circle__FuseControlsNativeICircleViewset_UseAngle_fn(Circle* __this, bool* value);
void Circle__New1_fn(::g::Fuse::Visual* visual, Circle** __retval);

struct Circle : ::g::Fuse::Controls::Native::iOS::Shape
{
    float _effectiveEndAngleDegrees;
    float _startAngleDegrees;
    bool _useAngle;

    void ctor_2(::g::Fuse::Visual* visual);
    static uObject* CreateUIBezierPath(float x, float y, float r, float start, float end);
    static Circle* New1(::g::Fuse::Visual* visual);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
