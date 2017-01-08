// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Motion/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.PropertyObject.h>
namespace g{namespace Fuse{namespace Motion{namespace Simulation{struct ElasticForce;}}}}
namespace g{namespace Fuse{namespace Motion{struct SpringFunction;}}}
namespace g{namespace Uno{namespace UX{struct Property;}}}

namespace g{
namespace Fuse{
namespace Motion{

// public sealed class SpringFunction :422
// {
uType* SpringFunction_typeof();
void SpringFunction__ctor_1_fn(SpringFunction* __this);
void SpringFunction__New2_fn(SpringFunction** __retval);
void SpringFunction__Simulate_fn(SpringFunction* __this);
void SpringFunction__StartSimulation_fn(SpringFunction* __this);
void SpringFunction__StopSimulation_fn(SpringFunction* __this);
void SpringFunction__get_Target_fn(SpringFunction* __this, ::g::Uno::UX::Property** __retval);
void SpringFunction__set_Target_fn(SpringFunction* __this, ::g::Uno::UX::Property* value);
void SpringFunction__get_Value_fn(SpringFunction* __this, ::g::Uno::Float4* __retval);
void SpringFunction__set_Value_fn(SpringFunction* __this, ::g::Uno::Float4* value);

struct SpringFunction : ::g::Uno::UX::PropertyObject
{
    bool _hasStartValue;
    bool _isSimulating;
    uStrong< ::g::Fuse::Motion::Simulation::ElasticForce*> _sim;
    uStrong< ::g::Uno::UX::Property*> _Target;

    void ctor_1();
    void Simulate();
    void StartSimulation();
    void StopSimulation();
    ::g::Uno::UX::Property* Target();
    void Target(::g::Uno::UX::Property* value);
    ::g::Uno::Float4 Value();
    void Value(::g::Uno::Float4 value);
    static SpringFunction* New2();
};
// }

}}} // ::g::Fuse::Motion
