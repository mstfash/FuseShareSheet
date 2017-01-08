// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Physics/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Physics{struct WhileDragging;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Physics{

// public sealed class WhileDragging :304
// {
::g::Fuse::Triggers::Trigger_type* WhileDragging_typeof();
void WhileDragging__ctor_4_fn(WhileDragging* __this);
void WhileDragging__Begin_fn(::g::Fuse::Visual* n);
void WhileDragging__End_fn(::g::Fuse::Visual* n);
void WhileDragging__New2_fn(WhileDragging** __retval);

struct WhileDragging : ::g::Fuse::Triggers::Trigger
{
    void ctor_4();
    static void Begin(::g::Fuse::Visual* n);
    static void End(::g::Fuse::Visual* n);
    static WhileDragging* New2();
};
// }

}}} // ::g::Fuse::Physics
