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
namespace g{namespace Fuse{namespace Physics{struct InForceFieldAnimation;}}}

namespace g{
namespace Fuse{
namespace Physics{

// public sealed class InForceFieldAnimation :526
// {
::g::Fuse::Physics::ForceFieldTrigger_type* InForceFieldAnimation_typeof();
void InForceFieldAnimation__ctor_5_fn(InForceFieldAnimation* __this);
void InForceFieldAnimation__get_From_fn(InForceFieldAnimation* __this, float* __retval);
void InForceFieldAnimation__set_From_fn(InForceFieldAnimation* __this, float* value);
void InForceFieldAnimation__New2_fn(InForceFieldAnimation** __retval);
void InForceFieldAnimation__SetForce_fn(InForceFieldAnimation* __this, ::g::Fuse::Physics::Body* body, float* force);
void InForceFieldAnimation__get_To_fn(InForceFieldAnimation* __this, float* __retval);
void InForceFieldAnimation__set_To_fn(InForceFieldAnimation* __this, float* value);

struct InForceFieldAnimation : ::g::Fuse::Physics::ForceFieldTrigger
{
    float _From;
    float _To;

    void ctor_5();
    float From();
    void From(float value);
    float To();
    void To(float value);
    static InForceFieldAnimation* New2();
};
// }

}}} // ::g::Fuse::Physics
