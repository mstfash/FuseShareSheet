// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.ILabelView.h>
#include <Fuse.Controls.Native.ILeafView.h>
#include <Fuse.Controls.Native.iOS.LeafView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct Button;}}}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class Button :11
// {
struct Button_type : ::g::Fuse::Controls::Native::iOS::LeafView_type
{
    ::g::Fuse::Controls::Native::ILabelView interface3;
};

Button_type* Button_typeof();
void Button__ctor_2_fn(Button* __this, ::g::Fuse::Visual* visual);
void Button__Create_fn(uObject** __retval);
void Button__Dispose_fn(Button* __this);
void Button__FuseControlsNativeILabelViewset_Text_fn(Button* __this, uString* value);
void Button__New1_fn(::g::Fuse::Visual* visual, Button** __retval);
void Button__SetText_fn(uObject* handle, uString* text);

struct Button : ::g::Fuse::Controls::Native::iOS::LeafView
{
    uStrong< ::g::Fuse::Visual*> _visual;

    void ctor_2(::g::Fuse::Visual* visual);
    static uObject* Create();
    static Button* New1(::g::Fuse::Visual* visual);
    static void SetText(uObject* handle, uString* text);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
