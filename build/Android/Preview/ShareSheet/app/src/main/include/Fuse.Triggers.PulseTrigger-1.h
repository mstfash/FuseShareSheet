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
namespace g{namespace Fuse{namespace Triggers{struct PulseTrigger;}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public abstract class PulseTrigger<ArgsT> :1130
// {
::g::Fuse::Triggers::Trigger_type* PulseTrigger_typeof();
void PulseTrigger__ctor_4_fn(PulseTrigger* __this);
void PulseTrigger__AddHandlerImpl_fn(uType* __type, ::g::Fuse::Visual* visual, uDelegate* handler);
void PulseTrigger__add_Handler_fn(PulseTrigger* __this, uDelegate* value);
void PulseTrigger__remove_Handler_fn(PulseTrigger* __this, uDelegate* value);
void PulseTrigger__Pulse1_fn(PulseTrigger* __this, ::g::Uno::EventArgs* args);
void PulseTrigger__RemoveHandlerImpl_fn(uType* __type, ::g::Fuse::Visual* visual, uDelegate* handler);

struct PulseTrigger : ::g::Fuse::Triggers::Trigger
{
    uStrong<uDelegate*> Handler1;

    void ctor_4();
    void add_Handler(uDelegate* value);
    void remove_Handler(uDelegate* value);
    void Pulse1(::g::Uno::EventArgs* args);
    static void AddHandlerImpl(uType* __type, ::g::Fuse::Visual* visual, uDelegate* handler);
    static void RemoveHandlerImpl(uType* __type, ::g::Fuse::Visual* visual, uDelegate* handler);
};
// }

}}} // ::g::Fuse::Triggers
