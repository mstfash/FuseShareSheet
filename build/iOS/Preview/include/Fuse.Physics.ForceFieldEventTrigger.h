// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Physics/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Physics.ForceFieldTrigger.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Physics{struct Body;}}}
namespace g{namespace Fuse{namespace Physics{struct ForceFieldEventTrigger;}}}

namespace g{
namespace Fuse{
namespace Physics{

// public abstract class ForceFieldEventTrigger :408
// {
::g::Fuse::Physics::ForceFieldTrigger_type* ForceFieldEventTrigger_typeof();
void ForceFieldEventTrigger__ctor_5_fn(ForceFieldEventTrigger* __this);
void ForceFieldEventTrigger__add_Handler_fn(ForceFieldEventTrigger* __this, uDelegate* value);
void ForceFieldEventTrigger__remove_Handler_fn(ForceFieldEventTrigger* __this, uDelegate* value);
void ForceFieldEventTrigger__OnTriggered_fn(ForceFieldEventTrigger* __this, ::g::Fuse::Physics::Body* body);

struct ForceFieldEventTrigger : ::g::Fuse::Physics::ForceFieldTrigger
{
    uStrong<uDelegate*> Handler1;

    void ctor_5();
    void add_Handler(uDelegate* value);
    void remove_Handler(uDelegate* value);
    void OnTriggered(::g::Fuse::Physics::Body* body);
};
// }

}}} // ::g::Fuse::Physics
