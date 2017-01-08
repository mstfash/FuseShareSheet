// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.ILeafView.h>
#include <Fuse.Controls.Native.iOS.LeafView.h>
#include <Fuse.Controls.Native.IToggleView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct Switch;}}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class Switch :2478
// {
struct Switch_type : ::g::Fuse::Controls::Native::iOS::LeafView_type
{
    ::g::Fuse::Controls::Native::IToggleView interface3;
};

Switch_type* Switch_typeof();
void Switch__ctor_2_fn(Switch* __this, uObject* host);
void Switch__Create_fn(uObject** __retval);
void Switch__Dispose_fn(Switch* __this);
void Switch__GetValue_fn(uObject* handle, bool* __retval);
void Switch__New1_fn(uObject* host, Switch** __retval);
void Switch__OnValueChanged_fn(Switch* __this, uObject* sender, uObject* uiEvent);
void Switch__SetValue_fn(uObject* handle, bool* value);
void Switch__set_Value_fn(Switch* __this, bool* value);

struct Switch : ::g::Fuse::Controls::Native::iOS::LeafView
{
    uStrong<uObject*> _host;
    uStrong<uObject*> _valueChangedEvent;

    void ctor_2(uObject* host);
    void OnValueChanged(uObject* sender, uObject* uiEvent);
    void Value(bool value);
    static uObject* Create();
    static bool GetValue(uObject* handle);
    static Switch* New1(uObject* host);
    static void SetValue(uObject* handle, bool value);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
