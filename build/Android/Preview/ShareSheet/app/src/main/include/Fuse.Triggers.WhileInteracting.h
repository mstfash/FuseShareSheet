// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls/0.42.4/triggers/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.WhileTrigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileInteracting;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileInteracting :129
// {
::g::Fuse::Triggers::Trigger_type* WhileInteracting_typeof();
void WhileInteracting__ctor_5_fn(WhileInteracting* __this);
void WhileInteracting__New2_fn(WhileInteracting** __retval);
void WhileInteracting__OnInteractingChanged_fn(WhileInteracting* __this, uObject* s, uObject* a);
void WhileInteracting__OnRooted_fn(WhileInteracting* __this);
void WhileInteracting__OnUnrooted_fn(WhileInteracting* __this);
void WhileInteracting__get_Source_fn(WhileInteracting* __this, ::g::Fuse::Visual** __retval);
void WhileInteracting__set_Source_fn(WhileInteracting* __this, ::g::Fuse::Visual* value);

struct WhileInteracting : ::g::Fuse::Triggers::WhileTrigger
{
    uStrong< ::g::Fuse::Visual*> _source;
    uStrong< ::g::Fuse::Visual*> _visual;

    void ctor_5();
    void OnInteractingChanged(uObject* s, uObject* a);
    ::g::Fuse::Visual* Source();
    void Source(::g::Fuse::Visual* value);
    static WhileInteracting* New2();
};
// }

}}} // ::g::Fuse::Triggers
