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
namespace g{namespace Fuse{namespace Triggers{struct WhileNotFocused;}}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileNotFocused :3366
// {
::g::Fuse::Triggers::Trigger_type* WhileNotFocused_typeof();
void WhileNotFocused__ctor_5_fn(WhileNotFocused* __this);
void WhileNotFocused__New2_fn(WhileNotFocused** __retval);
void WhileNotFocused__OnGotFocus_fn(WhileNotFocused* __this, uObject* sender, ::g::Uno::EventArgs* args);
void WhileNotFocused__OnLostFocus_fn(WhileNotFocused* __this, uObject* sender, ::g::Uno::EventArgs* args);
void WhileNotFocused__OnRooted_fn(WhileNotFocused* __this);
void WhileNotFocused__OnUnrooted_fn(WhileNotFocused* __this);

struct WhileNotFocused : ::g::Fuse::Triggers::WhileTrigger
{
    void ctor_5();
    void OnGotFocus(uObject* sender, ::g::Uno::EventArgs* args);
    void OnLostFocus(uObject* sender, ::g::Uno::EventArgs* args);
    static WhileNotFocused* New2();
};
// }

}}} // ::g::Fuse::Triggers
