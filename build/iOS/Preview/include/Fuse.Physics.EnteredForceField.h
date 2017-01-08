// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Physics/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Physics.ForceFieldEventTrigger.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Physics{struct Body;}}}
namespace g{namespace Fuse{namespace Physics{struct EnteredForceField;}}}

namespace g{
namespace Fuse{
namespace Physics{

// public sealed class EnteredForceField :447
// {
::g::Fuse::Physics::ForceFieldTrigger_type* EnteredForceField_typeof();
void EnteredForceField__ctor_6_fn(EnteredForceField* __this);
void EnteredForceField__New2_fn(EnteredForceField** __retval);
void EnteredForceField__SetForce_fn(EnteredForceField* __this, ::g::Fuse::Physics::Body* body, float* force);
void EnteredForceField__get_Threshold_fn(EnteredForceField* __this, float* __retval);
void EnteredForceField__set_Threshold_fn(EnteredForceField* __this, float* value);

struct EnteredForceField : ::g::Fuse::Physics::ForceFieldEventTrigger
{
    float _oldForce;
    float _Threshold;

    void ctor_6();
    float Threshold();
    void Threshold(float value);
    static EnteredForceField* New2();
};
// }

}}} // ::g::Fuse::Physics
