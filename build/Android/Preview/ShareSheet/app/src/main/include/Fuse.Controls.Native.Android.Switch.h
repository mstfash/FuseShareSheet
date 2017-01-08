// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/android/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.Android.LeafView.h>
#include <Fuse.Controls.Native.ILeafView.h>
#include <Fuse.Controls.Native.IToggleView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct Switch;}}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// public sealed extern class Switch :1918
// {
struct Switch_type : ::g::Fuse::Controls::Native::Android::LeafView_type
{
    ::g::Fuse::Controls::Native::IToggleView interface3;
};

Switch_type* Switch_typeof();
void Switch__ctor_2_fn(Switch* __this, uObject* host);
void Switch__AddCallback_fn(Switch* __this, ::g::Java::Object* handle);
void Switch__Create_fn(::g::Java::Object** __retval);
void Switch__Dispose_fn(Switch* __this);
void Switch__New1_fn(uObject* host, Switch** __retval);
void Switch__OnToggleChanged_fn(Switch* __this, bool* value);
void Switch__SetValue_fn(::g::Java::Object* handle, bool* value);
void Switch__set_Value_fn(Switch* __this, bool* value);

struct Switch : ::g::Fuse::Controls::Native::Android::LeafView
{
    uStrong<uObject*> _host;

    void ctor_2(uObject* host);
    void AddCallback(::g::Java::Object* handle);
    void OnToggleChanged(bool value);
    void Value(bool value);
    static ::g::Java::Object* Create();
    static Switch* New1(uObject* host);
    static void SetValue(::g::Java::Object* handle, bool value);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
