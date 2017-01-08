// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/android/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.Android.LeafView.h>
#include <Fuse.Controls.Native.ILeafView.h>
#include <Fuse.Controls.Native.IRangeView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct Slider;}}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// public sealed extern class Slider :1784
// {
struct Slider_type : ::g::Fuse::Controls::Native::Android::LeafView_type
{
    ::g::Fuse::Controls::Native::IRangeView interface3;
};

Slider_type* Slider_typeof();
void Slider__ctor_2_fn(Slider* __this, uObject* host);
void Slider__AddChangedCallback_fn(Slider* __this, ::g::Java::Object* handle);
void Slider__Create_fn(::g::Java::Object** __retval);
void Slider__Dispose_fn(Slider* __this);
void Slider__New1_fn(uObject* host, Slider** __retval);
void Slider__OnSeekBarChanged_fn(Slider* __this, double* newProgress);
void Slider__set_Progress_fn(Slider* __this, double* value);
void Slider__SetProgress_fn(::g::Java::Object* handle, double* progress);

struct Slider : ::g::Fuse::Controls::Native::Android::LeafView
{
    uStrong<uObject*> _host;

    void ctor_2(uObject* host);
    void AddChangedCallback(::g::Java::Object* handle);
    void OnSeekBarChanged(double newProgress);
    void Progress(double value);
    static ::g::Java::Object* Create();
    static Slider* New1(uObject* host);
    static void SetProgress(::g::Java::Object* handle, double progress);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
