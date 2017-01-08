// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.ILeafView.h>
#include <Fuse.Controls.Native.iOS.LeafView.h>
#include <Fuse.Controls.Native.IRangeView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct Slider;}}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class Slider :2397
// {
struct Slider_type : ::g::Fuse::Controls::Native::iOS::LeafView_type
{
    ::g::Fuse::Controls::Native::IRangeView interface3;
};

Slider_type* Slider_typeof();
void Slider__ctor_2_fn(Slider* __this, uObject* host);
void Slider__Create_fn(uObject** __retval);
void Slider__Dispose_fn(Slider* __this);
void Slider__GetValue_fn(uObject* handle, float* __retval);
void Slider__New1_fn(uObject* host, Slider** __retval);
void Slider__OnValueChanged_fn(Slider* __this, uObject* sender, uObject* uiEvent);
void Slider__set_Progress_fn(Slider* __this, double* value);
void Slider__SetValue_fn(uObject* handle, float* value);
void Slider__get_Value_fn(Slider* __this, float* __retval);
void Slider__set_Value_fn(Slider* __this, float* value);

struct Slider : ::g::Fuse::Controls::Native::iOS::LeafView
{
    uStrong<uObject*> _host;
    uStrong<uObject*> _valueChangedEvent;

    void ctor_2(uObject* host);
    void OnValueChanged(uObject* sender, uObject* uiEvent);
    void Progress(double value);
    float Value();
    void Value(float value);
    static uObject* Create();
    static float GetValue(uObject* handle);
    static Slider* New1(uObject* host);
    static void SetValue(uObject* handle, float value);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
