// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.PulseTrigger-1.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigationPageProxy;}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationTrigger;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public abstract class NavigationTrigger :12
// {
struct NavigationTrigger_type : ::g::Fuse::Triggers::Trigger_type
{
    void(*fp_NavReady)(::g::Fuse::Navigation::NavigationTrigger*);
    void(*fp_NavUnready)(::g::Fuse::Navigation::NavigationTrigger*);
};

NavigationTrigger_type* NavigationTrigger_typeof();
void NavigationTrigger__ctor_5_fn(NavigationTrigger* __this);
void NavigationTrigger__get_NavContext_fn(NavigationTrigger* __this, uObject** __retval);
void NavigationTrigger__OnRooted_fn(NavigationTrigger* __this);
void NavigationTrigger__OnUnrooted_fn(NavigationTrigger* __this);
void NavigationTrigger__get_PageContext_fn(NavigationTrigger* __this, ::g::Fuse::Visual** __retval);

struct NavigationTrigger : ::g::Fuse::Triggers::PulseTrigger
{
    uStrong< ::g::Fuse::Navigation::NavigationPageProxy*> _proxy;

    void ctor_5();
    uObject* NavContext();
    void NavReady() { (((NavigationTrigger_type*)__type)->fp_NavReady)(this); }
    void NavUnready() { (((NavigationTrigger_type*)__type)->fp_NavUnready)(this); }
    ::g::Fuse::Visual* PageContext();
};
// }

}}} // ::g::Fuse::Navigation
