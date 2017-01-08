// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/android/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.Android.Shape.h>
#include <Fuse.Controls.Native.IShapeView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct Ellipse;}}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// internal sealed extern class Ellipse :296
// {
::g::Fuse::Controls::Native::Android::Shape_type* Ellipse_typeof();
void Ellipse__ctor_2_fn(Ellipse* __this);
void Ellipse__New1_fn(Ellipse** __retval);
void Ellipse__UpdateShapeDrawable1_fn(Ellipse* __this, ::g::Java::Object* handle);
void Ellipse__UpdateShapeDrawable_fn(Ellipse* __this, ::g::Java::Object* handle, float* pixelsPerPoint);

struct Ellipse : ::g::Fuse::Controls::Native::Android::Shape
{
    void ctor_2();
    void UpdateShapeDrawable1(::g::Java::Object* handle);
    static Ellipse* New1();
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
