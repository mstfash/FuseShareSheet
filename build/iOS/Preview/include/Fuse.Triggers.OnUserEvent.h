// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.UserEvents/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.Selector.h>
namespace g{namespace Fuse{namespace Triggers{struct OnUserEvent;}}}
namespace g{namespace Fuse{struct UserEventArgs;}}
namespace g{namespace Fuse{struct UserEventDispatch;}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class OnUserEvent :71
// {
::g::Fuse::Triggers::Trigger_type* OnUserEvent_typeof();
void OnUserEvent__ctor_4_fn(OnUserEvent* __this);
void OnUserEvent__get_EventName_fn(OnUserEvent* __this, ::g::Uno::UX::Selector* __retval);
void OnUserEvent__set_EventName_fn(OnUserEvent* __this, ::g::Uno::UX::Selector* value);
void OnUserEvent__get_Filter_fn(OnUserEvent* __this, int* __retval);
void OnUserEvent__set_Filter_fn(OnUserEvent* __this, int* value);
void OnUserEvent__add_Handler_fn(OnUserEvent* __this, uDelegate* value);
void OnUserEvent__remove_Handler_fn(OnUserEvent* __this, uDelegate* value);
void OnUserEvent__New2_fn(OnUserEvent** __retval);
void OnUserEvent__OnRaised_fn(OnUserEvent* __this, uObject* s, ::g::Fuse::UserEventArgs* args);
void OnUserEvent__OnRooted_fn(OnUserEvent* __this);
void OnUserEvent__OnUnrooted_fn(OnUserEvent* __this);

struct OnUserEvent : ::g::Fuse::Triggers::Trigger
{
    int _filter;
    uStrong< ::g::Fuse::UserEventDispatch*> _rootedEvent;
    uStrong< ::g::Fuse::Visual*> _scope;
    ::g::Uno::UX::Selector _EventName;
    uStrong<uDelegate*> Handler1;

    void ctor_4();
    ::g::Uno::UX::Selector EventName();
    void EventName(::g::Uno::UX::Selector value);
    int Filter();
    void Filter(int value);
    void add_Handler(uDelegate* value);
    void remove_Handler(uDelegate* value);
    void OnRaised(uObject* s, ::g::Fuse::UserEventArgs* args);
    static OnUserEvent* New2();
};
// }

}}} // ::g::Fuse::Triggers
