// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Triggers/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.WhileTrigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileFocused;}}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileFocused :3333
// {
::g::Fuse::Triggers::Trigger_type* WhileFocused_typeof();
void WhileFocused__ctor_5_fn(WhileFocused* __this);
void WhileFocused__New2_fn(WhileFocused** __retval);
void WhileFocused__OnGotFocus_fn(WhileFocused* __this, uObject* sender, ::g::Uno::EventArgs* args);
void WhileFocused__OnLostFocus_fn(WhileFocused* __this, uObject* sender, ::g::Uno::EventArgs* args);
void WhileFocused__OnRooted_fn(WhileFocused* __this);
void WhileFocused__OnUnrooted_fn(WhileFocused* __this);

struct WhileFocused : ::g::Fuse::Triggers::WhileTrigger
{
    void ctor_5();
    void OnGotFocus(uObject* sender, ::g::Uno::EventArgs* args);
    void OnLostFocus(uObject* sender, ::g::Uno::EventArgs* args);
    static WhileFocused* New2();
};
// }

}}} // ::g::Fuse::Triggers
