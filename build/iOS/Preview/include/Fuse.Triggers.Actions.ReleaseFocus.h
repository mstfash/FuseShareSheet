// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Triggers/0.42.4/actions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct ReleaseFocus;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class ReleaseFocus :249
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* ReleaseFocus_typeof();
void ReleaseFocus__ctor_2_fn(ReleaseFocus* __this);
void ReleaseFocus__New2_fn(ReleaseFocus** __retval);
void ReleaseFocus__Perform_fn(ReleaseFocus* __this, ::g::Fuse::Node* target);

struct ReleaseFocus : ::g::Fuse::Triggers::Actions::TriggerAction
{
    void ctor_2();
    static ReleaseFocus* New2();
};
// }

}}}} // ::g::Fuse::Triggers::Actions
