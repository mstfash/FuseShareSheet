// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Navigation.NavigationTrigger.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Navigation{struct Activated;}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class Activated :64
// {
::g::Fuse::Navigation::NavigationTrigger_type* Activated_typeof();
void Activated__ctor_6_fn(Activated* __this);
void Activated__AddHandler_fn(::g::Fuse::Visual* visual, uDelegate* handler);
void Activated__NavReady_fn(Activated* __this);
void Activated__NavUnready_fn(Activated* __this);
void Activated__New2_fn(Activated** __retval);
void Activated__OnActivePageChanged_fn(Activated* __this, uObject* s, ::g::Fuse::Visual* active);
void Activated__RemoveHandler_fn(::g::Fuse::Visual* visual, uDelegate* handler);

struct Activated : ::g::Fuse::Navigation::NavigationTrigger
{
    void ctor_6();
    void OnActivePageChanged(uObject* s, ::g::Fuse::Visual* active);
    static void AddHandler(::g::Fuse::Visual* visual, uDelegate* handler);
    static Activated* New2();
    static void RemoveHandler(::g::Fuse::Visual* visual, uDelegate* handler);
};
// }

}}} // ::g::Fuse::Navigation
