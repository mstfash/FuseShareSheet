// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct UIControlEvent;}}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal sealed extern class UIControlEvent :3409
// {
struct UIControlEvent_type : uType
{
    ::g::Uno::IDisposable interface0;
};

UIControlEvent_type* UIControlEvent_typeof();
void UIControlEvent__ctor__fn(UIControlEvent* __this, uObject* uiControl, uDelegate* handler, int* type);
void UIControlEvent__AddAllEditingEventsCallback_fn(uObject* uiControl, uDelegate* handler, uObject** __retval);
void UIControlEvent__AddValueChangedCallback_fn(uObject* uiControl, uDelegate* handler, uObject** __retval);
void UIControlEvent__Create_fn(uObject* uiControl, uDelegate* handler, int* type, uObject** __retval);
void UIControlEvent__New1_fn(uObject* uiControl, uDelegate* handler, int* type, UIControlEvent** __retval);
void UIControlEvent__RemoveHandler_fn(uObject* uiControl, uObject* eventHandler, int* type);
void UIControlEvent__UnoIDisposableDispose_fn(UIControlEvent* __this);

struct UIControlEvent : uObject
{
    uStrong<uObject*> _handle;
    int _type;
    uStrong<uObject*> _uiControl;

    void ctor_(uObject* uiControl, uDelegate* handler, int type);
    static uObject* AddAllEditingEventsCallback(uObject* uiControl, uDelegate* handler);
    static uObject* AddValueChangedCallback(uObject* uiControl, uDelegate* handler);
    static uObject* Create(uObject* uiControl, uDelegate* handler, int type);
    static UIControlEvent* New1(uObject* uiControl, uDelegate* handler, int type);
    static void RemoveHandler(uObject* uiControl, uObject* eventHandler, int type);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
