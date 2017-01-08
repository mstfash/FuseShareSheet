// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Physics/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Physics{struct Body;}}}
namespace g{namespace Fuse{namespace Physics{struct World;}}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Physics{

// public sealed class World :763
// {
uType* World_typeof();
void World__ctor__fn(World* __this);
void World__AddRule_fn(World* __this, uObject* rule);
void World__get_Bodies_fn(World* __this, ::g::Uno::Collections::List** __retval);
void World__EndSimulation_fn(World* __this);
void World__EnsureSimulation_fn(World* __this);
void World__FindWorld_fn(::g::Fuse::Visual* n, World** __retval);
void World__GetIsPhysicsWorld_fn(::g::Fuse::Visual* n, bool* __retval);
void World__New1_fn(World** __retval);
void World__OnUpdate_fn(World* __this);
void World__PinBody_fn(World* __this, ::g::Fuse::Visual* node, ::g::Fuse::Physics::Body** __retval);
void World__RemoveRule_fn(World* __this, uObject* rule);
void World__get_Rules_fn(World* __this, uObject** __retval);
void World__SetIsPhysicsWorld_fn(::g::Fuse::Visual* n, bool* isPhysicsWorld);
void World__SetIsPhysicsWorldStyle_fn(::g::Fuse::Visual* n, bool* isPhysicsWorld);
void World__TryGetBody_fn(World* __this, ::g::Fuse::Visual* node, ::g::Fuse::Physics::Body** __retval);
void World__UnpinBody_fn(World* __this, ::g::Fuse::Physics::Body* body);

struct World : uObject
{
    uStrong< ::g::Uno::Collections::List*> _bodies;
    uStrong< ::g::Fuse::PropertyHandle*> _bodyHandle;
    bool _firstFrame;
    static uSStrong<World*> _globalWorld_;
    static uSStrong<World*>& _globalWorld() { return World_typeof()->Init(), _globalWorld_; }
    bool _isSimulating;
    uStrong< ::g::Uno::Collections::List*> _rules;
    static uSStrong< ::g::Fuse::PropertyHandle*> _worldHandle_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _worldHandle() { return World_typeof()->Init(), _worldHandle_; }

    void ctor_();
    void AddRule(uObject* rule);
    ::g::Uno::Collections::List* Bodies();
    void EndSimulation();
    void EnsureSimulation();
    void OnUpdate();
    ::g::Fuse::Physics::Body* PinBody(::g::Fuse::Visual* node);
    void RemoveRule(uObject* rule);
    uObject* Rules();
    ::g::Fuse::Physics::Body* TryGetBody(::g::Fuse::Visual* node);
    void UnpinBody(::g::Fuse::Physics::Body* body);
    static World* FindWorld(::g::Fuse::Visual* n);
    static bool GetIsPhysicsWorld(::g::Fuse::Visual* n);
    static World* New1();
    static void SetIsPhysicsWorld(::g::Fuse::Visual* n, bool isPhysicsWorld);
    static void SetIsPhysicsWorldStyle(::g::Fuse::Visual* n, bool isPhysicsWorld);
};
// }

}}} // ::g::Fuse::Physics
