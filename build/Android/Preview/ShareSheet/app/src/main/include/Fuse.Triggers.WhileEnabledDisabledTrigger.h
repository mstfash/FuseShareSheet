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
namespace g{namespace Fuse{namespace Triggers{struct WhileEnabledDisabledTrigger;}}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public abstract class WhileEnabledDisabledTrigger :618
// {
struct WhileEnabledDisabledTrigger_type : ::g::Fuse::Triggers::Trigger_type
{
    void(*fp_get_IsActive)(::g::Fuse::Triggers::WhileEnabledDisabledTrigger*, bool*);
};

WhileEnabledDisabledTrigger_type* WhileEnabledDisabledTrigger_typeof();
void WhileEnabledDisabledTrigger__ctor_5_fn(WhileEnabledDisabledTrigger* __this);
void WhileEnabledDisabledTrigger__OnIsContextEnabledChanged_fn(WhileEnabledDisabledTrigger* __this, uObject* sender, ::g::Uno::EventArgs* args);
void WhileEnabledDisabledTrigger__OnRooted_fn(WhileEnabledDisabledTrigger* __this);
void WhileEnabledDisabledTrigger__OnUnrooted_fn(WhileEnabledDisabledTrigger* __this);

struct WhileEnabledDisabledTrigger : ::g::Fuse::Triggers::WhileTrigger
{
    void ctor_5();
    bool IsActive() { bool __retval; return (((WhileEnabledDisabledTrigger_type*)__type)->fp_get_IsActive)(this, &__retval), __retval; }
    void OnIsContextEnabledChanged(uObject* sender, ::g::Uno::EventArgs* args);
};
// }

}}} // ::g::Fuse::Triggers
