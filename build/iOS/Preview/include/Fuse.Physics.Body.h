// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Physics/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float3.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Physics{struct Body;}}}
namespace g{namespace Fuse{namespace Physics{struct World;}}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Fuse{struct Translation;}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Physics{

// internal sealed class Body :9
// {
uType* Body_typeof();
void Body__ctor__fn(Body* __this, ::g::Fuse::Physics::World* world, ::g::Fuse::Visual* node);
void Body__ApplyForce_fn(Body* __this, ::g::Uno::Float3* force);
void Body__ApplyFriction_fn(Body* __this, double* deltaTime);
void Body__ApplyMotion_fn(Body* __this, double* deltaTime);
void Body__get_CenterPosition_fn(Body* __this, ::g::Uno::Float3* __retval);
void Body__ConstrainToBounds_fn(Body* __this, ::g::Fuse::Elements::Element* elm);
void Body__Dispose_fn(Body* __this);
void Body__get_Friction_fn(Body* __this, float* __retval);
void Body__set_Friction_fn(Body* __this, float* value);
void Body__GetFriction_fn(::g::Fuse::Visual* n, float* __retval);
void Body__Move_fn(Body* __this, ::g::Uno::Float3* delta);
void Body__New1_fn(::g::Fuse::Physics::World* world, ::g::Fuse::Visual* node, Body** __retval);
void Body__Pin_fn(::g::Fuse::Visual* n, Body** __retval);
void Body__SetFriction_fn(::g::Fuse::Visual* n, float* friction);
void Body__TryLockMotion_fn(Body* __this, uObject* owner, bool* __retval);
void Body__UnlockMotion_fn(Body* __this);
void Body__Unpin_fn(Body* __this);
void Body__Update_fn(Body* __this, double* deltaTime);
void Body__get_WorldPosition_fn(Body* __this, ::g::Uno::Float3* __retval);

struct Body : uObject
{
    uStrong< ::g::Fuse::Elements::Element*> _constraint;
    static uSStrong< ::g::Fuse::PropertyHandle*> _frictionHandle_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _frictionHandle() { return Body_typeof()->Init(), _frictionHandle_; }
    uStrong<uObject*> _motionOwner;
    ::g::Uno::Float3 _position;
    uStrong< ::g::Fuse::Translation*> _translation;
    ::g::Uno::Float3 _velocity;
    int PinCount;
    uStrong< ::g::Fuse::Visual*> Visual;
    uStrong< ::g::Fuse::Physics::World*> World;

    void ctor_(::g::Fuse::Physics::World* world, ::g::Fuse::Visual* node);
    void ApplyForce(::g::Uno::Float3 force);
    void ApplyFriction(double deltaTime);
    void ApplyMotion(double deltaTime);
    ::g::Uno::Float3 CenterPosition();
    void ConstrainToBounds(::g::Fuse::Elements::Element* elm);
    void Dispose();
    float Friction();
    void Friction(float value);
    void Move(::g::Uno::Float3 delta);
    bool TryLockMotion(uObject* owner);
    void UnlockMotion();
    void Unpin();
    void Update(double deltaTime);
    ::g::Uno::Float3 WorldPosition();
    static float GetFriction(::g::Fuse::Visual* n);
    static Body* New1(::g::Fuse::Physics::World* world, ::g::Fuse::Visual* node);
    static Body* Pin(::g::Fuse::Visual* n);
    static void SetFriction(::g::Fuse::Visual* n, float friction);
};
// }

}}} // ::g::Fuse::Physics
