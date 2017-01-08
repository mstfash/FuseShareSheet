// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Triggers/0.42.4/actions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct PulseBackward;}}}}
namespace g{namespace Fuse{namespace Triggers{struct Timeline;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class PulseBackward :574
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* PulseBackward_typeof();
void PulseBackward__ctor_2_fn(PulseBackward* __this);
void PulseBackward__New2_fn(PulseBackward** __retval);
void PulseBackward__Perform_fn(PulseBackward* __this, ::g::Fuse::Node* target);
void PulseBackward__get_Target_fn(PulseBackward* __this, ::g::Fuse::Triggers::Timeline** __retval);
void PulseBackward__set_Target_fn(PulseBackward* __this, ::g::Fuse::Triggers::Timeline* value);

struct PulseBackward : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong< ::g::Fuse::Triggers::Timeline*> _Target;

    void ctor_2();
    ::g::Fuse::Triggers::Timeline* Target();
    void Target(::g::Fuse::Triggers::Timeline* value);
    static PulseBackward* New2();
};
// }

}}}} // ::g::Fuse::Triggers::Actions
