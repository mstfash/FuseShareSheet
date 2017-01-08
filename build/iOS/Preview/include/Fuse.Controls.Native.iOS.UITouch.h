// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct UITouch;}}}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class UITouch :1140
// {
uType* UITouch_typeof();
void UITouch__ctor__fn(UITouch* __this, uObject* handle);
void UITouch__Compare_fn(uObject* handle1, uObject* handle2, bool* __retval);
void UITouch__Equals_fn(UITouch* __this, uObject* obj, bool* __retval);
void UITouch__GetHashCode_fn(UITouch* __this, int* __retval);
void UITouch__GetTimestamp_fn(uObject* handle, double* __retval);
void UITouch__GetTouchPhase_fn(uObject* handle, int* __retval);
void UITouch__LocationInView_fn(UITouch* __this, uObject* view, ::g::Uno::Float2* __retval);
void UITouch__LocationInView1_fn(uObject* handle, uObject* viewHandle, void** x, void** y);
void UITouch__New1_fn(uObject* handle, UITouch** __retval);
void UITouch__get_Phase_fn(UITouch* __this, int* __retval);
void UITouch__get_Timestamp_fn(UITouch* __this, double* __retval);

struct UITouch : uObject
{
    uStrong<uObject*> _handle;

    void ctor_(uObject* handle);
    ::g::Uno::Float2 LocationInView(uObject* view);
    int Phase();
    double Timestamp();
    static bool Compare(uObject* handle1, uObject* handle2);
    static double GetTimestamp(uObject* handle);
    static int GetTouchPhase(uObject* handle);
    static void LocationInView1(uObject* handle, uObject* viewHandle, void* x, void* y);
    static UITouch* New1(uObject* handle);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
