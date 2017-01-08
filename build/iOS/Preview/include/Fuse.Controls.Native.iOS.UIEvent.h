// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct UIEvent;}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct UITouch;}}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class UIEvent :1249
// {
uType* UIEvent_typeof();
void UIEvent__ctor__fn(UIEvent* __this, uObject* handle);
void UIEvent__GetTouchesForView_fn(UIEvent* __this, uObject* viewHandle, uArray** __retval);
void UIEvent__GetTouchesForViewCount_fn(uObject* handle, uObject* viewHandle, int64_t* __retval);
void UIEvent__GetTouchForView_fn(uObject* handle, uObject* viewHandle, int* index, uObject** __retval);
void UIEvent__New1_fn(uObject* handle, UIEvent** __retval);

struct UIEvent : uObject
{
    uStrong<uObject*> _handle;

    void ctor_(uObject* handle);
    uArray* GetTouchesForView(uObject* viewHandle);
    static int64_t GetTouchesForViewCount(uObject* handle, uObject* viewHandle);
    static uObject* GetTouchForView(uObject* handle, uObject* viewHandle, int index);
    static UIEvent* New1(uObject* handle);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
