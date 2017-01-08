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
namespace g{namespace Fuse{namespace Physics{struct ExitedForceField;}}}

namespace g{
namespace Fuse{
namespace Physics{

// public sealed class ExitedForceField :484
// {
::g::Fuse::Physics::ForceFieldTrigger_type* ExitedForceField_typeof();
void ExitedForceField__ctor_6_fn(ExitedForceField* __this);
void ExitedForceField__New2_fn(ExitedForceField** __retval);
void ExitedForceField__SetForce_fn(ExitedForceField* __this, ::g::Fuse::Physics::Body* body, float* force);
void ExitedForceField__get_Threshold_fn(ExitedForceField* __this, float* __retval);
void ExitedForceField__set_Threshold_fn(ExitedForceField* __this, float* value);

struct ExitedForceField : ::g::Fuse::Physics::ForceFieldEventTrigger
{
    float _oldForce;
    float _Threshold;

    void ctor_6();
    float Threshold();
    void Threshold(float value);
    static ExitedForceField* New2();
};
// }

}}} // ::g::Fuse::Physics
