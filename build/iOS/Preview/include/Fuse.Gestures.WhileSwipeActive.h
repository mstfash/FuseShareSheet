// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.WhileTrigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Gestures{struct SwipeGesture;}}}
namespace g{namespace Fuse{namespace Gestures{struct WhileSwipeActive;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class WhileSwipeActive :1242
// {
struct WhileSwipeActive_type : ::g::Fuse::Triggers::Trigger_type
{
    ::g::Uno::UX::IPropertyListener interface5;
};

WhileSwipeActive_type* WhileSwipeActive_typeof();
void WhileSwipeActive__ctor_5_fn(WhileSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture* source);
void WhileSwipeActive__New2_fn(::g::Fuse::Gestures::SwipeGesture* source, WhileSwipeActive** __retval);
void WhileSwipeActive__OnRooted_fn(WhileSwipeActive* __this);
void WhileSwipeActive__OnUnrooted_fn(WhileSwipeActive* __this);
void WhileSwipeActive__get_Source_fn(WhileSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture** __retval);
void WhileSwipeActive__set_Source_fn(WhileSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture* value);
void WhileSwipeActive__UnoUXIPropertyListenerOnPropertyChanged_fn(WhileSwipeActive* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop);

struct WhileSwipeActive : ::g::Fuse::Triggers::WhileTrigger
{
    uStrong< ::g::Fuse::Gestures::SwipeGesture*> _Source;

    void ctor_5(::g::Fuse::Gestures::SwipeGesture* source);
    ::g::Fuse::Gestures::SwipeGesture* Source();
    void Source(::g::Fuse::Gestures::SwipeGesture* value);
    static WhileSwipeActive* New2(::g::Fuse::Gestures::SwipeGesture* source);
};
// }

}}} // ::g::Fuse::Gestures
