// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/reactive/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyObject.h>
namespace g{namespace Fuse{namespace Reactive{struct DelayFunction;}}}
namespace g{namespace Uno{namespace UX{struct Property;}}}
namespace g{namespace Uno{namespace UX{struct Value;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class DelayFunction :249
// {
uType* DelayFunction_typeof();
void DelayFunction__ctor_1_fn(DelayFunction* __this);
void DelayFunction__New2_fn(DelayFunction** __retval);
void DelayFunction__get_Seconds_fn(DelayFunction* __this, double* __retval);
void DelayFunction__set_Seconds_fn(DelayFunction* __this, double* value);
void DelayFunction__get_Target_fn(DelayFunction* __this, ::g::Uno::UX::Property** __retval);
void DelayFunction__set_Target_fn(DelayFunction* __this, ::g::Uno::UX::Property* value);
void DelayFunction__get_Value_fn(DelayFunction* __this, ::g::Uno::UX::Value** __retval);
void DelayFunction__set_Value_fn(DelayFunction* __this, ::g::Uno::UX::Value* value);

struct DelayFunction : ::g::Uno::UX::PropertyObject
{
    double _seconds;
    uStrong< ::g::Uno::UX::Value*> _value;
    uStrong< ::g::Uno::UX::Property*> _Target;

    void ctor_1();
    double Seconds();
    void Seconds(double value);
    ::g::Uno::UX::Property* Target();
    void Target(::g::Uno::UX::Property* value);
    ::g::Uno::UX::Value* Value();
    void Value(::g::Uno::UX::Value* value);
    static DelayFunction* New2();
};
// }

}}} // ::g::Fuse::Reactive
