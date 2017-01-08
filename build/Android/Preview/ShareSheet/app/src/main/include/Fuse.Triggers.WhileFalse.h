// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Triggers/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IToggleable.h>
#include <Fuse.Triggers.IPulseTrigger.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileFalse;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileFalse :3053
// {
::g::Fuse::Triggers::WhileBool_type* WhileFalse_typeof();
void WhileFalse__ctor_7_fn(WhileFalse* __this);
void WhileFalse__get_IsOn_fn(WhileFalse* __this, bool* __retval);
void WhileFalse__New2_fn(WhileFalse** __retval);

struct WhileFalse : ::g::Fuse::Triggers::WhileBool
{
    void ctor_7();
    static WhileFalse* New2();
};
// }

}}} // ::g::Fuse::Triggers
