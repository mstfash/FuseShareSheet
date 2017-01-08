// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Triggers/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.IBeginRemoveVisualListener.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct RemovingAnimation;}}}
namespace g{namespace Fuse{struct PendingRemoveVisual;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public class RemovingAnimation :1298
// {
struct RemovingAnimation_type : ::g::Fuse::Triggers::Trigger_type
{
    ::g::Fuse::IBeginRemoveVisualListener interface5;
};

RemovingAnimation_type* RemovingAnimation_typeof();
void RemovingAnimation__ctor_4_fn(RemovingAnimation* __this);
void RemovingAnimation__FuseIBeginRemoveVisualListenerOnBeginRemoveVisual_fn(RemovingAnimation* __this, ::g::Fuse::PendingRemoveVisual* pr);
void RemovingAnimation__New2_fn(RemovingAnimation** __retval);
void RemovingAnimation__OnDone_fn(RemovingAnimation* __this);
void RemovingAnimation__OnUnrooted_fn(RemovingAnimation* __this);

struct RemovingAnimation : ::g::Fuse::Triggers::Trigger
{
    uStrong< ::g::Fuse::PendingRemoveVisual*> _args;

    void ctor_4();
    void OnDone();
    static RemovingAnimation* New2();
};
// }

}}} // ::g::Fuse::Triggers
