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
namespace g{namespace Fuse{namespace Triggers{struct WhilePlaying;}}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhilePlaying :3504
// {
::g::Fuse::Triggers::Trigger_type* WhilePlaying_typeof();
void WhilePlaying__ctor_5_fn(WhilePlaying* __this);
void WhilePlaying__IsPlaying_fn(::g::Fuse::Visual* n, bool* __retval);
void WhilePlaying__New2_fn(WhilePlaying** __retval);
void WhilePlaying__OnRooted_fn(WhilePlaying* __this);
void WhilePlaying__SetState_fn(::g::Fuse::Visual* n, bool* playing);

struct WhilePlaying : ::g::Fuse::Triggers::WhileTrigger
{
    static uSStrong< ::g::Fuse::PropertyHandle*> _whilePlayingProp_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _whilePlayingProp() { return WhilePlaying_typeof()->Init(), _whilePlayingProp_; }

    void ctor_5();
    static bool IsPlaying(::g::Fuse::Visual* n);
    static WhilePlaying* New2();
    static void SetState(::g::Fuse::Visual* n, bool playing);
};
// }

}}} // ::g::Fuse::Triggers
