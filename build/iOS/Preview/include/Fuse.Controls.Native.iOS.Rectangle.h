// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.iOS.Shape.h>
#include <Fuse.Controls.Native.IRectangleView.h>
#include <Fuse.Controls.Native.IShapeView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.Float4.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct Rectangle;}}}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal sealed extern class Rectangle :1845
// {
struct Rectangle_type : ::g::Fuse::Controls::Native::iOS::Shape_type
{
    ::g::Fuse::Controls::Native::IRectangleView interface3;
};

Rectangle_type* Rectangle_typeof();
void Rectangle__ctor_2_fn(Rectangle* __this, ::g::Fuse::Visual* visual);
void Rectangle__AddArcWithCenter_fn(Rectangle* __this, uObject* handle, float* centerX, float* centerY, float* radius, float* startAngle, float* endAngle);
void Rectangle__AddLineToPoint_fn(Rectangle* __this, uObject* handle, float* x, float* y);
void Rectangle__ClosePath_fn(Rectangle* __this, uObject* handle);
void Rectangle__CreatePath_fn(Rectangle* __this, uObject** __retval);
void Rectangle__CreateUIBezierPath_fn(uObject** __retval);
void Rectangle__FuseControlsNativeIRectangleViewset_CornerRadius_fn(Rectangle* __this, ::g::Uno::Float4* value);
void Rectangle__MoveToPoint_fn(Rectangle* __this, uObject* handle, float* x, float* y);
void Rectangle__New1_fn(::g::Fuse::Visual* visual, Rectangle** __retval);

struct Rectangle : ::g::Fuse::Controls::Native::iOS::Shape
{
    ::g::Uno::Float4 _cornerRadius;

    void ctor_2(::g::Fuse::Visual* visual);
    void AddArcWithCenter(uObject* handle, float centerX, float centerY, float radius, float startAngle, float endAngle);
    void AddLineToPoint(uObject* handle, float x, float y);
    void ClosePath(uObject* handle);
    void MoveToPoint(uObject* handle, float x, float y);
    static uObject* CreateUIBezierPath();
    static Rectangle* New1(::g::Fuse::Visual* visual);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
