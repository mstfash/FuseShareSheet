// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls/0.42.4/triggers/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct BringToFront;}}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class BringToFront :39
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* BringToFront_typeof();
void BringToFront__ctor_2_fn(BringToFront* __this);
void BringToFront__New2_fn(BringToFront** __retval);
void BringToFront__Perform_fn(BringToFront* __this, ::g::Fuse::Node* target);
void BringToFront__get_Target_fn(BringToFront* __this, ::g::Fuse::Visual** __retval);
void BringToFront__set_Target_fn(BringToFront* __this, ::g::Fuse::Visual* value);

struct BringToFront : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong< ::g::Fuse::Visual*> _Target;

    void ctor_2();
    ::g::Fuse::Visual* Target();
    void Target(::g::Fuse::Visual* value);
    static BringToFront* New2();
};
// }

}}}} // ::g::Fuse::Triggers::Actions
