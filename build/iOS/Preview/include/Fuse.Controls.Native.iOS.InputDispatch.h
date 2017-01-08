// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct InputDispatch;}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct UIEvent;}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct UITouch;}}}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventData;}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal static extern class InputDispatch :900
// {
uClassType* InputDispatch_typeof();
void InputDispatch__ActivateTouch_fn(::g::Fuse::Controls::Native::iOS::UITouch* touch);
void InputDispatch__AddListener_fn(::g::Fuse::Visual* visual, uObject* handle);
void InputDispatch__AddListener1_fn(uObject* eventHandler, uObject* uicontrol);
void InputDispatch__CreateEventHandler_fn(uDelegate* callback, uObject** __retval);
void InputDispatch__DeactivateAllTouches_fn();
void InputDispatch__FindRoot_fn(::g::Fuse::Visual* visual, ::g::Fuse::Visual** __retval);
void InputDispatch__GetPointerIndex_fn(::g::Fuse::Controls::Native::iOS::UITouch* touch, int* __retval);
void InputDispatch__HandleEvent_fn(uObject* viewHandle, ::g::Fuse::Visual* origin, ::g::Fuse::Controls::Native::iOS::UIEvent* uiEvent);
void InputDispatch__HandleEvent1_fn(uObject* viewHandle, ::g::Fuse::Visual* origin, uObject* uiEvent);
void InputDispatch__IsUIControl_fn(uObject* handle, bool* __retval);
void InputDispatch__IsUIEvent_fn(uObject* handle, bool* __retval);
void InputDispatch__LostCallback_fn();
void InputDispatch__MakePointerEventData_fn(::g::Fuse::Controls::Native::iOS::UITouch* touch, uObject* rootView, int* pointIndex, ::g::Fuse::Input::PointerEventData** __retval);
void InputDispatch__OnTouchEvent_fn(uObject* sender, uObject* uiEvent);
void InputDispatch__RaiseCancelled_fn(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data);
void InputDispatch__RaiseMoved_fn(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data);
void InputDispatch__RaisePressed_fn(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data);
void InputDispatch__RaiseReleased_fn(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data);
void InputDispatch__RemoveListener_fn(::g::Fuse::Visual* visual, uObject* handle);
void InputDispatch__RemoveListener1_fn(uObject* eventHandler, uObject* uicontrol);
void InputDispatch__get_RootView_fn(uObject** __retval);
void InputDispatch__set_RootView_fn(uObject* value);

struct InputDispatch : uObject
{
    static uSStrong< ::g::Uno::Collections::List*> _activeTouches_;
    static uSStrong< ::g::Uno::Collections::List*>& _activeTouches() { return InputDispatch_typeof()->Init(), _activeTouches_; }
    static uSStrong<uObject*> _captureIdentity_;
    static uSStrong<uObject*>& _captureIdentity() { return InputDispatch_typeof()->Init(), _captureIdentity_; }
    static uSStrong<uObject*> _eventHandler_;
    static uSStrong<uObject*>& _eventHandler() { return InputDispatch_typeof()->Init(), _eventHandler_; }
    static uSStrong< ::g::Uno::Collections::Dictionary*> _listeners_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _listeners() { return InputDispatch_typeof()->Init(), _listeners_; }
    static uSStrong<uObject*> _RootView_;
    static uSStrong<uObject*>& _RootView() { return InputDispatch_typeof()->Init(), _RootView_; }

    static void ActivateTouch(::g::Fuse::Controls::Native::iOS::UITouch* touch);
    static void AddListener(::g::Fuse::Visual* visual, uObject* handle);
    static void AddListener1(uObject* eventHandler, uObject* uicontrol);
    static uObject* CreateEventHandler(uDelegate* callback);
    static void DeactivateAllTouches();
    static ::g::Fuse::Visual* FindRoot(::g::Fuse::Visual* visual);
    static int GetPointerIndex(::g::Fuse::Controls::Native::iOS::UITouch* touch);
    static void HandleEvent(uObject* viewHandle, ::g::Fuse::Visual* origin, ::g::Fuse::Controls::Native::iOS::UIEvent* uiEvent);
    static void HandleEvent1(uObject* viewHandle, ::g::Fuse::Visual* origin, uObject* uiEvent);
    static bool IsUIControl(uObject* handle);
    static bool IsUIEvent(uObject* handle);
    static void LostCallback();
    static ::g::Fuse::Input::PointerEventData* MakePointerEventData(::g::Fuse::Controls::Native::iOS::UITouch* touch, uObject* rootView, int pointIndex);
    static void OnTouchEvent(uObject* sender, uObject* uiEvent);
    static void RaiseCancelled(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data);
    static void RaiseMoved(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data);
    static void RaisePressed(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data);
    static void RaiseReleased(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data);
    static void RemoveListener(::g::Fuse::Visual* visual, uObject* handle);
    static void RemoveListener1(uObject* eventHandler, uObject* uicontrol);
    static uObject* RootView();
    static void RootView(uObject* value);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
