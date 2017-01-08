// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Triggers/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.WhileEnabledDisabledTrigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileEnabled;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileEnabled :674
// {
::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type* WhileEnabled_typeof();
void WhileEnabled__ctor_6_fn(WhileEnabled* __this);
void WhileEnabled__get_IsActive_fn(WhileEnabled* __this, bool* __retval);
void WhileEnabled__New2_fn(WhileEnabled** __retval);

struct WhileEnabled : ::g::Fuse::Triggers::WhileEnabledDisabledTrigger
{
    void ctor_6();
    static WhileEnabled* New2();
};
// }

}}} // ::g::Fuse::Triggers
