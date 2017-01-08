// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/android/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct InputDispatch;}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct JavaMap;}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct MotionEvent;}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct View;}}}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventData;}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct HashSet;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// internal static extern class InputDispatch :718
// {
uClassType* InputDispatch_typeof();
void InputDispatch__AddListener_fn(::g::Fuse::Controls::Native::Android::View* view, ::g::Fuse::Visual* owner);
void InputDispatch__ClearOnTouchListener_fn(::g::Java::Object* viewHandle);
void InputDispatch__CreateTouchListener_fn(::g::Java::Object** __retval);
void InputDispatch__DeactivatePointer_fn(int* pointerId);
void InputDispatch__FindRoot_fn(::g::Fuse::Visual* visual, ::g::Fuse::Visual** __retval);
void InputDispatch__IsPointerActive_fn(int* pointerId, bool* __retval);
void InputDispatch__OnTouch_fn(::g::Java::Object* view, ::g::Java::Object* motionEvent, bool* __retval);
void InputDispatch__RaiseEvent_fn(::g::Fuse::Visual* visual, ::g::Java::Object* viewHandle, ::g::Fuse::Controls::Native::Android::MotionEvent* motionEvent);
void InputDispatch__RaiseMoved_fn(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data);
void InputDispatch__RaisePressed_fn(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data);
void InputDispatch__RaiseReleased_fn(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data);
void InputDispatch__RemoveListener_fn(::g::Fuse::Controls::Native::Android::View* view);
void InputDispatch__SetOnTouchListener_fn(::g::Java::Object* viewHandle, ::g::Java::Object* listenerHandle);
void InputDispatch__get_TouchListener_fn(::g::Java::Object** __retval);
void InputDispatch__get_ViewVisualMap_fn(::g::Fuse::Controls::Native::Android::JavaMap** __retval);

struct InputDispatch : uObject
{
    static uSStrong< ::g::Uno::Collections::HashSet*> _activePointers_;
    static uSStrong< ::g::Uno::Collections::HashSet*>& _activePointers() { return InputDispatch_typeof()->Init(), _activePointers_; }
    static uSStrong< ::g::Uno::Collections::Dictionary*> _listeners_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _listeners() { return InputDispatch_typeof()->Init(), _listeners_; }
    static uSStrong< ::g::Java::Object*> _touchListenerHandle_;
    static uSStrong< ::g::Java::Object*>& _touchListenerHandle() { return InputDispatch_typeof()->Init(), _touchListenerHandle_; }
    static uSStrong< ::g::Fuse::Controls::Native::Android::JavaMap*> _viewVisualMap_;
    static uSStrong< ::g::Fuse::Controls::Native::Android::JavaMap*>& _viewVisualMap() { return InputDispatch_typeof()->Init(), _viewVisualMap_; }

    static void AddListener(::g::Fuse::Controls::Native::Android::View* view, ::g::Fuse::Visual* owner);
    static void ClearOnTouchListener(::g::Java::Object* viewHandle);
    static ::g::Java::Object* CreateTouchListener();
    static void DeactivatePointer(int pointerId);
    static ::g::Fuse::Visual* FindRoot(::g::Fuse::Visual* visual);
    static bool IsPointerActive(int pointerId);
    static bool OnTouch(::g::Java::Object* view, ::g::Java::Object* motionEvent);
    static void RaiseEvent(::g::Fuse::Visual* visual, ::g::Java::Object* viewHandle, ::g::Fuse::Controls::Native::Android::MotionEvent* motionEvent);
    static void RaiseMoved(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data);
    static void RaisePressed(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data);
    static void RaiseReleased(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data);
    static void RemoveListener(::g::Fuse::Controls::Native::Android::View* view);
    static void SetOnTouchListener(::g::Java::Object* viewHandle, ::g::Java::Object* listenerHandle);
    static ::g::Java::Object* TouchListener();
    static ::g::Fuse::Controls::Native::Android::JavaMap* ViewVisualMap();
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
