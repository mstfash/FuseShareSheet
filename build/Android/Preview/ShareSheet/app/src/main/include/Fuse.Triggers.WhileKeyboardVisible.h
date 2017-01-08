// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Triggers/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileKeyboardVisible;}}}
namespace g{namespace Uno{namespace Platform{struct SystemUIWillResizeEventArgs;}}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileKeyboardVisible :712
// {
::g::Fuse::Triggers::Trigger_type* WhileKeyboardVisible_typeof();
void WhileKeyboardVisible__ctor_4_fn(WhileKeyboardVisible* __this);
void WhileKeyboardVisible__GetHeight_fn(WhileKeyboardVisible* __this, ::g::Uno::Rect* r, float* __retval);
void WhileKeyboardVisible__New2_fn(WhileKeyboardVisible** __retval);
void WhileKeyboardVisible__OnBottomBarResize_fn(WhileKeyboardVisible* __this, uObject* sender, ::g::Uno::Platform::SystemUIWillResizeEventArgs* args);
void WhileKeyboardVisible__OnRooted_fn(WhileKeyboardVisible* __this);
void WhileKeyboardVisible__OnUnrooted_fn(WhileKeyboardVisible* __this);
void WhileKeyboardVisible__get_Threshold_fn(WhileKeyboardVisible* __this, float* __retval);

struct WhileKeyboardVisible : ::g::Fuse::Triggers::Trigger
{
    float _baseHeight;
    static float _deltaY_;
    static float& _deltaY() { return WhileKeyboardVisible_typeof()->Init(), _deltaY_; }
    float _threshold;
    static uSStrong<uObject*> Keyboard_;
    static uSStrong<uObject*>& Keyboard() { return WhileKeyboardVisible_typeof()->Init(), Keyboard_; }

    void ctor_4();
    float GetHeight(::g::Uno::Rect r);
    void OnBottomBarResize(uObject* sender, ::g::Uno::Platform::SystemUIWillResizeEventArgs* args);
    float Threshold();
    static WhileKeyboardVisible* New2();
};
// }

}}} // ::g::Fuse::Triggers
