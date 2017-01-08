// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Physics/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.Physics.IRule.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Physics{struct Body;}}}
namespace g{namespace Fuse{namespace Physics{struct Spring;}}}
namespace g{namespace Fuse{namespace Physics{struct World;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Physics{

// public sealed class Spring :667
// {
struct Spring_type : ::g::Fuse::Node_type
{
    ::g::Fuse::Physics::IRule interface4;
};

Spring_type* Spring_typeof();
void Spring__ctor_3_fn(Spring* __this);
void Spring__FusePhysicsIRuleUpdate_fn(Spring* __this, double* deltaTime, ::g::Fuse::Physics::World* world);
void Spring__get_Length_fn(Spring* __this, float* __retval);
void Spring__set_Length_fn(Spring* __this, float* value);
void Spring__New2_fn(Spring** __retval);
void Spring__OnRooted_fn(Spring* __this);
void Spring__OnUnrooted_fn(Spring* __this);
void Spring__get_Stiffness_fn(Spring* __this, float* __retval);
void Spring__set_Stiffness_fn(Spring* __this, float* value);
void Spring__get_Target_fn(Spring* __this, ::g::Fuse::Visual** __retval);
void Spring__set_Target_fn(Spring* __this, ::g::Fuse::Visual* value);

struct Spring : ::g::Fuse::Behavior
{
    uStrong< ::g::Fuse::Physics::Body*> _body;
    float _length;
    float _stiffness;
    uStrong< ::g::Fuse::Visual*> _target;
    uStrong< ::g::Fuse::Physics::Body*> _targetBody;

    void ctor_3();
    float Length();
    void Length(float value);
    float Stiffness();
    void Stiffness(float value);
    ::g::Fuse::Visual* Target();
    void Target(::g::Fuse::Visual* value);
    static Spring* New2();
};
// }

}}} // ::g::Fuse::Physics
