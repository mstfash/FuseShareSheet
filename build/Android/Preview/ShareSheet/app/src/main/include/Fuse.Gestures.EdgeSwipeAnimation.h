// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Gestures{namespace Internal{struct EdgeSwiper;}}}}
namespace g{namespace Fuse{namespace Gestures{struct EdgeSwipeAnimation;}}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class EdgeSwipeAnimation :1644
// {
::g::Fuse::Triggers::Trigger_type* EdgeSwipeAnimation_typeof();
void EdgeSwipeAnimation__ctor_4_fn(EdgeSwipeAnimation* __this);
void EdgeSwipeAnimation__Disable_fn(EdgeSwipeAnimation* __this);
void EdgeSwipeAnimation__get_Edge_fn(EdgeSwipeAnimation* __this, int* __retval);
void EdgeSwipeAnimation__set_Edge_fn(EdgeSwipeAnimation* __this, int* value);
void EdgeSwipeAnimation__get_EdgeThreshold_fn(EdgeSwipeAnimation* __this, float* __retval);
void EdgeSwipeAnimation__set_EdgeThreshold_fn(EdgeSwipeAnimation* __this, float* value);
void EdgeSwipeAnimation__Enable_fn(EdgeSwipeAnimation* __this);
void EdgeSwipeAnimation__get_IsEnabled_fn(EdgeSwipeAnimation* __this, bool* __retval);
void EdgeSwipeAnimation__set_IsEnabled_fn(EdgeSwipeAnimation* __this, bool* value);
void EdgeSwipeAnimation__New2_fn(EdgeSwipeAnimation** __retval);
void EdgeSwipeAnimation__OnProgressChanged1_fn(EdgeSwipeAnimation* __this, uObject* s, double* progress);
void EdgeSwipeAnimation__OnRooted_fn(EdgeSwipeAnimation* __this);
void EdgeSwipeAnimation__OnUnrooted_fn(EdgeSwipeAnimation* __this);
void EdgeSwipeAnimation__get_Target_fn(EdgeSwipeAnimation* __this, ::g::Fuse::Elements::Element** __retval);
void EdgeSwipeAnimation__set_Target_fn(EdgeSwipeAnimation* __this, ::g::Fuse::Elements::Element* value);

struct EdgeSwipeAnimation : ::g::Fuse::Triggers::Trigger
{
    uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> _swiper;

    void ctor_4();
    void Disable();
    int Edge();
    void Edge(int value);
    float EdgeThreshold();
    void EdgeThreshold(float value);
    void Enable();
    bool IsEnabled();
    void IsEnabled(bool value);
    void OnProgressChanged1(uObject* s, double progress);
    ::g::Fuse::Elements::Element* Target();
    void Target(::g::Fuse::Elements::Element* value);
    static EdgeSwipeAnimation* New2();
};
// }

}}} // ::g::Fuse::Gestures
