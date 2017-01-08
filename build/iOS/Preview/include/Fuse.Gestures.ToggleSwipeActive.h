// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Gestures{struct SwipeGesture;}}}
namespace g{namespace Fuse{namespace Gestures{struct ToggleSwipeActive;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class ToggleSwipeActive :1216
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* ToggleSwipeActive_typeof();
void ToggleSwipeActive__ctor_2_fn(ToggleSwipeActive* __this);
void ToggleSwipeActive__New2_fn(ToggleSwipeActive** __retval);
void ToggleSwipeActive__Perform_fn(ToggleSwipeActive* __this, ::g::Fuse::Node* target);
void ToggleSwipeActive__get_Target_fn(ToggleSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture** __retval);
void ToggleSwipeActive__set_Target_fn(ToggleSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture* value);

struct ToggleSwipeActive : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong< ::g::Fuse::Gestures::SwipeGesture*> _Target;

    void ctor_2();
    ::g::Fuse::Gestures::SwipeGesture* Target();
    void Target(::g::Fuse::Gestures::SwipeGesture* value);
    static ToggleSwipeActive* New2();
};
// }

}}} // ::g::Fuse::Gestures
