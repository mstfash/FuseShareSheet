// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.iOS/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace iOS{namespace Bindings{struct iOSDeviceInterop;}}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace iOS{
namespace Bindings{

// internal static extern class iOSDeviceInterop :353
// {
uClassType* iOSDeviceInterop_typeof();
void iOSDeviceInterop__IsOrientationLandscape_fn(bool* __retval);
void iOSDeviceInterop__IsRootView_fn(uObject* uiView, bool* __retval);
void iOSDeviceInterop__Pre_iOS8_HandleDeviceOrientation_fn(::g::Uno::Float2* size, uObject* uiView, ::g::Uno::Float2* __retval);
void iOSDeviceInterop__Pre_iOS8_HandleDeviceOrientation1_fn(::g::Uno::Rect* rect, uObject* uiView, ::g::Uno::Rect* __retval);
void iOSDeviceInterop__get_PreV8_fn(bool* __retval);

struct iOSDeviceInterop : uObject
{
    static bool IsOrientationLandscape();
    static bool IsRootView(uObject* uiView);
    static ::g::Uno::Float2 Pre_iOS8_HandleDeviceOrientation(::g::Uno::Float2 size, uObject* uiView);
    static ::g::Uno::Rect Pre_iOS8_HandleDeviceOrientation1(::g::Uno::Rect rect, uObject* uiView);
    static bool PreV8();
};
// }

}}}} // ::g::Fuse::iOS::Bindings
