// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct FocusHelpers;}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct KeyboardView;}}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal static extern class FocusHelpers :391
// {
uClassType* FocusHelpers_typeof();
void FocusHelpers__BecomeFirstResponder_fn(uObject* uiView);
void FocusHelpers__GetCurrentFirstResponder_fn(uObject** __retval);
void FocusHelpers__IsFirstResponder_fn(uObject* handle, bool* __retval);
void FocusHelpers__get_KeyboardView_fn(::g::Fuse::Controls::Native::iOS::KeyboardView** __retval);
void FocusHelpers__ResignFirstResponder_fn(uObject* uiView);
void FocusHelpers__ScheduleBecomeFirstResponder_fn(uObject* target);
void FocusHelpers__ScheduleResignFirstResponder_fn(uObject* target);

struct FocusHelpers : uObject
{
    static uSStrong< ::g::Fuse::Controls::Native::iOS::KeyboardView*> _keyboardView_;
    static uSStrong< ::g::Fuse::Controls::Native::iOS::KeyboardView*>& _keyboardView() { return FocusHelpers_typeof()->Init(), _keyboardView_; }

    static void BecomeFirstResponder(uObject* uiView);
    static uObject* GetCurrentFirstResponder();
    static bool IsFirstResponder(uObject* handle);
    static void ResignFirstResponder(uObject* uiView);
    static void ScheduleBecomeFirstResponder(uObject* target);
    static void ScheduleResignFirstResponder(uObject* target);
    static ::g::Fuse::Controls::Native::iOS::KeyboardView* KeyboardView();
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
