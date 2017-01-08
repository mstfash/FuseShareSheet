// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.IRangeView.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct Slider;}}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class Slider :2388
// {
struct Slider_type : uType
{
    ::g::Fuse::Controls::Native::IRangeView interface0;
};

Slider_type* Slider_typeof();
void Slider__ctor__fn(Slider* __this, uObject* host);
void Slider__New1_fn(uObject* host, Slider** __retval);
void Slider__set_Progress_fn(Slider* __this, double* value);

struct Slider : uObject
{
    void ctor_(uObject* host);
    void Progress(double value);
    static Slider* New1(uObject* host);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
