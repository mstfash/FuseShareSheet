// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.iOS.Shape.h>
#include <Fuse.Controls.Native.IShapeView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct Ellipse;}}}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal sealed extern class Ellipse :319
// {
::g::Fuse::Controls::Native::iOS::Shape_type* Ellipse_typeof();
void Ellipse__ctor_2_fn(Ellipse* __this, ::g::Fuse::Visual* visual);
void Ellipse__CreatePath_fn(Ellipse* __this, uObject** __retval);
void Ellipse__CreateUIBezierPath_fn(float* x, float* y, float* width, float* height, uObject** __retval);
void Ellipse__New1_fn(::g::Fuse::Visual* visual, Ellipse** __retval);

struct Ellipse : ::g::Fuse::Controls::Native::iOS::Shape
{
    void ctor_2(::g::Fuse::Visual* visual);
    static uObject* CreateUIBezierPath(float x, float y, float width, float height);
    static Ellipse* New1(::g::Fuse::Visual* visual);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
