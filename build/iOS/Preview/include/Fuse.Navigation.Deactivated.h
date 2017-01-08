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
namespace g{namespace Fuse{namespace Navigation{struct Deactivated;}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class Deactivated :126
// {
::g::Fuse::Navigation::NavigationTrigger_type* Deactivated_typeof();
void Deactivated__ctor_6_fn(Deactivated* __this);
void Deactivated__AddHandler_fn(::g::Fuse::Visual* visual, uDelegate* handler);
void Deactivated__NavReady_fn(Deactivated* __this);
void Deactivated__NavUnready_fn(Deactivated* __this);
void Deactivated__New2_fn(Deactivated** __retval);
void Deactivated__OnActivePageChanged_fn(Deactivated* __this, uObject* s, ::g::Fuse::Visual* active);
void Deactivated__RemoveHandler_fn(::g::Fuse::Visual* visual, uDelegate* handler);

struct Deactivated : ::g::Fuse::Navigation::NavigationTrigger
{
    bool _isActive;

    void ctor_6();
    void OnActivePageChanged(uObject* s, ::g::Fuse::Visual* active);
    static void AddHandler(::g::Fuse::Visual* visual, uDelegate* handler);
    static Deactivated* New2();
    static void RemoveHandler(::g::Fuse::Visual* visual, uDelegate* handler);
};
// }

}}} // ::g::Fuse::Navigation
