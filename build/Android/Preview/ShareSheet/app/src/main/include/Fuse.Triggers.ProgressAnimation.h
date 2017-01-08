// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Triggers/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct ProgressAnimation;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class ProgressAnimation :1042
// {
::g::Fuse::Triggers::Trigger_type* ProgressAnimation_typeof();
void ProgressAnimation__ctor_4_fn(ProgressAnimation* __this);
void ProgressAnimation__DeinitProgress_fn(ProgressAnimation* __this);
void ProgressAnimation__FindIProgress_fn(ProgressAnimation* __this, uObject** __retval);
void ProgressAnimation__InitProgress_fn(ProgressAnimation* __this);
void ProgressAnimation__New2_fn(ProgressAnimation** __retval);
void ProgressAnimation__OnChanged_fn(ProgressAnimation* __this, uObject* s, uObject* a);
void ProgressAnimation__OnRooted_fn(ProgressAnimation* __this);
void ProgressAnimation__OnUnrooted_fn(ProgressAnimation* __this);
void ProgressAnimation__get_Source_fn(ProgressAnimation* __this, uObject** __retval);
void ProgressAnimation__set_Source_fn(ProgressAnimation* __this, uObject* value);

struct ProgressAnimation : ::g::Fuse::Triggers::Trigger
{
    double _prevValue;
    uStrong<uObject*> _progress;
    uStrong<uObject*> _source;

    void ctor_4();
    void DeinitProgress();
    uObject* FindIProgress();
    void InitProgress();
    void OnChanged(uObject* s, uObject* a);
    uObject* Source();
    void Source(uObject* value);
    static ProgressAnimation* New2();
};
// }

}}} // ::g::Fuse::Triggers
