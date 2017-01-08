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
namespace g{namespace Fuse{namespace Physics{struct ForceField;}}}
namespace g{namespace Fuse{namespace Physics{struct World;}}}

namespace g{
namespace Fuse{
namespace Physics{

// public abstract class ForceField :332
// {
struct ForceField_type : ::g::Fuse::Node_type
{
    ::g::Fuse::Physics::IRule interface4;
    void(*fp_OnUpdate)(::g::Fuse::Physics::ForceField*, double*, ::g::Fuse::Physics::World*);
};

ForceField_type* ForceField_typeof();
void ForceField__ctor_3_fn(ForceField* __this);
void ForceField__FusePhysicsIRuleUpdate_fn(ForceField* __this, double* deltaTime, ::g::Fuse::Physics::World* world);
void ForceField__OnRooted_fn(ForceField* __this);
void ForceField__OnUnrooted_fn(ForceField* __this);
void ForceField__get_World_fn(ForceField* __this, ::g::Fuse::Physics::World** __retval);

struct ForceField : ::g::Fuse::Behavior
{
    uStrong< ::g::Fuse::Physics::World*> _world;

    void ctor_3();
    void OnUpdate(double deltaTime, ::g::Fuse::Physics::World* world) { (((ForceField_type*)__type)->fp_OnUpdate)(this, &deltaTime, world); }
    ::g::Fuse::Physics::World* World();
};
// }

}}} // ::g::Fuse::Physics
